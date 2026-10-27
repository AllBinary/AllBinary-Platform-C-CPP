
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ALPHABASEPROCESSOR_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALPHABASEPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/AlphaBaseProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/media/image/ImageModifierUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

AlphaBaseProcessor::AlphaBaseProcessor() {
        }
        auto AlphaBaseProcessor::instance_owner() -> AlphaBaseProcessor* { static std::unique_ptr<AlphaBaseProcessor> value(new AlphaBaseProcessor()); return value.get(); }
AlphaBaseProcessor* AlphaBaseProcessor::instance = AlphaBaseProcessor::instance_owner();

    auto AlphaBaseProcessor::getInstance() -> AlphaBaseProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AlphaBaseProcessor::instance;
    
}


    auto AlphaBaseProcessor::setAlpha(ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t alpha) -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALPHABASEPROCESSOR_CPP
