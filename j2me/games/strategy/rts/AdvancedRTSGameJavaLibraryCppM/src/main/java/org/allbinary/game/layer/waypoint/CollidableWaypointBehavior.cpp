
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_COLLIDABLEWAYPOINTBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_COLLIDABLEWAYPOINTBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/waypoint/CollidableWaypointBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/game/layer/CollidableRTSBehavior.h>

      
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CollidableWaypointBehavior::CollidableWaypointBehavior(bool collidable) : CollidableRTSBehavior(collidable){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto CollidableWaypointBehavior::isCollision(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto CollidableWaypointBehavior::collide(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer) -> void{
}


    auto CollidableWaypointBehavior::isCollisionInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterface) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto CollidableWaypointBehavior::collideInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterface) -> void{
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_COLLIDABLEWAYPOINTBEHAVIOR_CPP
