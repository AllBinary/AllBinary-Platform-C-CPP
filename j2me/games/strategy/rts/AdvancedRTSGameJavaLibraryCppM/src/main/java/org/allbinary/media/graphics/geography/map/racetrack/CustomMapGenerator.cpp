
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
        



            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointLayer.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CustomMapGeneratorBase.h"
#include "RaceTrackGeographicMap.h"

class CustomMapGenerator: public CustomMapGeneratorBase {
        

    private: const customMapArray: std::vector<std::vector<int32_t>>;

    private: const raceTrackGeographicMap: RaceTrackGeographicMap;

    private: const geographicMapCellTypeFactory: GeographicMapCellTypeFactory;

public constructor (RaceTrackGeographicMap raceTrackGeographicMap){

            super();
        this.raceTrackGeographicMap= raceTrackGeographicMap;
    
this.geographicMapCellTypeFactory= this.raceTrackGeographicMap!.getGeographicMapCellTypeFactory();
    

    mapArray: std::vector<std::vector<int32_t>> = raceTrackGeographicMap!.getRaceTrackData()!.getMapArray()!;;
    

    size2: int32_t = mapArray[0]!.length
                ;;
    
this.customMapArray= new Array(mapArray!.length).fill(null).map(() => new Array(size2).fill(0));
    

                        if(mapArray!.length != this.customMapArray!.length || mapArray[0]!.length != this.customMapArray[0]!.length)
                        
                                    {
                                    


                            throw new Exception("Array Incorrect");
                    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public copyMapIntoCustomMap(){

    mapArray: std::vector<std::vector<int32_t>> = this.raceTrackGeographicMap!.getRaceTrackData()!.getMapArray()!;;
    

    startIndex2: int32_t = mapArray[0]!.length -1;;
    




                        for (
    index: int32_t = mapArray!.length -1;index >= 0; index--)
        {




                        for (
    index2: int32_t = startIndex2;index2 >= 0; index2--)
        {
this.customMapArray[index]![index2]= this.getCustomType(index2, index, mapArray[index]![index2]!);
    
}

}

}


    private: const dropCellPositionHistory: DropCellPositionHistory = DropCellPositionHistory.getInstance()!;

                //@Throws(Exception.constructor)
            
    public int32_t getCustomType(int32_t column, int32_t row, int32_t currentType){

    emptyType: int32_t = this.geographicMapCellTypeFactory!.getEmptyType()!;;
    

    geographicMapCellPositionFactory: BasicGeographicMapCellPositionFactory = this.raceTrackGeographicMap!.getGeographicMapCellPositionFactory()!;;
    

    cellPosition: CellPosition = geographicMapCellPositionFactory!.getAt(column, row)!;;
    

                        if(this.dropCellPositionHistory!.isCellPositionWithDrop(cellPosition))
                        
                                    {
                                    
    layer: AllBinaryLayer = this.dropCellPositionHistory!.getLayerInterface(cellPosition)!;;
    

                        if(layer == AllBinaryLayer.NULL_ALLBINARY_LAYER)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return emptyType;
    

                                    }
                                

    rtsLayer: AdvancedRTSGameLayer = layer as AdvancedRTSGameLayer;;
    

                        if(!(rtsLayer!.getType() == WaypointLayer.getStaticType()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return emptyType;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return currentType;
    
}


    public std::vector<std::vector<int32_t>> getCustomMapArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.customMapArray;
    
}


};

            

