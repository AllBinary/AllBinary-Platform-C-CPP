
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
        

    const inputProcessorArray: std::vector<GameInputProcessor> = new Array(InputFactory.getInstance()!.MAX);

    const removeInputProcessorArray: std::vector<GameInputProcessor> = new Array(InputFactory.getInstance()!.MAX);

    private: const inputList: BasicArrayList;

    private: const isSingleKeyProcessing: bool = Features.getInstance()!.isFeature(InputFeatureFactory.getInstance()!.SINGLE_KEY_REPEAT_PRESS) || Features.getInstance()!.isFeature(InputFeatureFactory.getInstance()!.SINGLE_KEY_PRESS);

    private: const gameCanvas: AllBinaryGameCanvas;

    private: const motionGestureInputList: BasicArrayList = new BasicArrayListD();

    private: const scrollPlayerGameInput: ScrollMapPlayerGameInput;

    private: const selectedRTSLayerPlayerGameInput: SelectedRTSLayersPlayerGameInput;

    private: const towerInfoPaintable: RTSLayerInfoPaintable;

    private: const rtsPlayerLayerInterface: RTSPlayerLayerInterface;

    private: const layerPositionFinderInterface: LayerPositionFinderInterface;

    private: selectedRtsFormInput: RTSFormInput = NullRTSFormInputFactory.getInstance()!;

public constructor (AllBinaryGameCanvas gameCanvas, BasicArrayList inputList, int32_t playerInputId, RTSLayerInfoPaintable towerInfoPaintable, RTSPlayerLayerInterface rtsPlayerLayerInterface, LayerPositionFinderInterface layerPositionFinderInterface, SelectRTSLayerVisitorFactoryInterface selectRTSLayerVisitorFactoryInterface){
            super(inputList, new BasicArrayListD(), playerInputId);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.initInputProcessors();
    
this.gameCanvas= gameCanvas;
    
this.inputList= inputList;
    
this.towerInfoPaintable= towerInfoPaintable;
    
this.rtsPlayerLayerInterface= rtsPlayerLayerInterface;
    
this.selectedRTSLayerPlayerGameInput= new SelectedRTSLayersPlayerGameInput(this.getRTSLayerInfoPaintable(), this.getRtsPlayerLayerInterface(), this.inputList, playerInputId, selectRTSLayerVisitorFactoryInterface);
    

                        if(this.rtsPlayerLayerInterface != NullRTSLayer.NULL_RTS_LAYER)
                        
                                    {
                                    this.setSelectedRtsFormInput(this.rtsPlayerLayerInterface!.getRTSFormInput());
    

                                    }
                                

    geographicMapCompositeInterface: GeographicMapCompositeInterface = this.gameCanvas!.getLayerManager() as GeographicMapCompositeInterface;;
    

    geographicMapInterface: BasicGeographicMap = geographicMapCompositeInterface!.getGeographicMapInterface()[0]!;;
    
this.scrollPlayerGameInput= new ScrollMapPlayerGameInput(geographicMapInterface, this.inputList, playerInputId);
    
this.layerPositionFinderInterface= layerPositionFinderInterface;
    
}


                //@Throws(Exception.constructor)
            
    public setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){
this.selectedRTSLayerPlayerGameInput!.setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    

                        if(this.selectedRtsFormInput != NullRTSFormInputFactory.getInstance())
                        
                                    {
                                    this.selectedRtsFormInput!.setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    

                                    }
                                
}


    public onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, "onDisplayChangeEvent");
    
this.getRTSLayerInfoPaintable()!.update();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "onDisplayChangeEvent", e);
    
}

}


                //@Throws(Exception.constructor)
            
    left(){
this.rtsPlayerLayerInterface!.getCurrentScrollSelectionForm()!.processInputKey(Canvas.LEFT);
    
}


                //@Throws(Exception.constructor)
            
    right(){
this.rtsPlayerLayerInterface!.getCurrentScrollSelectionForm()!.processInputKey(Canvas.RIGHT);
    
}


    public initInputProcessors(){
this.inputProcessorArray[Canvas.LEFT]= new RTSPlayerLeftGameInputProcessor(this);
    
this.inputProcessorArray[Canvas.KEY_NUM0]= this.inputProcessorArray[Canvas.LEFT]!;
    
this.inputProcessorArray[Canvas.RIGHT]= new RTSPlayerRightGameInputProcessor(this);
    
this.inputProcessorArray[Canvas.KEY_POUND]= this.inputProcessorArray[Canvas.RIGHT]!;
    
this.removeInputProcessorArray[Canvas.KEY_NUM1]= new RTSPlayerFireGameInputProcessor(this);
    
this.removeInputProcessorArray[Canvas.KEY_NUM3]= this.removeInputProcessorArray[Canvas.KEY_NUM1]!;
    
this.removeInputProcessorArray[Canvas.KEY_NUM3]= this.removeInputProcessorArray[Canvas.KEY_NUM1]!;
    
this.removeInputProcessorArray[Canvas.LEFT]= this.removeInputProcessorArray[Canvas.KEY_NUM1]!;
    
this.removeInputProcessorArray[Canvas.RIGHT]= this.removeInputProcessorArray[Canvas.KEY_NUM1]!;
    
this.removeInputProcessorArray[Canvas.KEY_NUM0]= this.removeInputProcessorArray[Canvas.KEY_NUM1]!;
    
this.removeInputProcessorArray[Canvas.KEY_POUND]= this.removeInputProcessorArray[Canvas.KEY_NUM1]!;
    
GameInputProcessorUtil.init(this.inputProcessorArray);
    
GameInputProcessorUtil.init(this.removeInputProcessorArray);
    
}


                //@Throws(Exception.constructor)
            
    public processInput(AllBinaryLayerManager layerManager){

        try {
            this.processMotionInput(layerManager);
    

    size: int32_t = this.inputList!.size()!;;
    

    key: int32_t = 0;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    gameKeyEvent: GameKeyEvent = this.inputList!.get(index) as GameKeyEvent;;
    
key= gameKeyEvent!.getKey();
    
this.getScrollPlayerGameInput()!.processInputKey(key);
    
this.getSelectedBuildingPlayerGameInput()!.processInputKey(key);
    
this.inputProcessorArray[key]!.processEvent(layerManager, gameKeyEvent);
    
this.removeInputProcessorArray[key]!.processEvent(layerManager, gameKeyEvent);
    
}


                        if(this.isIsSingleKeyProcessing())
                        
                                    {
                                    this.clear();
    

                                    }
                                
                        else {
                            this.update();
    

                        }
                            

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.gameInputStrings!.PROCESS_INPUT, e);
    
}

}


                //@Throws(Exception.constructor)
            
    public processMotionInput(AllBinaryLayerManager layerManager){
}


                //@Throws(Exception.constructor)
            
    select(MotionGestureEvent motionGestureEvent){

    point: GPoint = motionGestureEvent!.getCurrentPoint()!;;
    

    geographicMapCompositeInterface: GeographicMapCompositeInterface = this.gameCanvas!.getLayerManager() as GeographicMapCompositeInterface;;
    

    geographicMapInterface: BasicGeographicMap = geographicMapCompositeInterface!.getGeographicMapInterface()[0]!;;
    

    allBinaryTiledLayer: AllBinaryTiledLayer = geographicMapInterface!.getAllBinaryTiledLayer()!;;
    

    x: int32_t = point.getX() +allBinaryTiledLayer!.getXP();;
    

    y: int32_t = point.getY() +allBinaryTiledLayer!.getYP();;
    

    geographicMapCellPosition: GeographicMapCellPosition = geographicMapInterface!.getCellPositionAtXYNoThrow(x, y)!;;
    

                        if(geographicMapCellPosition != SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    SecondaryPlayerQueueFactory.getInstance()!.add(SelectSound.getInstance());
    

    layer: AllBinaryLayer = this.layerPositionFinderInterface!.getLayerInterface(geographicMapCellPosition)!;;
    

                        if(layer == AllBinaryLayer.NULL_ALLBINARY_LAYER)
                        
                                    {
                                    layer= CollidableDestroyableDamageableLayer.getNullInstance();
    

                                    }
                                
                        else {
                            geographicMapCellPosition= geographicMapInterface!.getCellPositionAtXY(layer.getXP(), layer.getYP());
    

                        }
                            

    foundRTSLayer: CollidableDestroyableDamageableLayer = layer as CollidableDestroyableDamageableLayer;;
    
this.setSelectedRTSLayer(foundRTSLayer, geographicMapCellPosition);
    

                                    }
                                
                        else {
                            
    commonLabels: CommonLabels = CommonLabels.getInstance()!;;
    
this.logUtil!.putF(new StringMaker().append("Off Of Map -")!.append(commonLabels!.WIDTH_LABEL)!.appendint(allBinaryTiledLayer!.getWidth())!.append(commonLabels!.HEIGHT_LABEL)!.appendint(allBinaryTiledLayer!.getHeight())!.toString(), this, "select");
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public setSelectedRTSLayer(CollidableDestroyableDamageableLayer rtsLayer, GeographicMapCellPosition geographicMapCellPosition){
this.getSelectedBuildingPlayerGameInput()!.setSelectedRTSLayer(rtsLayer);
    
}


    public paint(Graphics graphics){

    geographicMapCellPosition: GeographicMapCellPosition = this.getSelectedRtsFormInput()!.getSelectedGeographicCellPosition()!;;
    

    geographicMapCompositeInterface: GeographicMapCompositeInterface = this.gameCanvas!.getLayerManager() as GeographicMapCompositeInterface;;
    

    geographicMapInterface: BasicGeographicMap = geographicMapCompositeInterface!.getGeographicMapInterface()[0]!;;
    

    allBinaryTiledLayer: AllBinaryTiledLayer = geographicMapInterface!.getAllBinaryTiledLayer()!;;
    
graphics.setColor(BasicColorFactory.getInstance()!.GREEN.intValue());
    

    list: BasicArrayList = this.getSelectedBuildingPlayerGameInput()!.getPaintSelectedRTSLayersList()!;;
    

    width: int32_t = 0;;
    

    height: int32_t = 0;;
    

                        if(list.size() > 0)
                        
                                    {
                                    



                        for (
    index: int32_t = list.size() -1;index >= 0; index--)
        {

    rtsLayer: RTSLayer = list.get(index) as RTSLayer;;
    
width= rtsLayer!.getWidth();
    
height= rtsLayer!.getHeight();
    
graphics.drawRect(rtsLayer!.getXP() -allBinaryTiledLayer!.getXP(), rtsLayer!.getYP() -allBinaryTiledLayer!.getYP(), width, height);
    
}


                                    }
                                
                             else 
                        if(geographicMapCellPosition != SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    
    point: GPoint = geographicMapCellPosition!.getPoint()!;;
    
width= allBinaryTiledLayer!.getCellWidth();
    
height= allBinaryTiledLayer!.getCellHeight();
    
graphics.drawRect(point.getX() -allBinaryTiledLayer!.getXP(), point.getY() -allBinaryTiledLayer!.getYP(), width, height);
    

                                    }
                                
}


    public updatePaintable(){
}


    public SelectedRTSLayersPlayerGameInput getSelectedBuildingPlayerGameInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.selectedRTSLayerPlayerGameInput;
    
}


    public RTSFormInput getSelectedRtsFormInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.selectedRtsFormInput;
    
}


    public setSelectedRtsFormInput(RTSFormInput selectedRtsFormInput){
this.logUtil!.putF(new StringMaker().append("RTSFormInput: ")!.append(StringUtil.getInstance()!.toString(selectedRtsFormInput))!.toString(), this, "setSelectedRtsFormInput");
    
this.selectedRtsFormInput= selectedRtsFormInput;
    
}


    public RTSPlayerLayerInterface getRtsPlayerLayerInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rtsPlayerLayerInterface;
    
}


    public RTSLayerInfoPaintable getRTSLayerInfoPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.towerInfoPaintable;
    
}


    public BasicArrayList getMotionGestureInputList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.motionGestureInputList;
    
}


    AllBinaryGameCanvas getGameCanvas(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameCanvas;
    
}


    public bool isIsSingleKeyProcessing(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isSingleKeyProcessing;
    
}


    public ScrollMapPlayerGameInput getScrollPlayerGameInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.scrollPlayerGameInput;
    
}


};

            

