
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_NOCACHEWAYPOINT_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_NOCACHEWAYPOINT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/waypoint/NoCacheWaypoint.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/RTSLayerEvent.h>

      
#include <org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/game/layer/unit/UnitWaypointBehavior.h>

      
#include <org/allbinary/game/media/graphics/geography/map/racetrack/PathFindingInfoFactory.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/CustomMapGenerator.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathGenerator.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/waypoint/WaypointBase.h"


NoCacheWaypoint::NoCacheWaypoint(PathFindingLayerInterface* ownerLayer, Sound* sound) : WaypointBase(sound){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->ownerLayer= ownerLayer;
    
}


                //@Throws(Exception.constructor)
            
    auto NoCacheWaypoint::setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager) -> void{
WaypointBase::setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    
}


    auto NoCacheWaypoint::releaseCachedPaths() -> void{
}


                //@Throws(Exception.constructor)
            
    auto NoCacheWaypoint::getPathsListFromCacheOnly(GeographicMapCellPosition* geographicMapCellPosition) -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListUtil::getInstance()->getImmutableInstance();;
    
}


                //@Throws(Exception.constructor)
            
    auto NoCacheWaypoint::getPathsListRunnable(GeographicMapCellPosition* geographicMapCellPosition) -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createPaths(geographicMapCellPosition);;
    
}


                //@Throws(Exception.constructor)
            
    auto NoCacheWaypoint::getEndGeographicMapCellPosition(GeographicMapCellPosition* startGeographicMapCellPosition) -> GeographicMapCellPosition*{

    BasicArrayList* endList = this->ownerLayer->getEndGeographicMapCellPositionList();;
    

    GeographicMapCellPosition* endGeographicMapCellPosition = dynamic_cast<GeographicMapCellPosition*>(BasicArrayListUtil::getInstance()->getRandom(endList));;
    

                        if(startGeographicMapCellPosition == endGeographicMapCellPosition)
                        
                                    {
                                    



                        for (
    int32_t index = endList->size() -1;index >= 0; index--)
        {
endGeographicMapCellPosition= dynamic_cast<GeographicMapCellPosition*>(endList->get(index));
    

                        if(startGeographicMapCellPosition != endGeographicMapCellPosition)
                        
                                    {
                                    break;

                    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return endGeographicMapCellPosition;
    
}


                //@Throws(Exception.constructor)
            
    auto NoCacheWaypoint::createPaths(GeographicMapCellPosition* startGeographicMapCellPosition) -> BasicArrayList*{

    GeographicMapCellPosition* endGeographicMapCellPosition = this->getEndGeographicMapCellPosition(startGeographicMapCellPosition);;
    

                        if(endGeographicMapCellPosition == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListUtil::getInstance()->getImmutableInstance();;
    

                                    }
                                

                        if(startGeographicMapCellPosition == endGeographicMapCellPosition)
                        
                                    {
                                    
                        if(this->ownerLayer->shouldHandleStartSameAsEnd())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListUtil::getInstance()->getImmutableInstance();;
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("Start should not be End: ") +JavaString::valueOf(endGeographicMapCellPosition));
                    

                        }
                            

                                    }
                                

    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(this->allBinaryGameLayerManagerP);;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    

    RaceTrackGeographicMap* raceTrackGeographicMap = dynamic_cast<RaceTrackGeographicMap*>(geographicMapInterface);;
    

    GeographicMapCellTypeFactory* raceTrackGeographicMapCellTypeFactory = raceTrackGeographicMap->getGeographicMapCellTypeFactory();;
    

    CustomMapGenerator* customMapGenerator = dynamic_cast<CustomMapGenerator*>(raceTrackGeographicMap->getCustomMapGenerator());;
    
customMapGenerator->copyMapIntoCustomMap();
    

    std::vector<std::vector<int32_t>> customMapArray = customMapGenerator->getCustomMapArray();;
    
customMapArray[startGeographicMapCellPosition->getRow()][startGeographicMapCellPosition->getColumn()]= raceTrackGeographicMapCellTypeFactory->getStartType();
    
customMapArray[endGeographicMapCellPosition->getRow()][endGeographicMapCellPosition->getColumn()]= raceTrackGeographicMapCellTypeFactory->getEndType();
    

    PathFindingInfo* pathFindingInfo = PathFindingInfoFactory::getInstance()->getInstancePathFindingInfo(raceTrackGeographicMap, customMapArray);;
    

    BasicArrayList* list = PathGenerator::getInstance()->getInstanceNoCache(geographicMapInterface, pathFindingInfo, 2);;
    

                        if(list->size() < 1)
                        
                                    {
                                    


                            throw Exception("Path may have been cleared by clearing caching");
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


    auto NoCacheWaypoint::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            
    auto NoCacheWaypoint::onBuildingEvent(RTSLayerEvent* event) -> void{
}


    auto NoCacheWaypoint::reset() -> void{
this->getConnectedWaypointList()->clear();
    
}


                //@Throws(Exception.constructor)
            
    auto NoCacheWaypoint::visit(PathFindingLayerInterface* unitLayer) -> void{

                        if(unitLayer->getGroupInterface()[0] != this->ownerLayer->getGroupInterface()[0])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    int32_t size = this->getConnectedWaypointList()->size();;
    

                        if(size > 0)
                        
                                    {
                                    
    UnitWaypointBehavior* unitWaypointBehavior = dynamic_cast<UnitWaypointBehavior*>(unitLayer->getWaypointBehavior());;
    

        while(this->getConnectedWaypointList()->size() > 0)
        {

    CollidableDestroyableDamageableLayer* rtsLayer = dynamic_cast<CollidableDestroyableDamageableLayer*>(this->getConnectedWaypointList()->get(0));;
    

                        if(rtsLayer->isDestroyed())
                        
                                    {
                                    this->getConnectedWaypointList()->remove(rtsLayer);
    

                                    }
                                
                        else {
                            unitLayer->handleCost(this->ownerLayer);
    
unitWaypointBehavior->insertWaypoint(0, rtsLayer);
    
break;

                    

                        }
                            
}


                                    }
                                
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_NOCACHEWAYPOINT_CPP
