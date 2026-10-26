
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CollidableInterface.h"
#include "LayerCollisionUtil.h"
#include "CollidableInterfaceCompositeInterface.h"
#include "CollisionTypeFactory.h"
#include "CollisionType.h"

class CollidableBaseBehavior
            : public Object
        : public CollidableInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const LayerCollisionUtil layerCollisionUtil = LayerCollisionUtil::getInstance();

    private: bool collidable = true;

public: CollidableBaseBehavior(bool collidable);

    public: void update();

    public: std::string getName();

    public: void setCollidable(bool collidable);

    public: bool isCollidable(CollidableCompositeLayer ownerLayer);

                //@Throws(Exception.constructor)
            
    public: void collide(CollidableCompositeLayer ownerLayer, CollidableCompositeLayer allbinaryCollidableLayer);

    public: bool isCollision(CollidableCompositeLayer ownerLayer, CollidableCompositeLayer collisionLayer);

    public: bool isCollisionInterface(CollidableCompositeLayer ownerLayer, CollidableInterfaceCompositeInterface collidableInterfaceCompositeInterface);

                //@Throws(Exception.constructor)
            
    public: void collideInterface(CollidableCompositeLayer ownerLayer, CollidableInterfaceCompositeInterface collidableInterfaceCompositeInterface);

    public: void paint(CollidableCompositeLayer ownerLayer, Graphics graphics);

    public: CollisionType getCollisionTypeWith(AllBinaryLayer layerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIOR_H
