
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
        



#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/IndexedAnimationBehavior.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SpecialAnimationInterface.h"

class SpecialAnimation: public IndexedAnimation, public SpecialAnimationInterface {

    private: static const SpecialAnimation NULL_SPECIAL_ANIMATION = SpecialAnimation(IndexedAnimationBehavior(1, 250));

    public: static SpecialAnimation getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SpecialAnimation::NULL_SPECIAL_ANIMATION;
    
}


public: SpecialAnimation(AnimationBehavior animationBehavior){
            super(animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void nextFrame(){

    IndexedAnimationBehavior indexedAnimationBehavior = (this->animationBehaviorP as IndexedAnimationBehavior);;
    
indexedAnimationBehavior.loopIndex++;
    
}


    public: void setLastFrame(){
}


    public: bool isComplete(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: void open(){
}


    public: void close(){
}


    public: void process(){
}


};

            

