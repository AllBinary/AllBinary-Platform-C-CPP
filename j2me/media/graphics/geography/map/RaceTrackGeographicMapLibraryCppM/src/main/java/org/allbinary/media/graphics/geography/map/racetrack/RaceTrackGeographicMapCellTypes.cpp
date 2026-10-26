
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
        



            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RaceTrackGeographicMapCellType.h"

class RaceTrackGeographicMapCellTypes
            : public Object
         {

    private: static RaceTrackGeographicMapCellTypes instance() { return RaceTrackGeographicMapCellTypes(); }

    public: static RaceTrackGeographicMapCellTypes getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RaceTrackGeographicMapCellTypes::instance();
    
}


    public: RaceTrackGeographicMapCellType BOTTOM_LEFT_TURN_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType BOTTOM_RIGHT_TURN_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType TOP_LEFT_TURN_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType TOP_RIGHT_TURN_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType HORIZONTAL_STRAIGHT_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType VERTICAL_STRAIGHT_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType START_LINE_ROAD_CELL_TYPE;

    public: RaceTrackGeographicMapCellType DEFAULT_FINISH_LINE_ROAD_CELL_TYPE;

public: RaceTrackGeographicMapCellTypes(){
this->BOTTOM_LEFT_TURN_ROAD_CELL_TYPE= RaceTrackGeographicMapCellType("Bottom Left Turn", 1, 1, 0);
    
this->BOTTOM_RIGHT_TURN_ROAD_CELL_TYPE= RaceTrackGeographicMapCellType("Bottom Right Turn", 2, 1, 0);
    
this->TOP_LEFT_TURN_ROAD_CELL_TYPE= RaceTrackGeographicMapCellType("Top Left Turn", 3, 1, 0);
    
this->TOP_RIGHT_TURN_ROAD_CELL_TYPE= RaceTrackGeographicMapCellType("Top Right Turne", 4, 1, 0);
    
this->HORIZONTAL_STRAIGHT_ROAD_CELL_TYPE= RaceTrackGeographicMapCellType("Horizontal Straight", 5, 1, 0);
    
this->VERTICAL_STRAIGHT_ROAD_CELL_TYPE= RaceTrackGeographicMapCellType("Vertical Straight", 6, 1, 0);
    
this->START_LINE_ROAD_CELL_TYPE= RaceTrackGeographicMapCellType("Start Line", 7, 1, 0);
    
this->DEFAULT_FINISH_LINE_ROAD_CELL_TYPE= RaceTrackGeographicMapCellType("Finish Line", 8, 1, 0);
    
}


};

            

