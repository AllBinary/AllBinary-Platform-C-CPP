
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellPositionFactoryInterface.h"
#include "GeographicMapCellPosition.h"
#include "BasicGeographicMap.h"

class SimpleGeographicMapCellPositionFactory
            : public Object
        : public GeographicMapCellPositionFactoryInterface {

    public: static const GeographicMapCellPosition NULL_GEOGRAPHIC_MAP_CELL_POSITION = GeographicMapCellPosition( -1,  -1,  -1,  -1,  -1,  -1);

    public: GeographicMapCellPosition getInstance(BasicGeographicMap geographicMapInterface, int32_t i_column, int32_t i_row, int32_t columns, int32_t rows, int32_t width, int32_t height){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GeographicMapCellPosition(i_column, i_row, columns, rows, width, height);
    
}


};

            

