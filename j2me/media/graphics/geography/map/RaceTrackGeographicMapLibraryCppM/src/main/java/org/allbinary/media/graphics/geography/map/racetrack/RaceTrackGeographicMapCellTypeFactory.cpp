
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypes.h"

class RaceTrackGeographicMapCellTypeFactory: public GeographicMapCellTypeFactory {

    private: static RaceTrackGeographicMapCellTypeFactory* instanceC() { static std::unique_ptr<RaceTrackGeographicMapCellTypeFactory> value(new RaceTrackGeographicMapCellTypeFactory()); return value.get(); }

    public: static RaceTrackGeographicMapCellTypeFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RaceTrackGeographicMapCellTypeFactory::instanceC();
    
}


    public: GeographicMapCellType* EMPTY_CELL_TYPE = new GeographicMapCellType(0,  -1);

    public: GeographicMapCellType* EASY_CELL_TYPE = this->EMPTY_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* BOTTOM_LEFT_TURN_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* BOTTOM_RIGHT_TURN_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* TOP_LEFT_TURN_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* TOP_RIGHT_TURN_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* HORIZONTAL_STRAIGHT_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* VERTICAL_STRAIGHT_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* START_LINE_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType* DEFAULT_FINISH_LINE_ROAD_CELL_TYPE;

    public: GeographicMapCellType* FINISH_LINE_ROAD_CELL_TYPE = GeographicMapCellType::NULL_GEOGRAPHIC_MAP_CELL_TYPE;

public: RaceTrackGeographicMapCellTypeFactory(){

    RaceTrackGeographicMapCellTypes* raceTrackGeographicMapCellTypes = RaceTrackGeographicMapCellTypes::getInstance();;
    
this->BOTTOM_LEFT_TURN_ROAD_CELL_TYPE= raceTrackGeographicMapCellTypes->BOTTOM_LEFT_TURN_ROAD_CELL_TYPE;
    
this->BOTTOM_RIGHT_TURN_ROAD_CELL_TYPE= raceTrackGeographicMapCellTypes->BOTTOM_RIGHT_TURN_ROAD_CELL_TYPE;
    
this->TOP_LEFT_TURN_ROAD_CELL_TYPE= raceTrackGeographicMapCellTypes->TOP_LEFT_TURN_ROAD_CELL_TYPE;
    
this->TOP_RIGHT_TURN_ROAD_CELL_TYPE= raceTrackGeographicMapCellTypes->TOP_RIGHT_TURN_ROAD_CELL_TYPE;
    
this->HORIZONTAL_STRAIGHT_ROAD_CELL_TYPE= raceTrackGeographicMapCellTypes->HORIZONTAL_STRAIGHT_ROAD_CELL_TYPE;
    
this->VERTICAL_STRAIGHT_ROAD_CELL_TYPE= raceTrackGeographicMapCellTypes->VERTICAL_STRAIGHT_ROAD_CELL_TYPE;
    
this->START_LINE_ROAD_CELL_TYPE= raceTrackGeographicMapCellTypes->START_LINE_ROAD_CELL_TYPE;
    
this->DEFAULT_FINISH_LINE_ROAD_CELL_TYPE= raceTrackGeographicMapCellTypes->DEFAULT_FINISH_LINE_ROAD_CELL_TYPE;
    
}


    public: int32_t getStartType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->START_LINE_ROAD_CELL_TYPE->getType();;
    
}


    public: int32_t getEndType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->FINISH_LINE_ROAD_CELL_TYPE->getType();;
    
}


    public: int32_t getEmptyType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->EMPTY_CELL_TYPE->getType();;
    
}


    public: bool isPath(GeographicMapCellType* cellType){

                        if(cellType != this->EMPTY_CELL_TYPE && cellType != this->EASY_CELL_TYPE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

