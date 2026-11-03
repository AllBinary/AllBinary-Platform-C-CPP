
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_CANVASEXPANDUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_CANVASEXPANDUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/CanvasExpandUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageUtil.h"
#include "org/allbinary/media/image/ImageProcessorInput.h"
#include "org/allbinary/media/image/ImageProcessedVisitor.h"


CanvasExpandUtil::CanvasExpandUtil() : logUtil(LogUtil::getInstance()), stringUtil(StringUtil::getInstance()) {
        }
        auto CanvasExpandUtil::instance_owner() -> CanvasExpandUtil* { static std::unique_ptr<CanvasExpandUtil> value(new CanvasExpandUtil()); return value.get(); }
CanvasExpandUtil* CanvasExpandUtil::instance = CanvasExpandUtil::instance_owner();

    auto CanvasExpandUtil::getInstance() -> CanvasExpandUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CanvasExpandUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto CanvasExpandUtil::process(ImageProcessorInput* imageProcessorInput, int32_t increaseX, int32_t increaseY, ImageProcessedVisitor* visitor) -> void{

    ImageUtil* imageUtil = ImageUtil::getInstance();;
    

    std::vector<BufferedImage*> bufferedImageArray = imageProcessorInput->getBufferedImageArray();;
    

    std::vector<BufferedImage*> subBufferedImageArray = std::vector<BufferedImage*>(bufferedImageArray.size());;
    

    int32_t size = bufferedImageArray.size();;
    

    BufferedImage* bufferedImage;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
bufferedImage= bufferedImageArray[index];
    
subBufferedImageArray[index]= imageUtil->createBufferedImage(bufferedImage, bufferedImage->getWidth() +increaseX, bufferedImage->getHeight() +increaseY, false);
    
visitor->visit(subBufferedImageArray[index], this->stringUtil->EMPTY_STRING, index);
    
}

}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_CANVASEXPANDUTIL_CPP
