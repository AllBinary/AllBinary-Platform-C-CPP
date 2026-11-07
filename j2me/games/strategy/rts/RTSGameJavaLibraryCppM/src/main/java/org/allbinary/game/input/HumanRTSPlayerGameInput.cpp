
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_HUMANRTSPLAYERGAMEINPUT_CPP
        #define ORG_ALLBINARY_GAME_INPUT_HUMANRTSPLAYERGAMEINPUT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/HumanRTSPlayerGameInput.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/game/input/RTSPlayerGameInput.h"
#include "org/allbinary/game/input/LayerPositionFinderInterface.h"
#include "org/allbinary/game/input/SelectRTSLayerVisitorFactoryInterface.h"


HumanRTSPlayerGameInput::HumanRTSPlayerGameInput(AllBinaryGameCanvas* gameCanvas, BasicArrayList* inputList, int32_t playerInputId, RTSLayerInfoPaintable* towerInfoPaintable, RTSPlayerLayerInterface* rtsPlayerLayerInterface, LayerPositionFinderInterface* layerPositionFinderInterface, SelectRTSLayerVisitorFactoryInterface* selectRTSLayerVisitorFactoryInterface, TouchButtonsBuilderFactory* touchButtonsBuilderFactory) : RTSPlayerGameInput(gameCanvas, inputList, playerInputId, towerInfoPaintable, rtsPlayerLayerInterface, layerPositionFinderInterface, selectRTSLayerVisitorFactoryInterface), gameStateFactory(GameStateFactory::getInstance()), rectangleCollisionUtil(RectangleCollisionUtil::getInstance()), touchMotionGestureFactory(TouchMotionGestureFactory::getInstance()), PRESSED(this->touchMotionGestureFactory->PRESSED), RELEASED(this->touchMotionGestureFactory->RELEASED), selectedRtsLayer(CollidableDestroyableDamageableLayer::getNullInstance()), startPoint(PointFactory::getInstance()->ZERO_ZERO), endPoint(PointFactory::getInstance()->ZERO_ZERO), SPACE(CommonSeps::getInstance()->SPACE), multiSelectPaintable(new MultiSelectPaintable()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->touchButtonsBuilderFactory= touchButtonsBuilderFactory;
    

    BasicColorFactory* basicColorFactory = BasicColorFactory::getInstance();;
    
this->notYoursGameNotificationEvent= new GameNotificationEvent(this, RTSGameStrings::getInstance()->NOT_YOURS, SmallIntegerSingletonFactory::getInstance()->getAt(2), basicColorFactory->PINK, BooleanFactory::getInstance()->FALSE);
    
BasicMotionGesturesHandler::getInstance()->addListenerInterface(this);
    
}


                //@Throws(Exception.constructor)
            
    auto HumanRTSPlayerGameInput::setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager) -> void{

    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(allBinaryGameLayerManager);;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    
this->notYoursGameNotificationEvent->setBasicColorP(geographicMapInterface->getForegroundBasicColor());
    
}


                //@Throws(Exception.constructor)
            
    auto HumanRTSPlayerGameInput::processDraggingMotionInput(AllBinaryLayerManager* layerManager) -> bool{

    MotionGestureEvent* motionGestureEvent = dynamic_cast<MotionGestureEvent*>(this->getMotionGestureInputList()->get(this->getMotionGestureInputList()->size() -1));;
    

    MotionGestureInput* motionGestureInput = motionGestureEvent->getMotionGesture();;
    

    RTSFormInput* rtsFormInput = this->getSelectedRtsFormInput();;
    

                        if(motionGestureInput == this->PRESSED)
                        
                                    {
                                    
    GPoint* point = motionGestureEvent->getCurrentPoint();;
    

                        if(this->getRtsPlayerLayerInterface()->getCurrentScrollSelectionForm()->isInForm(point))
                        
                                    {
                                    this->isDragging= rtsFormInput->processSticky(this->getSelectedRtsLayer(), this->getRtsPlayerLayerInterface(), layerManager, point);
    

                                    }
                                

                                    }
                                
                             else 
                        if(motionGestureInput == this->RELEASED)
                        
                                    {
                                    
    GPoint* point = motionGestureEvent->getCurrentPoint();;
    

                        if(this->getRtsPlayerLayerInterface()->getCurrentScrollSelectionForm()->isInForm(point))
                        
                                    {
                                    rtsFormInput->processAtPoint(this->getSelectedRtsLayer(), this->getRtsPlayerLayerInterface(), layerManager, point);
    

                                    }
                                
                             else 
                        if(rtsFormInput->isStickyItemSelected())
                        
                                    {
                                    
    RTSFormInput* previousRtsFormInput = rtsFormInput;;
    
this->select(motionGestureEvent);
    
this->getSelectedBuildingPlayerGameInput()->selectAllPreselected();
    
previousRtsFormInput->processAtPoint(this->getSelectedRtsLayer(), this->getRtsPlayerLayerInterface(), layerManager, point);
    
this->getSelectedBuildingPlayerGameInput()->deselectAllPreselected();
    

                                    }
                                
                        else {
                            this->select(motionGestureEvent);
    

                        }
                            
rtsFormInput->setStickyItemSelected(false);
    
rtsFormInput->setSelectedStickyItem(ABCustomItem::getNullInstance());
    
rtsFormInput->setSelectedStickyItemIndex( -1);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto HumanRTSPlayerGameInput::makeSelection() -> void{

    BasicArrayList* rtsLayerList = this->getRtsPlayerLayerInterface()->getPlayerOwnedRTSLayers()->rtsLayerList;;
    

    int32_t rectX1 = this->startPoint->getX();;
    

    int32_t rectY1 = this->startPoint->getY();;
    

    int32_t rectX2 = this->endPoint->getX();;
    

    int32_t rectY2 = this->endPoint->getY();;
    

                        if(rectX1 > rectX2)
                        
                                    {
                                    rectX2= rectX1;
    
rectX1= this->endPoint->getX();
    

                                    }
                                

                        if(rectY1 > rectY2)
                        
                                    {
                                    rectY2= rectY1;
    
rectY1= this->endPoint->getY();
    

                                    }
                                

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->AT);
    
stringBuffer->appendint(rectX1);
    
stringBuffer->append(this->SPACE);
    
stringBuffer->appendint(rectY1);
    
stringBuffer->append(this->SPACE);
    
stringBuffer->appendint(rectX2);
    
stringBuffer->append(this->SPACE);
    
stringBuffer->appendint(rectY2);
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, this->METHOD);
    

    RTSLayer* rtsLayer;;
    




                        for (
    int32_t index = rtsLayerList->size() -1;index >= 0; index--)
        {
rtsLayer= dynamic_cast<RTSLayer*>(rtsLayerList->get(index));
    
stringBuffer->delete_(0, stringBuffer->length());
    

    ViewPositionBase* viewPosition = rtsLayer->getViewPosition();;
    
stringBuffer->append(this->POSSIBLE);
    
stringBuffer->append(rtsLayer->getName());
    
stringBuffer->append(this->SPACE);
    
stringBuffer->append(this->AT);
    
stringBuffer->appendint((viewPosition->getX() +rtsLayer->getHalfWidth()));
    
stringBuffer->append(this->SPACE);
    
stringBuffer->appendint((viewPosition->getY() +rtsLayer->getHalfHeight()));
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, this->METHOD);
    

                        if(this->rectangleCollisionUtil->isInside(rectX1, rectY1, rectX2, rectY2, viewPosition->getX() +rtsLayer->getHalfWidth(), viewPosition->getY() +rtsLayer->getHalfHeight()))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(this->ADDING)->append(rtsLayer->getName())), this, this->METHOD);
    
rtsLayer->select();
    
this->getSelectedBuildingPlayerGameInput()->addSelectedRTSLayer(rtsLayer);
    

                                    }
                                
}


    CollidableDestroyableDamageableLayer* gameLayer = this->getSelectedBuildingPlayerGameInput()->getLastSelectedRtsLayer();;
    

                        if(gameLayer != CollidableDestroyableDamageableLayer::getNullInstance())
                        
                                    {
                                    
    RTSLayer* lastRTSLayer = dynamic_cast<RTSLayer*>(gameLayer);;
    

                        if(lastRTSLayer->getScrollSelectionForm() != ScrollSelectionForm::getNullScrollSelectionForm())
                        
                                    {
                                    this->updateForm(lastRTSLayer->getScrollSelectionForm(), lastRTSLayer->getRTSFormInput());
    
this->setSelectedRtsLayer(lastRTSLayer);
    

                                    }
                                

                                    }
                                
this->updatePaintable();
    
}


                //@Throws(Exception.constructor)
            
    auto HumanRTSPlayerGameInput::processSelectionBoxMotionInput(AllBinaryLayerManager* layerManager) -> void{




                        for (
    int32_t index = this->getMotionGestureInputList()->size() -1;index >= 0; index--)
        {

    MotionGestureEvent* motionGestureEvent = dynamic_cast<MotionGestureEvent*>(this->getMotionGestureInputList()->get(index));;
    

    MotionGestureInput* motionGestureInput = motionGestureEvent->getMotionGesture();;
    

    GPoint* point = motionGestureEvent->getCurrentPoint();;
    

                        if(motionGestureInput == this->touchMotionGestureFactory->PRESSED)
                        
                                    {
                                    this->startPoint= point;
    
this->endPoint= point;
    

                                    }
                                
                             else 
                        if(motionGestureInput == this->touchMotionGestureFactory->RELEASED)
                        
                                    {
                                    this->endPoint= point;
    
this->makeSelection();
    
this->startPoint= PointFactory::getInstance()->ZERO_ZERO;
    
this->endPoint= PointFactory::getInstance()->ZERO_ZERO;
    

                                    }
                                
                        else {
                            this->endPoint= point;
    

                        }
                            
}

}


                //@Throws(Exception.constructor)
            
    auto HumanRTSPlayerGameInput::processMotionInput(AllBinaryLayerManager* layerManager) -> void{

                        if(this->getMotionGestureInputList()->size() > 0)
                        
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
                                
this->getMotionGestureInputList()->clear();
    
}


    auto HumanRTSPlayerGameInput::setSelectedRtsFormInput(RTSFormInput* selectedRtsFormInput) -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(CommonLabels::getInstance()->START)->append(StringUtil::getInstance()->toString(selectedRtsFormInput))), this, "setSelectedRtsFormInput");
    
RTSPlayerGameInput::setSelectedRtsFormInput(selectedRtsFormInput);
    
this->setSelectedRtsLayer(CollidableDestroyableDamageableLayer::getNullInstance());
    
}


    auto HumanRTSPlayerGameInput::updateFormForLayer(RTSLayer* rtsLayer) -> void{

    ScrollSelectionForm* scrollSelectionForm = rtsLayer->getScrollSelectionForm();;
    

                        if(scrollSelectionForm != ScrollSelectionForm::getNullScrollSelectionForm() && this->getRtsPlayerLayerInterface()->getGroupInterface()[0] == rtsLayer->getGroupInterface()[0])
                        
                                    {
                                    this->updateForm(scrollSelectionForm, rtsLayer->getRTSFormInput());
    
this->getSelectedBuildingPlayerGameInput()->setSelectedRTSLayer(CollidableDestroyableDamageableLayer::getNullInstance());
    
this->setSelectedRtsLayer(rtsLayer);
    

                                    }
                                
                        else {
                            this->getRtsPlayerLayerInterface()->setCurrentScrollSelectionForm(this->getRtsPlayerLayerInterface()->getBuildingScrollSelectionForm());
    
this->setSelectedRtsFormInput(this->getRtsPlayerLayerInterface()->getRTSFormInput());
    
this->getSelectedBuildingPlayerGameInput()->setSelectedRTSLayer(CollidableDestroyableDamageableLayer::getNullInstance());
    

                        }
                            
}


    auto HumanRTSPlayerGameInput::updateForm(ScrollSelectionForm* scrollSelectionForm, RTSFormInput* rtfFormInput) -> void{
this->getRtsPlayerLayerInterface()->setCurrentScrollSelectionForm(scrollSelectionForm);
    
this->setSelectedRtsFormInput(rtfFormInput);
    
}


                //@Throws(Exception.constructor)
            
    auto HumanRTSPlayerGameInput::setSelectedRTSLayer(CollidableDestroyableDamageableLayer* rtSLayer, GeographicMapCellPosition* geographicMapCellPosition) -> void{

                        if(rtSLayer != CollidableDestroyableDamageableLayer::getNullInstance() && this->getRtsPlayerLayerInterface()->getGroupInterface()[0] != rtSLayer->getGroupInterface()[0])
                        
                                    {
                                    this->getRtsPlayerLayerInterface()->add(ErrorSound::getInstance());
    
GameNotificationEventHandler::getInstance()->fireEvent(this->notYoursGameNotificationEvent);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

                                    }
                                

    AllBinaryGameCanvas* gameCanvas = this->getGameCanvas();;
    

                        if(rtSLayer != CollidableDestroyableDamageableLayer::getNullInstance())
                        
                                    {
                                    this->getRtsPlayerLayerInterface()->add(SelectBuildingSound::getInstance());
    

    RTSLayer* rtsLayer = dynamic_cast<RTSLayer*>(rtSLayer);;
    
rtsLayer->select();
    
this->updateFormForLayer(rtsLayer);
    

                        if(gameCanvas->getGameState() == this->gameStateFactory->PLAYING_GAME_STATE)
                        
                                    {
                                    
                        if(rtsLayer->isSelfUpgradeable())
                        
                                    {
                                    gameCanvas->updateCurrentTouchInputFactory(new RTSTouchButtonsBuilder());
    

                                    }
                                
                        else {
                            gameCanvas->updateCurrentTouchInputFactory(new NoBuildingSelectedTouchButtonsBuilder());
    

                        }
                            

                                    }
                                
                        else {
                            
    EndLevelTouchButtonsBuilder* endLevelTouchButtonsBuilder = new EndLevelTouchButtonsBuilder();;
    

                        if(this->touchButtonsBuilderFactory != 
                                    nullptr
                                )
                        
                                    {
                                    endLevelTouchButtonsBuilder->add(this->touchButtonsBuilderFactory->getInstance());
    

                                    }
                                
gameCanvas->updateCurrentTouchInputFactory(endLevelTouchButtonsBuilder);
    

                        }
                            

                                    }
                                
                        else {
                            this->logUtil->putF("Set Player Default Form", this, "setSelectedRTSLayer");
    
this->getRtsPlayerLayerInterface()->setCurrentScrollSelectionForm(this->getRtsPlayerLayerInterface()->getBuildingScrollSelectionForm());
    
this->setSelectedRtsFormInput(this->getRtsPlayerLayerInterface()->getRTSFormInput());
    
this->getSelectedBuildingPlayerGameInput()->setSelectedRTSLayer(CollidableDestroyableDamageableLayer::getNullInstance());
    

                        if(gameCanvas->getGameState() == this->gameStateFactory->PLAYING_GAME_STATE)
                        
                                    {
                                    gameCanvas->updateCurrentTouchInputFactory(new NoBuildingSelectedTouchButtonsBuilder());
    

                                    }
                                
                        else {
                            
    EndLevelNoBuildingSelectedTouchButtonsBuilder* endLevelNoBuildingSelectedTouchButtonsBuilder = new EndLevelNoBuildingSelectedTouchButtonsBuilder();;
    

                        if(this->touchButtonsBuilderFactory != 
                                    nullptr
                                )
                        
                                    {
                                    endLevelNoBuildingSelectedTouchButtonsBuilder->add(this->touchButtonsBuilderFactory->getInstance());
    

                                    }
                                
gameCanvas->updateCurrentTouchInputFactory(endLevelNoBuildingSelectedTouchButtonsBuilder);
    

                        }
                            

                        }
                            
this->getSelectedRtsFormInput()->setSelectedGeographicCellPosition(geographicMapCellPosition);
    
this->getSelectedBuildingPlayerGameInput()->setSelectedRTSLayer(rtSLayer);
    
this->updatePaintable();
    
}


    auto HumanRTSPlayerGameInput::updatePaintable() -> void{

    BasicArrayList* list = this->getSelectedBuildingPlayerGameInput()->getSelectedBasicArrayList();;
    

                        if(list->size() > 1)
                        
                                    {
                                    
    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(this->getGameCanvas());;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    
this->multiSelectPaintable->setBasicColorP(geographicMapInterface->getForegroundBasicColor());
    
this->multiSelectPaintable->update(list);
    
this->getRTSLayerInfoPaintable()->updateRTSLayerInfoSelection(this->multiSelectPaintable);
    

                                    }
                                
                             else 
                        if(list->size() == 1)
                        
                                    {
                                    
    RTSLayer* rtsLayer = dynamic_cast<RTSLayer*>(list->get(0));;
    
this->getRTSLayerInfoPaintable()->updateRTSLayerInfoSelection(rtsLayer->createHudPaintable());
    

                                    }
                                
                        else {
                            this->getRTSLayerInfoPaintable()->updateRTSLayerInfoInit(NullInitUpdatePaintable::getInstance());
    

                        }
                            
}


    auto HumanRTSPlayerGameInput::paint(Graphics* graphics) -> void{
RTSPlayerGameInput::paint(graphics);
    

                        if(this->startPoint != PointFactory::getInstance()->ZERO_ZERO && this->endPoint != PointFactory::getInstance()->ZERO_ZERO)
                        
                                    {
                                    graphics->setColor(BasicColorFactory::getInstance()->RED->intValue());
    

    int32_t rectX1 = this->startPoint->getX();;
    

    int32_t rectY1 = this->startPoint->getY();;
    

    int32_t rectX2 = this->endPoint->getX();;
    

    int32_t rectY2 = this->endPoint->getY();;
    

                        if(rectX1 > rectX2)
                        
                                    {
                                    rectX2= rectX1;
    
rectX1= this->endPoint->getX();
    

                                    }
                                

                        if(rectY1 > rectY2)
                        
                                    {
                                    rectY2= rectY1;
    
rectY1= this->endPoint->getY();
    

                                    }
                                
graphics->drawRect(rectX1, rectY1, rectX2 -rectX1, rectY2 -rectY1);
    

                                    }
                                
}


    auto HumanRTSPlayerGameInput::onMotionGestureEvent(MotionGestureEvent* motionGestureEvent) -> void{
this->getMotionGestureInputList()->add(motionGestureEvent);
    
}


    auto HumanRTSPlayerGameInput::onScrolledMotionGestureEvent(MotionGestureEvent* motionGestureEvent) -> void{
}


    auto HumanRTSPlayerGameInput::getSelectedRtsLayer() -> CollidableDestroyableDamageableLayer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->selectedRtsLayer;
    
}


    auto HumanRTSPlayerGameInput::setSelectedRtsLayer(CollidableDestroyableDamageableLayer* selectedRtsLayer) -> void{
this->selectedRtsLayer= selectedRtsLayer;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_HUMANRTSPLAYERGAMEINPUT_CPP
