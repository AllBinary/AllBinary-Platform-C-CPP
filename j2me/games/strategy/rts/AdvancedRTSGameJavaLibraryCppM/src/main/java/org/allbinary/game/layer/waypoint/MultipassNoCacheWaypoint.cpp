
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

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/CustomMapGenerator.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/MultipassState.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathGenerator.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/waypoint/WaypointBase.h"

class MultipassNoCacheWaypoint: public WaypointBase, public BuildingEventListenerInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: PathFindingLayerInterface* ownerLayer;

public: MultipassNoCacheWaypoint(PathFindingLayerInterface* ownerLayer, Sound* sound) : WaypointBase(sound){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->ownerLayer= ownerLayer;
    
}


                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager){
super.setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    
}


    public: void releaseCachedPaths(){
}


                //@Throws(Exception.constructor)
            
    public: PathFindingInfo* getPathFindingInfo(GeographicMapCellPosition* geographicMapCellPosition){

    GeographicMapCellPosition* startGeographicMapCellPosition = geographicMapCellPosition;;
    

    GeographicMapCellPosition* endGeographicMapCellPosition = this->getEndGeographicMapCellPosition(startGeographicMapCellPosition);;
    

                        if(endGeographicMapCellPosition == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PathFindingInfo::NULL_PATH_FINDING_INFO;
    

                                    }
                                

                        if(startGeographicMapCellPosition == endGeographicMapCellPosition)
                        
                                    {
                                    
                        if(this->ownerLayer->shouldHandleStartSameAsEnd())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PathFindingInfo::NULL_PATH_FINDING_INFO;
    

                                    }
                                
                        else {
                            


                            throw new Exception("Start should not be End: " +endGeographicMapCellPosition);
                    

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
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pathFindingInfo;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getPathsList(GeographicMapCellPosition* geographicMapCellPosition, PathFindingInfo* pathFindingInfo, MultipassState* multipassState){

        try {
            
                        if(pathFindingInfo == 
                                    nullptr
                                )
                        
                                    {
                                    this->logUtil->putF("pathFindingInfo: " +pathFindingInfo, this, "getPathsList");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListUtil::getInstance()->getImmutableInstance();;
    

                                    }
                                

    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(this->allBinaryGameLayerManagerP);;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    

    BasicArrayList* list = PathGenerator::getInstance()->createN(geographicMapInterface, pathFindingInfo, 2, multipassState);;
    

                        if(list != 
                                    nullptr
                                 && list != BasicArrayListUtil::getInstance()->getImmutableInstance())
                        
                                    {
                                    
                        if(list->size() < 1)
                        
                                    {
                                    


                            throw new Exception("Path may have been cleared by clearing caching");
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListUtil::getInstance()->getImmutableInstance();;
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "getPathsList", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListUtil::getInstance()->getImmutableInstance();;
    
}

}


                //@Throws(Exception.constructor)
            
    protected: GeographicMapCellPosition* getEndGeographicMapCellPosition(GeographicMapCellPosition* startGeographicMapCellPosition){

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


    public: void onEvent(AllBinaryEventObject* eventObject){
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            
    public: void onBuildingEvent(RTSLayerEvent* event){
}


    public: void reset(){
this->getConnectedWaypointList()->clear();
    
}


                //@Throws(Exception.constructor)
            
    public: void visit(PathFindingLayerInterface* unitLayer){

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


};

            

