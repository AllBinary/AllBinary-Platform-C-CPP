
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
class IndexedAnimation;
class NullAnimationFactory;
class CollidableBaseBehavior;
class DestroyedLayerProcessor;
class WeaponProperties;
class GameConfigurationUtil;
class BasicGroupFactory;
#include <org/allbinary/game/multiplayer/layer/MultiPlayerGameLayer.h>
class RemoteInfo;
class NoScoreable;
class ScoreableInterface;
#include <org/allbinary/game/tick/TickableInterface.h>
class Rectangle;
class AllBinaryLayer;
class AllBinaryLayerManager;
class Movement;

class ViewPositionBase;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CollidableWeaponBehavior;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WeaponLayer: public MultiPlayerGameLayer, public TickableInterface {

    public: static int32_t getStaticType();

    private: Animation* animationInterface;

    /*protected*/ public: Animation* initAnimationInterface;

    private: Animation* destroyedAnimationInterface;

    private: AllBinaryLayer* sourceLayerInterface;

    /*protected*/ public: int32_t totalDamage= 0;

    private: int32_t initDamage= 0;

    private: bool destroyed = true;

    /*protected*/ public: ScoreableInterface* scoreableInterface;

    private: Movement* movement;

    private: WeaponProperties* weaponProperties;

    private: int32_t multiPlayerType;

/*protected*/ public: WeaponLayer(std::string name, RemoteInfo* remoteInfo, int32_t multiPlayerType, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition);

    private: CollidableWeaponBehavior* collidableWeaponBehavior;

    public: void setCollidableInferface(CollidableBaseBehavior* collidableInferface);

                //@Throws(Exception.constructor)
            
    public: void initXYZ(int32_t x, int32_t y, int32_t z);

                //@Throws(Exception.constructor)
            
    public: void init(AllBinaryLayer* sourceLayerInterface, int32_t angle, int32_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreable);

    /*protected*/ public: void setGroupInterfaces();

                //@Throws(Exception.constructor)
            
    public: void processTick(AllBinaryLayerManager* allBinaryLayerManager);

    public: bool isDestroyed();

    public: void damage(int32_t damage, int32_t damageType);

    /*protected*/ public: void givePoints(int32_t total);

    /*protected*/ public: bool isExhausted();

    public: int32_t getDamage(int32_t damageType);

    public: void setDestroyed(bool destroyed);

    /*protected*/ public: int32_t getInitDamage();

    /*protected*/ public: void setAnimationInterface(Animation* animationInterface);

    /*protected*/ public: Animation* getAnimationInterface();

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYER_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL.h>)
#include <javax/microedition/khronos/opengles/GL.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/IndexedAnimation.h>)
#include <org/allbinary/animation/IndexedAnimation.h>
#endif
#if __has_include(<org/allbinary/animation/NullAnimationFactory.h>)
#include <org/allbinary/animation/NullAnimationFactory.h>
#endif
#if __has_include(<org/allbinary/game/collision/CollidableBaseBehavior.h>)
#include <org/allbinary/game/collision/CollidableBaseBehavior.h>
#endif
#if __has_include(<org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h>)
#include <org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h>
#endif
#if __has_include(<org/allbinary/game/combat/weapon/WeaponProperties.h>)
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>
#endif
#if __has_include(<org/allbinary/game/configuration/GameConfigurationUtil.h>)
#include <org/allbinary/game/configuration/GameConfigurationUtil.h>
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
#if __has_include(<org/allbinary/game/score/NoScoreable.h>)
#include <org/allbinary/game/score/NoScoreable.h>
#endif
#if __has_include(<org/allbinary/game/score/ScoreableInterface.h>)
#include <org/allbinary/game/score/ScoreableInterface.h>
#endif
#if __has_include(<org/allbinary/game/tick/TickableInterface.h>)
#include <org/allbinary/game/tick/TickableInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/physics/movement/Movement.h>)
#include <org/allbinary/physics/movement/Movement.h>
#endif

#if __has_include(<org/allbinary/view/ViewPositionBase.h>)
#include <org/allbinary/view/ViewPositionBase.h>
#endif
#if __has_include("org/allbinary/game/layer/weapon/CollidableWeaponBehavior.h")
#include "org/allbinary/game/layer/weapon/CollidableWeaponBehavior.h"
#endif

        #endif
    
