
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_INDEXEDANIMATIONBEHAVIORFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_INDEXEDANIMATIONBEHAVIORFACTORY_H

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnimationBehaviorFactory.h"
#include "IndexedAnimationBehavior.h"
#include "AnimationBehavior.h"

class IndexedAnimationBehaviorFactory: public AnimationBehaviorFactory {

    public: int64_t frameDelayTime;

    public: int32_t loopTotal;

public: IndexedAnimationBehaviorFactory(int32_t loopTotal, int64_t frameDelayTime);

    public: AnimationBehavior getOrCreateInstance();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_INDEXEDANIMATIONBEHAVIORFACTORY_H
