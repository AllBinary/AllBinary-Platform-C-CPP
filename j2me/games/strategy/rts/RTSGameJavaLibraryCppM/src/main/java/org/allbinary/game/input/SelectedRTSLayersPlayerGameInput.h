
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

            #include <vector>
        
            #include "java/lang/Exception.h"
        
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

    protected: const std::vector<GameInputProcessor> inputProcessorArray = std::vector<GameInputProcessor>(InputFactory::getInstance().MAX);

    private: BasicArrayList list;

    protected: const bool isSingleKeyProcessing = Features::getInstance().isFeature(InputFeatureFactory::getInstance().SINGLE_KEY_REPEAT_PRESS) || Features::getInstance().isFeature(InputFeatureFactory::getInstance().SINGLE_KEY_PRESS);

    private: BasicArrayList selectedRTSLayersList = BasicArrayListD();

    private: BasicArrayList preSelectedRTSLayersList = BasicArrayListD();

    private: BasicArrayList paintSelectedRTSLayersList = BasicArrayListUtil::getInstance().getImmutableInstance();

    private: RTSPlayerLayerInterface rtsPlayerLayerInterface;

    private: Visitor selectRTSLayerVisitorInterface;

    private: GameNotificationEvent upgradeGameNotificationEvent;

    private: GameNotificationEvent noMoneyGameNotificationEvent;

    private: GameNotificationEvent downgradeGameNotificationEvent;

public: SelectedRTSLayersPlayerGameInput(RTSLayerInfoPaintable towerInfoPaintable, RTSPlayerLayerInterface rtsPlayerLayerInterface, BasicArrayList list, int32_t playerInputId, SelectRTSLayerVisitorFactoryInterface selectRTSLayerVisitorFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager);

    public: bool isSelected(RTSLayer rtsLayer);

                //@Throws(Exception.constructor)
            
    protected: void upgrade();

                //@Throws(Exception.constructor)
            
    protected: void downgrade();

    public: void initInputProcessors();

                //@Throws(Exception.constructor)
            
    public: void processInputKey(int32_t key);

                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager layerManager);

    public: BasicArrayList getSelectedBasicArrayList();

    public: void addSelectedRTSLayer(RTSLayer selectedLayer);

    public: void setSelectedRTSLayer(CollidableDestroyableDamageableLayer selectedLayer);

    public: CollidableDestroyableDamageableLayer getLastSelectedRtsLayer();

    public: void selectAllPreselected();

    public: void deselectAllPreselected();

    public: void deselectAll();

    public: bool isAnyRTSLayerSelected();

    public: BasicArrayList getPaintSelectedRTSLayersList();

    public: BasicArrayList getPreSelectedRTSLayersList();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_SELECTEDRTSLAYERSPLAYERGAMEINPUT_H
