
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

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/EmptyRaceRaceTrackGeographicMapCellTypeFactory.h"

class NormalRaceTrackGeographicMapCellTypeFactory: public RaceTrackGeographicMapCellTypeFactory {

    private: static NormalRaceTrackGeographicMapCellTypeFactory* instanceC() { static std::unique_ptr<NormalRaceTrackGeographicMapCellTypeFactory> value(new NormalRaceTrackGeographicMapCellTypeFactory()); return value.get(); }

    public: static NormalRaceTrackGeographicMapCellTypeFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NormalRaceTrackGeographicMapCellTypeFactory::instanceC();
    
}


private: NormalRaceTrackGeographicMapCellTypeFactory(){
this->EMPTY_CELL_TYPE= EmptyRaceRaceTrackGeographicMapCellTypeFactory::getInstance()->EMPTY_CELL_TYPE;
    
this->EASY_CELL_TYPE= this->EMPTY_CELL_TYPE;
    
this->FINISH_LINE_ROAD_CELL_TYPE= this->DEFAULT_FINISH_LINE_ROAD_CELL_TYPE;
    
}


};

            

