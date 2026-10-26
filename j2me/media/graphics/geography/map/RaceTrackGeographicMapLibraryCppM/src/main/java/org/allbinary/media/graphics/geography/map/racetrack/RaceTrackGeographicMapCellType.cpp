
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

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RaceTrackGeographicMapCellType: public GeographicMapCellType {

    public: std::string name;

    private: int32_t travelCost;

public: RaceTrackGeographicMapCellType(std::string name, int32_t type, int32_t travelCost, int32_t reset) : GeographicMapCellType(type, reset){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->name= name;
    
this->travelCost= travelCost;
    
}


    public: int32_t getTravelCost(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->travelCost;
    
}


};

            

