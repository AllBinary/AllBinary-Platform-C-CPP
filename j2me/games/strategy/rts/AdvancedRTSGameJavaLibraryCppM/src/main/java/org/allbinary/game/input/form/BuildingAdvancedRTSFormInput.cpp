
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_BUILDINGADVANCEDRTSFORMINPUT_CPP
        #define ORG_ALLBINARY_GAME_INPUT_FORM_BUILDINGADVANCEDRTSFORMINPUT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/form/BuildingAdvancedRTSFormInput.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/game/input/form/BuildingRTSFormInput.h"


BuildingAdvancedRTSFormInput::BuildingAdvancedRTSFormInput(std::vector<Group*> groupInterface, bool isUnitProducer) : BuildingRTSFormInput(groupInterface, isUnitProducer), BUILD_BUILDING_RTS_LAYER_EVENT(new RTSLayerEvent(NullPathFindingLayer::NULL_PATH_FINDING_LAYER)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    BasicColorFactory* basicColorFactory = BasicColorFactory::getInstance();;
    
this->atLeastOneHouseGameNotificationEvent= new GameNotificationEvent(this, "Build At Least One House First", SmallIntegerSingletonFactory::getInstance()->getAt(2), basicColorFactory->WHITE, BooleanFactory::getInstance()->FALSE);
    
}


                //@Throws(Exception.constructor)
            
    auto BuildingAdvancedRTSFormInput::setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager) -> void{
BuildingRTSFormInput::setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    

    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(allBinaryGameLayerManager);;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    
this->atLeastOneHouseGameNotificationEvent->setBasicColorP(geographicMapInterface->getForegroundBasicColor());
    
}


    auto BuildingAdvancedRTSFormInput::isPositionBlocked() -> bool{

                        if(DropCellPositionHistory::getInstance()->isCellPositionWithDrop(this->getSelectedGeographicCellPosition()) || WaypointCellPositionHistory::getInstance()->isCellPositionWithDrop(this->getSelectedGeographicCellPosition()))
                        
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
            
    auto BuildingAdvancedRTSFormInput::isBuildAttemptValid(RTSPlayerLayerInterface* rtsPlayerLayerInterface, RTSLayer* layerInterface) -> bool{

    AdvancedRTSPlayerLayerInterface* advancedRTSPlayerLayerInterface = dynamic_cast<AdvancedRTSPlayerLayerInterface*>(rtsPlayerLayerInterface);;
    

    AdvancedPlayerOwnedRTSLayers* advancedPlayerOwnedRTSLayers = advancedRTSPlayerLayerInterface->getAdvancedPlayerOwnedRTSLayers();;
    

    int32_t totalHouses = advancedPlayerOwnedRTSLayers->getHouseList()->size();;
    

                        if(totalHouses < 1 && JavaString::indexOf(layerInterface->getName(), " House") < 0)
                        
                                    {
                                    rtsPlayerLayerInterface->add(ErrorSound::getInstance());
    

                        if(!rtsPlayerLayerInterface->implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance()->fireEvent(this->atLeastOneHouseGameNotificationEvent);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BuildingRTSFormInput::isBuildAttemptValid(rtsPlayerLayerInterface, layerInterface);;
    
}


                //@Throws(Exception.constructor)
            
    auto BuildingAdvancedRTSFormInput::add(RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, RTSLayer* layerInterface) -> void{
this->BUILD_BUILDING_RTS_LAYER_EVENT->setRtsLayer(layerInterface);
    
BuildingEventHandler::getInstance()->fireEvent(this->BUILD_BUILDING_RTS_LAYER_EVENT);
    

                        if((rtsPlayerLayerInterface)).isLocalPlayer())
                        
                                    {
                                    LocalPlayerBuildingEventHandler::getInstance()->fireEvent(this->BUILD_BUILDING_RTS_LAYER_EVENT);
    

                                    }
                                
BuildingRTSFormInput::add(rtsPlayerLayerInterface, layerManager, layerInterface);
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_BUILDINGADVANCEDRTSFORMINPUT_CPP
