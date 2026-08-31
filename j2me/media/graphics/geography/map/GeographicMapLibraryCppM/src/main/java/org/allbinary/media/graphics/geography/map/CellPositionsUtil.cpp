
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

    public static CellPositionsUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CellPositionsUtil.instance;
    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList getAll(BasicGeographicMap geographicMapInterface, GeographicMapCellPosition topRightGeographicMapCellPosition, int32_t columns, int32_t rows, BasicArrayList reusableList){
reusableList!.clear();
    

    geographicMapCellPositionFactory: BasicGeographicMapCellPositionFactory = geographicMapInterface!.getGeographicMapCellPositionFactory()!;;
    

    lastColumn: int32_t = topRightGeographicMapCellPosition!.getColumn() +columns;;
    

    lastRow: int32_t = topRightGeographicMapCellPosition!.getRow() +rows;;
    

                        if((columns > 1 && lastColumn > geographicMapInterface!.getAllBinaryTiledLayer()!.getColumns()) || (rows > 1 && lastRow > geographicMapInterface!.getAllBinaryTiledLayer()!.getRows()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return reusableList;
    

                                    }
                                




                        for (
    rowIndex: int32_t = 0;rowIndex < rows; rowIndex++)
        {




                        for (
    columnIndex: int32_t = 0;columnIndex < columns; columnIndex++)
        {

    geographicMapCellPosition: GeographicMapCellPosition = geographicMapCellPositionFactory!.getAt(topRightGeographicMapCellPosition!.getColumn() +columnIndex, topRightGeographicMapCellPosition!.getRow() +rowIndex)!;;
    
reusableList!.add(geographicMapCellPosition);
    
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return reusableList;
    
}


    private: const reusableSingleThreadedSurroundingList: BasicArrayList = new BasicArrayListS(8);

                //@Throws(Exception.constructor)
            
    public BasicArrayList getAllSurrounding(BasicGeographicMap geographicMapInterface, BasicArrayList occupyList, BasicArrayList reusableList){
reusableList!.clear();
    




                        for (
    index: int32_t = occupyList!.size() -1;index >= 0; index--)
        {

    layerGeographicMapCellPosition: GeographicMapCellPosition = occupyList!.get(index) as GeographicMapCellPosition;;
    

    surroundingGeographicMapCellPositionList: BasicArrayList = this.getAllSurroundingAt(geographicMapInterface, layerGeographicMapCellPosition, this.reusableSingleThreadedSurroundingList)!;;
    




                        for (
    index2: int32_t = surroundingGeographicMapCellPositionList!.size() -1;index2 >= 0; index2--)
        {

    geographicMapCellPosition: GeographicMapCellPosition = surroundingGeographicMapCellPositionList!.get(index2) as GeographicMapCellPosition;;
    

                        if(!reusableList!.contains(geographicMapCellPosition) && !occupyList!.contains(geographicMapCellPosition))
                        
                                    {
                                    reusableList!.add(geographicMapCellPosition);
    

                                    }
                                
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return reusableList;
    
}


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
            
    public BasicArrayList getAllSurroundingAt(BasicGeographicMap geographicMapInterface, GeographicMapCellPosition layerGeographicMapCellPosition, BasicArrayList reusableSurroundingList){
reusableSurroundingList!.clear();
    

    geographicMapCellPositionFactory: BasicGeographicMapCellPositionFactory = geographicMapInterface!.getGeographicMapCellPositionFactory()!;;
    

    tiledLayer: AllBinaryTiledLayer = geographicMapInterface!.getAllBinaryTiledLayer()!;;
    

    row: int32_t= 0;;
    

    column: int32_t= 0;;
    




                        for (
    index: int32_t = 0;index < 8; index++)
        {
column= layerGeographicMapCellPosition!.getColumn() +this.surroundArray[index]![0];
    
row= layerGeographicMapCellPosition!.getRow() +this.surroundArray[index]![1];
    

                        if(tiledLayer!.isOnTileLayer(column, row))
                        
                                    {
                                    
    geographicMapCellPosition: GeographicMapCellPosition = geographicMapCellPositionFactory!.getAt(column, row)!;;
    
reusableSurroundingList!.add(geographicMapCellPosition);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return reusableSurroundingList;
    
}


};

            

