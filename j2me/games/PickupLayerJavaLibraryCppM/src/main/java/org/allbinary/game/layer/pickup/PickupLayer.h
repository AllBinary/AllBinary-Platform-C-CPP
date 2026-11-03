
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class GL;
class Graphics;
class Animation;
class NullAnimationFactory;
class CollidableAlwaysPickupNeverCollideBehaviorFactory;
class DestroyedLayerProcessor;
class BasicGroupFactory;
#include <org/allbinary/game/multiplayer/layer/MultiPlayerGameLayer.h>
class RemoteInfo;
class Rectangle;
class OpenGLSurfaceChangedInterface;
class ViewPositionBase;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/pickup/PickedUpLayerInterface.h"
#include "org/allbinary/game/layer/pickup/PickupableInterface.h"
class CountedPickedUpLayerInterfaceFactory;
class PickedUpLayerInterfaceFactoryInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PickupLayer: public MultiPlayerGameLayer, public virtual PickedUpLayerInterface, public virtual PickupableInterface {

    private: PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface;

    private: bool destroyed= false;

    private: Animation* animationInterface;

public: PickupLayer(std::string name, RemoteInfo* remoteInfo, int32_t total, PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface, Animation* animationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition);

    public: void init(PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface, Animation* animationInterface);

    public: void initXYZ(int32_t x, int32_t y, int32_t z);

    public: void paint(Graphics* graphics);

    public: void paintThreed(Graphics* graphics);

    public: PickedUpLayerInterfaceFactoryInterface* getPickedUpLayerInterfaceFactoryInterface();

    public: void setPickedUp();

    public: bool isDestroyed();

    public: void setDestroyed(bool destroyed);

    public: void damage(int32_t damage, int32_t damageType);

    public: int32_t getDamage(int32_t damageType);

                //@Throws(Exception.constructor)
            
    public: void set(GL* gl);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYER_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL.h>)
#include <javax/microedition/khronos/opengles/GL.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/NullAnimationFactory.h>)
#include <org/allbinary/animation/NullAnimationFactory.h>
#endif
#if __has_include(<org/allbinary/game/collision/CollidableAlwaysPickupNeverCollideBehaviorFactory.h>)
#include <org/allbinary/game/collision/CollidableAlwaysPickupNeverCollideBehaviorFactory.h>
#endif
#if __has_include(<org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h>)
#include <org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h>
#endif
#if __has_include(<org/allbinary/game/identification/BasicGroupFactory.h>)
#include <org/allbinary/game/identification/BasicGroupFactory.h>
#endif
#if __has_include(<org/allbinary/game/multiplayer/layer/MultiPlayerGameLayer.h>)
#include <org/allbinary/game/multiplayer/layer/MultiPlayerGameLayer.h>
#endif
#if __has_include(<org/allbinary/game/multiplayer/layer/RemoteInfo.h>)
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h>)
#include <org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h>
#endif
#if __has_include(<org/allbinary/view/ViewPositionBase.h>)
#include <org/allbinary/view/ViewPositionBase.h>
#endif
#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerInterface.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/PickupableInterface.h")
#include "org/allbinary/game/layer/pickup/PickupableInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h")
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#endif

        #endif
    
