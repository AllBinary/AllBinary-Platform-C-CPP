
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
        



        #ifndef ORG_ALLBINARY_GAME_HEALTH_HEALTHBARANIMATIONINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_GAME_HEALTH_HEALTHBARANIMATIONINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/health/HealthBarAnimationInterfaceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/health/HealthBarThreedAnimation.h"
#include "org/allbinary/game/health/HealthBarAnimation.h"


HealthBarAnimationInterfaceFactory::HealthBarAnimationInterfaceFactory(){
}


                //@Throws(Exception.constructor)
            
    auto HealthBarAnimationInterfaceFactory::getInstanceByLocation(AllBinaryLayer* layerInterface, int32_t location) -> HealthBarAnimation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new HealthBarThreedAnimation(layerInterface, location);
    
}


                //@Throws(Exception.constructor)
            
    auto HealthBarAnimationInterfaceFactory::getInstance(int32_t instanceId) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto HealthBarAnimationInterfaceFactory::getInstanceAnimation(Animation* animationInterface) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto HealthBarAnimationInterfaceFactory::setInitialScale(ScaleProperties* scaleProperties) -> void{
}




        #endif //ORG_ALLBINARY_GAME_HEALTH_HEALTHBARANIMATIONINTERFACEFACTORY_CPP
