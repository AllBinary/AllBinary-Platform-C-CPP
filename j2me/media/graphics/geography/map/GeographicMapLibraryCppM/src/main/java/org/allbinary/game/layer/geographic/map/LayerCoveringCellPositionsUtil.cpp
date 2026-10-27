
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_LAYERCOVERINGCELLPOSITIONSUTIL_CPP
        #define ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_LAYERCOVERINGCELLPOSITIONSUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/geographic/map/LayerCoveringCellPositionsUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/CellPositionsUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

LayerCoveringCellPositionsUtil::LayerCoveringCellPositionsUtil() : cellPositionsUtil(CellPositionsUtil::getInstance()) {
        }
        auto LayerCoveringCellPositionsUtil::instance_owner() -> LayerCoveringCellPositionsUtil* { static std::unique_ptr<LayerCoveringCellPositionsUtil> value(new LayerCoveringCellPositionsUtil()); return value.get(); }
LayerCoveringCellPositionsUtil* LayerCoveringCellPositionsUtil::instance = LayerCoveringCellPositionsUtil::instance_owner();

    auto LayerCoveringCellPositionsUtil::getInstance() -> LayerCoveringCellPositionsUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LayerCoveringCellPositionsUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto LayerCoveringCellPositionsUtil::getAllXY(BasicGeographicMap* geographicMapInterface, AllBinaryLayer* layerInterface, int32_t x, int32_t y, BasicArrayList* reusableList) -> BasicArrayList*{

    GeographicMapCellPosition* topLeftGeographicMapCellPosition = geographicMapInterface->getCellPositionAtXY(x, y);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getAll(geographicMapInterface, topLeftGeographicMapCellPosition, layerInterface, reusableList);;
    
}


                //@Throws(Exception.constructor)
            
    auto LayerCoveringCellPositionsUtil::getAll(BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* topLeftGeographicMapCellPosition, AllBinaryLayer* layerInterface, BasicArrayList* reusableList) -> BasicArrayList*{
reusableList->clear();
    

    int32_t columns = layerInterface->getWidth() /geographicMapInterface->getAllBinaryTiledLayer()->getCellWidth();;
    

    int32_t rows = layerInterface->getHeight() /geographicMapInterface->getAllBinaryTiledLayer()->getCellHeight();;
    

                        if(columns == 0)
                        columns= 1;
                                

                        if(rows == 0)
                        rows= 1;
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cellPositionsUtil->getAll(geographicMapInterface, topLeftGeographicMapCellPosition, columns, rows, reusableList);;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_LAYERCOVERINGCELLPOSITIONSUTIL_CPP
