
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_CELLPOSITIONSUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_CELLPOSITIONSUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/CellPositionsUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"


CellPositionsUtil::CellPositionsUtil() : reusableSingleThreadedSurroundingList(new BasicArrayListS(8)), surroundArray(
                                                        {
                                                            { -1, -1},{0, -1},{1, -1},{ -1,1},{0,1},{1,1},{1,0},{ -1,0}
                                                        }) {
        }
        auto CellPositionsUtil::instance_owner() -> CellPositionsUtil* { static std::unique_ptr<CellPositionsUtil> value(new CellPositionsUtil()); return value.get(); }
CellPositionsUtil* CellPositionsUtil::instance = CellPositionsUtil::instance_owner();

    auto CellPositionsUtil::getInstance() -> CellPositionsUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CellPositionsUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto CellPositionsUtil::getAll(BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* topRightGeographicMapCellPosition, int32_t columns, int32_t rows, BasicArrayList* reusableList) -> BasicArrayList*{
reusableList->clear();
    

    BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = geographicMapInterface->getGeographicMapCellPositionFactory();;
    

    int32_t lastColumn = topRightGeographicMapCellPosition->getColumn() +columns;;
    

    int32_t lastRow = topRightGeographicMapCellPosition->getRow() +rows;;
    

                        if((columns > 1 && lastColumn > geographicMapInterface->getAllBinaryTiledLayer()->getColumns()) || (rows > 1 && lastRow > geographicMapInterface->getAllBinaryTiledLayer()->getRows()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return reusableList;
    

                                    }
                                




                        for (
    int32_t rowIndex = 0;rowIndex < rows; rowIndex++)
        {




                        for (
    int32_t columnIndex = 0;columnIndex < columns; columnIndex++)
        {

    GeographicMapCellPosition* geographicMapCellPosition = geographicMapCellPositionFactory->getAt(topRightGeographicMapCellPosition->getColumn() +columnIndex, topRightGeographicMapCellPosition->getRow() +rowIndex);;
    
reusableList->add(geographicMapCellPosition);
    
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return reusableList;
    
}


                //@Throws(Exception.constructor)
            
    auto CellPositionsUtil::getAllSurrounding(BasicGeographicMap* geographicMapInterface, BasicArrayList* occupyList, BasicArrayList* reusableList) -> BasicArrayList*{
reusableList->clear();
    




                        for (
    int32_t index = occupyList->size() -1;index >= 0; index--)
        {

    GeographicMapCellPosition* layerGeographicMapCellPosition = dynamic_cast<GeographicMapCellPosition*>(occupyList->get(index));;
    

    BasicArrayList* surroundingGeographicMapCellPositionList = this->getAllSurroundingAt(geographicMapInterface, layerGeographicMapCellPosition, this->reusableSingleThreadedSurroundingList);;
    




                        for (
    int32_t index2 = surroundingGeographicMapCellPositionList->size() -1;index2 >= 0; index2--)
        {

    GeographicMapCellPosition* geographicMapCellPosition = dynamic_cast<GeographicMapCellPosition*>(surroundingGeographicMapCellPositionList->get(index2));;
    

                        if(!reusableList->contains(geographicMapCellPosition) && !occupyList->contains(geographicMapCellPosition))
                        
                                    {
                                    reusableList->add(geographicMapCellPosition);
    

                                    }
                                
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return reusableList;
    
}


                //@Throws(Exception.constructor)
            
    auto CellPositionsUtil::getAllSurroundingAt(BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* layerGeographicMapCellPosition, BasicArrayList* reusableSurroundingList) -> BasicArrayList*{
reusableSurroundingList->clear();
    

    BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = geographicMapInterface->getGeographicMapCellPositionFactory();;
    

    AllBinaryTiledLayer* tiledLayer = geographicMapInterface->getAllBinaryTiledLayer();;
    

    int32_t row= 0;;
    

    int32_t column= 0;;
    




                        for (
    int32_t index = 0;index < 8; index++)
        {
column= layerGeographicMapCellPosition->getColumn() +this->surroundArray[index][0];
    
row= layerGeographicMapCellPosition->getRow() +this->surroundArray[index][1];
    

                        if(tiledLayer->isOnTileLayer(column, row))
                        
                                    {
                                    
    GeographicMapCellPosition* geographicMapCellPosition = geographicMapCellPositionFactory->getAt(column, row);;
    
reusableSurroundingList->add(geographicMapCellPosition);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return reusableSurroundingList;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_CELLPOSITIONSUTIL_CPP
