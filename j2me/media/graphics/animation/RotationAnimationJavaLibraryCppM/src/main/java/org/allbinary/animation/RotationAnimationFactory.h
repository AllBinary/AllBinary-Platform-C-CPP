
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_ROTATIONANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_ROTATIONANIMATIONFACTORY_H

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
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
        

    public static RotationAnimationFactory createFactory();

    private: totalAngle: int16_t;

    private: angleIncrement: int16_t;

public constructor (int16_t totalAngle, int16_t angleIncrement);

                //@Throws(Exception.constructor)
            
    public Animation getInstance(int32_t instanceId);

                //@Throws(Exception.constructor)
            
    public Animation getInstanceAnimation(Animation animationInterface);

    public setInitialScale(ScaleProperties scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_ROTATIONANIMATIONFACTORY_H
