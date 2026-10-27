
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
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEALWAYSPICKUPNEVERCOLLIDEBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEALWAYSPICKUPNEVERCOLLIDEBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/collision/CollidableAlwaysPickupNeverCollideBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/collision/CollidableNeverCollideBehavior.h"
#include "org/allbinary/game/collision/CollisionTypeFactory.h"
#include "org/allbinary/game/collision/CollisionType.h"


CollidableAlwaysPickupNeverCollideBehavior::CollidableAlwaysPickupNeverCollideBehavior() : CollidableNeverCollideBehavior(true){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto CollidableAlwaysPickupNeverCollideBehavior::getCollisionTypeWith(AllBinaryLayer* layerInterface) -> CollisionType*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CollisionTypeFactory::getInstance()->PICKUP;
    
}




        #endif //ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEALWAYSPICKUPNEVERCOLLIDEBEHAVIOR_CPP
