
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONANIMATIONFACTORY_H

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProceduralAnimationInterfaceFactoryInterface.h"
#include "VectorExplosionGenerator.h"
#include "AnimationBehaviorFactory.h"
#include "VectorAnimationInterface.h"
#include "VectorRotationAnimation.h"
#include "Animation.h"

class VectorExplosionAnimationFactory
            : public Object
        : public ProceduralAnimationInterfaceFactoryInterface {
        

    private: const vectorExplosionGenerator: VectorExplosionGenerator = VectorExplosionGenerator.getInstance()!;

    private: basicColor: BasicColor = BasicColorFactory.getInstance()!.WHITE;

    const animationBehaviorFactory: AnimationBehaviorFactory;

public constructor (BasicColor basicColor, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public Animation getInstanceAnimation(Animation animationInterface);

    setBasicColorP(BasicColor basicColor);

    BasicColor getBasicColorP();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONANIMATIONFACTORY_H
