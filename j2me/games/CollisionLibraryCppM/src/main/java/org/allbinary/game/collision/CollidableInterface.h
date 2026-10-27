
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
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEINTERFACE_H
        #define ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class CollidableCompositeLayer;
class AllBinaryLayer;
#include <org/allbinary/layer/NamedInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CollisionType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CollidableInterface: public NamedInterface {

                //@Throws(Exception.constructor)
            
    public: virtual bool isCollidable(CollidableCompositeLayer* ownerLayer) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual bool isCollision(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void collide(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface) = 0;

    public: virtual CollisionType* getCollisionTypeWith(AllBinaryLayer* layerInterface) = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/CollidableCompositeLayer.h>)
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/NamedInterface.h>)
#include <org/allbinary/layer/NamedInterface.h>
#endif
#if __has_include("org/allbinary/game/collision/CollisionType.h")
#include "org/allbinary/game/collision/CollisionType.h"
#endif

        #endif
    
