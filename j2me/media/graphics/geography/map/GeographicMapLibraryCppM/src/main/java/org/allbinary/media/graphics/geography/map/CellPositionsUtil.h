
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_CELLPOSITIONSUTIL_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_CELLPOSITIONSUTIL_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicGeographicMapCellPositionFactory.h"
#include "GeographicMapCellPosition.h"
#include "BasicGeographicMap.h"

class CellPositionsUtil
            : public Object
         {
        

    private: static const instance: CellPositionsUtil = new CellPositionsUtil();

    public static CellPositionsUtil getInstance();

                //@Throws(Exception.constructor)
            
    public BasicArrayList getAll(BasicGeographicMap geographicMapInterface, GeographicMapCellPosition topRightGeographicMapCellPosition, int32_t columns, int32_t rows, BasicArrayList reusableList);

    private: const reusableSingleThreadedSurroundingList: BasicArrayList = new BasicArrayListS(8);

                //@Throws(Exception.constructor)
            
    public BasicArrayList getAllSurrounding(BasicGeographicMap geographicMapInterface, BasicArrayList occupyList, BasicArrayList reusableList);

    private: const surroundArray: std::vector<std::vector<int32_t>> = 
                                                        [
                                                            intArrayOf( -1, -1)
,[0, -1]
,[1, -1]
,[ -1,1]
,[0,1]
,[1,1]
,[1,0]
,[ -1,0]

                                                        ];

                //@Throws(Exception.constructor)
            
    public BasicArrayList getAllSurroundingAt(BasicGeographicMap geographicMapInterface, GeographicMapCellPosition layerGeographicMapCellPosition, BasicArrayList reusableSurroundingList);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_CELLPOSITIONSUTIL_H
