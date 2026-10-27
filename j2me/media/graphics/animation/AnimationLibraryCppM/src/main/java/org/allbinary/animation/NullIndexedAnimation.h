
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/IndexedAnimation.h"
class AnimationBehavior;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullIndexedAnimation: public IndexedAnimation {

public: NullIndexedAnimation(AnimationBehavior* animationBehavior);

                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATION_H_COMPLETE
        #if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif
#if __has_include("org/allbinary/animation/AnimationBehavior.h")
#include "org/allbinary/animation/AnimationBehavior.h"
#endif

        #endif
    
