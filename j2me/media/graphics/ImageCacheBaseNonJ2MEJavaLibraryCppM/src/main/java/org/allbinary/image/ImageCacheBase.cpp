
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
        



            #include <vector>
        
            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/RuntimeException.h"
        
#include <java/io/InputStream.h>

      
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageFactory.h"

class ImageCacheBase
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const ImageFactory imageFactory = ImageFactory::getInstance();

    protected: const Hashtable<any, any> hashtable = StdUtil::getInstance().createHashtable();

    protected: const int32_t SIZE = 128;

    protected: const std::vector<int32_t> widths = new Array(this->SIZE);

    protected: const std::vector<int32_t> heights = new Array(this->SIZE);

    protected: const std::vector<BasicArrayList> listOfList = new Array(this->SIZE);

    protected: const std::vector<BasicArrayList> availableListOfList = new Array(this->SIZE);

    protected: int32_t volume = 0;

    protected: int32_t nextIndex = 0;

public: ImageCacheBase(){




                        for (
    int32_t index = this->listOfList.size() -1;index >= 0; index--)
        {
this->listOfList[index]= BasicArrayListD();
    
}





                        for (
    int32_t index = this->availableListOfList.size() -1;index >= 0; index--)
        {
this->availableListOfList[index]= BasicArrayListD();
    
}

}


    protected: Image getImage(Object* resourceId){

    Object* imageCanBeNull = this->hashtable.get(resourceId);;
    

                        if(imageCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullImage::NULL_IMAGE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return imageCanBeNull as Image;
    
}


    public: void releaseAll(){




                        for (
    int32_t index = this->listOfList.size() -1;index >= 0; index--)
        {
this->availableListOfList[index]!.clear();
    
this->availableListOfList[index]!.addAllList(this->listOfList[index]!);
    
}

this->logUtil.putF(StringMaker().append("ImageCache: ").append(this->toString()).toString(), this, "releaseAll");
    
}


    protected: int32_t getIndexWH(int32_t width, int32_t height){

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


    protected: Image getFromAvailable(int32_t foundIndex, int32_t width, int32_t height){

                        if(foundIndex !=  -1)
                        
                                    {
                                    
                        if(this->availableListOfList[foundIndex]!.size() > 0)
                        
                                    {
                                    
    BasicArrayList list = this->availableListOfList[foundIndex];;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list.removeAt(list.size() -1) as Image;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullImage::NULL_IMAGE;
    
}


                //@Throws(Exception.constructor)
            
    public: Image get(std::string caller, int32_t width, int32_t height){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: Image getWithKey(Object* key){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    protected: Image createImage(std::string caller, int32_t width, int32_t height){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageFactory.createImage(caller, width, height);;
    
}


                //@Throws(Exception.constructor)
            
    protected: Image createImageFromInputStream(Object* key, InputStream inputStream){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageFactory.createImageFromInputStream(key, inputStream);;
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    




                        for (
    int32_t index = this->nextIndex -1;index >= 0; index--)
        {

    int32_t width = this->widths[index];;
    

    int32_t height = this->heights[index];;
    

    int32_t total = this->listOfList[index]!.size();;
    

    int32_t totalAvailable = this->availableListOfList[index]!.size();;
    
stringBuffer.append(" w: ");
    
stringBuffer.appendint(width);
    
stringBuffer.append(" h: ");
    
stringBuffer.appendint(height);
    
stringBuffer.append(CommonSeps::getInstance().SPACE);
    
stringBuffer.append(CommonLabels::getInstance().TOTAL_LABEL);
    
stringBuffer.appendint(total);
    
stringBuffer.append(" available: ");
    
stringBuffer.appendint(totalAvailable);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: Hashtable<any, any> getHashtableP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashtable;
    
}


    public: void init(Image image){
}


    public: void initProgress(){
}


};

            

