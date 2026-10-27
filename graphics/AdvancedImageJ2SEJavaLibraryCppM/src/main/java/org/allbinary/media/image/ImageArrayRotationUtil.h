
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEARRAYROTATIONUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEARRAYROTATIONUTIL_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/io/IOException.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageJ2SERotationUtil.h"
#include "org/allbinary/media/image/ImageProcessorInput.h"
#include "org/allbinary/media/image/ImageProcessedVisitor.h"

class ImageArrayRotationUtil
            : public Object
         {

    private: static ImageArrayRotationUtil* instance() { static std::unique_ptr<ImageArrayRotationUtil> value(new ImageArrayRotationUtil()); return value.get(); }

    public: static ImageArrayRotationUtil* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: const std::string TOTAL_ANGLE = "totalAngle: ";

                //@Throws(IOException.constructor)
            
    public: void process(ImageProcessorInput* imageProcessorInput, std::string input, ImageProcessedVisitor* visitor);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEARRAYROTATIONUTIL_H
