
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
        



#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CompoundAnimationInterfaceFactory.h"
#include "SimultaneousCompoundIndexedAnimation.h"

class SimultaneousCompoundIndexedAnimationInterfaceFactory: public CompoundAnimationInterfaceFactory {
        

public constructor (std::vector<AnimationInterfaceFactoryInterface> basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory animationBehaviorFactory){
            super(basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    std::vector<Animation> createArray(int32_t size){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Array(size);
    
}


    Animation createAnimation(std::vector<Animation> animationArray){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new SimultaneousCompoundIndexedAnimation(animationArray, this.animationBehaviorFactory!.getOrCreateInstance());
    
}


};

            

