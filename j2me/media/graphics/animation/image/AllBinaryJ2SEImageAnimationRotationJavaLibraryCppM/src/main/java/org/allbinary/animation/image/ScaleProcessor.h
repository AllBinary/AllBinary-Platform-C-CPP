
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SCALEPROCESSOR_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SCALEPROCESSOR_H

            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/ImageScaleUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ScaleBaseProcessor.h"

class ScaleProcessor: public ScaleBaseProcessor {
        

    private: static const instanceC: ScaleProcessor = new ScaleProcessor();

    public static ScaleBaseProcessor getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const imageScaleUtil: ImageScaleUtil = ImageScaleUtil.getInstance()!;

    public update(Image originalImage, std::vector<Image> originalImageArray, std::vector<Image> ximageToShowArray, int32_t unused, float scaleX, float scaleY, float maxScaleX, float maxScaleY);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SCALEPROCESSOR_H
