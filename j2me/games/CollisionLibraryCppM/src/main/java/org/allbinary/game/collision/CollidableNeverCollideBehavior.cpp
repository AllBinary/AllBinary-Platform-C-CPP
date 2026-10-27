
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
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_COLLIDABLENEVERCOLLIDEBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_COLLISION_COLLIDABLENEVERCOLLIDEBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/collision/CollidableNeverCollideBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/collision/CollidableBaseBehavior.h"
#include "org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h"


CollidableNeverCollideBehavior::CollidableNeverCollideBehavior(bool isCollidable) : CollidableBaseBehavior(isCollidable){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto CollidableNeverCollideBehavior::isCollision(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* allbinaryCollidableLayer) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto CollidableNeverCollideBehavior::collide(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* allbinaryCollidableLayer) -> void{
}


    auto CollidableNeverCollideBehavior::collideInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) -> void{
}


    auto CollidableNeverCollideBehavior::isCollisionInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}




        #endif //ORG_ALLBINARY_GAME_COLLISION_COLLIDABLENEVERCOLLIDEBEHAVIOR_CPP
