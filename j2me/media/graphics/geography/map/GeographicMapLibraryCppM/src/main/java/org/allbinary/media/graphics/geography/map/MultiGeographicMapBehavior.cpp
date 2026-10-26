
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellType.h"
#include "BasicGeographicMap.h"
#include "GeographicMapCellPosition.h"

class MultiGeographicMapBehavior
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: std::vector<GeographicMapCellType> getCellTypeAt(std::vector<BasicGeographicMap> geographicMapInterfaceArray, std::vector<GeographicMapCellType> geographicMapCellTypeArray, GeographicMapCellPosition geographicMapCellPosition){

    int32_t size = geographicMapInterfaceArray.size();;
    

    GeographicMapCellType cellType = GeographicMapCellType::NULL_GEOGRAPHIC_MAP_CELL_TYPE;;
    




                        for (
    int32_t index = size;--index >= 0; )
        {
cellType= geographicMapInterfaceArray[index].getCellTypeAt(geographicMapCellPosition);
    
geographicMapCellTypeArray[index]= cellType;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapCellTypeArray;
    
}


};

            

