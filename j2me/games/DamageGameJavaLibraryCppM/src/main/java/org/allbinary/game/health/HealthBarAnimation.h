
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/game/graphics/hud/BasicHudFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HealthBarAnimation: public Animation {

    private: BasicColorFactory* basicColorFactory = BasicColorFactory::getInstance();

    protected: int32_t x2= 0;

    protected: int32_t thickness= 0;

    private: int32_t location;

    protected: AllBinaryLayer* allbinaryLayer;

public: HealthBarAnimation(AllBinaryLayer* layerInterface, int32_t location);

    public: void onHealthChange(int32_t newX2);

    protected: int32_t getY();

};

            


        #endif //ORG_ALLBINARY_GAME_HEALTH_HEALTHBARANIMATION_H
