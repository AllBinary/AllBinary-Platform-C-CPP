
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
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEALWAYSPICKUPNEVERCOLLIDEBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEALWAYSPICKUPNEVERCOLLIDEBEHAVIOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class AllBinaryLayer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/collision/CollidableNeverCollideBehavior.h"
class CollisionTypeFactory;
class CollisionType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CollidableAlwaysPickupNeverCollideBehavior: public CollidableNeverCollideBehavior {

public: CollidableAlwaysPickupNeverCollideBehavior();

    public: CollisionType* getCollisionTypeWith(AllBinaryLayer* layerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEALWAYSPICKUPNEVERCOLLIDEBEHAVIOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEALWAYSPICKUPNEVERCOLLIDEBEHAVIOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEALWAYSPICKUPNEVERCOLLIDEBEHAVIOR_H_COMPLETE
        #if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include("org/allbinary/game/collision/CollidableNeverCollideBehavior.h")
#include "org/allbinary/game/collision/CollidableNeverCollideBehavior.h"
#endif
#if __has_include("org/allbinary/game/collision/CollisionTypeFactory.h")
#include "org/allbinary/game/collision/CollisionTypeFactory.h"
#endif
#if __has_include("org/allbinary/game/collision/CollisionType.h")
#include "org/allbinary/game/collision/CollisionType.h"
#endif

        #endif
    
