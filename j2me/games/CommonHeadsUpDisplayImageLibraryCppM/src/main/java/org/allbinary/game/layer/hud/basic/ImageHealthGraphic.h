
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

            #include "../../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationInterface.h>

      
#include <org/allbinary/game/health/HealthInterface.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/image/ImageCacheFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HealthGraphic.h"

class ImageHealthGraphic: public HealthGraphic {
        

    private: image: std::vector<Image>;

public constructor (AnimationInterface animationInterface, HealthInterface healthInterface, int32_t location, int32_t direction);

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_IMAGEHEALTHGRAPHIC_H
