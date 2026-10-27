
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLEDESTROYABLEDAMAGEABLELAYER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLEDESTROYABLEDAMAGEABLELAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"

Object* CollidableDestroyableDamageableLayer::NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER = NullUtil::getInstance()->NULL_OBJECT;

    auto CollidableDestroyableDamageableLayer::getNullInstance() -> CollidableDestroyableDamageableLayer*{

                        if(CollidableDestroyableDamageableLayer::NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    CollidableDestroyableDamageableLayer::NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER= new CollidableDestroyableDamageableLayer(BasicGroupFactory::getInstance()->NONE_ARRAY, StringUtil::getInstance()->EMPTY_STRING, RectangleFactory::SINGLETON, ViewPositionBase::NULL_VIEW_POSITION);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<CollidableDestroyableDamageableLayer*>(CollidableDestroyableDamageableLayer::NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER);
    
}


CollidableDestroyableDamageableLayer::CollidableDestroyableDamageableLayer(std::vector<Group*> groupInterface, std::string name, Rectangle* layerInfo, ViewPositionBase* viewPosition) : CollidableCompositeLayer(name, layerInfo, viewPosition, CollidableNeverCollideBehaviorFactory::getInstance()), partInterfaceArrayP(PartInterfaceUtil::getZeroArray()), allBinaryGameLayerManagerP(AllBinaryGameLayerManager::getNullInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initWidth= layerInfo->getWidth();
    
this->initHeight= layerInfo->getHeight();
    
this->groupInterface= groupInterface;
    
this->pickupBehavior= PickupBehavior::getNullInstance();
    
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::initPosition() -> void{
this->setPosition(this->initX, this->initY, this->initZ);
    
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::initPositionXYZ(int32_t x, int32_t y, int32_t z) -> void{
this->initX= x;
    
this->initY= y;
    
this->initZ= z;
    
}


    auto CollidableDestroyableDamageableLayer::paint(Graphics* graphics) -> void{
CollidableCompositeLayer::paint(graphics);
    
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::damage(int32_t damage, int32_t damageType) -> void{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::getDamage(int32_t damageType) -> int32_t{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::isDestroyed() -> bool{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


    auto CollidableDestroyableDamageableLayer::getGroupInterface() -> std::vector<Group*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->groupInterface;
    
}


    auto CollidableDestroyableDamageableLayer::setGroupInterface(std::vector<Group*> teamInterface) -> void{
this->groupInterface= teamInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager) -> void{
this->allBinaryGameLayerManagerP= allBinaryGameLayerManager;
    

                        if(this->allBinaryGameLayerManagerP == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw RuntimeException();
                    

                                    }
                                
}


    auto CollidableDestroyableDamageableLayer::isReadyForExplosion() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->readyForExplosion;
    
}


    auto CollidableDestroyableDamageableLayer::setReadyForExplosion(bool isReadyForExplosion) -> void{
this->readyForExplosion= isReadyForExplosion;
    
}


    auto CollidableDestroyableDamageableLayer::getInitWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->initWidth;
    
}


    auto CollidableDestroyableDamageableLayer::getInitHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->initHeight;
    
}


    auto CollidableDestroyableDamageableLayer::getInitX() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->initX;
    
}


    auto CollidableDestroyableDamageableLayer::getInitY() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->initY;
    
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::up() -> void{
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::down() -> void{
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::right() -> void{
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::left() -> void{
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::strafeLeft() -> void{
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::strafeRight() -> void{
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::fire(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) -> void{
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::special1(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) -> void{
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::special2(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) -> void{
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::special3(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) -> void{
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::special4(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) -> void{
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::special5(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) -> void{
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::upAnalog(int32_t yAnalogValue) -> void{
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::downAnalog(int32_t yAnalogValue) -> void{
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::rightAnalog(int32_t xAnalogValue) -> void{
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::leftAnalog(int32_t xAnalogValue) -> void{
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::rightTrigger(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent, int32_t xAnalogValue) -> void{
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::leftTrigger(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent, int32_t xAnalogValue) -> void{
}


    auto CollidableDestroyableDamageableLayer::onDestroyed(DestroyedEvent* destroyedEvent) -> void{
}


    auto CollidableDestroyableDamageableLayer::getPickupBehavior() -> PickupBehavior*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->pickupBehavior;
    
}


    auto CollidableDestroyableDamageableLayer::setPickupBehavior(PickupBehavior* pickupBehavior) -> void{
this->pickupBehavior= pickupBehavior;
    
}


                //@Throws(Exception.constructor)
            
    auto CollidableDestroyableDamageableLayer::addPart(PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface) -> void{
}


    auto CollidableDestroyableDamageableLayer::setPartInterfaceArray(std::vector<PartInterface*> partInterfaceArray) -> void{
this->partInterfaceArrayP= partInterfaceArray;
    
}


    auto CollidableDestroyableDamageableLayer::getPartInterfaceArray() -> std::vector<PartInterface*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->partInterfaceArrayP;
    
}


    auto CollidableDestroyableDamageableLayer::toStringAppend(StringMaker* stringBuffer) -> void{

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    PositionStrings* positionStrings = PositionStrings::getInstance();;
    
CollidableCompositeLayer::toStringAppend(stringBuffer);
    
stringBuffer->append(commonSeps->NEW_LINE);
    

    std::vector<Group*> groupInterfaceArray = this->getGroupInterface();;
    

    int32_t size = groupInterfaceArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
stringBuffer->append(groupInterfaceArray[index]->toString());
    
stringBuffer->append(commonSeps->COMMA);
    
}


    PickupBehavior* pickupBehavior = this->getPickupBehavior();;
    

                        if(pickupBehavior != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append(pickupBehavior->toString());
    

                                    }
                                
stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append(CollidableDestroyableDamageableLayer::READYFOREXPLOSION);
    
stringBuffer->appendboolean(this->readyForExplosion);
    
stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append(this->commonStrings->INIT);
    
stringBuffer->append(commonSeps->SPACE);
    
stringBuffer->append(positionStrings->X_LABEL);
    
stringBuffer->appendint(this->initX);
    
stringBuffer->append(positionStrings->Y_LABEL);
    
stringBuffer->appendint(this->initX);
    
stringBuffer->append(positionStrings->Z_LABEL);
    
stringBuffer->appendint(this->initZ);
    
}


    auto CollidableDestroyableDamageableLayer::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
this->toStringAppend(stringBuffer);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_SPECIAL_COLLIDABLEDESTROYABLEDAMAGEABLELAYER_CPP
