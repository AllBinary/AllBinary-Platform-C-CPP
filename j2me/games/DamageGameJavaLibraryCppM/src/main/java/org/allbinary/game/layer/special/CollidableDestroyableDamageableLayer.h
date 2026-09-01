
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

            #include <vector>
        
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

class CollidableDestroyableDamageableLayer: public CollidableCompositeLayer, public DestroyableInterface, public DamageableInterface, public PickupCompositeInterface, public SpecialGameInputInterface {

    public: static Object* NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER = NullUtil::getInstance().NULL_OBJECT;

    public: static CollidableDestroyableDamageableLayer getNullInstance();

    private: static const std::string READYFOREXPLOSION = "ReadyForExplosion: ";

    private: std::vector<Group> groupInterface;

    private: bool readyForExplosion= false;

    private: int32_t initWidth;

    private: int32_t initHeight;

    private: int32_t initX= 0;

    private: int32_t initY= 0;

    private: int32_t initZ= 0;

    protected: std::vector<PartInterface> partInterfaceArrayP = PartInterfaceUtil::getZeroArray();

    private: PickupBehavior pickupBehavior;

    public: AllBinaryGameLayerManager allBinaryGameLayerManagerP = AllBinaryGameLayerManager::getNullInstance();

    public: bool isDraggable = false;

    public: bool isDragged = false;

    public: bool isDropped = false;

public: CollidableDestroyableDamageableLayer(std::vector<Group> groupInterface, std::string name, Rectangle layerInfo, ViewPositionBase viewPosition);

                //@Throws(Exception.constructor)
            
    public: void initPosition();

                //@Throws(Exception.constructor)
            
    public: void initPositionXYZ(int32_t x, int32_t y, int32_t z);

    public: void paint(Graphics graphics);

                //@Throws(Exception.constructor)
            
    public: void damage(int32_t damage, int32_t damageType);

                //@Throws(Exception.constructor)
            
    public: int32_t getDamage(int32_t damageType);

                //@Throws(Exception.constructor)
            
    public: bool isDestroyed();

    public: std::vector<Group> getGroupInterface();

    public: void setGroupInterface(std::vector<Group> teamInterface);

                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager);

    public: bool isReadyForExplosion();

    protected: void setReadyForExplosion(bool isReadyForExplosion);

    public: int32_t getInitWidth();

    public: int32_t getInitHeight();

    public: int32_t getInitX();

    public: int32_t getInitY();

                //@Throws(Exception.constructor)
            
    public: void up();

                //@Throws(Exception.constructor)
            
    public: void down();

                //@Throws(Exception.constructor)
            
    public: void right();

                //@Throws(Exception.constructor)
            
    public: void left();

                //@Throws(Exception.constructor)
            
    public: void strafeLeft();

                //@Throws(Exception.constructor)
            
    public: void strafeRight();

                //@Throws(Exception.constructor)
            
    public: void fire(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public: void special1(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public: void special2(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public: void special3(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public: void special4(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public: void special5(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public: void upAnalog(int32_t yAnalogValue);

                //@Throws(Exception.constructor)
            
    public: void downAnalog(int32_t yAnalogValue);

                //@Throws(Exception.constructor)
            
    public: void rightAnalog(int32_t xAnalogValue);

                //@Throws(Exception.constructor)
            
    public: void leftAnalog(int32_t xAnalogValue);

                //@Throws(Exception.constructor)
            
    public: void rightTrigger(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent, int32_t xAnalogValue);

                //@Throws(Exception.constructor)
            
    public: void leftTrigger(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent, int32_t xAnalogValue);

    public: void onDestroyed(DestroyedEvent destroyedEvent);

    public: PickupBehavior getPickupBehavior();

    public: void setPickupBehavior(PickupBehavior pickupBehavior);

                //@Throws(Exception.constructor)
            
    public: void addPart(PickedUpLayerInterfaceFactoryInterface pickedUpLayerInterfaceFactoryInterface);

    public: void setPartInterfaceArray(std::vector<PartInterface> partInterfaceArray);

    public: std::vector<PartInterface> getPartInterfaceArray();

    public: void toStringAppend(StringMaker stringBuffer);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLEDESTROYABLEDAMAGEABLELAYER_H
