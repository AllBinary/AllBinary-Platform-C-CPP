
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

            #include "../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Animation.h"
#include "IndexedAnimationInterface.h"
#include "AnimationBehavior.h"

class IndexedAnimation: public Animation: public IndexedAnimationInterface {
        

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const animationBehaviorP: AnimationBehavior;

protected constructor (AnimationBehavior animationBehavior);

    public AnimationBehavior getAnimationBehavior();

    public reset();

    public setFrame(int32_t index);

    public int32_t getFrame();

                //@Throws(Exception.constructor)
            
    public int32_t getAnimationSize();

    public int32_t getSize();

    public previousFrame();

    public bool isLastFrame();

    public setSequence(std::vector<int32_t> sequence);

    public std::vector<int32_t> getSequence();

    public setState(IndexedAnimation indexedAnimation);

    public int32_t getWidth();

    public int32_t getHeight();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_INDEXEDANIMATION_H
