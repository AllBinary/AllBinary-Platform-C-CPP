
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_IMAGE_IMAGECACHEBASE_CPP
        #define ORG_ALLBINARY_IMAGE_IMAGECACHEBASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/ImageCacheBase.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <java/io/InputStream.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/ImageFactory.h"


ImageCacheBase::ImageCacheBase() : logUtil(LogUtil::getInstance()), imageFactory(ImageFactory::getInstance()), hashtable(StdUtil::getInstance()->createHashtable()), widths(std::vector<int32_t>(this->SIZE)), heights(std::vector<int32_t>(this->SIZE)), listOfList(std::vector<BasicArrayList*>(this->SIZE)), availableListOfList(std::vector<BasicArrayList*>(this->SIZE)){




                        for (
    int32_t index = this->listOfList.size() -1;index >= 0; index--)
        {
this->listOfList[index]= new BasicArrayListD();
    
}





                        for (
    int32_t index = this->availableListOfList.size() -1;index >= 0; index--)
        {
this->availableListOfList[index]= new BasicArrayListD();
    
}

}


    auto ImageCacheBase::getImage(Object* resourceId) -> Image*{

    Object* imageCanBeNull = JavaBoxes::toObject(this->hashtable->get(resourceId));;
    

                        if(imageCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullImage::NULL_IMAGE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<Image*>(imageCanBeNull);
    
}


    auto ImageCacheBase::releaseAll() -> void{




                        for (
    int32_t index = this->listOfList.size() -1;index >= 0; index--)
        {
this->availableListOfList[index]->clear();
    
this->availableListOfList[index]->addAllList(this->listOfList[index]);
    
}

this->logUtil->putF((new StringMaker())->append("ImageCache: ")->append(this->toString())->toString(), this, "releaseAll");
    
}


    auto ImageCacheBase::getIndexWH(int32_t width, int32_t height) -> int32_t{

    int32_t foundIndex =  -1;;
    

    int32_t size = this->widths.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(this->widths[index] == width && this->heights[index] == height)
                        
                                    {
                                    foundIndex= index;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return foundIndex;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return foundIndex;
    
}


    auto ImageCacheBase::getFromAvailable(int32_t foundIndex, int32_t width, int32_t height) -> Image*{

                        if(foundIndex !=  -1)
                        
                                    {
                                    
                        if(this->availableListOfList[foundIndex]->size() > 0)
                        
                                    {
                                    
    BasicArrayList* list = this->availableListOfList[foundIndex];;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<Image*>(list->removeAt(list->size() -1));
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullImage::NULL_IMAGE;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCacheBase::get(std::string caller, int32_t width, int32_t height) -> Image*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto ImageCacheBase::getWithKey(Object* key) -> Image*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto ImageCacheBase::createImage(std::string caller, int32_t width, int32_t height) -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageFactory->createImage(caller, width, height);;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCacheBase::createImageFromInputStream(Object* key, InputStream* inputStream) -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageFactory->createImageFromInputStream(key, inputStream);;
    
}


    auto ImageCacheBase::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    




                        for (
    int32_t index = this->nextIndex -1;index >= 0; index--)
        {

    int32_t width = this->widths[index];;
    

    int32_t height = this->heights[index];;
    

    int32_t total = this->listOfList[index]->size();;
    

    int32_t totalAvailable = this->availableListOfList[index]->size();;
    
stringBuffer->append(" w: ");
    
stringBuffer->appendint(width);
    
stringBuffer->append(" h: ");
    
stringBuffer->appendint(height);
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(CommonLabels::getInstance()->TOTAL_LABEL);
    
stringBuffer->appendint(total);
    
stringBuffer->append(" available: ");
    
stringBuffer->appendint(totalAvailable);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    auto ImageCacheBase::getHashtableP() -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashtable;
    
}


    auto ImageCacheBase::init(Image* image) -> void{
}


    auto ImageCacheBase::initProgress() -> void{
}




        #endif //ORG_ALLBINARY_IMAGE_IMAGECACHEBASE_CPP
