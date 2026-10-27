
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
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_LAYERCOLLISIONUTIL_H
        #define ORG_ALLBINARY_GAME_COLLISION_LAYERCOLLISIONUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Features;
class GameFeatureFactory;
class OpenGLFeatureUtil;
class AllBinaryLayer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CollisionProcessor;
class Collision2DProcessor;
class CollisionThreedProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LayerCollisionUtil
            : public virtual Object
         {

    private: static LayerCollisionUtil* instance_owner();
    private: static LayerCollisionUtil* instance;

    public: static LayerCollisionUtil* getInstance();

    private: CollisionProcessor* collisionProcessor;

private: LayerCollisionUtil();

    public: bool isCollision(AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2);

};

            


        #endif //ORG_ALLBINARY_GAME_COLLISION_LAYERCOLLISIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_COLLISION_LAYERCOLLISIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_COLLISION_LAYERCOLLISIONUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GameFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>)
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include("org/allbinary/game/collision/CollisionProcessor.h")
#include "org/allbinary/game/collision/CollisionProcessor.h"
#endif
#if __has_include("org/allbinary/game/collision/Collision2DProcessor.h")
#include "org/allbinary/game/collision/Collision2DProcessor.h"
#endif
#if __has_include("org/allbinary/game/collision/CollisionThreedProcessor.h")
#include "org/allbinary/game/collision/CollisionThreedProcessor.h"
#endif

        #endif
    
