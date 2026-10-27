
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_PAINT_ANIMATIONCOMPOSITEPAINTABLE_H
        #define ORG_ALLBINARY_GRAPHICS_PAINT_ANIMATIONCOMPOSITEPAINTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
class Animation;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/paint/InitUpdatePaintable.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AnimationCompositePaintable: public InitUpdatePaintable {

    private: Animation* animationInterface;

public: AnimationCompositePaintable(Animation* animationInterface);

    public: void paint(Graphics* graphics);

    public: void paintThreed(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_PAINT_ANIMATIONCOMPOSITEPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_PAINT_ANIMATIONCOMPOSITEPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_PAINT_ANIMATIONCOMPOSITEPAINTABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include("org/allbinary/graphics/paint/InitUpdatePaintable.h")
#include "org/allbinary/graphics/paint/InitUpdatePaintable.h"
#endif

        #endif
    
