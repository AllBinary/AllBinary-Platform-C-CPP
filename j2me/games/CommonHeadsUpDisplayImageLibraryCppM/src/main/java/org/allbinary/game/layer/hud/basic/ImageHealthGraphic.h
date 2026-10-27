
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_IMAGEHEALTHGRAPHIC_H
        #define ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_IMAGEHEALTHGRAPHIC_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class Image;
class AnimationInterface;
class HealthInterface;
class Anchor;
class ImageCacheFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/hud/basic/HealthGraphic.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageHealthGraphic: public HealthGraphic {

    private: std::vector<Image*> image;

public: ImageHealthGraphic(AnimationInterface* animationInterface, HealthInterface* healthInterface, int32_t location, int32_t direction);

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_IMAGEHEALTHGRAPHIC_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_IMAGEHEALTHGRAPHIC_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_IMAGEHEALTHGRAPHIC_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationInterface.h>)
#include <org/allbinary/animation/AnimationInterface.h>
#endif
#if __has_include(<org/allbinary/game/health/HealthInterface.h>)
#include <org/allbinary/game/health/HealthInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/Anchor.h>)
#include <org/allbinary/graphics/Anchor.h>
#endif
#if __has_include(<org/allbinary/image/ImageCacheFactory.h>)
#include <org/allbinary/image/ImageCacheFactory.h>
#endif
#if __has_include("org/allbinary/game/layer/hud/basic/HealthGraphic.h")
#include "org/allbinary/game/layer/hud/basic/HealthGraphic.h"
#endif

        #endif
    
