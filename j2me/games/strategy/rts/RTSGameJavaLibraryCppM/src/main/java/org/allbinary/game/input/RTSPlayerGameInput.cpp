
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
        



            #include <vector>
        
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
        #include "PlayerGameInput.h"
#include "InputFactory.h"
#include "GameInputProcessor.h"
#include "ScrollMapPlayerGameInput.h"
#include "SelectedRTSLayersPlayerGameInput.h"
#include "LayerPositionFinderInterface.h"
#include "SelectRTSLayerVisitorFactoryInterface.h"
#include "RTSPlayerLeftGameInputProcessor.h"
#include "RTSPlayerRightGameInputProcessor.h"
#include "RTSPlayerFireGameInputProcessor.h"
#include "GameInputProcessorUtil.h"

class RTSPlayerGameInput: public PlayerGameInput {

    protected: const std::vector<GameInputProcessor> inputProcessorArray = std::vector<GameInputProcessor>(InputFactory::getInstance().MAX);

    protected: const std::vector<GameInputProcessor> removeInputProcessorArray = std::vector<GameInputProcessor>(InputFactory::getInstance().MAX);

    private: BasicArrayList inputList;

    private: const bool isSingleKeyProcessing = Features::getInstance().isFeature(InputFeatureFactory::getInstance().SINGLE_KEY_REPEAT_PRESS) || Features::getInstance().isFeature(InputFeatureFactory::getInstance().SINGLE_KEY_PRESS);

    private: AllBinaryGameCanvas gameCanvas;

    private: const BasicArrayList motionGestureInputList = BasicArrayListD();

    private: ScrollMapPlayerGameInput scrollPlayerGameInput;

    private: SelectedRTSLayersPlayerGameInput selectedRTSLayerPlayerGameInput;

    private: RTSLayerInfoPaintable towerInfoPaintable;

    private: RTSPlayerLayerInterface rtsPlayerLayerInterface;

    private: LayerPositionFinderInterface layerPositionFinderInterface;

    private: RTSFormInput selectedRtsFormInput = NullRTSFormInputFactory::getInstance();

public: RTSPlayerGameInput(AllBinaryGameCanvas gameCanvas, BasicArrayList inputList, int32_t playerInputId, RTSLayerInfoPaintable towerInfoPaintable, RTSPlayerLayerInterface rtsPlayerLayerInterface, LayerPositionFinderInterface layerPositionFinderInterface, SelectRTSLayerVisitorFactoryInterface selectRTSLayerVisitorFactoryInterface) : PlayerGameInput(inputList, BasicArrayListD(), playerInputId){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initInputProcessors();
    
this->gameCanvas= gameCanvas;
    
this->inputList= inputList;
    
this->towerInfoPaintable= towerInfoPaintable;
    
this->rtsPlayerLayerInterface= rtsPlayerLayerInterface;
    
this->selectedRTSLayerPlayerGameInput= SelectedRTSLayersPlayerGameInput(this->getRTSLayerInfoPaintable(), this->getRtsPlayerLayerInterface(), this->inputList, playerInputId, selectRTSLayerVisitorFactoryInterface);
    

                        if(this->rtsPlayerLayerInterface != NullRTSLayer::NULL_RTS_LAYER)
                        
                                    {
                                    this->setSelectedRtsFormInput(this->rtsPlayerLayerInterface.getRTSFormInput());
    

                                    }
                                

    GeographicMapCompositeInterface geographicMapCompositeInterface = this->gameCanvas.getLayerManager();;
    

    BasicGeographicMap geographicMapInterface = geographicMapCompositeInterface.getGeographicMapInterface()[0];;
    
this->scrollPlayerGameInput= ScrollMapPlayerGameInput(geographicMapInterface, this->inputList, playerInputId);
    
this->layerPositionFinderInterface= layerPositionFinderInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){
this->selectedRTSLayerPlayerGameInput.setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    

                        if(this->selectedRtsFormInput != NullRTSFormInputFactory::getInstance())
                        
                                    {
                                    this->selectedRtsFormInput.setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    

                                    }
                                
}


    public: void onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent){

        try {
            this->logUtil.putF(this->commonStrings.START, this, "onDisplayChangeEvent");
    
this->getRTSLayerInfoPaintable().update();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "onDisplayChangeEvent", e);
    
}

}


                //@Throws(Exception.constructor)
            
    protected: void left(){
this->rtsPlayerLayerInterface.getCurrentScrollSelectionForm().processInputKey(Canvas::LEFT);
    
}


                //@Throws(Exception.constructor)
            
    protected: void right(){
this->rtsPlayerLayerInterface.getCurrentScrollSelectionForm().processInputKey(Canvas::RIGHT);
    
}


    public: void initInputProcessors(){
this->inputProcessorArray[Canvas::LEFT]= RTSPlayerLeftGameInputProcessor(this);
    
this->inputProcessorArray[Canvas::KEY_NUM0]= this->inputProcessorArray[Canvas::LEFT];
    
this->inputProcessorArray[Canvas::RIGHT]= RTSPlayerRightGameInputProcessor(this);
    
this->inputProcessorArray[Canvas::KEY_POUND]= this->inputProcessorArray[Canvas::RIGHT];
    
this->removeInputProcessorArray[Canvas::KEY_NUM1]= RTSPlayerFireGameInputProcessor(this);
    
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
            
    public: void processInput(AllBinaryLayerManager layerManager){

        try {
            this->processMotionInput(layerManager);
    

    int32_t size = this->inputList.size();;
    

    int32_t key = 0;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GameKeyEvent gameKeyEvent = this->inputList.get(index);;
    
key= gameKeyEvent.getKey();
    
this->getScrollPlayerGameInput().processInputKey(key);
    
this->getSelectedBuildingPlayerGameInput().processInputKey(key);
    
this->inputProcessorArray[key].processEvent(layerManager, gameKeyEvent);
    
this->removeInputProcessorArray[key].processEvent(layerManager, gameKeyEvent);
    
}


                        if(this->isIsSingleKeyProcessing())
                        
                                    {
                                    this->clear();
    

                                    }
                                
                        else {
                            this->update();
    

                        }
                            

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->gameInputStrings.PROCESS_INPUT, e);
    
}

}


                //@Throws(Exception.constructor)
            
    public: void processMotionInput(AllBinaryLayerManager layerManager){
}


                //@Throws(Exception.constructor)
            
    protected: void select(MotionGestureEvent motionGestureEvent){

    GPoint point = motionGestureEvent.getCurrentPoint();;
    

    GeographicMapCompositeInterface geographicMapCompositeInterface = this->gameCanvas.getLayerManager();;
    

    BasicGeographicMap geographicMapInterface = geographicMapCompositeInterface.getGeographicMapInterface()[0];;
    

    AllBinaryTiledLayer allBinaryTiledLayer = geographicMapInterface.getAllBinaryTiledLayer();;
    

    int32_t x = point.getX() +allBinaryTiledLayer.getXP();;
    

    int32_t y = point.getY() +allBinaryTiledLayer.getYP();;
    

    GeographicMapCellPosition geographicMapCellPosition = geographicMapInterface.getCellPositionAtXYNoThrow(x, y);;
    

                        if(geographicMapCellPosition != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    SecondaryPlayerQueueFactory::getInstance().add(SelectSound::getInstance());
    

    AllBinaryLayer layer = this->layerPositionFinderInterface.getLayerInterface(geographicMapCellPosition);;
    

                        if(layer == AllBinaryLayer::NULL_ALLBINARY_LAYER)
                        
                                    {
                                    layer= CollidableDestroyableDamageableLayer::getNullInstance();
    

                                    }
                                
                        else {
                            geographicMapCellPosition= geographicMapInterface.getCellPositionAtXY(layer.getXP(), layer.getYP());
    

                        }
                            

    CollidableDestroyableDamageableLayer foundRTSLayer = layer;;
    
this->setSelectedRTSLayer(foundRTSLayer, geographicMapCellPosition);
    

                                    }
                                
                        else {
                            
    CommonLabels commonLabels = CommonLabels::getInstance();;
    
this->logUtil.putF(StringMaker().append("Off Of Map -").append(commonLabels.WIDTH_LABEL).appendint(allBinaryTiledLayer.getWidth()).append(commonLabels.HEIGHT_LABEL).appendint(allBinaryTiledLayer.getHeight()).toString(), this, "select");
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: void setSelectedRTSLayer(CollidableDestroyableDamageableLayer rtsLayer, GeographicMapCellPosition geographicMapCellPosition){
this->getSelectedBuildingPlayerGameInput().setSelectedRTSLayer(rtsLayer);
    
}


    public: void paint(Graphics graphics){

    GeographicMapCellPosition geographicMapCellPosition = this->getSelectedRtsFormInput().getSelectedGeographicCellPosition();;
    

    GeographicMapCompositeInterface geographicMapCompositeInterface = this->gameCanvas.getLayerManager();;
    

    BasicGeographicMap geographicMapInterface = geographicMapCompositeInterface.getGeographicMapInterface()[0];;
    

    AllBinaryTiledLayer allBinaryTiledLayer = geographicMapInterface.getAllBinaryTiledLayer();;
    
graphics.setColor(BasicColorFactory::getInstance().GREEN.intValue());
    

    BasicArrayList list = this->getSelectedBuildingPlayerGameInput().getPaintSelectedRTSLayersList();;
    

    int32_t width = 0;;
    

    int32_t height = 0;;
    

                        if(list.size() > 0)
                        
                                    {
                                    



                        for (
    int32_t index = list.size() -1;index >= 0; index--)
        {

    RTSLayer rtsLayer = list.get(index);;
    
width= rtsLayer.getWidth();
    
height= rtsLayer.getHeight();
    
graphics.drawRect(rtsLayer.getXP() -allBinaryTiledLayer.getXP(), rtsLayer.getYP() -allBinaryTiledLayer.getYP(), width, height);
    
}


                                    }
                                
                             else 
                        if(geographicMapCellPosition != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    
    GPoint point = geographicMapCellPosition.getPoint();;
    
width= allBinaryTiledLayer.getCellWidth();
    
height= allBinaryTiledLayer.getCellHeight();
    
graphics.drawRect(point.getX() -allBinaryTiledLayer.getXP(), point.getY() -allBinaryTiledLayer.getYP(), width, height);
    

                                    }
                                
}


    public: void updatePaintable(){
}


    public: SelectedRTSLayersPlayerGameInput getSelectedBuildingPlayerGameInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->selectedRTSLayerPlayerGameInput;
    
}


    public: RTSFormInput getSelectedRtsFormInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->selectedRtsFormInput;
    
}


    public: void setSelectedRtsFormInput(RTSFormInput selectedRtsFormInput){
this->logUtil.putF(StringMaker().append("RTSFormInput: ").append(StringUtil::getInstance().toString(selectedRtsFormInput)).toString(), this, "setSelectedRtsFormInput");
    
this->selectedRtsFormInput= selectedRtsFormInput;
    
}


    public: RTSPlayerLayerInterface getRtsPlayerLayerInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rtsPlayerLayerInterface;
    
}


    public: RTSLayerInfoPaintable getRTSLayerInfoPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->towerInfoPaintable;
    
}


    public: BasicArrayList getMotionGestureInputList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->motionGestureInputList;
    
}


    protected: AllBinaryGameCanvas getGameCanvas(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameCanvas;
    
}


    public: bool isIsSingleKeyProcessing(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isSingleKeyProcessing;
    
}


    public: ScrollMapPlayerGameInput getScrollPlayerGameInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scrollPlayerGameInput;
    
}


};

            

