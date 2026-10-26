
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
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Thread.h"
        
#include <java/io/InputStream.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/game/gd/resource/GDResources.h>

      
#include <org/allbinary/logic/ABSystemWrapper.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/system/Memory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageCacheBase.h"

class ImageCache: public ImageCacheBase {

    public: static const ImageCache NULL_IMAGE_CACHE = ImageCache();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const ABSystemWrapper systemWrapper = ABSystemWrapper::getInstance();

    private: const TsUtil tsUtil = TsUtil::getInstance();

public: ImageCache(){
}


                //@Throws(Exception.constructor)
            
    public: Image get(std::string caller, int32_t width, int32_t height){

    int32_t foundIndex = this->getIndexWH(width, height);;
    

    Image image = this->getFromAvailable(foundIndex, width, height);;
    

                        if(image == NullImage::NULL_IMAGE)
                        
                                    {
                                    this->volume += width *height;
    

                        if(this->volume > 32000)
                        
                                    {
                                    this->tsUtil.gc();
    
this->volume= 0;
    

                                    }
                                
image= this->createImage(caller, width, height);
    

                        if(foundIndex ==  -1)
                        
                                    {
                                    foundIndex= this->nextIndex;
    
this->widths[this->nextIndex]= width;
    
this->heights[this->nextIndex]= height;
    
this->nextIndex++;
    

                                    }
                                
this->listOfList[foundIndex].add(image);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    public: Image get(Object* key){

    ResourceUtil resourceUtil = ResourceUtil::getInstance();;
    

    Integer resourceId = resourceUtil.getResourceId(key);;
    

    Image image = this->getImage(resourceId);;
    

                        if(image == NullImage::NULL_IMAGE)
                        
                                    {
                                    
    InputStream inputStream = 
                null
            ;;
    

        try {
            this->logUtil.putF(Memory::getInfo(), this, this->commonStrings.GET);
    
image= this->createImage(key, inputStream);
    

                //: 
} catch(e) 
            {
this->logUtil.put("Exception: Trying Again After GC", this, this->commonStrings.GET, e);
    
this->logUtil.putF(StringMaker().append("InputStream: ").append(inputStream.toString()).toString(), this, this->commonStrings.GET);
    
this->tsUtil.gc();
    
this->tsUtil.gc();
    
this->logUtil.putF(Memory::getInfo(), this, this->commonStrings.GET);
    
Thread::sleep(100);
    
image= this->createImage(key, inputStream);
    
}

this->hashtable.put(resourceId, image);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


    public: int32_t getIndex(Object* key){

    GDResources gdResources = GDResources::getInstance();;
    

    std::vector<std::string> resourceStringArray = gdResources.resourceStringArray;;
    

    int32_t size = resourceStringArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(resourceStringArray[index] == key)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return index;
    

                                    }
                                
}

this->logUtil.putF(StringMaker().append("unable to find key: ").append(StringUtil::getInstance().toString(key)).toString(), this, this->commonStrings.RUN);
    



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    protected: Image createImage(Object* key, InputStream inputStream){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Image::createImageLater(key,  -1,  -1);;
    
}


    public: bool isLazy(){



                            throw RuntimeException();
                    
}


};

            

