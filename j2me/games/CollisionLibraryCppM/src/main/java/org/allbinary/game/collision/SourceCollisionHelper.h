
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
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_SOURCECOLLISIONHELPER_H
        #define ORG_ALLBINARY_GAME_COLLISION_SOURCECOLLISIONHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class CollidableCompositeLayer;
class AllBinaryLayer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/collision/CollisionHelper.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SourceCollisionHelper: public CollisionHelper {

public: SourceCollisionHelper(AllBinaryLayer* layerInterface);

    public: bool isCollidable(CollidableCompositeLayer* layerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_COLLISION_SOURCECOLLISIONHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_COLLISION_SOURCECOLLISIONHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_COLLISION_SOURCECOLLISIONHELPER_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/CollidableCompositeLayer.h>)
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include("org/allbinary/game/collision/CollisionHelper.h")
#include "org/allbinary/game/collision/CollisionHelper.h"
#endif

        #endif
    
