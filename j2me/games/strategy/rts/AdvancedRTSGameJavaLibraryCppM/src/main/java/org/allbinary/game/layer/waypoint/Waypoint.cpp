
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/waypoint/Waypoint.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/RTSLayerEvent.h>

      
#include <org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/game/layer/unit/UnitWaypointBehavior.h>

      
#include <org/allbinary/game/media/graphics/geography/map/racetrack/PathFindingInfoFactory.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/CustomMapGenerator.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/BasicGeographicMapExtractedPathsCacheFactory.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathGenerator.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/waypoint/WaypointBase.h"


Waypoint::Waypoint(PathFindingLayerInterface* ownerLayer, Sound* sound) : WaypointBase(sound), logUtil(LogUtil::getInstance()), basicArrayListUtil(BasicArrayListUtil::getInstance()), endList(this->basicArrayListUtil->getImmutableInstance()), paths(this->basicArrayListUtil->NULL_ARRAY_OF_ARRAY){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->ownerLayer= ownerLayer;
    
}


                //@Throws(Exception.constructor)
            
    auto Waypoint::setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager) -> void{
WaypointBase::setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    

    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(allBinaryGameLayerManager);;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    

    AllBinaryTiledLayer* tiledLayer = geographicMapInterface->getAllBinaryTiledLayer();;
    

                        if(this->paths != this->basicArrayListUtil->NULL_ARRAY_OF_ARRAY)
                        
                                    {
                                    


                            throw RuntimeException();
                    

                                    }
                                
this->endList= this->ownerLayer->getEndGeographicMapCellPositionList();
    
this->paths= std::vector<std::vector<BasicArrayList*>>(tiledLayer->getColumns(), std::vector<BasicArrayList*>(tiledLayer->getRows()));
    
this->clearPaths();
    
}


    auto Waypoint::releaseCachedPaths() -> void{




                        for (
    int32_t columnIndex = this->paths.size();--columnIndex >= 0; )
        {




                        for (
    int32_t rowIndex = this->paths.size();--rowIndex >= 0; )
        {

    BasicArrayList* pathsList = this->paths[columnIndex][rowIndex];;
    

                        if(pathsList != this->basicArrayListUtil->getImmutableInstance())
                        
                                    {
                                    BasicGeographicMapExtractedPathsCacheFactory::getInstance()->release(pathsList);
    

                                    }
                                
}

}

}


                //@Throws(Exception.constructor)
            
    auto Waypoint::getPathsListFromCacheOnly(GeographicMapCellPosition* geographicMapCellPosition) -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paths[geographicMapCellPosition->getColumn()][geographicMapCellPosition->getRow()];
    
}


                //@Throws(Exception.constructor)
            
    auto Waypoint::getPathsListRunnable(GeographicMapCellPosition* geographicMapCellPosition) -> BasicArrayList*{

    BasicArrayList* pathsList = this->paths[geographicMapCellPosition->getColumn()][geographicMapCellPosition->getRow()];;
    

                        if(pathsList == this->basicArrayListUtil->getImmutableInstance())
                        
                                    {
                                    pathsList= this->createPaths(geographicMapCellPosition);
    
this->paths[geographicMapCellPosition->getColumn()][geographicMapCellPosition->getRow()]= pathsList;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pathsList;
    
}


    auto Waypoint::getEndGeographicMapCellPosition(GeographicMapCellPosition* startGeographicMapCellPosition) -> GeographicMapCellPosition*{

    GeographicMapCellPosition* endGeographicMapCellPosition = dynamic_cast<GeographicMapCellPosition*>(this->basicArrayListUtil->getRandom(this->endList));;
    

                        if(startGeographicMapCellPosition == endGeographicMapCellPosition)
                        
                                    {
                                    



                        for (
    int32_t index = this->endList->size() -1;index >= 0; index--)
        {
endGeographicMapCellPosition= dynamic_cast<GeographicMapCellPosition*>(this->endList->get(index));
    

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
            
    auto Waypoint::createPaths(GeographicMapCellPosition* startGeographicMapCellPosition) -> BasicArrayList*{

                        if(this->endList->size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicArrayListUtil->getImmutableInstance();;
    

                                    }
                                

    GeographicMapCellPosition* endGeographicMapCellPosition = this->getEndGeographicMapCellPosition(startGeographicMapCellPosition);;
    

                        if(endGeographicMapCellPosition == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicArrayListUtil->getImmutableInstance();;
    

                                    }
                                

                        if(startGeographicMapCellPosition == endGeographicMapCellPosition)
                        
                                    {
                                    
                        if(this->ownerLayer->shouldHandleStartSameAsEnd())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicArrayListUtil->getImmutableInstance();;
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("Start should not be End: ") +JavaString::valueOf(this->endList->size()));
                    

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


    auto Waypoint::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            
    auto Waypoint::onBuildingEvent(RTSLayerEvent* event) -> void{
this->clearPaths();
    
}


    auto Waypoint::clearPaths() -> void{




                        for (
    int32_t columnIndex = this->paths.size();--columnIndex >= 0; )
        {




                        for (
    int32_t rowIndex = this->paths.size();--rowIndex >= 0; )
        {
this->paths[columnIndex][rowIndex]= this->basicArrayListUtil->getImmutableInstance();
    
}

}

}


    auto Waypoint::reset() -> void{
this->getConnectedWaypointList()->clear();
    
this->releaseCachedPaths();
    
}


                //@Throws(Exception.constructor)
            
    auto Waypoint::visit(PathFindingLayerInterface* unitLayer) -> void{

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




        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT_CPP
