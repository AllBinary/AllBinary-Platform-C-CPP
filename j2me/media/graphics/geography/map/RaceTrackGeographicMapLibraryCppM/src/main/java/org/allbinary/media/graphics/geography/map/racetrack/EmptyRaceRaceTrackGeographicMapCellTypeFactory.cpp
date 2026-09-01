
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
        



#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RaceTrackGeographicMapCellTypeFactory.h"
#include "RaceTrackGeographicMapCellType.h"

class EmptyRaceRaceTrackGeographicMapCellTypeFactory: public RaceTrackGeographicMapCellTypeFactory {

    private: static const EmptyRaceRaceTrackGeographicMapCellTypeFactory instanceC = EmptyRaceRaceTrackGeographicMapCellTypeFactory();

    public: static EmptyRaceRaceTrackGeographicMapCellTypeFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EmptyRaceRaceTrackGeographicMapCellTypeFactory::instanceC;
    
}


private: EmptyRaceRaceTrackGeographicMapCellTypeFactory(){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->EMPTY_CELL_TYPE= RaceTrackGeographicMapCellType(commonStrings.EMPTY, 0, PathFindingNodeCostInfoData::getInstance().MAX_NODE_COST, 1);
    
this->EASY_CELL_TYPE= RaceTrackGeographicMapCellType("Easy", 19, 1, 0);
    
this->FINISH_LINE_ROAD_CELL_TYPE= this->DEFAULT_FINISH_LINE_ROAD_CELL_TYPE;
    
}


};

            

