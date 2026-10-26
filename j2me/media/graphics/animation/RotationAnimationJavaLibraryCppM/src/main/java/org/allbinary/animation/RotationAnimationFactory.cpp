
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnimationInterfaceFactoryInterface.h"
#include "ProceduralAnimationInterfaceFactoryInterface.h"
#include "NullRotationAnimation.h"
#include "AnimationBehavior.h"
#include "Animation.h"

class RotationAnimationFactory
            : public Object
        : public AnimationInterfaceFactoryInterface, public ProceduralAnimationInterfaceFactoryInterface {

    public: static RotationAnimationFactory createFactory(){

    int16_t totalAngle = AngleFactory::getInstance().TOTAL_ANGLE;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RotationAnimationFactory(totalAngle, (totalAngle /GameConfigurationCentral::getInstance().getGameControlFidelity()));
    
}


    private: int16_t totalAngle;

    private: int16_t angleIncrement;

public: RotationAnimationFactory(int16_t totalAngle, int16_t angleIncrement){
this->totalAngle= totalAngle;
    
this->angleIncrement= angleIncrement;
    
}


                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullRotationAnimation::createTotalAngle(AngleInfo::getInstance(this->angleIncrement), this->totalAngle, AnimationBehavior::getInstance());;
    
}


                //@Throws(Exception.constructor)
            
    public: Animation getInstanceAnimation(Animation animationInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullRotationAnimation::createTotalAngle(AngleInfo::getInstance(this->angleIncrement), this->totalAngle, AnimationBehavior::getInstance());;
    
}


    public: void setInitialScale(ScaleProperties scaleProperties){
}


};

            

