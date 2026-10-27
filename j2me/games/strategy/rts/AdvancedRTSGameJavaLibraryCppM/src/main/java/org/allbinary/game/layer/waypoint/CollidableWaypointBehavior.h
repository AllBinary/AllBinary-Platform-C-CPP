
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_COLLIDABLEWAYPOINTBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_COLLIDABLEWAYPOINTBEHAVIOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class CollidableCompositeLayer;
#include <org/allbinary/game/layer/CollidableRTSBehavior.h>
class CollidableInterfaceCompositeInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CollidableWaypointBehavior: public CollidableRTSBehavior {

public: CollidableWaypointBehavior(bool collidable);

    public: bool isCollision(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer);

                //@Throws(Exception.constructor)
            
    public: void collide(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer);

    public: bool isCollisionInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterface);

                //@Throws(Exception.constructor)
            
    public: void collideInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_COLLIDABLEWAYPOINTBEHAVIOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WAYPOINT_COLLIDABLEWAYPOINTBEHAVIOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_COLLIDABLEWAYPOINTBEHAVIOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/CollidableCompositeLayer.h>)
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/CollidableRTSBehavior.h>)
#include <org/allbinary/game/layer/CollidableRTSBehavior.h>
#endif
#if __has_include(<org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>)
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>
#endif

        #endif
    
