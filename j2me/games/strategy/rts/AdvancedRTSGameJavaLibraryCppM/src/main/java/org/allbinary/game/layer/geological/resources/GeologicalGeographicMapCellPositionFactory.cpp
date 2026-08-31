
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
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeologicalGeographicMapCellPosition.h"
#include "GeologicalResource.h"

class GeologicalGeographicMapCellPositionFactory
            : public Object
        : public GeographicMapCellPositionFactoryInterface {
        

    private: const resourcePerMapCellType: std::vector<int32_t>;

public constructor (std::vector<int32_t> resourcePerMapCellType){

            super();
        this.resourcePerMapCellType= resourcePerMapCellType;
    
}


                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition getInstance(BasicGeographicMap geographicMapInterface, int32_t i_column, int32_t i_row, int32_t columns, int32_t rows, int32_t width, int32_t height){

    tiledLayer: AllBinaryTiledLayer = geographicMapInterface!.getAllBinaryTiledLayer()!;;
    

    resources: int32_t = this.resourcePerMapCellType[tiledLayer!.getCell(i_column, i_row)] +MyRandomFactory.getInstance()!.getAbsoluteNextInt(1000);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new GeologicalGeographicMapCellPosition(i_column, i_row, columns, rows, width, height, new GeologicalResource(resources));
    
}


};

            

