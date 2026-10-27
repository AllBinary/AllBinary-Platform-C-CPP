
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
        
class LayerCoveringCellPositionsUtil
            : public Object
         {

    private: static LayerCoveringCellPositionsUtil* instance() { static std::unique_ptr<LayerCoveringCellPositionsUtil> value(new LayerCoveringCellPositionsUtil()); return value.get(); }

    public: static LayerCoveringCellPositionsUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LayerCoveringCellPositionsUtil::instance();
    
}


    private: CellPositionsUtil* cellPositionsUtil = CellPositionsUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getAllXY(BasicGeographicMap* geographicMapInterface, AllBinaryLayer* layerInterface, int32_t x, int32_t y, BasicArrayList* reusableList){

    GeographicMapCellPosition* topLeftGeographicMapCellPosition = geographicMapInterface->getCellPositionAtXY(x, y);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getAll(geographicMapInterface, topLeftGeographicMapCellPosition, layerInterface, reusableList);;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getAll(BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* topLeftGeographicMapCellPosition, AllBinaryLayer* layerInterface, BasicArrayList* reusableList){
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


};

            

