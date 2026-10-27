
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_MODIFIERBASEPROCESSOR_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_MODIFIERBASEPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/ModifierBaseProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/media/image/ImageModifierUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ModifierBaseProcessor::ModifierBaseProcessor() {
        }
        auto ModifierBaseProcessor::instance_owner() -> ModifierBaseProcessor* { static std::unique_ptr<ModifierBaseProcessor> value(new ModifierBaseProcessor()); return value.get(); }
ModifierBaseProcessor* ModifierBaseProcessor::instance = ModifierBaseProcessor::instance_owner();

    auto ModifierBaseProcessor::getInstance() -> ModifierBaseProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModifierBaseProcessor::instance;
    
}


    auto ModifierBaseProcessor::updateColor(ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t index, BasicColor* basicColor) -> void{
}


    auto ModifierBaseProcessor::updateAlpha(ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t index, int32_t alpha) -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_MODIFIERBASEPROCESSOR_CPP
