
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
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_COLLIDABLENEVERCOLLIDEBEHAVIORFACTORY_CPP
        #define ORG_ALLBINARY_GAME_COLLISION_COLLIDABLENEVERCOLLIDEBEHAVIORFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/collision/CollidableNeverCollideBehaviorFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/collision/CollidableBaseBehaviorFactory.h"
#include "org/allbinary/game/collision/CollidableNeverCollideBehavior.h"
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"


CollidableNeverCollideBehaviorFactory::CollidableNeverCollideBehaviorFactory() : instance(new CollidableNeverCollideBehavior(false)) {
        }
        auto CollidableNeverCollideBehaviorFactory::instanceC_owner() -> CollidableNeverCollideBehaviorFactory* { static std::unique_ptr<CollidableNeverCollideBehaviorFactory> value(new CollidableNeverCollideBehaviorFactory()); return value.get(); }
CollidableNeverCollideBehaviorFactory* CollidableNeverCollideBehaviorFactory::instanceC = CollidableNeverCollideBehaviorFactory::instanceC_owner();

    auto CollidableNeverCollideBehaviorFactory::getInstance() -> CollidableNeverCollideBehaviorFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CollidableNeverCollideBehaviorFactory::instanceC;
    
}


    auto CollidableNeverCollideBehaviorFactory::createBehavior() -> CollidableBaseBehavior*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->instance;
    
}




        #endif //ORG_ALLBINARY_GAME_COLLISION_COLLIDABLENEVERCOLLIDEBEHAVIORFACTORY_CPP
