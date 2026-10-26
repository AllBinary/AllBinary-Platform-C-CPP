
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
        



            #include "java/lang/Exception.h"
        
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

class HumanRTSPlayerGameInput: public RTSPlayerGameInput, public BaseMotionGestureEventListener {

    private: bool isDragging = false;

    protected: const GameStateFactory gameStateFactory = GameStateFactory::getInstance();

    private: const RectangleCollisionUtil rectangleCollisionUtil = RectangleCollisionUtil::getInstance();

    private: const TouchMotionGestureFactory touchMotionGestureFactory = TouchMotionGestureFactory::getInstance();

    private: const MotionGestureInput PRESSED = this->touchMotionGestureFactory.PRESSED;

    private: const MotionGestureInput RELEASED = this->touchMotionGestureFactory.RELEASED;

    private: TouchButtonsBuilderFactory touchButtonsBuilderFactory;

    private: GameNotificationEvent notYoursGameNotificationEvent;

    private: CollidableDestroyableDamageableLayer selectedRtsLayer = CollidableDestroyableDamageableLayer::getNullInstance();

public: HumanRTSPlayerGameInput(AllBinaryGameCanvas gameCanvas, BasicArrayList inputList, int32_t playerInputId, RTSLayerInfoPaintable towerInfoPaintable, RTSPlayerLayerInterface rtsPlayerLayerInterface, LayerPositionFinderInterface layerPositionFinderInterface, SelectRTSLayerVisitorFactoryInterface selectRTSLayerVisitorFactoryInterface, TouchButtonsBuilderFactory touchButtonsBuilderFactory) : RTSPlayerGameInput(gameCanvas, inputList, playerInputId, towerInfoPaintable, rtsPlayerLayerInterface, layerPositionFinderInterface, selectRTSLayerVisitorFactoryInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->touchButtonsBuilderFactory= touchButtonsBuilderFactory;
    

    BasicColorFactory basicColorFactory = BasicColorFactory::getInstance();;
    
this->notYoursGameNotificationEvent= GameNotificationEvent(this, RTSGameStrings::getInstance().NOT_YOURS, SmallIntegerSingletonFactory::getInstance().getAt(2), basicColorFactory.PINK, BooleanFactory::getInstance().FALSE);
    
BasicMotionGesturesHandler::getInstance().addListenerInterface(this);
    
}


                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){

    GeographicMapCompositeInterface geographicMapCompositeInterface = allBinaryGameLayerManager;;
    

    BasicGeographicMap geographicMapInterface = geographicMapCompositeInterface.getGeographicMapInterface()[0];;
    
this->notYoursGameNotificationEvent.setBasicColorP(geographicMapInterface.getForegroundBasicColor());
    
}


                //@Throws(Exception.constructor)
            
    private: bool processDraggingMotionInput(AllBinaryLayerManager layerManager){

    MotionGestureEvent motionGestureEvent = this->getMotionGestureInputList().get(this->getMotionGestureInputList().size() -1);;
    

    MotionGestureInput motionGestureInput = motionGestureEvent.getMotionGesture();;
    

    RTSFormInput rtsFormInput = this->getSelectedRtsFormInput();;
    

                        if(motionGestureInput == this->PRESSED)
                        
                                    {
                                    
    GPoint point = motionGestureEvent.getCurrentPoint();;
    

                        if(this->getRtsPlayerLayerInterface().getCurrentScrollSelectionForm().isInForm(point))
                        
                                    {
                                    this->isDragging= rtsFormInput.processSticky(this->getSelectedRtsLayer(), this->getRtsPlayerLayerInterface(), layerManager, point);
    

                                    }
                                

                                    }
                                
                             else 
                        if(motionGestureInput == this->RELEASED)
                        
                                    {
                                    
    GPoint point = motionGestureEvent.getCurrentPoint();;
    

                        if(this->getRtsPlayerLayerInterface().getCurrentScrollSelectionForm().isInForm(point))
                        
                                    {
                                    rtsFormInput.processAtPoint(this->getSelectedRtsLayer(), this->getRtsPlayerLayerInterface(), layerManager, point);
    

                                    }
                                
                             else 
                        if(rtsFormInput.isStickyItemSelected())
                        
                                    {
                                    
    RTSFormInput previousRtsFormInput = rtsFormInput;;
    
this->select(motionGestureEvent);
    
this->getSelectedBuildingPlayerGameInput().selectAllPreselected();
    
previousRtsFormInput.processAtPoint(this->getSelectedRtsLayer(), this->getRtsPlayerLayerInterface(), layerManager, point);
    
this->getSelectedBuildingPlayerGameInput().deselectAllPreselected();
    

                                    }
                                
                        else {
                            this->select(motionGestureEvent);
    

                        }
                            
rtsFormInput.setStickyItemSelected(false);
    
rtsFormInput.setSelectedStickyItem(ABCustomItem::getNullInstance());
    
rtsFormInput.setSelectedStickyItemIndex( -1);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    private: GPoint startPoint = PointFactory::getInstance().ZERO_ZERO;

    private: GPoint endPoint = PointFactory::getInstance().ZERO_ZERO;

    const std::string POSSIBLE = "Possible: ";

    const std::string AT = "At: ";

    const std::string METHOD = "makeSelection";

    const std::string ADDING = "Adding: ";

    const std::string SPACE = CommonSeps::getInstance().SPACE;

    private: void makeSelection(){

    BasicArrayList rtsLayerList = this->getRtsPlayerLayerInterface().getPlayerOwnedRTSLayers().rtsLayerList;;
    

    int32_t rectX1 = this->startPoint.getX();;
    

    int32_t rectY1 = this->startPoint.getY();;
    

    int32_t rectX2 = this->endPoint.getX();;
    

    int32_t rectY2 = this->endPoint.getY();;
    

                        if(rectX1 > rectX2)
                        
                                    {
                                    rectX2= rectX1;
    
rectX1= this->endPoint.getX();
    

                                    }
                                

                        if(rectY1 > rectY2)
                        
                                    {
                                    rectY2= rectY1;
    
rectY1= this->endPoint.getY();
    

                                    }
                                

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->AT);
    
stringBuffer.appendint(rectX1);
    
stringBuffer.append(this->SPACE);
    
stringBuffer.appendint(rectY1);
    
stringBuffer.append(this->SPACE);
    
stringBuffer.appendint(rectX2);
    
stringBuffer.append(this->SPACE);
    
stringBuffer.appendint(rectY2);
    
this->logUtil.putF(stringBuffer.toString(), this, this->METHOD);
    

    RTSLayer rtsLayer;;
    




                        for (
    int32_t index = rtsLayerList.size() -1;index >= 0; index--)
        {
rtsLayer= rtsLayerList.get(index);
    
stringBuffer.delete(0, stringBuffer.length());
    

    ViewPositionBase viewPosition = rtsLayer.getViewPosition();;
    
stringBuffer.append(this->POSSIBLE);
    
stringBuffer.append(rtsLayer.getName());
    
stringBuffer.append(this->SPACE);
    
stringBuffer.append(this->AT);
    
stringBuffer.appendint((viewPosition.getX() +rtsLayer.getHalfWidth()));
    
stringBuffer.append(this->SPACE);
    
stringBuffer.appendint((viewPosition.getY() +rtsLayer.getHalfHeight()));
    
this->logUtil.putF(stringBuffer.toString(), this, this->METHOD);
    

                        if(this->rectangleCollisionUtil.isInside(rectX1, rectY1, rectX2, rectY2, viewPosition.getX() +rtsLayer.getHalfWidth(), viewPosition.getY() +rtsLayer.getHalfHeight()))
                        
                                    {
                                    this->logUtil.putF(StringMaker().append(this->ADDING).append(rtsLayer.getName()).toString(), this, this->METHOD);
    
rtsLayer.select();
    
this->getSelectedBuildingPlayerGameInput().addSelectedRTSLayer(rtsLayer);
    

                                    }
                                
}


    CollidableDestroyableDamageableLayer gameLayer = this->getSelectedBuildingPlayerGameInput().getLastSelectedRtsLayer();;
    

                        if(gameLayer != CollidableDestroyableDamageableLayer::getNullInstance())
                        
                                    {
                                    
    RTSLayer lastRTSLayer = gameLayer;;
    

                        if(lastRTSLayer.getScrollSelectionForm() != ScrollSelectionForm::getNullScrollSelectionForm())
                        
                                    {
                                    this->updateForm(lastRTSLayer.getScrollSelectionForm(), lastRTSLayer.getRTSFormInput());
    
this->setSelectedRtsLayer(lastRTSLayer);
    

                                    }
                                

                                    }
                                
this->updatePaintable();
    
}


                //@Throws(Exception.constructor)
            
    private: void processSelectionBoxMotionInput(AllBinaryLayerManager layerManager){




                        for (
    int32_t index = this->getMotionGestureInputList().size() -1;index >= 0; index--)
        {

    MotionGestureEvent motionGestureEvent = this->getMotionGestureInputList().get(index);;
    

    MotionGestureInput motionGestureInput = motionGestureEvent.getMotionGesture();;
    

    GPoint point = motionGestureEvent.getCurrentPoint();;
    

                        if(motionGestureInput == this->touchMotionGestureFactory.PRESSED)
                        
                                    {
                                    this->startPoint= point;
    
this->endPoint= point;
    

                                    }
                                
                             else 
                        if(motionGestureInput == this->touchMotionGestureFactory.RELEASED)
                        
                                    {
                                    this->endPoint= point;
    
this->makeSelection();
    
this->startPoint= PointFactory::getInstance().ZERO_ZERO;
    
this->endPoint= PointFactory::getInstance().ZERO_ZERO;
    

                                    }
                                
                        else {
                            this->endPoint= point;
    

                        }
                            
}

}


                //@Throws(Exception.constructor)
            
    public: void processMotionInput(AllBinaryLayerManager layerManager){

                        if(this->getMotionGestureInputList().size() > 0)
                        
                                    {
                                    
    bool endDrag = this->processDraggingMotionInput(layerManager);;
    

                        if(!this->isDragging)
                        
                                    {
                                    this->processSelectionBoxMotionInput(layerManager);
    

                                    }
                                

                        if(endDrag)
                        
                                    {
                                    this->isDragging= false;
    

                                    }
                                

                                    }
                                
this->getMotionGestureInputList().clear();
    
}


    public: void setSelectedRtsFormInput(RTSFormInput selectedRtsFormInput){

    LogUtil logUtil = LogUtil::getInstance();;
    
this->logUtil.putF(StringMaker().append(CommonLabels::getInstance().START).append(StringUtil::getInstance().toString(selectedRtsFormInput)).toString(), this, "setSelectedRtsFormInput");
    
super.setSelectedRtsFormInput(selectedRtsFormInput);
    
this->setSelectedRtsLayer(CollidableDestroyableDamageableLayer::getNullInstance());
    
}


    private: void updateFormForLayer(RTSLayer rtsLayer){

    ScrollSelectionForm scrollSelectionForm = rtsLayer.getScrollSelectionForm();;
    

                        if(scrollSelectionForm != ScrollSelectionForm::getNullScrollSelectionForm() && this->getRtsPlayerLayerInterface().getGroupInterface()[0] == rtsLayer.getGroupInterface()[0])
                        
                                    {
                                    this->updateForm(scrollSelectionForm, rtsLayer.getRTSFormInput());
    
this->getSelectedBuildingPlayerGameInput().setSelectedRTSLayer(CollidableDestroyableDamageableLayer::getNullInstance());
    
this->setSelectedRtsLayer(rtsLayer);
    

                                    }
                                
                        else {
                            this->getRtsPlayerLayerInterface().setCurrentScrollSelectionForm(this->getRtsPlayerLayerInterface().getBuildingScrollSelectionForm());
    
this->setSelectedRtsFormInput(this->getRtsPlayerLayerInterface().getRTSFormInput());
    
this->getSelectedBuildingPlayerGameInput().setSelectedRTSLayer(CollidableDestroyableDamageableLayer::getNullInstance());
    

                        }
                            
}


    private: void updateForm(ScrollSelectionForm scrollSelectionForm, RTSFormInput rtfFormInput){
this->getRtsPlayerLayerInterface().setCurrentScrollSelectionForm(scrollSelectionForm);
    
this->setSelectedRtsFormInput(rtfFormInput);
    
}


                //@Throws(Exception.constructor)
            
    public: void setSelectedRTSLayer(CollidableDestroyableDamageableLayer rtSLayer, GeographicMapCellPosition geographicMapCellPosition){

                        if(rtSLayer != CollidableDestroyableDamageableLayer::getNullInstance() && this->getRtsPlayerLayerInterface().getGroupInterface()[0] != rtSLayer.getGroupInterface()[0])
                        
                                    {
                                    this->getRtsPlayerLayerInterface().add(ErrorSound::getInstance());
    
GameNotificationEventHandler::getInstance().fireEvent(this->notYoursGameNotificationEvent);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    AllBinaryGameCanvas gameCanvas = this->getGameCanvas();;
    

                        if(rtSLayer != CollidableDestroyableDamageableLayer::getNullInstance())
                        
                                    {
                                    this->getRtsPlayerLayerInterface().add(SelectBuildingSound::getInstance());
    

    RTSLayer rtsLayer = rtSLayer;;
    
rtsLayer.select();
    
this->updateFormForLayer(rtsLayer);
    

                        if(gameCanvas.getGameState() == this->gameStateFactory.PLAYING_GAME_STATE)
                        
                                    {
                                    
                        if(rtsLayer.isSelfUpgradeable())
                        
                                    {
                                    gameCanvas.updateCurrentTouchInputFactory(RTSTouchButtonsBuilder());
    

                                    }
                                
                        else {
                            gameCanvas.updateCurrentTouchInputFactory(NoBuildingSelectedTouchButtonsBuilder());
    

                        }
                            

                                    }
                                
                        else {
                            
    EndLevelTouchButtonsBuilder endLevelTouchButtonsBuilder = EndLevelTouchButtonsBuilder();;
    

                        if(this->touchButtonsBuilderFactory != 
                                    nullptr
                                )
                        
                                    {
                                    endLevelTouchButtonsBuilder.add(this->touchButtonsBuilderFactory.getInstance());
    

                                    }
                                
gameCanvas.updateCurrentTouchInputFactory(endLevelTouchButtonsBuilder);
    

                        }
                            

                                    }
                                
                        else {
                            this->logUtil.putF("Set Player Default Form", this, "setSelectedRTSLayer");
    
this->getRtsPlayerLayerInterface().setCurrentScrollSelectionForm(this->getRtsPlayerLayerInterface().getBuildingScrollSelectionForm());
    
this->setSelectedRtsFormInput(this->getRtsPlayerLayerInterface().getRTSFormInput());
    
this->getSelectedBuildingPlayerGameInput().setSelectedRTSLayer(CollidableDestroyableDamageableLayer::getNullInstance());
    

                        if(gameCanvas.getGameState() == this->gameStateFactory.PLAYING_GAME_STATE)
                        
                                    {
                                    gameCanvas.updateCurrentTouchInputFactory(NoBuildingSelectedTouchButtonsBuilder());
    

                                    }
                                
                        else {
                            
    EndLevelNoBuildingSelectedTouchButtonsBuilder endLevelNoBuildingSelectedTouchButtonsBuilder = EndLevelNoBuildingSelectedTouchButtonsBuilder();;
    

                        if(this->touchButtonsBuilderFactory != 
                                    nullptr
                                )
                        
                                    {
                                    endLevelNoBuildingSelectedTouchButtonsBuilder.add(this->touchButtonsBuilderFactory.getInstance());
    

                                    }
                                
gameCanvas.updateCurrentTouchInputFactory(endLevelNoBuildingSelectedTouchButtonsBuilder);
    

                        }
                            

                        }
                            
this->getSelectedRtsFormInput().setSelectedGeographicCellPosition(geographicMapCellPosition);
    
this->getSelectedBuildingPlayerGameInput().setSelectedRTSLayer(rtSLayer);
    
this->updatePaintable();
    
}


    private: const MultiSelectPaintable multiSelectPaintable = MultiSelectPaintable();

    public: void updatePaintable(){

    BasicArrayList list = this->getSelectedBuildingPlayerGameInput().getSelectedBasicArrayList();;
    

                        if(list.size() > 1)
                        
                                    {
                                    
    GeographicMapCompositeInterface geographicMapCompositeInterface = this->getGameCanvas();;
    

    BasicGeographicMap geographicMapInterface = geographicMapCompositeInterface.getGeographicMapInterface()[0];;
    
this->multiSelectPaintable.setBasicColorP(geographicMapInterface.getForegroundBasicColor());
    
this->multiSelectPaintable.update(list);
    
this->getRTSLayerInfoPaintable().updateRTSLayerInfoSelection(this->multiSelectPaintable);
    

                                    }
                                
                             else 
                        if(list.size() == 1)
                        
                                    {
                                    
    RTSLayer rtsLayer = list.get(0);;
    
this->getRTSLayerInfoPaintable().updateRTSLayerInfoSelection(rtsLayer.createHudPaintable());
    

                                    }
                                
                        else {
                            this->getRTSLayerInfoPaintable().updateRTSLayerInfoInit(NullInitUpdatePaintable::getInstance());
    

                        }
                            
}


    public: void paint(Graphics graphics){
super.paint(graphics);
    

                        if(this->startPoint != PointFactory::getInstance().ZERO_ZERO && this->endPoint != PointFactory::getInstance().ZERO_ZERO)
                        
                                    {
                                    graphics.setColor(BasicColorFactory::getInstance().RED.intValue());
    

    int32_t rectX1 = this->startPoint.getX();;
    

    int32_t rectY1 = this->startPoint.getY();;
    

    int32_t rectX2 = this->endPoint.getX();;
    

    int32_t rectY2 = this->endPoint.getY();;
    

                        if(rectX1 > rectX2)
                        
                                    {
                                    rectX2= rectX1;
    
rectX1= this->endPoint.getX();
    

                                    }
                                

                        if(rectY1 > rectY2)
                        
                                    {
                                    rectY2= rectY1;
    
rectY1= this->endPoint.getY();
    

                                    }
                                
graphics.drawRect(rectX1, rectY1, rectX2 -rectX1, rectY2 -rectY1);
    

                                    }
                                
}


    public: void onMotionGestureEvent(MotionGestureEvent motionGestureEvent){
this->getMotionGestureInputList().add(motionGestureEvent);
    
}


    public: void onScrolledMotionGestureEvent(MotionGestureEvent motionGestureEvent){
}


    private: CollidableDestroyableDamageableLayer getSelectedRtsLayer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->selectedRtsLayer;
    
}


    private: void setSelectedRtsLayer(CollidableDestroyableDamageableLayer selectedRtsLayer){
this->selectedRtsLayer= selectedRtsLayer;
    
}


};

            

