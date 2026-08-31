
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLEDESTROYABLEDAMAGEABLELAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLEDESTROYABLEDAMAGEABLELAYER_H

            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/RuntimeException.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/collision/CollidableNeverCollideBehaviorFactory.h>

      
#include <org/allbinary/game/combat/damage/DamageableInterface.h>

      
#include <org/allbinary/game/combat/destroy/DestroyableInterface.h>

      
#include <org/allbinary/game/combat/destroy/event/DestroyedEvent.h>

      
#include <org/allbinary/game/identification/BasicGroupFactory.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/layer/pickup/PickupBehavior.h>

      
#include <org/allbinary/game/layer/pickup/PickupCompositeInterface.h>

      
#include <org/allbinary/game/part/PartInterface.h>

      
#include <org/allbinary/game/part/PartInterfaceUtil.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/RectangleFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SpecialGameInputInterface.h"

class CollidableDestroyableDamageableLayer: public CollidableCompositeLayer: public DestroyableInterface, public DamageableInterface, public PickupCompositeInterface, public SpecialGameInputInterface {
        

    public static NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static CollidableDestroyableDamageableLayer getNullInstance();

    private: static const READYFOREXPLOSION: string = "ReadyForExplosion: ";

    private: groupInterface: std::vector<Group>;

    private: readyForExplosion: bool= false;

    private: initWidth: int32_t;

    private: initHeight: int32_t;

    private: initX: int32_t= 0;

    private: initY: int32_t= 0;

    private: initZ: int32_t= 0;

    partInterfaceArrayP: std::vector<PartInterface> = PartInterfaceUtil.getZeroArray()!;

    private: pickupBehavior: PickupBehavior;

    public allBinaryGameLayerManagerP: AllBinaryGameLayerManager = AllBinaryGameLayerManager.getNullInstance()!;

    public isDraggable: bool = false;

    public isDragged: bool = false;

    public isDropped: bool = false;

public constructor (std::vector<Group> groupInterface, string name, Rectangle layerInfo, ViewPositionBase viewPosition);

                //@Throws(Exception.constructor)
            
    public initPosition();

                //@Throws(Exception.constructor)
            
    public initPositionXYZ(int32_t x, int32_t y, int32_t z);

    public paint(Graphics graphics);

                //@Throws(Exception.constructor)
            
    public damage(int32_t damage, int32_t damageType);

                //@Throws(Exception.constructor)
            
    public int32_t getDamage(int32_t damageType);

                //@Throws(Exception.constructor)
            
    public bool isDestroyed();

    public std::vector<Group> getGroupInterface();

    public setGroupInterface(std::vector<Group> teamInterface);

                //@Throws(Exception.constructor)
            
    public setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager);

    public bool isReadyForExplosion();

    setReadyForExplosion(bool isReadyForExplosion);

    public int32_t getInitWidth();

    public int32_t getInitHeight();

    public int32_t getInitX();

    public int32_t getInitY();

                //@Throws(Exception.constructor)
            
    public up();

                //@Throws(Exception.constructor)
            
    public down();

                //@Throws(Exception.constructor)
            
    public right();

                //@Throws(Exception.constructor)
            
    public left();

                //@Throws(Exception.constructor)
            
    public strafeLeft();

                //@Throws(Exception.constructor)
            
    public strafeRight();

                //@Throws(Exception.constructor)
            
    public fire(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public special1(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public special2(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public special3(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public special4(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public special5(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public upAnalog(int32_t yAnalogValue);

                //@Throws(Exception.constructor)
            
    public downAnalog(int32_t yAnalogValue);

                //@Throws(Exception.constructor)
            
    public rightAnalog(int32_t xAnalogValue);

                //@Throws(Exception.constructor)
            
    public leftAnalog(int32_t xAnalogValue);

                //@Throws(Exception.constructor)
            
    public rightTrigger(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent, int32_t xAnalogValue);

                //@Throws(Exception.constructor)
            
    public leftTrigger(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent, int32_t xAnalogValue);

    public onDestroyed(DestroyedEvent destroyedEvent);

    public PickupBehavior getPickupBehavior();

    public setPickupBehavior(PickupBehavior pickupBehavior);

                //@Throws(Exception.constructor)
            
    public addPart(PickedUpLayerInterfaceFactoryInterface pickedUpLayerInterfaceFactoryInterface);

    public setPartInterfaceArray(std::vector<PartInterface> partInterfaceArray);

    public std::vector<PartInterface> getPartInterfaceArray();

    public toStringAppend(StringMaker stringBuffer);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLEDESTROYABLEDAMAGEABLELAYER_H
