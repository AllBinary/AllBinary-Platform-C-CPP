
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/input/form/RTSFormInput.h>

      
#include <org/allbinary/game/layer/MultiSelectPaintable.h>

      
#include <org/allbinary/game/layer/RTSGameStrings.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/RTSLayerInfoPaintable.h>

      
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/state/GameStateFactory.h>

      
#include <org/allbinary/input/motion/button/EndLevelNoBuildingSelectedTouchButtonsBuilder.h>

      
#include <org/allbinary/input/motion/button/EndLevelTouchButtonsBuilder.h>

      
#include <org/allbinary/input/motion/button/NoBuildingSelectedTouchButtonsBuilder.h>

      
#include <org/allbinary/input/motion/button/RTSTouchButtonsBuilder.h>

      
#include <org/allbinary/media/audio/SelectBuildingSound.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/graphics/paint/NullInitUpdatePaintable.h>

      
#include <org/allbinary/input/motion/button/TouchButtonsBuilderFactory.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h>

      
#include <org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/math/RectangleCollisionUtil.h>

      
#include <org/allbinary/media/audio/ErrorSound.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RTSPlayerGameInput.h"
#include "LayerPositionFinderInterface.h"
#include "SelectRTSLayerVisitorFactoryInterface.h"

class HumanRTSPlayerGameInput: public RTSPlayerGameInput: public BaseMotionGestureEventListener {
        

    private: isDragging: bool = false;

    const gameStateFactory: GameStateFactory = GameStateFactory.getInstance()!;

    private: const rectangleCollisionUtil: RectangleCollisionUtil = RectangleCollisionUtil.getInstance()!;

    private: const touchMotionGestureFactory: TouchMotionGestureFactory = TouchMotionGestureFactory.getInstance()!;

    private: const PRESSED: MotionGestureInput = this.touchMotionGestureFactory!.PRESSED;

    private: const RELEASED: MotionGestureInput = this.touchMotionGestureFactory!.RELEASED;

    private: const touchButtonsBuilderFactory: TouchButtonsBuilderFactory;

    private: const notYoursGameNotificationEvent: GameNotificationEvent;

    private: selectedRtsLayer: CollidableDestroyableDamageableLayer = CollidableDestroyableDamageableLayer.getNullInstance()!;

public constructor (AllBinaryGameCanvas gameCanvas, BasicArrayList inputList, int32_t playerInputId, RTSLayerInfoPaintable towerInfoPaintable, RTSPlayerLayerInterface rtsPlayerLayerInterface, LayerPositionFinderInterface layerPositionFinderInterface, SelectRTSLayerVisitorFactoryInterface selectRTSLayerVisitorFactoryInterface, TouchButtonsBuilderFactory touchButtonsBuilderFactory){
            super(gameCanvas, inputList, playerInputId, towerInfoPaintable, rtsPlayerLayerInterface, layerPositionFinderInterface, selectRTSLayerVisitorFactoryInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.touchButtonsBuilderFactory= touchButtonsBuilderFactory;
    

    basicColorFactory: BasicColorFactory = BasicColorFactory.getInstance()!;;
    
this.notYoursGameNotificationEvent= new GameNotificationEvent(this, RTSGameStrings.getInstance()!.NOT_YOURS, SmallIntegerSingletonFactory.getInstance()!.getAt(2), basicColorFactory!.PINK, BooleanFactory.getInstance()!.FALSE);
    
BasicMotionGesturesHandler.getInstance()!.addListenerInterface(this);
    
}


                //@Throws(Exception.constructor)
            
    public setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){

    geographicMapCompositeInterface: GeographicMapCompositeInterface = allBinaryGameLayerManager as GeographicMapCompositeInterface;;
    

    geographicMapInterface: BasicGeographicMap = geographicMapCompositeInterface!.getGeographicMapInterface()[0]!;;
    
this.notYoursGameNotificationEvent!.setBasicColorP(geographicMapInterface!.getForegroundBasicColor());
    
}


                //@Throws(Exception.constructor)
            
    bool processDraggingMotionInput(AllBinaryLayerManager layerManager){

    motionGestureEvent: MotionGestureEvent = this.getMotionGestureInputList()!.get(this.getMotionGestureInputList()!.size() -1) as MotionGestureEvent;;
    

    motionGestureInput: MotionGestureInput = motionGestureEvent!.getMotionGesture()!;;
    

    rtsFormInput: RTSFormInput = this.getSelectedRtsFormInput()!;;
    

                        if(motionGestureInput == this.PRESSED)
                        
                                    {
                                    
    point: GPoint = motionGestureEvent!.getCurrentPoint()!;;
    

                        if(this.getRtsPlayerLayerInterface()!.getCurrentScrollSelectionForm()!.isInForm(point))
                        
                                    {
                                    this.isDragging= rtsFormInput!.processSticky(this.getSelectedRtsLayer(), this.getRtsPlayerLayerInterface(), layerManager, point);
    

                                    }
                                

                                    }
                                
                             else 
                        if(motionGestureInput == this.RELEASED)
                        
                                    {
                                    
    point: GPoint = motionGestureEvent!.getCurrentPoint()!;;
    

                        if(this.getRtsPlayerLayerInterface()!.getCurrentScrollSelectionForm()!.isInForm(point))
                        
                                    {
                                    rtsFormInput!.processAtPoint(this.getSelectedRtsLayer(), this.getRtsPlayerLayerInterface(), layerManager, point);
    

                                    }
                                
                             else 
                        if(rtsFormInput!.isStickyItemSelected())
                        
                                    {
                                    
    previousRtsFormInput: RTSFormInput = rtsFormInput;;
    
this.select(motionGestureEvent);
    
this.getSelectedBuildingPlayerGameInput()!.selectAllPreselected();
    
previousRtsFormInput!.processAtPoint(this.getSelectedRtsLayer(), this.getRtsPlayerLayerInterface(), layerManager, point);
    
this.getSelectedBuildingPlayerGameInput()!.deselectAllPreselected();
    

                                    }
                                
                        else {
                            this.select(motionGestureEvent);
    

                        }
                            
rtsFormInput!.setStickyItemSelected(false);
    
rtsFormInput!.setSelectedStickyItem(ABCustomItem.getNullInstance());
    
rtsFormInput!.setSelectedStickyItemIndex( -1);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    private: startPoint: GPoint = PointFactory.getInstance()!.ZERO_ZERO;

    private: endPoint: GPoint = PointFactory.getInstance()!.ZERO_ZERO;

    const POSSIBLE: string = "Possible: ";

    const AT: string = "At: ";

    const METHOD: string = "makeSelection";

    const ADDING: string = "Adding: ";

    const SPACE: string = CommonSeps.getInstance()!.SPACE;

    makeSelection(){

    rtsLayerList: BasicArrayList = this.getRtsPlayerLayerInterface()!.getPlayerOwnedRTSLayers()!.rtsLayerList;;
    

    rectX1: int32_t = this.startPoint!.getX()!;;
    

    rectY1: int32_t = this.startPoint!.getY()!;;
    

    rectX2: int32_t = this.endPoint!.getX()!;;
    

    rectY2: int32_t = this.endPoint!.getY()!;;
    

                        if(rectX1 > rectX2)
                        
                                    {
                                    rectX2= rectX1;
    
rectX1= this.endPoint!.getX();
    

                                    }
                                

                        if(rectY1 > rectY2)
                        
                                    {
                                    rectY2= rectY1;
    
rectY1= this.endPoint!.getY();
    

                                    }
                                

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.AT);
    
stringBuffer!.appendint(rectX1);
    
stringBuffer!.append(this.SPACE);
    
stringBuffer!.appendint(rectY1);
    
stringBuffer!.append(this.SPACE);
    
stringBuffer!.appendint(rectX2);
    
stringBuffer!.append(this.SPACE);
    
stringBuffer!.appendint(rectY2);
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.METHOD);
    

    rtsLayer: RTSLayer;;
    




                        for (
    index: int32_t = rtsLayerList!.size() -1;index >= 0; index--)
        {
rtsLayer= rtsLayerList!.get(index) as RTSLayer;
    
stringBuffer!.delete(0, stringBuffer!.length());
    

    viewPosition: ViewPositionBase = rtsLayer!.getViewPosition()!;;
    
stringBuffer!.append(this.POSSIBLE);
    
stringBuffer!.append(rtsLayer!.getName());
    
stringBuffer!.append(this.SPACE);
    
stringBuffer!.append(this.AT);
    
stringBuffer!.appendint((viewPosition!.getX() +rtsLayer!.getHalfWidth()));
    
stringBuffer!.append(this.SPACE);
    
stringBuffer!.appendint((viewPosition!.getY() +rtsLayer!.getHalfHeight()));
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.METHOD);
    

                        if(this.rectangleCollisionUtil!.isInside(rectX1, rectY1, rectX2, rectY2, viewPosition!.getX() +rtsLayer!.getHalfWidth(), viewPosition!.getY() +rtsLayer!.getHalfHeight()))
                        
                                    {
                                    this.logUtil!.putF(new StringMaker().append(this.ADDING)!.append(rtsLayer!.getName())!.toString(), this, this.METHOD);
    
rtsLayer!.select();
    
this.getSelectedBuildingPlayerGameInput()!.addSelectedRTSLayer(rtsLayer);
    

                                    }
                                
}


    gameLayer: CollidableDestroyableDamageableLayer = this.getSelectedBuildingPlayerGameInput()!.getLastSelectedRtsLayer()!;;
    

                        if(gameLayer != CollidableDestroyableDamageableLayer.getNullInstance())
                        
                                    {
                                    
    lastRTSLayer: RTSLayer = gameLayer as RTSLayer;;
    

                        if(lastRTSLayer!.getScrollSelectionForm() != ScrollSelectionForm.getNullScrollSelectionForm())
                        
                                    {
                                    this.updateForm(lastRTSLayer!.getScrollSelectionForm(), lastRTSLayer!.getRTSFormInput());
    
this.setSelectedRtsLayer(lastRTSLayer);
    

                                    }
                                

                                    }
                                
this.updatePaintable();
    
}


                //@Throws(Exception.constructor)
            
    processSelectionBoxMotionInput(AllBinaryLayerManager layerManager){




                        for (
    index: int32_t = this.getMotionGestureInputList()!.size() -1;index >= 0; index--)
        {

    motionGestureEvent: MotionGestureEvent = this.getMotionGestureInputList()!.get(index) as MotionGestureEvent;;
    

    motionGestureInput: MotionGestureInput = motionGestureEvent!.getMotionGesture()!;;
    

    point: GPoint = motionGestureEvent!.getCurrentPoint()!;;
    

                        if(motionGestureInput == this.touchMotionGestureFactory!.PRESSED)
                        
                                    {
                                    this.startPoint= point;
    
this.endPoint= point;
    

                                    }
                                
                             else 
                        if(motionGestureInput == this.touchMotionGestureFactory!.RELEASED)
                        
                                    {
                                    this.endPoint= point;
    
this.makeSelection();
    
this.startPoint= PointFactory.getInstance()!.ZERO_ZERO;
    
this.endPoint= PointFactory.getInstance()!.ZERO_ZERO;
    

                                    }
                                
                        else {
                            this.endPoint= point;
    

                        }
                            
}

}


                //@Throws(Exception.constructor)
            
    public processMotionInput(AllBinaryLayerManager layerManager){

                        if(this.getMotionGestureInputList()!.size() > 0)
                        
                                    {
                                    
    endDrag: bool = this.processDraggingMotionInput(layerManager)!;;
    

                        if(!this.isDragging)
                        
                                    {
                                    this.processSelectionBoxMotionInput(layerManager);
    

                                    }
                                

                        if(endDrag)
                        
                                    {
                                    this.isDragging= false;
    

                                    }
                                

                                    }
                                
this.getMotionGestureInputList()!.clear();
    
}


    public setSelectedRtsFormInput(RTSFormInput selectedRtsFormInput){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    
this.logUtil!.putF(new StringMaker().append(CommonLabels.getInstance()!.START)!.append(StringUtil.getInstance()!.toString(selectedRtsFormInput))!.toString(), this, "setSelectedRtsFormInput");
    
super.setSelectedRtsFormInput(selectedRtsFormInput);
    
this.setSelectedRtsLayer(CollidableDestroyableDamageableLayer.getNullInstance());
    
}


    updateFormForLayer(RTSLayer rtsLayer){

    scrollSelectionForm: ScrollSelectionForm = rtsLayer!.getScrollSelectionForm()!;;
    

                        if(scrollSelectionForm != ScrollSelectionForm.getNullScrollSelectionForm() && this.getRtsPlayerLayerInterface()!.getGroupInterface()[0] == rtsLayer!.getGroupInterface()[0])
                        
                                    {
                                    this.updateForm(scrollSelectionForm, rtsLayer!.getRTSFormInput());
    
this.getSelectedBuildingPlayerGameInput()!.setSelectedRTSLayer(CollidableDestroyableDamageableLayer.getNullInstance());
    
this.setSelectedRtsLayer(rtsLayer);
    

                                    }
                                
                        else {
                            this.getRtsPlayerLayerInterface()!.setCurrentScrollSelectionForm(this.getRtsPlayerLayerInterface()!.getBuildingScrollSelectionForm());
    
this.setSelectedRtsFormInput(this.getRtsPlayerLayerInterface()!.getRTSFormInput());
    
this.getSelectedBuildingPlayerGameInput()!.setSelectedRTSLayer(CollidableDestroyableDamageableLayer.getNullInstance());
    

                        }
                            
}


    updateForm(ScrollSelectionForm scrollSelectionForm, RTSFormInput rtfFormInput){
this.getRtsPlayerLayerInterface()!.setCurrentScrollSelectionForm(scrollSelectionForm);
    
this.setSelectedRtsFormInput(rtfFormInput);
    
}


                //@Throws(Exception.constructor)
            
    public setSelectedRTSLayer(CollidableDestroyableDamageableLayer rtSLayer, GeographicMapCellPosition geographicMapCellPosition){

                        if(rtSLayer != CollidableDestroyableDamageableLayer.getNullInstance() && this.getRtsPlayerLayerInterface()!.getGroupInterface()[0] != rtSLayer!.getGroupInterface()[0])
                        
                                    {
                                    this.getRtsPlayerLayerInterface()!.add(ErrorSound.getInstance());
    
GameNotificationEventHandler.getInstance()!.fireEvent(this.notYoursGameNotificationEvent);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    gameCanvas: AllBinaryGameCanvas = this.getGameCanvas()!;;
    

                        if(rtSLayer != CollidableDestroyableDamageableLayer.NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER)
                        
                                    {
                                    this.getRtsPlayerLayerInterface()!.add(SelectBuildingSound.getInstance());
    

    rtsLayer: RTSLayer = rtSLayer as RTSLayer;;
    
rtsLayer!.select();
    
this.updateFormForLayer(rtsLayer);
    

                        if(gameCanvas!.getGameState() == this.gameStateFactory!.PLAYING_GAME_STATE)
                        
                                    {
                                    
                        if(rtsLayer!.isSelfUpgradeable())
                        
                                    {
                                    gameCanvas!.updateCurrentTouchInputFactory(new RTSTouchButtonsBuilder());
    

                                    }
                                
                        else {
                            gameCanvas!.updateCurrentTouchInputFactory(new NoBuildingSelectedTouchButtonsBuilder());
    

                        }
                            

                                    }
                                
                        else {
                            
    endLevelTouchButtonsBuilder: EndLevelTouchButtonsBuilder = new EndLevelTouchButtonsBuilder();;
    

                        if(this.touchButtonsBuilderFactory != 
                                    null
                                )
                        
                                    {
                                    endLevelTouchButtonsBuilder!.add(this.touchButtonsBuilderFactory!.getInstance());
    

                                    }
                                
gameCanvas!.updateCurrentTouchInputFactory(endLevelTouchButtonsBuilder);
    

                        }
                            

                                    }
                                
                        else {
                            this.logUtil!.putF("Set Player Default Form", this, "setSelectedRTSLayer");
    
this.getRtsPlayerLayerInterface()!.setCurrentScrollSelectionForm(this.getRtsPlayerLayerInterface()!.getBuildingScrollSelectionForm());
    
this.setSelectedRtsFormInput(this.getRtsPlayerLayerInterface()!.getRTSFormInput());
    
this.getSelectedBuildingPlayerGameInput()!.setSelectedRTSLayer(CollidableDestroyableDamageableLayer.getNullInstance());
    

                        if(gameCanvas!.getGameState() == this.gameStateFactory!.PLAYING_GAME_STATE)
                        
                                    {
                                    gameCanvas!.updateCurrentTouchInputFactory(new NoBuildingSelectedTouchButtonsBuilder());
    

                                    }
                                
                        else {
                            
    endLevelNoBuildingSelectedTouchButtonsBuilder: EndLevelNoBuildingSelectedTouchButtonsBuilder = new EndLevelNoBuildingSelectedTouchButtonsBuilder();;
    

                        if(this.touchButtonsBuilderFactory != 
                                    null
                                )
                        
                                    {
                                    endLevelNoBuildingSelectedTouchButtonsBuilder!.add(this.touchButtonsBuilderFactory!.getInstance());
    

                                    }
                                
gameCanvas!.updateCurrentTouchInputFactory(endLevelNoBuildingSelectedTouchButtonsBuilder);
    

                        }
                            

                        }
                            
this.getSelectedRtsFormInput()!.setSelectedGeographicCellPosition(geographicMapCellPosition);
    
this.getSelectedBuildingPlayerGameInput()!.setSelectedRTSLayer(rtSLayer);
    
this.updatePaintable();
    
}


    private: const multiSelectPaintable: MultiSelectPaintable = new MultiSelectPaintable();

    public updatePaintable(){

    list: BasicArrayList = this.getSelectedBuildingPlayerGameInput()!.getSelectedBasicArrayList()!;;
    

                        if(list.size() > 1)
                        
                                    {
                                    
    geographicMapCompositeInterface: GeographicMapCompositeInterface = this.getGameCanvas() as GeographicMapCompositeInterface;;
    

    geographicMapInterface: BasicGeographicMap = geographicMapCompositeInterface!.getGeographicMapInterface()[0]!;;
    
this.multiSelectPaintable!.setBasicColorP(geographicMapInterface!.getForegroundBasicColor());
    
this.multiSelectPaintable!.update(list);
    
this.getRTSLayerInfoPaintable()!.updateRTSLayerInfoSelection(this.multiSelectPaintable);
    

                                    }
                                
                             else 
                        if(list.size() == 1)
                        
                                    {
                                    
    rtsLayer: RTSLayer = list.get(0) as RTSLayer;;
    
this.getRTSLayerInfoPaintable()!.updateRTSLayerInfoSelection(rtsLayer!.createHudPaintable());
    

                                    }
                                
                        else {
                            this.getRTSLayerInfoPaintable()!.updateRTSLayerInfoInit(NullInitUpdatePaintable.getInstance());
    

                        }
                            
}


    public paint(Graphics graphics){
super.paint(graphics);
    

                        if(this.startPoint != PointFactory.getInstance()!.ZERO_ZERO && this.endPoint != PointFactory.getInstance()!.ZERO_ZERO)
                        
                                    {
                                    graphics.setColor(BasicColorFactory.getInstance()!.RED.intValue());
    

    rectX1: int32_t = this.startPoint!.getX()!;;
    

    rectY1: int32_t = this.startPoint!.getY()!;;
    

    rectX2: int32_t = this.endPoint!.getX()!;;
    

    rectY2: int32_t = this.endPoint!.getY()!;;
    

                        if(rectX1 > rectX2)
                        
                                    {
                                    rectX2= rectX1;
    
rectX1= this.endPoint!.getX();
    

                                    }
                                

                        if(rectY1 > rectY2)
                        
                                    {
                                    rectY2= rectY1;
    
rectY1= this.endPoint!.getY();
    

                                    }
                                
graphics.drawRect(rectX1, rectY1, rectX2 -rectX1, rectY2 -rectY1);
    

                                    }
                                
}


    public onMotionGestureEvent(MotionGestureEvent motionGestureEvent){
this.getMotionGestureInputList()!.add(motionGestureEvent);
    
}


    public onScrolledMotionGestureEvent(MotionGestureEvent motionGestureEvent){
}


    CollidableDestroyableDamageableLayer getSelectedRtsLayer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.selectedRtsLayer;
    
}


    setSelectedRtsLayer(CollidableDestroyableDamageableLayer selectedRtsLayer){
this.selectedRtsLayer= selectedRtsLayer;
    
}


};

            

