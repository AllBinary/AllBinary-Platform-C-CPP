
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_ROTATIONANIMATIONFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_ROTATIONANIMATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/RotationAnimationFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/NullRotationAnimation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/Animation.h"


    auto RotationAnimationFactory::createFactory() -> RotationAnimationFactory*{

    int16_t totalAngle = AngleFactory::getInstance()->TOTAL_ANGLE;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new RotationAnimationFactory(totalAngle, (totalAngle /GameConfigurationCentral::getInstance()->getGameControlFidelity()));
    
}


RotationAnimationFactory::RotationAnimationFactory(int16_t totalAngle, int16_t angleIncrement){
this->totalAngle= totalAngle;
    
this->angleIncrement= angleIncrement;
    
}


                //@Throws(Exception.constructor)
            
    auto RotationAnimationFactory::getInstance(int32_t instanceId) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullRotationAnimation::createTotalAngle(AngleInfo::getInstance(this->angleIncrement), this->totalAngle, AnimationBehavior::getInstance());;
    
}


                //@Throws(Exception.constructor)
            
    auto RotationAnimationFactory::getInstanceAnimation(Animation* animationInterface) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullRotationAnimation::createTotalAngle(AngleInfo::getInstance(this->angleIncrement), this->totalAngle, AnimationBehavior::getInstance());;
    
}


    auto RotationAnimationFactory::setInitialScale(ScaleProperties* scaleProperties) -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_ROTATIONANIMATIONFACTORY_CPP
