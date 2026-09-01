
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *    Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include <vector>
        
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryGameLayerManager.h"

class FakeLayerManager: public AllBinaryGameLayerManager, public GeographicMapCompositeInterface {

    private: std::vector<BasicGeographicMap> geographicMapInterfaceArray = BasicGeographicMap::NULL_BASIC_GEOGRAPHIC_MAP_ARRAY;

    private: std::vector<GeographicMapCellType> geographicMapCellTypeArray = GeographicMapCellType::NULL_GEOGRAPHIC_MAP_CELL_TYPE_ARRAY;

public: FakeLayerManager(GameInfo gameInfo){
            super(BasicColorFactory::getInstance().BLACK, BasicColorFactory::getInstance().WHITE, gameInfo);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: std::vector<BasicGeographicMap> getGeographicMapInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapInterfaceArray;
    
}


    public: void setGeographicMapInterface(std::vector<BasicGeographicMap> geographicMapInterfaceArray){
this->geographicMapInterfaceArray= geographicMapInterfaceArray;
    
this->geographicMapCellTypeArray= new Array(this->geographicMapInterfaceArray.length);
    
}


    public: std::vector<GeographicMapCellType> geographicMapCellTypeArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellTypeArray;
    
}


};

            

