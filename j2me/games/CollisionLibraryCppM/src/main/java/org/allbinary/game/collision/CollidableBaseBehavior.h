
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
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Graphics;
class CollidableCompositeLayer;
class AllBinaryLayer;
class LogUtil;
class StringMaker;
class CommonLabels;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/collision/CollidableInterface.h"
class LayerCollisionUtil;
class CollidableInterfaceCompositeInterface;
class CollisionTypeFactory;
class CollisionType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CollidableBaseBehavior
            : public virtual Object
        , public virtual CollidableInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: LayerCollisionUtil* layerCollisionUtil;

    private: bool collidable = true;

public: CollidableBaseBehavior(bool collidable);

    public: void update();

    public: std::string getName();

    public: void setCollidable(bool collidable);

    public: bool isCollidable(CollidableCompositeLayer* ownerLayer);

                //@Throws(Exception.constructor)
            
    public: void collide(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* allbinaryCollidableLayer);

    public: bool isCollision(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer);

    public: bool isCollisionInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);

                //@Throws(Exception.constructor)
            
    public: void collideInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);

    public: void paint(CollidableCompositeLayer* ownerLayer, Graphics* graphics);

    public: CollisionType* getCollisionTypeWith(AllBinaryLayer* layerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIOR_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/layer/CollidableCompositeLayer.h>)
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/game/collision/CollidableInterface.h")
#include "org/allbinary/game/collision/CollidableInterface.h"
#endif
#if __has_include("org/allbinary/game/collision/LayerCollisionUtil.h")
#include "org/allbinary/game/collision/LayerCollisionUtil.h"
#endif
#if __has_include("org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h")
#include "org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h"
#endif
#if __has_include("org/allbinary/game/collision/CollisionTypeFactory.h")
#include "org/allbinary/game/collision/CollisionTypeFactory.h"
#endif
#if __has_include("org/allbinary/game/collision/CollisionType.h")
#include "org/allbinary/game/collision/CollisionType.h"
#endif

        #endif
    
