
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_NULLROTATIONANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_NULLROTATIONANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class AngleFactory;
class AngleInfo;
class CircularIndexUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/RotationAnimation.h"
class AnimationBehavior;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullRotationAnimation: public RotationAnimation {

    public: static NullRotationAnimation* createTotalAngle(AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior);

    public: static NullRotationAnimation* createQuarter(AnimationBehavior* animationBehavior);

/*protected*/ public: NullRotationAnimation(AngleInfo* angleInfo, CircularIndexUtil* circularIndexUtil, AnimationBehavior* animationBehavior);

                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_NULLROTATIONANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_NULLROTATIONANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_NULLROTATIONANIMATION_H_COMPLETE
        #if __has_include(<org/allbinary/math/AngleFactory.h>)
#include <org/allbinary/math/AngleFactory.h>
#endif
#if __has_include(<org/allbinary/math/AngleInfo.h>)
#include <org/allbinary/math/AngleInfo.h>
#endif
#if __has_include(<org/allbinary/util/CircularIndexUtil.h>)
#include <org/allbinary/util/CircularIndexUtil.h>
#endif
#if __has_include("org/allbinary/animation/RotationAnimation.h")
#include "org/allbinary/animation/RotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/AnimationBehavior.h")
#include "org/allbinary/animation/AnimationBehavior.h"
#endif

        #endif
    
