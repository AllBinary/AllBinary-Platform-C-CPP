
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
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_COLLISIONTYPEFACTORY_CPP
        #define ORG_ALLBINARY_GAME_COLLISION_COLLISIONTYPEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/collision/CollisionTypeFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/collision/CollisionType.h"


CollisionTypeFactory::CollisionTypeFactory() : NONE(new CollisionType("None")), DAMAGE(new CollisionType("Damage")), PICKUP(new CollisionType("Pickup")), COLLISION(new CollisionType("Collision")) {
        }
        auto CollisionTypeFactory::SINGLETON_owner() -> CollisionTypeFactory* { static std::unique_ptr<CollisionTypeFactory> value(new CollisionTypeFactory()); return value.get(); }
CollisionTypeFactory* CollisionTypeFactory::SINGLETON = CollisionTypeFactory::SINGLETON_owner();

    auto CollisionTypeFactory::getInstance() -> CollisionTypeFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CollisionTypeFactory::SINGLETON;
    
}




        #endif //ORG_ALLBINARY_GAME_COLLISION_COLLISIONTYPEFACTORY_CPP
