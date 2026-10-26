
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *    Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AdvancedPlayerOwnedRTSLayers.h>

      
#include <org/allbinary/game/layer/AdvancedRTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/RTSLayerEvent.h>

      
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/layer/building/event/BuildingEventHandler.h>

      
#include <org/allbinary/game/layer/building/event/LocalPlayerBuildingEventHandler.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointCellPositionHistory.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/NullPathFindingLayer.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/media/audio/ErrorSound.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BuildingRTSFormInput.h"

class BuildingAdvancedRTSFormInput: public BuildingRTSFormInput {

    protected: GameNotificationEvent atLeastOneHouseGameNotificationEvent;

public: BuildingAdvancedRTSFormInput(std::vector<Group> groupInterface, bool isUnitProducer) : BuildingRTSFormInput(groupInterface, isUnitProducer){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    BasicColorFactory basicColorFactory = BasicColorFactory::getInstance();;
    
this->atLeastOneHouseGameNotificationEvent= GameNotificationEvent(this, "Build At Least One House First", SmallIntegerSingletonFactory::getInstance().getAt(2), basicColorFactory.WHITE, BooleanFactory::getInstance().FALSE);
    
}


                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){
super.setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    

    GeographicMapCompositeInterface geographicMapCompositeInterface = allBinaryGameLayerManager;;
    

    BasicGeographicMap geographicMapInterface = geographicMapCompositeInterface.getGeographicMapInterface()[0];;
    
this->atLeastOneHouseGameNotificationEvent.setBasicColorP(geographicMapInterface.getForegroundBasicColor());
    
}


    public: bool isPositionBlocked(){

                        if(DropCellPositionHistory::getInstance().isCellPositionWithDrop(this->getSelectedGeographicCellPosition()) || WaypointCellPositionHistory::getInstance().isCellPositionWithDrop(this->getSelectedGeographicCellPosition()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    protected: bool isBuildAttemptValid(RTSPlayerLayerInterface rtsPlayerLayerInterface, RTSLayer layerInterface){

    AdvancedRTSPlayerLayerInterface advancedRTSPlayerLayerInterface = rtsPlayerLayerInterface;;
    

    AdvancedPlayerOwnedRTSLayers advancedPlayerOwnedRTSLayers = advancedRTSPlayerLayerInterface.getAdvancedPlayerOwnedRTSLayers();;
    

    int32_t totalHouses = advancedPlayerOwnedRTSLayers.getHouseList().size();;
    

                        if(totalHouses < 1 && layerInterface.getName().indexOf(" House") < 0)
                        
                                    {
                                    rtsPlayerLayerInterface.add(ErrorSound::getInstance());
    

                        if(!rtsPlayerLayerInterface.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance().fireEvent(this->atLeastOneHouseGameNotificationEvent);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.isBuildAttemptValid(rtsPlayerLayerInterface, layerInterface);;
    
}


    private: const RTSLayerEvent BUILD_BUILDING_RTS_LAYER_EVENT = RTSLayerEvent(NullPathFindingLayer::NULL_PATH_FINDING_LAYER);

                //@Throws(Exception.constructor)
            
    protected: void add(RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, RTSLayer layerInterface){
this->BUILD_BUILDING_RTS_LAYER_EVENT.setRtsLayer(layerInterface);
    
BuildingEventHandler::getInstance().fireEvent(this->BUILD_BUILDING_RTS_LAYER_EVENT);
    

                        if((rtsPlayerLayerInterface).isLocalPlayer())
                        
                                    {
                                    LocalPlayerBuildingEventHandler::getInstance().fireEvent(this->BUILD_BUILDING_RTS_LAYER_EVENT);
    

                                    }
                                
super.add(rtsPlayerLayerInterface, layerManager, layerInterface);
    
}


};

            

