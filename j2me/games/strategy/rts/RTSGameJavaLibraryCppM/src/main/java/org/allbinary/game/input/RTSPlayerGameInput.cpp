
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_RTSPLAYERGAMEINPUT_CPP
        #define ORG_ALLBINARY_GAME_INPUT_RTSPLAYERGAMEINPUT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/RTSPlayerGameInput.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/input/form/RTSFormInput.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/RTSLayerInfoPaintable.h>

      
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>

      
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/form/NullRTSFormInputFactory.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/game/layer/NullRTSLayer.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>

      
#include <org/allbinary/media/audio/SelectSound.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/game/input/GameInputProcessor.h"
#include "org/allbinary/game/input/ScrollMapPlayerGameInput.h"
#include "org/allbinary/game/input/SelectedRTSLayersPlayerGameInput.h"
#include "org/allbinary/game/input/LayerPositionFinderInterface.h"
#include "org/allbinary/game/input/SelectRTSLayerVisitorFactoryInterface.h"
#include "org/allbinary/game/input/RTSPlayerLeftGameInputProcessor.h"
#include "org/allbinary/game/input/RTSPlayerRightGameInputProcessor.h"
#include "org/allbinary/game/input/RTSPlayerFireGameInputProcessor.h"
#include "org/allbinary/game/input/GameInputProcessorUtil.h"


RTSPlayerGameInput::RTSPlayerGameInput(AllBinaryGameCanvas* gameCanvas, BasicArrayList* inputList, int32_t playerInputId, RTSLayerInfoPaintable* towerInfoPaintable, RTSPlayerLayerInterface* rtsPlayerLayerInterface, LayerPositionFinderInterface* layerPositionFinderInterface, SelectRTSLayerVisitorFactoryInterface* selectRTSLayerVisitorFactoryInterface) : PlayerGameInput(inputList, new BasicArrayListD(), playerInputId), inputProcessorArray(std::vector<GameInputProcessor*>(InputFactory::getInstance()->MAX)), removeInputProcessorArray(std::vector<GameInputProcessor*>(InputFactory::getInstance()->MAX)), isSingleKeyProcessing(Features::getInstance()->isFeature(InputFeatureFactory::getInstance()->SINGLE_KEY_REPEAT_PRESS) || Features::getInstance()->isFeature(InputFeatureFactory::getInstance()->SINGLE_KEY_PRESS)), motionGestureInputList(new BasicArrayListD()), selectedRtsFormInput(NullRTSFormInputFactory::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initInputProcessors();
    
this->gameCanvas= gameCanvas;
    
this->inputList= inputList;
    
this->towerInfoPaintable= towerInfoPaintable;
    
this->rtsPlayerLayerInterface= rtsPlayerLayerInterface;
    
this->selectedRTSLayerPlayerGameInput= new SelectedRTSLayersPlayerGameInput(this->getRTSLayerInfoPaintable(), this->getRtsPlayerLayerInterface(), this->inputList, playerInputId, selectRTSLayerVisitorFactoryInterface);
    

                        if(this->rtsPlayerLayerInterface != NullRTSLayer::NULL_RTS_LAYER)
                        
                                    {
                                    this->setSelectedRtsFormInput(this->rtsPlayerLayerInterface->getRTSFormInput());
    

                                    }
                                

    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(this->gameCanvas->getLayerManager());;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    
this->scrollPlayerGameInput= new ScrollMapPlayerGameInput(geographicMapInterface, this->inputList, playerInputId);
    
this->layerPositionFinderInterface= layerPositionFinderInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto RTSPlayerGameInput::setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager) -> void{
this->selectedRTSLayerPlayerGameInput->setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    

                        if(this->selectedRtsFormInput != NullRTSFormInputFactory::getInstance())
                        
                                    {
                                    this->selectedRtsFormInput->setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    

                                    }
                                
}


    auto RTSPlayerGameInput::onDisplayChangeEvent(DisplayChangeEvent* displayChangeEvent) -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, "onDisplayChangeEvent");
    
this->getRTSLayerInfoPaintable()->update();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "onDisplayChangeEvent", &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto RTSPlayerGameInput::left() -> void{
this->rtsPlayerLayerInterface->getCurrentScrollSelectionForm()->processInputKey(Canvas::LEFT);
    
}


                //@Throws(Exception.constructor)
            
    auto RTSPlayerGameInput::right() -> void{
this->rtsPlayerLayerInterface->getCurrentScrollSelectionForm()->processInputKey(Canvas::RIGHT);
    
}


    auto RTSPlayerGameInput::initInputProcessors() -> void{
this->inputProcessorArray[Canvas::LEFT]= new RTSPlayerLeftGameInputProcessor(this);
    
this->inputProcessorArray[Canvas::KEY_NUM0]= this->inputProcessorArray[Canvas::LEFT];
    
this->inputProcessorArray[Canvas::RIGHT]= new RTSPlayerRightGameInputProcessor(this);
    
this->inputProcessorArray[Canvas::KEY_POUND]= this->inputProcessorArray[Canvas::RIGHT];
    
this->removeInputProcessorArray[Canvas::KEY_NUM1]= new RTSPlayerFireGameInputProcessor(this);
    
this->removeInputProcessorArray[Canvas::KEY_NUM3]= this->removeInputProcessorArray[Canvas::KEY_NUM1];
    
this->removeInputProcessorArray[Canvas::KEY_NUM3]= this->removeInputProcessorArray[Canvas::KEY_NUM1];
    
this->removeInputProcessorArray[Canvas::LEFT]= this->removeInputProcessorArray[Canvas::KEY_NUM1];
    
this->removeInputProcessorArray[Canvas::RIGHT]= this->removeInputProcessorArray[Canvas::KEY_NUM1];
    
this->removeInputProcessorArray[Canvas::KEY_NUM0]= this->removeInputProcessorArray[Canvas::KEY_NUM1];
    
this->removeInputProcessorArray[Canvas::KEY_POUND]= this->removeInputProcessorArray[Canvas::KEY_NUM1];
    
GameInputProcessorUtil::init(this->inputProcessorArray);
    
GameInputProcessorUtil::init(this->removeInputProcessorArray);
    
}


                //@Throws(Exception.constructor)
            
    auto RTSPlayerGameInput::processInput(AllBinaryLayerManager* layerManager) -> void{

        try {
            this->processMotionInput(layerManager);
    

    int32_t size = this->inputList->size();;
    

    int32_t key = 0;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GameKeyEvent* gameKeyEvent = dynamic_cast<GameKeyEvent*>(this->inputList->get(index));;
    
key= gameKeyEvent->getKey();
    
this->getScrollPlayerGameInput()->processInputKey(key);
    
this->getSelectedBuildingPlayerGameInput()->processInputKey(key);
    
this->inputProcessorArray[key]->processEvent(layerManager, gameKeyEvent);
    
this->removeInputProcessorArray[key]->processEvent(layerManager, gameKeyEvent);
    
}


                        if(this->isIsSingleKeyProcessing())
                        
                                    {
                                    this->clear();
    

                                    }
                                
                        else {
                            this->update();
    

                        }
                            

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->gameInputStrings->PROCESS_INPUT, &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto RTSPlayerGameInput::processMotionInput(AllBinaryLayerManager* layerManager) -> void{
}


                //@Throws(Exception.constructor)
            
    auto RTSPlayerGameInput::select(MotionGestureEvent* motionGestureEvent) -> void{

    GPoint* point = motionGestureEvent->getCurrentPoint();;
    

    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(this->gameCanvas->getLayerManager());;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    

    AllBinaryTiledLayer* allBinaryTiledLayer = geographicMapInterface->getAllBinaryTiledLayer();;
    

    int32_t x = point->getX() +allBinaryTiledLayer->getXP();;
    

    int32_t y = point->getY() +allBinaryTiledLayer->getYP();;
    

    GeographicMapCellPosition* geographicMapCellPosition = geographicMapInterface->getCellPositionAtXYNoThrow(x, y);;
    

                        if(geographicMapCellPosition != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    SecondaryPlayerQueueFactory::getInstance()->add(SelectSound::getInstance());
    

    AllBinaryLayer* layer = this->layerPositionFinderInterface->getLayerInterface(geographicMapCellPosition);;
    

                        if(layer == AllBinaryLayer::NULL_ALLBINARY_LAYER)
                        
                                    {
                                    layer= CollidableDestroyableDamageableLayer::getNullInstance();
    

                                    }
                                
                        else {
                            geographicMapCellPosition= geographicMapInterface->getCellPositionAtXY(layer->getXP(), layer->getYP());
    

                        }
                            

    CollidableDestroyableDamageableLayer* foundRTSLayer = dynamic_cast<CollidableDestroyableDamageableLayer*>(layer);;
    
this->setSelectedRTSLayer(foundRTSLayer, geographicMapCellPosition);
    

                                    }
                                
                        else {
                            
    CommonLabels* commonLabels = CommonLabels::getInstance();;
    
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append("Off Of Map -")->append(commonLabels->WIDTH_LABEL)->appendint(allBinaryTiledLayer->getWidth())->append(commonLabels->HEIGHT_LABEL)->appendint(allBinaryTiledLayer->getHeight())), this, "select");
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto RTSPlayerGameInput::setSelectedRTSLayer(CollidableDestroyableDamageableLayer* rtsLayer, GeographicMapCellPosition* geographicMapCellPosition) -> void{
this->getSelectedBuildingPlayerGameInput()->setSelectedRTSLayer(rtsLayer);
    
}


    auto RTSPlayerGameInput::paint(Graphics* graphics) -> void{

    GeographicMapCellPosition* geographicMapCellPosition = this->getSelectedRtsFormInput()->getSelectedGeographicCellPosition();;
    

    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(this->gameCanvas->getLayerManager());;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    

    AllBinaryTiledLayer* allBinaryTiledLayer = geographicMapInterface->getAllBinaryTiledLayer();;
    
graphics->setColor(BasicColorFactory::getInstance()->GREEN->intValue());
    

    BasicArrayList* list = this->getSelectedBuildingPlayerGameInput()->getPaintSelectedRTSLayersList();;
    

    int32_t width = 0;;
    

    int32_t height = 0;;
    

                        if(list->size() > 0)
                        
                                    {
                                    



                        for (
    int32_t index = list->size() -1;index >= 0; index--)
        {

    RTSLayer* rtsLayer = dynamic_cast<RTSLayer*>(list->get(index));;
    
width= rtsLayer->getWidth();
    
height= rtsLayer->getHeight();
    
graphics->drawRect(rtsLayer->getXP() -allBinaryTiledLayer->getXP(), rtsLayer->getYP() -allBinaryTiledLayer->getYP(), width, height);
    
}


                                    }
                                
                             else 
                        if(geographicMapCellPosition != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    
    GPoint* point = geographicMapCellPosition->getPoint();;
    
width= allBinaryTiledLayer->getCellWidth();
    
height= allBinaryTiledLayer->getCellHeight();
    
graphics->drawRect(point->getX() -allBinaryTiledLayer->getXP(), point->getY() -allBinaryTiledLayer->getYP(), width, height);
    

                                    }
                                
}


    auto RTSPlayerGameInput::updatePaintable() -> void{
}


    auto RTSPlayerGameInput::getSelectedBuildingPlayerGameInput() -> SelectedRTSLayersPlayerGameInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->selectedRTSLayerPlayerGameInput;
    
}


    auto RTSPlayerGameInput::getSelectedRtsFormInput() -> RTSFormInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->selectedRtsFormInput;
    
}


    auto RTSPlayerGameInput::setSelectedRtsFormInput(RTSFormInput* selectedRtsFormInput) -> void{
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append("RTSFormInput: ")->append(StringUtil::getInstance()->toString(selectedRtsFormInput))), this, "setSelectedRtsFormInput");
    
this->selectedRtsFormInput= selectedRtsFormInput;
    
}


    auto RTSPlayerGameInput::getRtsPlayerLayerInterface() -> RTSPlayerLayerInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rtsPlayerLayerInterface;
    
}


    auto RTSPlayerGameInput::getRTSLayerInfoPaintable() -> RTSLayerInfoPaintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->towerInfoPaintable;
    
}


    auto RTSPlayerGameInput::getMotionGestureInputList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->motionGestureInputList;
    
}


    auto RTSPlayerGameInput::getGameCanvas() -> AllBinaryGameCanvas*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gameCanvas;
    
}


    auto RTSPlayerGameInput::isIsSingleKeyProcessing() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->isSingleKeyProcessing;
    
}


    auto RTSPlayerGameInput::getScrollPlayerGameInput() -> ScrollMapPlayerGameInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->scrollPlayerGameInput;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_RTSPLAYERGAMEINPUT_CPP
