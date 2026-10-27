
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_COLLISION2DPROCESSOR_H
        #define ORG_ALLBINARY_GAME_COLLISION_COLLISION2DPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class AllBinaryLayer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/collision/CollisionProcessor.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Collision2DProcessor: public CollisionProcessor {


            
    public: Collision2DProcessor();
        
    public: bool isCollision(AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2);

};

            


        #endif //ORG_ALLBINARY_GAME_COLLISION_COLLISION2DPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_COLLISION_COLLISION2DPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_COLLISION_COLLISION2DPROCESSOR_H_COMPLETE
        #if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include("org/allbinary/game/collision/CollisionProcessor.h")
#include "org/allbinary/game/collision/CollisionProcessor.h"
#endif

        #endif
    
