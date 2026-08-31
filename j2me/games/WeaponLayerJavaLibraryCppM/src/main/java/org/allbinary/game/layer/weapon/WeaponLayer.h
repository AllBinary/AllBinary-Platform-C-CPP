
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYER_H

            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/game/collision/CollidableBaseBehavior.h>

      
#include <org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h>

      
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>

      
#include <org/allbinary/game/configuration/GameConfigurationUtil.h>

      
#include <org/allbinary/game/identification/BasicGroupFactory.h>

      
#include <org/allbinary/game/multiplayer/layer/MultiPlayerGameLayer.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
#include <org/allbinary/game/score/NoScoreable.h>

      
#include <org/allbinary/game/score/ScoreableInterface.h>

      
#include <org/allbinary/game/tick/TickableInterface.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/physics/movement/Movement.h>

      
#include <org/allbinary/view/ViewPosition.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CollidableWeaponBehavior.h"

class WeaponLayer: public MultiPlayerGameLayer: public TickableInterface {
        

    public static int32_t getStaticType();

    private: animationInterface: Animation = NullAnimationFactory.getFactoryInstance()!.getInstance(0)!;

    initAnimationInterface: Animation;

    private: destroyedAnimationInterface: Animation;

    private: sourceLayerInterface: AllBinaryLayer = AllBinaryLayer.NULL_ALLBINARY_LAYER;

    totalDamage: int32_t= 0;

    private: initDamage: int32_t= 0;

    private: destroyed: bool = true;

    scoreableInterface: ScoreableInterface = NoScoreable.getInstance()!;

    private: movement: Movement;

    private: weaponProperties: WeaponProperties = WeaponProperties.NULL_WEAPON_PROPERTIES;

    private: const multiPlayerType: int32_t;

protected constructor (string name, RemoteInfo remoteInfo, int32_t multiPlayerType, Movement movement, Animation animationInterface, Animation destroyedAnimationInterface, Rectangle rectangle, ViewPositionBase viewPosition);

    private: collidableWeaponBehavior: CollidableWeaponBehavior = CollidableWeaponBehavior.getNullInstance()!;

    public setCollidableInferface(CollidableBaseBehavior collidableInferface);

                //@Throws(Exception.constructor)
            
    public initXYZ(int32_t x, int32_t y, int32_t z);

                //@Throws(Exception.constructor)
            
    public init(AllBinaryLayer sourceLayerInterface, int32_t angle, int32_t otherAngle, WeaponProperties weaponProperties, ScoreableInterface scoreable);

    setGroupInterfaces();

                //@Throws(Exception.constructor)
            
    public processTick(AllBinaryLayerManager allBinaryLayerManager);

    public bool isDestroyed();

    public damage(int32_t damage, int32_t damageType);

    givePoints(int32_t total);

    bool isExhausted();

    public int32_t getDamage(int32_t damageType);

    public setDestroyed(bool destroyed);

    int32_t getInitDamage();

    setAnimationInterface(Animation animationInterface);

    Animation getAnimationInterface();

    public Animation getInitAnimationInterfaceP();

    public setInitAnimationInterfaceP(Animation initAnimationInterface);

    public Animation getDestroyedAnimationInterface();

    public AllBinaryLayer getOwnerLayerInterface();

    public setOwnerLayerInterface(AllBinaryLayer sourceLayerInterface);

    public paint(Graphics graphics);

    public paintThreed(Graphics graphics);

    public Movement getMovement();

    public setMovement(Movement movement);

    public int32_t getType();

    public int32_t getMultiPlayerType();

    public setWeaponPropertiesP(WeaponProperties weaponProperties);

    public WeaponProperties getWeaponPropertiesP();

    public bool implmentsTickableInterface();

                //@Throws(Exception.constructor)
            
    public set(GL gl);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYER_H
