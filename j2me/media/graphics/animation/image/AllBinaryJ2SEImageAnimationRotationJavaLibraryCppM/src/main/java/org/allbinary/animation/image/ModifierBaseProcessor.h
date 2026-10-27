
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_MODIFIERBASEPROCESSOR_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_MODIFIERBASEPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Image;
class BasicColor;
class ImageModifierUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ModifierBaseProcessor
            : public virtual Object
         {

    private: static ModifierBaseProcessor* instance_owner();
    private: static ModifierBaseProcessor* instance;

    public: static ModifierBaseProcessor* getInstance();


            
    public: ModifierBaseProcessor();
        
    public: void updateColor(ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t index, BasicColor* basicColor);

    public: void updateAlpha(ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t index, int32_t alpha);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_MODIFIERBASEPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_MODIFIERBASEPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_MODIFIERBASEPROCESSOR_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageModifierUtil.h>)
#include <org/allbinary/media/image/ImageModifierUtil.h>
#endif

        #endif
    
