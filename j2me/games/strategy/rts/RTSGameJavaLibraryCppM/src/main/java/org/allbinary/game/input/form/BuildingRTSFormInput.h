
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_BUILDINGRTSFORMINPUT_H
        #define ORG_ALLBINARY_GAME_INPUT_FORM_BUILDINGRTSFORMINPUT_H

            #include <vector>
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/game/input/RTSPlayerGameInput.h>

      
#include <org/allbinary/game/layer/DemoLockedWithCostLayerInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h>

      
#include <org/allbinary/game/layer/RTSGameStrings.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/layer/capital/Capital.h>

      
#include <org/allbinary/game/layer/item/LayerInterfaceFactoryImageItem.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/media/audio/BuildingSound.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedFeatureNotificationUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedUtil.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/audio/ErrorSound.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RTSFormInput.h"

class BuildingRTSFormInput: public RTSFormInput {

    private: bool isUnitProducer;

    private: GameNotificationEvent buildOnPathGameNotificationEvent;

    private: GameNotificationEvent spotTakenGameNotificationEvent;

    private: GameNotificationEvent selectBuildSpotGameNotificationEvent;

    private: GameNotificationEvent roadCollisionGameNotificationEvent;

    private: GameNotificationEvent noMoneyGameNotificationEvent;

    private: GameNotificationEvent buildingCollisionGameNotificationEvent;

    private: GameNotificationEvent structureToCloseCollisionGameNotificationEvent;

    private: GameNotificationEvent buildingGameNotificationEvent;

    private: GameNotificationEvent mapEdgeGameNotificationEvent;

    private: const DropCellPositionHistory dropCellPositionHistory = DropCellPositionHistory::getInstance();

public: BuildingRTSFormInput(std::vector<Group> groupInterface, bool isUnitProducer);

                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager);

                //@Throws(Exception.constructor)
            
    public: void processGameSpecific(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, ABCustomItem item, int32_t itemIndex);

    public: bool isPositionBlocked();

    private: bool isDemoLocked(ABCustomItem item);

                //@Throws(Exception.constructor)
            
    public: void buildFromMotionInput(RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, ABCustomItem item, int32_t itemIndex);

                //@Throws(Exception.constructor)
            
    protected: bool attemptBuild(RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, RTSLayer layerInterface, int32_t itemIndex);

                //@Throws(Exception.constructor)
            
    protected: bool isBuildAttemptValid(RTSPlayerLayerInterface rtsPlayerLayerInterface, RTSLayer layerInterface);

                //@Throws(Exception.constructor)
            
    protected: void add(RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, RTSLayer layerInterface);

    private: bool isSurroundingCellsOffMap(RTSLayer layerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_BUILDINGRTSFORMINPUT_H
