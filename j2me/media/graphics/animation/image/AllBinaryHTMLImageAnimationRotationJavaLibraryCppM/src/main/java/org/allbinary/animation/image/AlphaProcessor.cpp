
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ALPHAPROCESSOR_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALPHAPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/AlphaProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/media/image/ImageModifierUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/AlphaBaseProcessor.h"


AlphaProcessor::AlphaProcessor() {
        }
        auto AlphaProcessor::instanceC_owner() -> AlphaProcessor* { static std::unique_ptr<AlphaProcessor> value(new AlphaProcessor()); return value.get(); }
AlphaProcessor* AlphaProcessor::instanceC = AlphaProcessor::instanceC_owner();

    auto AlphaProcessor::getInstance() -> AlphaProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AlphaProcessor::instanceC;
    
}


    auto AlphaProcessor::setAlpha(ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t alpha) -> void{
imageModifierUtil->setAlpha3(imageToShow, alpha);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALPHAPROCESSOR_CPP
