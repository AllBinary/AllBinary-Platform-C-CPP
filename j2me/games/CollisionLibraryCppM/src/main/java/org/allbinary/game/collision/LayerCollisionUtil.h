
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/collision/CollisionProcessor.h"
#include "org/allbinary/game/collision/Collision2DProcessor.h"
#include "org/allbinary/game/collision/CollisionThreedProcessor.h"

class LayerCollisionUtil
            : public Object
         {

    private: static LayerCollisionUtil* instance() { static std::unique_ptr<LayerCollisionUtil> value(new LayerCollisionUtil()); return value.get(); }

    public: static LayerCollisionUtil* getInstance();

    private: CollisionProcessor* collisionProcessor;

private: LayerCollisionUtil();

    public: bool isCollision(AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2);

};

            


        #endif //ORG_ALLBINARY_GAME_COLLISION_LAYERCOLLISIONUTIL_H
