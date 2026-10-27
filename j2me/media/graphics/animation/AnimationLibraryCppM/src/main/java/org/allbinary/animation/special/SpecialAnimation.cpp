
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_SPECIAL_SPECIALANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_SPECIAL_SPECIALANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/special/SpecialAnimation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/IndexedAnimationBehavior.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/special/SpecialAnimationInterface.h"

auto SpecialAnimation::NULL_SPECIAL_ANIMATION_owner() -> SpecialAnimation* { static std::unique_ptr<SpecialAnimation> value(new SpecialAnimation(new IndexedAnimationBehavior(1, 250))); return value.get(); }
SpecialAnimation* SpecialAnimation::NULL_SPECIAL_ANIMATION = SpecialAnimation::NULL_SPECIAL_ANIMATION_owner();

    auto SpecialAnimation::getInstance() -> SpecialAnimation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SpecialAnimation::NULL_SPECIAL_ANIMATION;
    
}


SpecialAnimation::SpecialAnimation(AnimationBehavior* animationBehavior) : IndexedAnimation(animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto SpecialAnimation::nextFrame() -> void{

    IndexedAnimationBehavior* indexedAnimationBehavior = (dynamic_cast<IndexedAnimationBehavior*>(this->animationBehaviorP));;
    
indexedAnimationBehavior->loopIndex++;
    
}


    auto SpecialAnimation::setLastFrame() -> void{
}


    auto SpecialAnimation::isComplete() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto SpecialAnimation::open() -> void{
}


    auto SpecialAnimation::close() -> void{
}


    auto SpecialAnimation::process() -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_SPECIAL_SPECIALANIMATION_CPP
