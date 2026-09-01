
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
        



            #include "../../../../../../java/lang/Object.h"
        
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GeographicMapCellPathHistoryInfo
            : public Object
         {

    private: GeographicMapCellPosition previousGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: GeographicMapCellPosition previousOnPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: GeographicMapCellPosition nextUnvisitedOnPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: GeographicMapCellPosition nextOnPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: GeographicMapCellPosition nextChosenOnPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    public: GeographicMapCellPosition getPreviousGeographicMapCellPosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->previousGeographicMapCellPosition;
    
}


    public: void setPreviousGeographicMapCellPosition(GeographicMapCellPosition previousGeographicMapCellPosition){
this->previousGeographicMapCellPosition= previousGeographicMapCellPosition;
    
}


    public: GeographicMapCellPosition getPreviousOnPathGeographicMapCellPosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->previousOnPathGeographicMapCellPosition;
    
}


    public: void setPreviousOnPathGeographicMapCellPosition(GeographicMapCellPosition previousOnPathGeographicMapCellPosition){
this->previousOnPathGeographicMapCellPosition= previousOnPathGeographicMapCellPosition;
    
}


    public: GeographicMapCellPosition getNextUnvisitedOnPathGeographicMapCellPosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->nextUnvisitedOnPathGeographicMapCellPosition;
    
}


    public: void setNextUnvisitedOnPathGeographicMapCellPosition(GeographicMapCellPosition nextUnvisitedOnPathGeographicMapCellPosition){
this->nextUnvisitedOnPathGeographicMapCellPosition= nextUnvisitedOnPathGeographicMapCellPosition;
    
}


    public: GeographicMapCellPosition getNextOnPathGeographicMapCellPosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->nextOnPathGeographicMapCellPosition;
    
}


    public: void setNextOnPathGeographicMapCellPosition(GeographicMapCellPosition nextOnPathGeographicMapCellPosition){
this->nextOnPathGeographicMapCellPosition= nextOnPathGeographicMapCellPosition;
    
}


    public: GeographicMapCellPosition getNextChosenOnPathGeographicMapCellPosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->nextChosenOnPathGeographicMapCellPosition;
    
}


    public: void setNextChosenOnPathGeographicMapCellPosition(GeographicMapCellPosition nextChosenOnPathGeographicMapCellPosition){
this->nextChosenOnPathGeographicMapCellPosition= nextChosenOnPathGeographicMapCellPosition;
    
}


};

            

