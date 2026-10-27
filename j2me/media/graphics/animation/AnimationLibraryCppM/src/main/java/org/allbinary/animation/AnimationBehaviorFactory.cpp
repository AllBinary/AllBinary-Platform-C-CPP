
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_ANIMATIONBEHAVIORFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_ANIMATIONBEHAVIORFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/AnimationBehaviorFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/AnimationBehavior.h"


AnimationBehaviorFactory::AnimationBehaviorFactory() {
        }
        auto AnimationBehaviorFactory::instance_owner() -> AnimationBehaviorFactory* { static std::unique_ptr<AnimationBehaviorFactory> value(new AnimationBehaviorFactory()); return value.get(); }
AnimationBehaviorFactory* AnimationBehaviorFactory::instance = AnimationBehaviorFactory::instance_owner();

    auto AnimationBehaviorFactory::getInstance() -> AnimationBehaviorFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AnimationBehaviorFactory::instance;
    
}


    auto AnimationBehaviorFactory::getOrCreateInstance() -> AnimationBehavior*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AnimationBehavior::getInstance();;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_ANIMATIONBEHAVIORFACTORY_CPP
