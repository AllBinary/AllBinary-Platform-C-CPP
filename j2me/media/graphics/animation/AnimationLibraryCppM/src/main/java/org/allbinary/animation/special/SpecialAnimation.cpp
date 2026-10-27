
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

    public: static SpecialAnimation* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SpecialAnimation::NULL_SPECIAL_ANIMATION();
    
}


public: SpecialAnimation(AnimationBehavior* animationBehavior) : IndexedAnimation(animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void nextFrame(){

    IndexedAnimationBehavior* indexedAnimationBehavior = (dynamic_cast<IndexedAnimationBehavior*>(this->animationBehaviorP));;
    
indexedAnimationBehavior->loopIndex++;
    
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

            

