
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_CANVASEXPANDUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_CANVASEXPANDUTIL_H

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

class CanvasExpandUtil
            : public Object
         {

    private: static CanvasExpandUtil* instance() { static std::unique_ptr<CanvasExpandUtil> value(new CanvasExpandUtil()); return value.get(); }

    public: static CanvasExpandUtil* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: StringUtil* stringUtil = StringUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: void process(ImageProcessorInput* imageProcessorInput, int32_t increaseX, int32_t increaseY, ImageProcessedVisitor* visitor);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_CANVASEXPANDUTIL_H
