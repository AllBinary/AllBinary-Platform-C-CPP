
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/weapon/CollidableWeaponBehavior.h"

class WeaponLayer: public MultiPlayerGameLayer, public TickableInterface {

    public: static int32_t getStaticType();

    private: Animation* animationInterface = NullAnimationFactory::getFactoryInstance()->getInstance(0);

    protected: Animation* initAnimationInterface;

    private: Animation* destroyedAnimationInterface;

    private: AllBinaryLayer* sourceLayerInterface = AllBinaryLayer::NULL_ALLBINARY_LAYER;

    protected: int32_t totalDamage= 0;

    private: int32_t initDamage= 0;

    private: bool destroyed = true;

    protected: ScoreableInterface* scoreableInterface = NoScoreable::getInstance();

    private: Movement* movement;

    private: WeaponProperties* weaponProperties = WeaponProperties::NULL_WEAPON_PROPERTIES;

    private: int32_t multiPlayerType;

protected: WeaponLayer(std::string name, RemoteInfo* remoteInfo, int32_t multiPlayerType, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition);

    private: CollidableWeaponBehavior* collidableWeaponBehavior = CollidableWeaponBehavior::getNullInstance();

    public: void setCollidableInferface(CollidableBaseBehavior* collidableInferface);

                //@Throws(Exception.constructor)
            
    public: void initXYZ(int32_t x, int32_t y, int32_t z);

                //@Throws(Exception.constructor)
            
    public: void init(AllBinaryLayer* sourceLayerInterface, int32_t angle, int32_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreable);

    protected: void setGroupInterfaces();

                //@Throws(Exception.constructor)
            
    public: void processTick(AllBinaryLayerManager* allBinaryLayerManager);

    public: bool isDestroyed();

    public: void damage(int32_t damage, int32_t damageType);

    protected: void givePoints(int32_t total);

    protected: bool isExhausted();

    public: int32_t getDamage(int32_t damageType);

    public: void setDestroyed(bool destroyed);

    protected: int32_t getInitDamage();

    protected: void setAnimationInterface(Animation* animationInterface);

    protected: Animation* getAnimationInterface();

    public: Animation* getInitAnimationInterfaceP();

    public: void setInitAnimationInterfaceP(Animation* initAnimationInterface);

    public: Animation* getDestroyedAnimationInterface();

    public: AllBinaryLayer* getOwnerLayerInterface();

    public: void setOwnerLayerInterface(AllBinaryLayer* sourceLayerInterface);

    public: void paint(Graphics* graphics);

    public: void paintThreed(Graphics* graphics);

    public: Movement* getMovement();

    public: void setMovement(Movement* movement);

    public: int32_t getType();

    public: int32_t getMultiPlayerType();

    public: void setWeaponPropertiesP(WeaponProperties* weaponProperties);

    public: WeaponProperties* getWeaponPropertiesP();

    public: bool implmentsTickableInterface();

                //@Throws(Exception.constructor)
            
    public: void set(GL* gl);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYER_H
