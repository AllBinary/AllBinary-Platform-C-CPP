
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

    public static CollidableDestroyableDamageableLayer getNullInstance(){

                        if(CollidableDestroyableDamageableLayer.NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    CollidableDestroyableDamageableLayer.NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER= new CollidableDestroyableDamageableLayer(BasicGroupFactory.getInstance()!.NONE_ARRAY, StringUtil.getInstance()!.EMPTY_STRING, RectangleFactory.SINGLETON, ViewPositionBase.NULL_VIEW_POSITION);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CollidableDestroyableDamageableLayer.NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER as CollidableDestroyableDamageableLayer;
    
}


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

public constructor (std::vector<Group> groupInterface, string name, Rectangle layerInfo, ViewPositionBase viewPosition){
            super(name, layerInfo, viewPosition, CollidableNeverCollideBehaviorFactory.getInstance());
                    

                            //For kotlin this is before the body of the constructor.
                    
this.initWidth= layerInfo!.getWidth();
    
this.initHeight= layerInfo!.getHeight();
    
this.groupInterface= groupInterface;
    
this.pickupBehavior= PickupBehavior.getNullInstance();
    
}


                //@Throws(Exception.constructor)
            
    public initPosition(){
this.setPosition(this.initX, this.initY, this.initZ);
    
}


                //@Throws(Exception.constructor)
            
    public initPositionXYZ(int32_t x, int32_t y, int32_t z){
this.initX= x;
    
this.initY= y;
    
this.initZ= z;
    
}


    public paint(Graphics graphics){
super.paint(graphics);
    
}


                //@Throws(Exception.constructor)
            
    public damage(int32_t damage, int32_t damageType){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    public int32_t getDamage(int32_t damageType){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    public bool isDestroyed(){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


    public std::vector<Group> getGroupInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.groupInterface;
    
}


    public setGroupInterface(std::vector<Group> teamInterface){
this.groupInterface= teamInterface;
    
}


                //@Throws(Exception.constructor)
            
    public setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){
this.allBinaryGameLayerManagerP= allBinaryGameLayerManager;
    

                        if(this.allBinaryGameLayerManagerP == 
                                    null
                                )
                        
                                    {
                                    


                            throw new RuntimeException();
                    

                                    }
                                
}


    public bool isReadyForExplosion(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.readyForExplosion;
    
}


    setReadyForExplosion(bool isReadyForExplosion){
this.readyForExplosion= isReadyForExplosion;
    
}


    public int32_t getInitWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.initWidth;
    
}


    public int32_t getInitHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.initHeight;
    
}


    public int32_t getInitX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.initX;
    
}


    public int32_t getInitY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.initY;
    
}


                //@Throws(Exception.constructor)
            
    public up(){
}


                //@Throws(Exception.constructor)
            
    public down(){
}


                //@Throws(Exception.constructor)
            
    public right(){
}


                //@Throws(Exception.constructor)
            
    public left(){
}


                //@Throws(Exception.constructor)
            
    public strafeLeft(){
}


                //@Throws(Exception.constructor)
            
    public strafeRight(){
}


                //@Throws(Exception.constructor)
            
    public fire(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent){
}


                //@Throws(Exception.constructor)
            
    public special1(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent){
}


                //@Throws(Exception.constructor)
            
    public special2(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent){
}


                //@Throws(Exception.constructor)
            
    public special3(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent){
}


                //@Throws(Exception.constructor)
            
    public special4(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent){
}


                //@Throws(Exception.constructor)
            
    public special5(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent){
}


                //@Throws(Exception.constructor)
            
    public upAnalog(int32_t yAnalogValue){
}


                //@Throws(Exception.constructor)
            
    public downAnalog(int32_t yAnalogValue){
}


                //@Throws(Exception.constructor)
            
    public rightAnalog(int32_t xAnalogValue){
}


                //@Throws(Exception.constructor)
            
    public leftAnalog(int32_t xAnalogValue){
}


                //@Throws(Exception.constructor)
            
    public rightTrigger(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent, int32_t xAnalogValue){
}


                //@Throws(Exception.constructor)
            
    public leftTrigger(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent, int32_t xAnalogValue){
}


    public onDestroyed(DestroyedEvent destroyedEvent){
}


    public PickupBehavior getPickupBehavior(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.pickupBehavior;
    
}


    public setPickupBehavior(PickupBehavior pickupBehavior){
this.pickupBehavior= pickupBehavior;
    
}


                //@Throws(Exception.constructor)
            
    public addPart(PickedUpLayerInterfaceFactoryInterface pickedUpLayerInterfaceFactoryInterface){
}


    public setPartInterfaceArray(std::vector<PartInterface> partInterfaceArray){
this.partInterfaceArrayP= partInterfaceArray;
    
}


    public std::vector<PartInterface> getPartInterfaceArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.partInterfaceArrayP;
    
}


    public toStringAppend(StringMaker stringBuffer){

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    

    positionStrings: PositionStrings = PositionStrings.getInstance()!;;
    
super.toStringAppend(stringBuffer);
    
stringBuffer!.append(commonSeps!.NEW_LINE);
    

    groupInterfaceArray: std::vector<Group> = this.getGroupInterface()!;;
    

    size: int32_t = groupInterfaceArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
stringBuffer!.append(groupInterfaceArray[index]!.toString());
    
stringBuffer!.append(commonSeps!.COMMA);
    
}


    pickupBehavior: PickupBehavior = this.getPickupBehavior()!;;
    

                        if(pickupBehavior != 
                                    null
                                )
                        
                                    {
                                    stringBuffer!.append(commonSeps!.NEW_LINE);
    
stringBuffer!.append(pickupBehavior!.toString());
    

                                    }
                                
stringBuffer!.append(commonSeps!.NEW_LINE);
    
stringBuffer!.append(CollidableDestroyableDamageableLayer.READYFOREXPLOSION);
    
stringBuffer!.appendboolean(this.readyForExplosion);
    
stringBuffer!.append(commonSeps!.NEW_LINE);
    
stringBuffer!.append(this.commonStrings!.INIT);
    
stringBuffer!.append(commonSeps!.SPACE);
    
stringBuffer!.append(positionStrings!.X_LABEL);
    
stringBuffer!.appendint(this.initX);
    
stringBuffer!.append(positionStrings!.Y_LABEL);
    
stringBuffer!.appendint(this.initX);
    
stringBuffer!.append(positionStrings!.Z_LABEL);
    
stringBuffer!.appendint(this.initZ);
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
this.toStringAppend(stringBuffer);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

