
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIORFACTORY_H
        #define ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIORFACTORY_H

            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CollidableBaseBehaviorFactoryInterface.h"
#include "CollidableBaseBehavior.h"

class CollidableBaseBehaviorFactory
            : public Object
        : public CollidableBaseBehaviorFactoryInterface {

    public: CollidableBaseBehavior createBehavior();

};

            


        #endif //ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIORFACTORY_H
