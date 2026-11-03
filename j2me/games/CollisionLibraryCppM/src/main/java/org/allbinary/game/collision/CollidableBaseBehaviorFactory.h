
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/collision/CollidableBaseBehaviorFactoryInterface.h"
class CollidableBaseBehavior;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CollidableBaseBehaviorFactory
            : public virtual Object
        , public virtual CollidableBaseBehaviorFactoryInterface {


            
    public: CollidableBaseBehaviorFactory();
        
    public: CollidableBaseBehavior* createBehavior();

};

            


        #endif //ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIORFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIORFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIORFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/game/collision/CollidableBaseBehaviorFactoryInterface.h")
#include "org/allbinary/game/collision/CollidableBaseBehaviorFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/collision/CollidableBaseBehavior.h")
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"
#endif

        #endif
    
