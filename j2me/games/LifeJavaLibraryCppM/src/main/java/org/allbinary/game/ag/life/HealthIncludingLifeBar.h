
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LIFE_HEALTHINCLUDINGLIFEBAR_H
        #define ORG_ALLBINARY_GAME_AG_LIFE_HEALTHINCLUDINGLIFEBAR_H

            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/health/Health.h>

      
#include <org/allbinary/game/health/HealthBarAnimation.h>

      
#include <org/allbinary/game/health/HealthBarTwodAnimation.h>

      
#include <org/allbinary/game/health/HealthInterface.h>

      
#include <org/allbinary/game/health/HealthListenerInterface.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Life.h"

class HealthIncludingLifeBar: public Paintable: public HealthListenerInterface {
        

    private: const animationInterface: HealthBarAnimation;

    private: const life: Life;

    private: const healthInterface: HealthInterface;

    const allbinaryLayer: AllBinaryLayer;

public constructor (AllBinaryLayer layerInterface, Life life, Health healthInterface, HealthBarAnimation animationInterface, int32_t direction);

public constructor (AllBinaryLayer layerInterface, Life life, Health healthInterface, int32_t location, int32_t direction);

    public onHealthChange();

    public paint(Graphics graphics);

    public paintThreed(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LIFE_HEALTHINCLUDINGLIFEBAR_H
