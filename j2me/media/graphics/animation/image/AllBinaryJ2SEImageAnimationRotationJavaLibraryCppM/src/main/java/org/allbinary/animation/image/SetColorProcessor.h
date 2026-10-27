
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SETCOLORPROCESSOR_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SETCOLORPROCESSOR_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/media/image/ImageModifierUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ModifierBaseProcessor.h"

class SetColorProcessor: public ModifierBaseProcessor {

    private: static SetColorProcessor* instanceC() { static std::unique_ptr<SetColorProcessor> value(new SetColorProcessor()); return value.get(); }

    public: static SetColorProcessor* getInstance();

    public: void updateColor(ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t index, BasicColor* basicColor);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SETCOLORPROCESSOR_H
