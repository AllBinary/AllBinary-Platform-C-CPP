
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

            #include <vector>
        
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

    protected: const std::vector<GameInputProcessor> inputProcessorArray = new Array(InputFactory::getInstance().MAX);

    protected: const std::vector<GameInputProcessor> removeInputProcessorArray = new Array(InputFactory::getInstance().MAX);

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

public: RTSPlayerGameInput(AllBinaryGameCanvas gameCanvas, BasicArrayList inputList, int32_t playerInputId, RTSLayerInfoPaintable towerInfoPaintable, RTSPlayerLayerInterface rtsPlayerLayerInterface, LayerPositionFinderInterface layerPositionFinderInterface, SelectRTSLayerVisitorFactoryInterface selectRTSLayerVisitorFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager);

    public: void onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent);

                //@Throws(Exception.constructor)
            
    protected: void left();

                //@Throws(Exception.constructor)
            
    protected: void right();

    public: void initInputProcessors();

                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager layerManager);

                //@Throws(Exception.constructor)
            
    public: void processMotionInput(AllBinaryLayerManager layerManager);

                //@Throws(Exception.constructor)
            
    protected: void select(MotionGestureEvent motionGestureEvent);

                //@Throws(Exception.constructor)
            
    public: void setSelectedRTSLayer(CollidableDestroyableDamageableLayer rtsLayer, GeographicMapCellPosition geographicMapCellPosition);

    public: void paint(Graphics graphics);

    public: void updatePaintable();

    public: SelectedRTSLayersPlayerGameInput getSelectedBuildingPlayerGameInput();

    public: RTSFormInput getSelectedRtsFormInput();

    public: void setSelectedRtsFormInput(RTSFormInput selectedRtsFormInput);

    public: RTSPlayerLayerInterface getRtsPlayerLayerInterface();

    public: RTSLayerInfoPaintable getRTSLayerInfoPaintable();

    public: BasicArrayList getMotionGestureInputList();

    protected: AllBinaryGameCanvas getGameCanvas();

    public: bool isIsSingleKeyProcessing();

    public: ScrollMapPlayerGameInput getScrollPlayerGameInput();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_RTSPLAYERGAMEINPUT_H
