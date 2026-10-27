
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
        



        #ifndef ORG_ALLBINARY_GAME_HEALTH_HEALTHBARFACTORY_H
        #define ORG_ALLBINARY_GAME_HEALTH_HEALTHBARFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>

      
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/health/HealthBar.h"
#include "org/allbinary/game/health/HealthBarTwodAnimation.h"
#include "org/allbinary/game/health/Health.h"
#include "org/allbinary/game/health/HealthBarAnimationInterfaceFactory.h"

class HealthBarFactory
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: HealthBar* getInstance(AllBinaryLayer* layerInterface, Health* healthInterface, int32_t location, int32_t direction);

};

            


        #endif //ORG_ALLBINARY_GAME_HEALTH_HEALTHBARFACTORY_H
