
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/input/automation/ImageOutputData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/number/LongUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>

      
#include <org/allbinary/logic/visual/media/MediaDataFactory.h>

      
#include <org/allbinary/media/image/ImagePersistanceUtil.h>

      
#include <org/allbinary/media/image/ImageUtil.h>

      
#include <org/allbinary/media/image/cache/BufferedImageFrameCacheable.h>

      
#include <org/allbinary/media/image/io/ImageIOInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h"

class CapturedImageInputOutput
            : public Object
        , public ImageIOInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: void save(int64_t frame){

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    BufferedImageFrameCacheable* capturedBufferedImageCacheable = (dynamic_cast<BufferedImageFrameCacheable*>((getInstance)).get(frame)));;
    
this->logUtil->putF(("Saving: " +capturedBufferedImageCacheable->toString()), this, commonStrings->SAVE);
    
this->save(capturedBufferedImageCacheable->getBufferedImage(), frame);
    
}


    public: void save(BufferedImage* bufferedImage, int64_t frame){

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    ImageUtil* imageUtil = ImageUtil::getInstance();;
    

    StringMaker* filePathStringBuffer = new StringMaker();;
    
filePathStringBuffer->append(ImageOutputData::SAVE_PATH);
    
filePathStringBuffer->append(LongUtil::fillIn(frame.toString()));
    
filePathStringBuffer->append(MediaDataFactory::getInstance()->JPG.getExtension());
    

    std::string filePath = filePathStringBuffer->toString();;
    
this->logUtil->putF(("Image File Path: " +filePath +imageUtil->toString(bufferedImage)), this, commonStrings->SAVE);
    

    ImagePersistanceUtil* imagePersistanceUtil = ImagePersistanceUtil::getInstance();;
    
imagePersistanceUtil->saveWithImageIO(filePath, bufferedImage);
    
}


};

            

