
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
        



            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/RuntimeException.h"
        
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
        #include "WaypointBase.h"

class Waypoint: public WaypointBase: public BuildingEventListenerInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const basicArrayListUtil: BasicArrayListUtil = BasicArrayListUtil.getInstance()!;

    const ownerLayer: PathFindingLayerInterface;

    private: endList: BasicArrayList = this.basicArrayListUtil!.getImmutableInstance()!;

    private: paths: std::vector<std::vector<BasicArrayList>> = this.basicArrayListUtil!.NULL_ARRAY_OF_ARRAY;

public constructor (PathFindingLayerInterface ownerLayer, Sound sound){
            super(sound);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.ownerLayer= ownerLayer;
    
}


                //@Throws(Exception.constructor)
            
    public setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){
super.setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    

    geographicMapCompositeInterface: GeographicMapCompositeInterface = allBinaryGameLayerManager as GeographicMapCompositeInterface;;
    

    geographicMapInterface: BasicGeographicMap = geographicMapCompositeInterface!.getGeographicMapInterface()[0]!;;
    

    tiledLayer: AllBinaryTiledLayer = geographicMapInterface!.getAllBinaryTiledLayer()!;;
    

                        if(this.paths != this.basicArrayListUtil!.NULL_ARRAY_OF_ARRAY)
                        
                                    {
                                    


                            throw new RuntimeException();
                    

                                    }
                                
this.endList= this.ownerLayer!.getEndGeographicMapCellPositionList();
    
this.paths= new Array(tiledLayer!.getColumns()).fill(null).map(() => new Array(tiledLayer!.getRows()).fill(0))
                                                            ;
    
this.clearPaths();
    
}


    public releaseCachedPaths(){




                        for (
    columnIndex: int32_t = this.paths.length
                ;--columnIndex >= 0; )
        {




                        for (
    rowIndex: int32_t = this.paths.length
                ;--rowIndex >= 0; )
        {

    pathsList: BasicArrayList = this.paths[columnIndex]![rowIndex]!;;
    

                        if(pathsList != this.basicArrayListUtil!.getImmutableInstance())
                        
                                    {
                                    BasicGeographicMapExtractedPathsCacheFactory.getInstance()!.release(pathsList);
    

                                    }
                                
}

}

}


                //@Throws(Exception.constructor)
            
    public BasicArrayList getPathsListFromCacheOnly(GeographicMapCellPosition geographicMapCellPosition){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.paths[geographicMapCellPosition!.getColumn()]![geographicMapCellPosition!.getRow()]!;
    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList getPathsListRunnable(GeographicMapCellPosition geographicMapCellPosition){

    pathsList: BasicArrayList = this.paths[geographicMapCellPosition!.getColumn()]![geographicMapCellPosition!.getRow()]!;;
    

                        if(pathsList == this.basicArrayListUtil!.getImmutableInstance())
                        
                                    {
                                    pathsList= this.createPaths(geographicMapCellPosition);
    
this.paths[geographicMapCellPosition!.getColumn()]![geographicMapCellPosition!.getRow()]= pathsList;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pathsList;
    
}


    GeographicMapCellPosition getEndGeographicMapCellPosition(GeographicMapCellPosition startGeographicMapCellPosition){

    endGeographicMapCellPosition: GeographicMapCellPosition = this.basicArrayListUtil!.getRandom(this.endList) as GeographicMapCellPosition;;
    

                        if(startGeographicMapCellPosition == endGeographicMapCellPosition)
                        
                                    {
                                    



                        for (
    index: int32_t = this.endList!.size() -1;index >= 0; index--)
        {
endGeographicMapCellPosition= this.endList!.get(index) as GeographicMapCellPosition;
    

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
            
    BasicArrayList createPaths(GeographicMapCellPosition startGeographicMapCellPosition){

                        if(this.endList!.size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicArrayListUtil!.getImmutableInstance();;
    

                                    }
                                

    endGeographicMapCellPosition: GeographicMapCellPosition = this.getEndGeographicMapCellPosition(startGeographicMapCellPosition)!;;
    

                        if(endGeographicMapCellPosition == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicArrayListUtil!.getImmutableInstance();;
    

                                    }
                                

                        if(startGeographicMapCellPosition == endGeographicMapCellPosition)
                        
                                    {
                                    
                        if(this.ownerLayer!.shouldHandleStartSameAsEnd())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicArrayListUtil!.getImmutableInstance();;
    

                                    }
                                
                        else {
                            


                            throw new Exception("Start should not be End: " +this.endList!.size());
                    

                        }
                            

                                    }
                                

    geographicMapCompositeInterface: GeographicMapCompositeInterface = this.allBinaryGameLayerManagerP as GeographicMapCompositeInterface;;
    

    geographicMapInterface: BasicGeographicMap = geographicMapCompositeInterface!.getGeographicMapInterface()[0]!;;
    

    raceTrackGeographicMap: RaceTrackGeographicMap = geographicMapInterface as RaceTrackGeographicMap;;
    

    raceTrackGeographicMapCellTypeFactory: GeographicMapCellTypeFactory = raceTrackGeographicMap!.getGeographicMapCellTypeFactory()!;;
    

    customMapGenerator: CustomMapGenerator = raceTrackGeographicMap!.getCustomMapGenerator() as CustomMapGenerator;;
    
customMapGenerator!.copyMapIntoCustomMap();
    

    customMapArray: std::vector<std::vector<int32_t>> = customMapGenerator!.getCustomMapArray()!;;
    
customMapArray[startGeographicMapCellPosition!.getRow()]![startGeographicMapCellPosition!.getColumn()]= raceTrackGeographicMapCellTypeFactory!.getStartType();
    
customMapArray[endGeographicMapCellPosition!.getRow()]![endGeographicMapCellPosition!.getColumn()]= raceTrackGeographicMapCellTypeFactory!.getEndType();
    

    pathFindingInfo: PathFindingInfo = PathFindingInfoFactory.getInstance()!.getInstancePathFindingInfo(raceTrackGeographicMap, customMapArray)!;;
    

    list: BasicArrayList = PathGenerator.getInstance()!.getInstanceNoCache(geographicMapInterface, pathFindingInfo, 2)!;;
    

                        if(list.size() < 1)
                        
                                    {
                                    


                            throw new Exception("Path may have been cleared by clearing caching");
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


    public onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil.log(EventStrings.getInstance()!.PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            
    public onBuildingEvent(RTSLayerEvent event){
this.clearPaths();
    
}


    clearPaths(){




                        for (
    columnIndex: int32_t = this.paths.length
                ;--columnIndex >= 0; )
        {




                        for (
    rowIndex: int32_t = this.paths.length
                ;--rowIndex >= 0; )
        {
this.paths[columnIndex]![rowIndex]= this.basicArrayListUtil!.getImmutableInstance();
    
}

}

}


    public reset(){
this.getConnectedWaypointList()!.clear();
    
this.releaseCachedPaths();
    
}


                //@Throws(Exception.constructor)
            
    public visit(PathFindingLayerInterface unitLayer){

                        if(unitLayer!.getGroupInterface()[0] != this.ownerLayer!.getGroupInterface()[0])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    size: int32_t = this.getConnectedWaypointList()!.size()!;;
    

                        if(size > 0)
                        
                                    {
                                    
    unitWaypointBehavior: UnitWaypointBehavior = unitLayer!.getWaypointBehavior() as UnitWaypointBehavior;;
    

        while(this.getConnectedWaypointList()!.size() > 0)
        {

    rtsLayer: CollidableDestroyableDamageableLayer = this.getConnectedWaypointList()!.get(0) as CollidableDestroyableDamageableLayer;;
    

                        if(rtsLayer!.isDestroyed())
                        
                                    {
                                    this.getConnectedWaypointList()!.remove(rtsLayer);
    

                                    }
                                
                        else {
                            unitLayer!.handleCost(this.ownerLayer);
    
unitWaypointBehavior!.insertWaypoint(0, rtsLayer);
    
break;

                    

                        }
                            
}


                                    }
                                
}


};

            

