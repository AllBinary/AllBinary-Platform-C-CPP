
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_SPECIAL_SPECIALANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_SPECIAL_SPECIALANIMATION_H

#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/IndexedAnimationBehavior.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SpecialAnimationInterface.h"

class SpecialAnimation: public IndexedAnimation: public SpecialAnimationInterface {
        

    private: static const NULL_SPECIAL_ANIMATION: SpecialAnimation = new SpecialAnimation(new IndexedAnimationBehavior(1, 250));

    public static SpecialAnimation getInstance();

public constructor (AnimationBehavior animationBehavior);

    public nextFrame();

    public setLastFrame();

    public bool isComplete();

    public open();

    public close();

    public process();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_SPECIAL_SPECIALANIMATION_H
