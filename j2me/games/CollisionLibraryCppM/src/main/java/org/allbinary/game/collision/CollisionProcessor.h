
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_COLLISIONPROCESSOR_H
        #define ORG_ALLBINARY_GAME_COLLISION_COLLISIONPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class AllBinaryLayer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CollisionProcessor
            : public virtual Object
         {


            
    public: CollisionProcessor();
        
    public: bool isCollision(AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2);

};

            


        #endif //ORG_ALLBINARY_GAME_COLLISION_COLLISIONPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_COLLISION_COLLISIONPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_COLLISION_COLLISIONPROCESSOR_H_COMPLETE
        #if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif

        #endif
    
