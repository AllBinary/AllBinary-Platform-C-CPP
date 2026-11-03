
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_CHANGECOLORPROCESSOR_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_CHANGECOLORPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/ChangeColorProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/media/image/ImageModifierUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ModifierBaseProcessor.h"


ChangeColorProcessor::ChangeColorProcessor() {
        }
        auto ChangeColorProcessor::instanceC_owner() -> ChangeColorProcessor* { static std::unique_ptr<ChangeColorProcessor> value(new ChangeColorProcessor()); return value.get(); }
ChangeColorProcessor* ChangeColorProcessor::instanceC = ChangeColorProcessor::instanceC_owner();

    auto ChangeColorProcessor::getInstance() -> ChangeColorProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ChangeColorProcessor::instanceC;
    
}


    auto ChangeColorProcessor::updateColor(ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t index, BasicColor* basicColor) -> void{
imageModifierUtil->changeColor(originalImage, imageToShow, index, basicColor);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_CHANGECOLORPROCESSOR_CPP
