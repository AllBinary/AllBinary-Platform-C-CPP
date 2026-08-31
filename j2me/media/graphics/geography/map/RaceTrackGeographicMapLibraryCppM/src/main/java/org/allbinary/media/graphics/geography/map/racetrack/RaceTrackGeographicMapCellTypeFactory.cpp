
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RaceTrackGeographicMapCellType.h"
#include "RaceTrackGeographicMapCellTypes.h"

class RaceTrackGeographicMapCellTypeFactory: public GeographicMapCellTypeFactory {
        

    private: static const instanceC: RaceTrackGeographicMapCellTypeFactory = new RaceTrackGeographicMapCellTypeFactory();

    public static RaceTrackGeographicMapCellTypeFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RaceTrackGeographicMapCellTypeFactory.instanceC;
    
}


    public EMPTY_CELL_TYPE: GeographicMapCellType = new GeographicMapCellType(0,  -1);

    public EASY_CELL_TYPE: GeographicMapCellType = this.EMPTY_CELL_TYPE;

    public const BOTTOM_LEFT_TURN_ROAD_CELL_TYPE: RaceTrackGeographicMapCellType;

    public const BOTTOM_RIGHT_TURN_ROAD_CELL_TYPE: RaceTrackGeographicMapCellType;

    public const TOP_LEFT_TURN_ROAD_CELL_TYPE: RaceTrackGeographicMapCellType;

    public const TOP_RIGHT_TURN_ROAD_CELL_TYPE: RaceTrackGeographicMapCellType;

    public const HORIZONTAL_STRAIGHT_ROAD_CELL_TYPE: RaceTrackGeographicMapCellType;

    public const VERTICAL_STRAIGHT_ROAD_CELL_TYPE: RaceTrackGeographicMapCellType;

    public const START_LINE_ROAD_CELL_TYPE: RaceTrackGeographicMapCellType;

    public const DEFAULT_FINISH_LINE_ROAD_CELL_TYPE: RaceTrackGeographicMapCellType;

    public FINISH_LINE_ROAD_CELL_TYPE: GeographicMapCellType = GeographicMapCellType.NULL_GEOGRAPHIC_MAP_CELL_TYPE;

public constructor (){

            super();
        
    raceTrackGeographicMapCellTypes: RaceTrackGeographicMapCellTypes = RaceTrackGeographicMapCellTypes.getInstance()!;;
    
this.BOTTOM_LEFT_TURN_ROAD_CELL_TYPE= raceTrackGeographicMapCellTypes!.BOTTOM_LEFT_TURN_ROAD_CELL_TYPE;
    
this.BOTTOM_RIGHT_TURN_ROAD_CELL_TYPE= raceTrackGeographicMapCellTypes!.BOTTOM_RIGHT_TURN_ROAD_CELL_TYPE;
    
this.TOP_LEFT_TURN_ROAD_CELL_TYPE= raceTrackGeographicMapCellTypes!.TOP_LEFT_TURN_ROAD_CELL_TYPE;
    
this.TOP_RIGHT_TURN_ROAD_CELL_TYPE= raceTrackGeographicMapCellTypes!.TOP_RIGHT_TURN_ROAD_CELL_TYPE;
    
this.HORIZONTAL_STRAIGHT_ROAD_CELL_TYPE= raceTrackGeographicMapCellTypes!.HORIZONTAL_STRAIGHT_ROAD_CELL_TYPE;
    
this.VERTICAL_STRAIGHT_ROAD_CELL_TYPE= raceTrackGeographicMapCellTypes!.VERTICAL_STRAIGHT_ROAD_CELL_TYPE;
    
this.START_LINE_ROAD_CELL_TYPE= raceTrackGeographicMapCellTypes!.START_LINE_ROAD_CELL_TYPE;
    
this.DEFAULT_FINISH_LINE_ROAD_CELL_TYPE= raceTrackGeographicMapCellTypes!.DEFAULT_FINISH_LINE_ROAD_CELL_TYPE;
    
}


    public int32_t getStartType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.START_LINE_ROAD_CELL_TYPE.getType();;
    
}


    public int32_t getEndType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.FINISH_LINE_ROAD_CELL_TYPE.getType();;
    
}


    public int32_t getEmptyType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.EMPTY_CELL_TYPE.getType();;
    
}


    public bool isPath(GeographicMapCellType cellType){

                        if(cellType != this.EMPTY_CELL_TYPE && cellType != this.EASY_CELL_TYPE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

