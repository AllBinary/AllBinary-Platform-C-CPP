
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
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_COLLISIONTYPEFACTORY_H
        #define ORG_ALLBINARY_GAME_COLLISION_COLLISIONTYPEFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/collision/CollisionType.h"

class CollisionTypeFactory
            : public Object
         {

    private: static CollisionTypeFactory* SINGLETON() { static std::unique_ptr<CollisionTypeFactory> value(new CollisionTypeFactory()); return value.get(); }

    public: static CollisionTypeFactory* getInstance();

    public: CollisionType* NONE = new CollisionType("None");

    public: CollisionType* DAMAGE = new CollisionType("Damage");

    public: CollisionType* PICKUP = new CollisionType("Pickup");

    public: CollisionType* COLLISION = new CollisionType("Collision");

};

            


        #endif //ORG_ALLBINARY_GAME_COLLISION_COLLISIONTYPEFACTORY_H
