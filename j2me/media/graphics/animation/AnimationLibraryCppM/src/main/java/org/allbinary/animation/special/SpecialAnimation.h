
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

#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/IndexedAnimationBehavior.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SpecialAnimationInterface.h"

class SpecialAnimation: public IndexedAnimation, public SpecialAnimationInterface {

    private: static const SpecialAnimation NULL_SPECIAL_ANIMATION = SpecialAnimation(IndexedAnimationBehavior(1, 250));

    public: static SpecialAnimation getInstance();

public: SpecialAnimation(AnimationBehavior animationBehavior);

    public: void nextFrame();

    public: void setLastFrame();

    public: bool isComplete();

    public: void open();

    public: void close();

    public: void process();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_SPECIAL_SPECIALANIMATION_H
