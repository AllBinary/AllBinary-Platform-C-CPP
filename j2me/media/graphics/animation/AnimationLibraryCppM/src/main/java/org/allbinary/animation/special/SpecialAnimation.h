
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/IndexedAnimationBehavior.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/special/SpecialAnimationInterface.h"

class SpecialAnimation: public IndexedAnimation, public SpecialAnimationInterface {

    private: static SpecialAnimation* NULL_SPECIAL_ANIMATION() { static std::unique_ptr<SpecialAnimation> value(new SpecialAnimation(new IndexedAnimationBehavior(1, 250))); return value.get(); }

    public: static SpecialAnimation* getInstance();

public: SpecialAnimation(AnimationBehavior* animationBehavior);

    public: void nextFrame();

    public: void setLastFrame();

    public: bool isComplete();

    public: void open();

    public: void close();

    public: void process();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_SPECIAL_SPECIALANIMATION_H
