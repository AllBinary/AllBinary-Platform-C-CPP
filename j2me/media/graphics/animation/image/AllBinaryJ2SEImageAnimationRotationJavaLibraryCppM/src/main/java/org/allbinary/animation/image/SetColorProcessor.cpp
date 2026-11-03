
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SETCOLORPROCESSOR_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SETCOLORPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/SetColorProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/media/image/ImageModifierUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ModifierBaseProcessor.h"


SetColorProcessor::SetColorProcessor() {
        }
        auto SetColorProcessor::instanceC_owner() -> SetColorProcessor* { static std::unique_ptr<SetColorProcessor> value(new SetColorProcessor()); return value.get(); }
SetColorProcessor* SetColorProcessor::instanceC = SetColorProcessor::instanceC_owner();

    auto SetColorProcessor::getInstance() -> SetColorProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SetColorProcessor::instanceC;
    
}


    auto SetColorProcessor::updateColor(ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t index, BasicColor* basicColor) -> void{
imageModifierUtil->setColor(originalImage, imageToShow, index, basicColor);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SETCOLORPROCESSOR_CPP
