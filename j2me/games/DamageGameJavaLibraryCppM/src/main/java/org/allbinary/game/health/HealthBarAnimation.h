
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
        



        #ifndef ORG_ALLBINARY_GAME_HEALTH_HEALTHBARANIMATION_H
        #define ORG_ALLBINARY_GAME_HEALTH_HEALTHBARANIMATION_H

            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/game/graphics/hud/BasicHudFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HealthBarAnimation: public Animation {
        

    private: const basicColorFactory: BasicColorFactory = BasicColorFactory.getInstance()!;

    x2: int32_t= 0;

    thickness: int32_t= 0;

    private: location: int32_t;

    allbinaryLayer: AllBinaryLayer;

public constructor (AllBinaryLayer layerInterface, int32_t location);

    public onHealthChange(int32_t newX2);

    int32_t getY();

};

            


        #endif //ORG_ALLBINARY_GAME_HEALTH_HEALTHBARANIMATION_H
