
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/io/IOException.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageJ2SERotationUtil.h"
#include "ImageProcessorInput.h"
#include "ImageProcessedVisitor.h"

class ImageArrayRotationUtil
            : public Object
         {
        

    private: static const instance: ImageArrayRotationUtil = new ImageArrayRotationUtil();

    public static ImageArrayRotationUtil getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const TOTAL_ANGLE: string = "totalAngle: ";

                //@Throws(IOException.constructor)
            
    public process(ImageProcessorInput imageProcessorInput, string input, ImageProcessedVisitor visitor);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEARRAYROTATIONUTIL_H
