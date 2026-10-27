
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/IndexedAnimationInterface.h"
#include "org/allbinary/animation/AnimationBehavior.h"

class IndexedAnimation: public Animation, public IndexedAnimationInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    protected: AnimationBehavior* animationBehaviorP;

protected: IndexedAnimation(AnimationBehavior* animationBehavior);

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
