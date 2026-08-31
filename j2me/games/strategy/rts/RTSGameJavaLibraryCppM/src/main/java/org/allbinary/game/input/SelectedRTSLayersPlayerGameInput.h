
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_SELECTEDRTSLAYERSPLAYERGAMEINPUT_H
        #define ORG_ALLBINARY_GAME_INPUT_SELECTEDRTSLAYERSPLAYERGAMEINPUT_H

            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/layer/RTSGameStrings.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/RTSLayerInfoPaintable.h>

      
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/layer/capital/Capital.h>

      
#include <org/allbinary/media/audio/DowngradeSound.h>

      
#include <org/allbinary/media/audio/UpgradeSound.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/media/audio/ErrorSound.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PlayerGameInput.h"
#include "InputFactory.h"
#include "GameInputProcessor.h"
#include "SelectRTSLayerVisitorFactoryInterface.h"
#include "RTSPlayerGameInput.h"
#include "SelectedRTSLayersPlayerUpgradeGameInputProcessor.h"
#include "SelectedRTSLayersPlayerDowngradeGameInputProcessor.h"
#include "GameInputProcessorUtil.h"

class SelectedRTSLayersPlayerGameInput: public PlayerGameInput {
        

    const inputProcessorArray: std::vector<GameInputProcessor> = new Array(InputFactory.getInstance()!.MAX);

    private: const list: BasicArrayList;

    const isSingleKeyProcessing: bool = Features.getInstance()!.isFeature(InputFeatureFactory.getInstance()!.SINGLE_KEY_REPEAT_PRESS) || Features.getInstance()!.isFeature(InputFeatureFactory.getInstance()!.SINGLE_KEY_PRESS);

    private: selectedRTSLayersList: BasicArrayList = new BasicArrayListD();

    private: preSelectedRTSLayersList: BasicArrayList = new BasicArrayListD();

    private: paintSelectedRTSLayersList: BasicArrayList = BasicArrayListUtil.getInstance()!.getImmutableInstance()!;

    private: rtsPlayerLayerInterface: RTSPlayerLayerInterface;

    private: const selectRTSLayerVisitorInterface: Visitor;

    private: const upgradeGameNotificationEvent: GameNotificationEvent;

    private: const noMoneyGameNotificationEvent: GameNotificationEvent;

    private: const downgradeGameNotificationEvent: GameNotificationEvent;

public constructor (RTSLayerInfoPaintable towerInfoPaintable, RTSPlayerLayerInterface rtsPlayerLayerInterface, BasicArrayList list, int32_t playerInputId, SelectRTSLayerVisitorFactoryInterface selectRTSLayerVisitorFactoryInterface);

                //@Throws(Exception.constructor)
            
    public setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager);

    public bool isSelected(RTSLayer rtsLayer);

                //@Throws(Exception.constructor)
            
    upgrade();

                //@Throws(Exception.constructor)
            
    downgrade();

    public initInputProcessors();

                //@Throws(Exception.constructor)
            
    public processInputKey(int32_t key);

                //@Throws(Exception.constructor)
            
    public processInput(AllBinaryLayerManager layerManager);

    public BasicArrayList getSelectedBasicArrayList();

    public addSelectedRTSLayer(RTSLayer selectedLayer);

    public setSelectedRTSLayer(CollidableDestroyableDamageableLayer selectedLayer);

    public CollidableDestroyableDamageableLayer getLastSelectedRtsLayer();

    public selectAllPreselected();

    public deselectAllPreselected();

    public deselectAll();

    public bool isAnyRTSLayerSelected();

    public BasicArrayList getPaintSelectedRTSLayersList();

    public BasicArrayList getPreSelectedRTSLayersList();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_SELECTEDRTSLAYERSPLAYERGAMEINPUT_H
