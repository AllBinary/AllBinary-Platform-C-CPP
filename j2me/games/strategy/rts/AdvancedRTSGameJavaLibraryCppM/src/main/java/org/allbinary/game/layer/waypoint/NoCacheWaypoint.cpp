
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
        
            #include "../../../../../java/lang/Exception.h"
        
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
        #include "WaypointBase.h"

class NoCacheWaypoint: public WaypointBase, public BuildingEventListenerInterface {

    protected: PathFindingLayerInterface ownerLayer;

public: NoCacheWaypoint(PathFindingLayerInterface ownerLayer, Sound sound){
            super(sound);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->ownerLayer= ownerLayer;
    
}


                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){
super.setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    
}


    public: void releaseCachedPaths(){
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getPathsListFromCacheOnly(GeographicMapCellPosition geographicMapCellPosition){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListUtil::getInstance().getImmutableInstance();;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getPathsListRunnable(GeographicMapCellPosition geographicMapCellPosition){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createPaths(geographicMapCellPosition);;
    
}


                //@Throws(Exception.constructor)
            
    protected: GeographicMapCellPosition getEndGeographicMapCellPosition(GeographicMapCellPosition startGeographicMapCellPosition){

    BasicArrayList endList = this->ownerLayer.getEndGeographicMapCellPositionList();;
    

    GeographicMapCellPosition endGeographicMapCellPosition = BasicArrayListUtil::getInstance().getRandom(endList) as GeographicMapCellPosition;;
    

                        if(startGeographicMapCellPosition == endGeographicMapCellPosition)
                        
                                    {
                                    



                        for (
    int32_t index = endList.size() -1;index >= 0; index--)
        {
endGeographicMapCellPosition= endList.get(index) as GeographicMapCellPosition;
    

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
            
    private: BasicArrayList createPaths(GeographicMapCellPosition startGeographicMapCellPosition){

    GeographicMapCellPosition endGeographicMapCellPosition = this->getEndGeographicMapCellPosition(startGeographicMapCellPosition);;
    

                        if(endGeographicMapCellPosition == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListUtil::getInstance().getImmutableInstance();;
    

                                    }
                                

                        if(startGeographicMapCellPosition == endGeographicMapCellPosition)
                        
                                    {
                                    
                        if(this->ownerLayer.shouldHandleStartSameAsEnd())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListUtil::getInstance().getImmutableInstance();;
    

                                    }
                                
                        else {
                            


                            throw Exception("Start should not be End: " +endGeographicMapCellPosition);
                    

                        }
                            

                                    }
                                

    GeographicMapCompositeInterface geographicMapCompositeInterface = this->allBinaryGameLayerManagerP as GeographicMapCompositeInterface;;
    

    BasicGeographicMap geographicMapInterface = geographicMapCompositeInterface.getGeographicMapInterface()[0];;
    

    RaceTrackGeographicMap raceTrackGeographicMap = geographicMapInterface as RaceTrackGeographicMap;;
    

    GeographicMapCellTypeFactory raceTrackGeographicMapCellTypeFactory = raceTrackGeographicMap.getGeographicMapCellTypeFactory();;
    

    CustomMapGenerator customMapGenerator = raceTrackGeographicMap.getCustomMapGenerator() as CustomMapGenerator;;
    
customMapGenerator.copyMapIntoCustomMap();
    

    std::vector<std::vector<int32_t>> customMapArray = customMapGenerator.getCustomMapArray();;
    
customMapArray[startGeographicMapCellPosition.getRow()]![startGeographicMapCellPosition.getColumn()]= raceTrackGeographicMapCellTypeFactory.getStartType();
    
customMapArray[endGeographicMapCellPosition.getRow()]![endGeographicMapCellPosition.getColumn()]= raceTrackGeographicMapCellTypeFactory.getEndType();
    

    PathFindingInfo pathFindingInfo = PathFindingInfoFactory::getInstance().getInstancePathFindingInfo(raceTrackGeographicMap, customMapArray);;
    

    BasicArrayList list = PathGenerator::getInstance().getInstanceNoCache(geographicMapInterface, pathFindingInfo, 2);;
    

                        if(list.size() < 1)
                        
                                    {
                                    


                            throw Exception("Path may have been cleared by clearing caching");
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


    public: void onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil::log(EventStrings::getInstance().PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            
    public: void onBuildingEvent(RTSLayerEvent event){
}


    public: void reset(){
this->getConnectedWaypointList().clear();
    
}


                //@Throws(Exception.constructor)
            
    public: void visit(PathFindingLayerInterface unitLayer){

                        if(unitLayer.getGroupInterface()[0] != this->ownerLayer.getGroupInterface()[0])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    int32_t size = this->getConnectedWaypointList().size();;
    

                        if(size > 0)
                        
                                    {
                                    
    UnitWaypointBehavior unitWaypointBehavior = unitLayer.getWaypointBehavior() as UnitWaypointBehavior;;
    

        while(this->getConnectedWaypointList().size() > 0)
        {

    CollidableDestroyableDamageableLayer rtsLayer = this->getConnectedWaypointList().get(0) as CollidableDestroyableDamageableLayer;;
    

                        if(rtsLayer.isDestroyed())
                        
                                    {
                                    this->getConnectedWaypointList().remove(rtsLayer);
    

                                    }
                                
                        else {
                            unitLayer.handleCost(this->ownerLayer);
    
unitWaypointBehavior.insertWaypoint(0, rtsLayer);
    
break;

                    

                        }
                            
}


                                    }
                                
}


};

            

