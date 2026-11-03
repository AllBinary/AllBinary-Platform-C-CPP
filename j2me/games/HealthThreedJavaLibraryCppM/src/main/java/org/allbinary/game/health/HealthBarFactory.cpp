
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
        



        #ifndef ORG_ALLBINARY_GAME_HEALTH_HEALTHBARFACTORY_CPP
        #define ORG_ALLBINARY_GAME_HEALTH_HEALTHBARFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/health/HealthBarFactory.h"
        

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


HealthBarFactory::HealthBarFactory() {
        }
        
                //@Throws(Exception.constructor)
            
    auto HealthBarFactory::getInstance(AllBinaryLayer* layerInterface, Health* healthInterface, int32_t location, int32_t direction) -> HealthBar*{

                        if(OpenGLFeatureUtil::getInstance()->isAnyThreed())
                        
                                    {
                                    
    FeaturedAnimationInterfaceFactoryInterfaceFactory* featuredAnimationInterfaceFactoryInterfaceFactory = FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance();;
    

    HealthBarAnimationInterfaceFactory* healthBarAnimationInterfaceFactory = dynamic_cast<HealthBarAnimationInterfaceFactory*>(featuredAnimationInterfaceFactoryInterfaceFactory->get(Health::NAME));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new HealthBar(layerInterface, healthInterface, healthBarAnimationInterfaceFactory->getInstanceByLocation(layerInterface, location), direction);
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new HealthBar(layerInterface, healthInterface, new HealthBarTwodAnimation(layerInterface, location), direction);
    

                        }
                            
}




        #endif //ORG_ALLBINARY_GAME_HEALTH_HEALTHBARFACTORY_CPP
