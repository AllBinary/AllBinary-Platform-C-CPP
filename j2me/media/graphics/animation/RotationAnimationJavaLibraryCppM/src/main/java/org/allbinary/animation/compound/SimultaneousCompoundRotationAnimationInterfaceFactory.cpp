
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
        



            #include <vector>
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CompoundAnimationInterfaceFactory.h"
#include "SimultaneousCompoundRotationAnimation.h"

class SimultaneousCompoundRotationAnimationInterfaceFactory: public CompoundAnimationInterfaceFactory {

public: SimultaneousCompoundRotationAnimationInterfaceFactory(std::vector<AnimationInterfaceFactoryInterface> basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory animationBehaviorFactory){
            super(basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(animationBehaviorFactory == AnimationBehaviorFactory::getInstance())
                        
                                    {
                                    ForcedLogUtil::log("Using default AnimationBehaviorFactory with IndexedAnimationFactory", this);
    

                                    }
                                
}


    protected: std::vector<Animation> createArray(int32_t size){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Array(size);
    
}


    protected: Animation createAnimation(std::vector<Animation> animationInterfaceArray){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimultaneousCompoundRotationAnimation(animationInterfaceArray as RotationAnimation[], this->animationBehaviorFactory.getOrCreateInstance());
    
}


};

            

