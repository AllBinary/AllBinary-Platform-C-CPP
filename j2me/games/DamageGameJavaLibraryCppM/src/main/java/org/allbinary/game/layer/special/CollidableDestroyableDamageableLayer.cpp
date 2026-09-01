
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

    public: static CollidableDestroyableDamageableLayer getNullInstance(){

                        if(CollidableDestroyableDamageableLayer::NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    CollidableDestroyableDamageableLayer::NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER= CollidableDestroyableDamageableLayer(BasicGroupFactory::getInstance().NONE_ARRAY, StringUtil::getInstance().EMPTY_STRING, RectangleFactory::SINGLETON, ViewPositionBase::NULL_VIEW_POSITION);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CollidableDestroyableDamageableLayer::NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER as CollidableDestroyableDamageableLayer;
    
}


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

public: CollidableDestroyableDamageableLayer(std::vector<Group> groupInterface, std::string name, Rectangle layerInfo, ViewPositionBase viewPosition){
            super(name, layerInfo, viewPosition, CollidableNeverCollideBehaviorFactory::getInstance());
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initWidth= layerInfo.getWidth();
    
this->initHeight= layerInfo.getHeight();
    
this->groupInterface= groupInterface;
    
this->pickupBehavior= PickupBehavior::getNullInstance();
    
}


                //@Throws(Exception.constructor)
            
    public: void initPosition(){
this->setPosition(this->initX, this->initY, this->initZ);
    
}


                //@Throws(Exception.constructor)
            
    public: void initPositionXYZ(int32_t x, int32_t y, int32_t z){
this->initX= x;
    
this->initY= y;
    
this->initZ= z;
    
}


    public: void paint(Graphics graphics){
super.paint(graphics);
    
}


                //@Throws(Exception.constructor)
            
    public: void damage(int32_t damage, int32_t damageType){



                            throw Exception(this->commonStrings.NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    public: int32_t getDamage(int32_t damageType){



                            throw Exception(this->commonStrings.NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    public: bool isDestroyed(){



                            throw Exception(this->commonStrings.NOT_IMPLEMENTED);
                    
}


    public: std::vector<Group> getGroupInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->groupInterface;
    
}


    public: void setGroupInterface(std::vector<Group> teamInterface){
this->groupInterface= teamInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){
this->allBinaryGameLayerManagerP= allBinaryGameLayerManager;
    

                        if(this->allBinaryGameLayerManagerP == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw RuntimeException();
                    

                                    }
                                
}


    public: bool isReadyForExplosion(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->readyForExplosion;
    
}


    protected: void setReadyForExplosion(bool isReadyForExplosion){
this->readyForExplosion= isReadyForExplosion;
    
}


    public: int32_t getInitWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->initWidth;
    
}


    public: int32_t getInitHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->initHeight;
    
}


    public: int32_t getInitX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->initX;
    
}


    public: int32_t getInitY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->initY;
    
}


                //@Throws(Exception.constructor)
            
    public: void up(){
}


                //@Throws(Exception.constructor)
            
    public: void down(){
}


                //@Throws(Exception.constructor)
            
    public: void right(){
}


                //@Throws(Exception.constructor)
            
    public: void left(){
}


                //@Throws(Exception.constructor)
            
    public: void strafeLeft(){
}


                //@Throws(Exception.constructor)
            
    public: void strafeRight(){
}


                //@Throws(Exception.constructor)
            
    public: void fire(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent){
}


                //@Throws(Exception.constructor)
            
    public: void special1(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent){
}


                //@Throws(Exception.constructor)
            
    public: void special2(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent){
}


                //@Throws(Exception.constructor)
            
    public: void special3(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent){
}


                //@Throws(Exception.constructor)
            
    public: void special4(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent){
}


                //@Throws(Exception.constructor)
            
    public: void special5(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent){
}


                //@Throws(Exception.constructor)
            
    public: void upAnalog(int32_t yAnalogValue){
}


                //@Throws(Exception.constructor)
            
    public: void downAnalog(int32_t yAnalogValue){
}


                //@Throws(Exception.constructor)
            
    public: void rightAnalog(int32_t xAnalogValue){
}


                //@Throws(Exception.constructor)
            
    public: void leftAnalog(int32_t xAnalogValue){
}


                //@Throws(Exception.constructor)
            
    public: void rightTrigger(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent, int32_t xAnalogValue){
}


                //@Throws(Exception.constructor)
            
    public: void leftTrigger(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent, int32_t xAnalogValue){
}


    public: void onDestroyed(DestroyedEvent destroyedEvent){
}


    public: PickupBehavior getPickupBehavior(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->pickupBehavior;
    
}


    public: void setPickupBehavior(PickupBehavior pickupBehavior){
this->pickupBehavior= pickupBehavior;
    
}


                //@Throws(Exception.constructor)
            
    public: void addPart(PickedUpLayerInterfaceFactoryInterface pickedUpLayerInterfaceFactoryInterface){
}


    public: void setPartInterfaceArray(std::vector<PartInterface> partInterfaceArray){
this->partInterfaceArrayP= partInterfaceArray;
    
}


    public: std::vector<PartInterface> getPartInterfaceArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->partInterfaceArrayP;
    
}


    public: void toStringAppend(StringMaker stringBuffer){

    CommonSeps commonSeps = CommonSeps::getInstance();;
    

    PositionStrings positionStrings = PositionStrings::getInstance();;
    
super.toStringAppend(stringBuffer);
    
stringBuffer.append(commonSeps.NEW_LINE);
    

    std::vector<Group> groupInterfaceArray = this->getGroupInterface();;
    

    int32_t size = groupInterfaceArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
stringBuffer.append(groupInterfaceArray[index]!.toString());
    
stringBuffer.append(commonSeps.COMMA);
    
}


    PickupBehavior pickupBehavior = this->getPickupBehavior();;
    

                        if(pickupBehavior != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer.append(commonSeps.NEW_LINE);
    
stringBuffer.append(pickupBehavior.toString());
    

                                    }
                                
stringBuffer.append(commonSeps.NEW_LINE);
    
stringBuffer.append(CollidableDestroyableDamageableLayer::READYFOREXPLOSION);
    
stringBuffer.appendboolean(this->readyForExplosion);
    
stringBuffer.append(commonSeps.NEW_LINE);
    
stringBuffer.append(this->commonStrings.INIT);
    
stringBuffer.append(commonSeps.SPACE);
    
stringBuffer.append(positionStrings.X_LABEL);
    
stringBuffer.appendint(this->initX);
    
stringBuffer.append(positionStrings.Y_LABEL);
    
stringBuffer.appendint(this->initX);
    
stringBuffer.append(positionStrings.Z_LABEL);
    
stringBuffer.appendint(this->initZ);
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
this->toStringAppend(stringBuffer);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

