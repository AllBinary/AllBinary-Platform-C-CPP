
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYER_H

            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/game/collision/CollidableAlwaysPickupNeverCollideBehaviorFactory.h>

      
#include <org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h>

      
#include <org/allbinary/game/identification/BasicGroupFactory.h>

      
#include <org/allbinary/game/multiplayer/layer/MultiPlayerGameLayer.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PickedUpLayerInterface.h"
#include "PickupableInterface.h"
#include "CountedPickedUpLayerInterfaceFactory.h"
#include "PickedUpLayerInterfaceFactoryInterface.h"

class PickupLayer: public MultiPlayerGameLayer, public PickedUpLayerInterface, public PickupableInterface {

    private: PickedUpLayerInterfaceFactoryInterface pickedUpLayerInterfaceFactoryInterface = CountedPickedUpLayerInterfaceFactory::NULL_COUNTED_PICKUP_LAYER_FACTORY;

    private: bool destroyed= false;

    private: Animation animationInterface = NullAnimationFactory::getFactoryInstance().getInstance(0);

public: PickupLayer(std::string name, RemoteInfo remoteInfo, int32_t total, PickedUpLayerInterfaceFactoryInterface pickedUpLayerInterfaceFactoryInterface, Animation animationInterface, Rectangle rectangle, ViewPositionBase viewPosition);

    public: void init(PickedUpLayerInterfaceFactoryInterface pickedUpLayerInterfaceFactoryInterface, Animation animationInterface);

    public: void initXYZ(int32_t x, int32_t y, int32_t z);

    public: void paint(Graphics graphics);

    public: void paintThreed(Graphics graphics);

    public: PickedUpLayerInterfaceFactoryInterface getPickedUpLayerInterfaceFactoryInterface();

    public: void setPickedUp();

    public: bool isDestroyed();

    public: void setDestroyed(bool destroyed);

    public: void damage(int32_t damage, int32_t damageType);

    public: int32_t getDamage(int32_t damageType);

                //@Throws(Exception.constructor)
            
    public: void set(GL gl);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYER_H
