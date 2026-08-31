
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
        



            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/layer/Layer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellPosition.h"
#include "GeographicMapCellType.h"
#include "BasicGeographicMapCellPositionFactory.h"
#include "GeographicMapCellPositionFactoryInterface.h"

class GeographicMapInterface {
        

    Integer getId()

    string getName()

    reset()

    AllBinaryTiledLayer getAllBinaryTiledLayer()

                //@Throws(Exception.constructor)
            
    bool getCellPositionsAt(Layer layer, std::vector<std::vector<GeographicMapCellPosition>> currentCellPositionArray, std::vector<std::vector<GeographicMapCellPosition>> cellPositionArray)

                //@Throws(Exception.constructor)
            
    GeographicMapCellPosition getCellPositionAtXY(int32_t x, int32_t y)

                //@Throws(Exception.constructor)
            
    GeographicMapCellPosition getCellPositionAtXYNoThrow(int32_t x, int32_t y)

    int32_t getCellTypeFromMapCellTypeInt(int32_t cellTypeId)

                //@Throws(Exception.constructor)
            
    GeographicMapCellType getCellTypeAtXY(int32_t x, int32_t y)

                //@Throws(Exception.constructor)
            
    GeographicMapCellType getCellTypeAt(GeographicMapCellPosition geographicMapCellPosition)

    BasicGeographicMapCellPositionFactory getGeographicMapCellPositionFactory()

    GeographicMapCellPositionFactoryInterface getGeographicMapCellPositionFactoryInterface()

    BasicColor getForegroundBasicColor()

    BasicColor getBackgroundBasicColor()

};

            

