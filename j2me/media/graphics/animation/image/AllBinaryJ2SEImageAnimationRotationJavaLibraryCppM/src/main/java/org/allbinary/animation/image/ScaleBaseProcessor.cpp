
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SCALEBASEPROCESSOR_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SCALEBASEPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/ScaleBaseProcessor.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ScaleBaseProcessor::ScaleBaseProcessor() {
        }
        auto ScaleBaseProcessor::instance_owner() -> ScaleBaseProcessor* { static std::unique_ptr<ScaleBaseProcessor> value(new ScaleBaseProcessor()); return value.get(); }
ScaleBaseProcessor* ScaleBaseProcessor::instance = ScaleBaseProcessor::instance_owner();

    auto ScaleBaseProcessor::getInstance() -> ScaleBaseProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ScaleBaseProcessor::instance;
    
}


    auto ScaleBaseProcessor::update(Image* originalImage, std::vector<Image*> originalImageArray, std::vector<Image*> imageToShowArray, int32_t index, float scaleX, float scaleY, float maxScaleX, float maxScaleY) -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SCALEBASEPROCESSOR_CPP
