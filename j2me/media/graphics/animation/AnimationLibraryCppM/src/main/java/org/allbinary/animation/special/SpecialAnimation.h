
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class AnimationBehavior;
#include <org/allbinary/animation/IndexedAnimation.h>
class IndexedAnimationBehavior;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/special/SpecialAnimationInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SpecialAnimation: public IndexedAnimation, public virtual SpecialAnimationInterface {

    private: static SpecialAnimation* NULL_SPECIAL_ANIMATION_owner();
    private: static SpecialAnimation* NULL_SPECIAL_ANIMATION;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_SPECIAL_SPECIALANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_SPECIAL_SPECIALANIMATION_H_COMPLETE
        #if __has_include(<org/allbinary/animation/AnimationBehavior.h>)
#include <org/allbinary/animation/AnimationBehavior.h>
#endif
#if __has_include(<org/allbinary/animation/IndexedAnimation.h>)
#include <org/allbinary/animation/IndexedAnimation.h>
#endif
#if __has_include(<org/allbinary/animation/IndexedAnimationBehavior.h>)
#include <org/allbinary/animation/IndexedAnimationBehavior.h>
#endif
#if __has_include("org/allbinary/animation/special/SpecialAnimationInterface.h")
#include "org/allbinary/animation/special/SpecialAnimationInterface.h"
#endif

        #endif
    
