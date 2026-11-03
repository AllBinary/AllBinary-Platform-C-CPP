
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_INDEXEDANIMATIONBEHAVIORFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_INDEXEDANIMATIONBEHAVIORFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/IndexedAnimationBehaviorFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/IndexedAnimationBehavior.h"
#include "org/allbinary/animation/AnimationBehavior.h"


IndexedAnimationBehaviorFactory::IndexedAnimationBehaviorFactory(int32_t loopTotal, int64_t frameDelayTime){
this->loopTotal= loopTotal;
    
this->frameDelayTime= frameDelayTime;
    
}


    auto IndexedAnimationBehaviorFactory::getOrCreateInstance() -> AnimationBehavior*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new IndexedAnimationBehavior(this->loopTotal, this->frameDelayTime);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_INDEXEDANIMATIONBEHAVIORFACTORY_CPP
