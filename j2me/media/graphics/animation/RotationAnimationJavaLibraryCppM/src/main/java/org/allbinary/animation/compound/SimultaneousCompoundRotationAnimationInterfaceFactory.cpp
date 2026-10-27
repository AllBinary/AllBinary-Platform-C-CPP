
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDROTATIONANIMATIONINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDROTATIONANIMATIONINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/compound/SimultaneousCompoundRotationAnimationInterfaceFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/compound/CompoundAnimationInterfaceFactory.h"
#include "org/allbinary/animation/compound/SimultaneousCompoundRotationAnimation.h"


SimultaneousCompoundRotationAnimationInterfaceFactory::SimultaneousCompoundRotationAnimationInterfaceFactory(std::vector<AnimationInterfaceFactoryInterface*> basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) : CompoundAnimationInterfaceFactory(basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(animationBehaviorFactory == AnimationBehaviorFactory::getInstance())
                        
                                    {
                                    ForcedLogUtil::log("Using default AnimationBehaviorFactory with IndexedAnimationFactory", this);
    

                                    }
                                
}


    auto SimultaneousCompoundRotationAnimationInterfaceFactory::createArray(int32_t size) -> std::vector<Animation*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return std::vector<RotationAnimation*>(size);
    
}


    auto SimultaneousCompoundRotationAnimationInterfaceFactory::createAnimation(std::vector<Animation*> animationInterfaceArray) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new SimultaneousCompoundRotationAnimation(animationInterfaceArray as RotationAnimation[], this->animationBehaviorFactory->getOrCreateInstance());
    
}




        #endif //ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDROTATIONANIMATIONINTERFACEFACTORY_CPP
