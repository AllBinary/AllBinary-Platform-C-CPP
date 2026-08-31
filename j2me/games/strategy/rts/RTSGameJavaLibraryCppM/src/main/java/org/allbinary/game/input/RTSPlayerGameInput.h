
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_RTSPLAYERGAMEINPUT_H
        #define ORG_ALLBINARY_GAME_INPUT_RTSPLAYERGAMEINPUT_H

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

public constructor (AllBinaryGameCanvas gameCanvas, BasicArrayList inputList, int32_t playerInputId, RTSLayerInfoPaintable towerInfoPaintable, RTSPlayerLayerInterface rtsPlayerLayerInterface, LayerPositionFinderInterface layerPositionFinderInterface, SelectRTSLayerVisitorFactoryInterface selectRTSLayerVisitorFactoryInterface);

                //@Throws(Exception.constructor)
            
    public setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager);

    public onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent);

                //@Throws(Exception.constructor)
            
    left();

                //@Throws(Exception.constructor)
            
    right();

    public initInputProcessors();

                //@Throws(Exception.constructor)
            
    public processInput(AllBinaryLayerManager layerManager);

                //@Throws(Exception.constructor)
            
    public processMotionInput(AllBinaryLayerManager layerManager);

                //@Throws(Exception.constructor)
            
    select(MotionGestureEvent motionGestureEvent);

                //@Throws(Exception.constructor)
            
    public setSelectedRTSLayer(CollidableDestroyableDamageableLayer rtsLayer, GeographicMapCellPosition geographicMapCellPosition);

    public paint(Graphics graphics);

    public updatePaintable();

    public SelectedRTSLayersPlayerGameInput getSelectedBuildingPlayerGameInput();

    public RTSFormInput getSelectedRtsFormInput();

    public setSelectedRtsFormInput(RTSFormInput selectedRtsFormInput);

    public RTSPlayerLayerInterface getRtsPlayerLayerInterface();

    public RTSLayerInfoPaintable getRTSLayerInfoPaintable();

    public BasicArrayList getMotionGestureInputList();

    AllBinaryGameCanvas getGameCanvas();

    public bool isIsSingleKeyProcessing();

    public ScrollMapPlayerGameInput getScrollPlayerGameInput();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_RTSPLAYERGAMEINPUT_H
