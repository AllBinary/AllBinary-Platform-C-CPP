
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_INDEXEDANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_INDEXEDANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class LogUtil;
class PrimitiveIntUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/IndexedAnimationInterface.h"
class AnimationBehavior;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class IndexedAnimation: public Animation, public IndexedAnimationInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: AnimationBehavior* animationBehaviorP;

/*protected*/ public: IndexedAnimation(AnimationBehavior* animationBehavior);

    public: AnimationBehavior* getAnimationBehavior();

    public: void reset();

    public: void setFrame(int32_t index);

    public: int32_t getFrame();

                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize();

    public: int32_t getSize();

    public: void previousFrame();

    public: bool isLastFrame();

    public: void setSequence(std::vector<int32_t> sequence);

    public: std::vector<int32_t> getSequence();

    public: void setState(IndexedAnimation* indexedAnimation);

    public: int32_t getWidth();

    public: int32_t getHeight();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_INDEXEDANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_INDEXEDANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_INDEXEDANIMATION_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/PrimitiveIntUtil.h>)
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#if __has_include("org/allbinary/animation/IndexedAnimationInterface.h")
#include "org/allbinary/animation/IndexedAnimationInterface.h"
#endif
#if __has_include("org/allbinary/animation/AnimationBehavior.h")
#include "org/allbinary/animation/AnimationBehavior.h"
#endif

        #endif
    
