
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

      
#include <org/allbinary/logic/math/MathUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SimpleGeographicMap.h"
#include "GeographicMapInterface.h"
#include "BasicGeographicMapCellPositionFactory.h"
#include "GeographicMapCellPositionFactoryInterface.h"
#include "GeographicMapCellTypeFactory.h"
#include "GeographicMapCellPositionBaseFactory.h"
#include "GeographicMapCellPosition.h"
#include "SimpleGeographicMapCellPositionFactory.h"
#include "GeographicMapCellType.h"

class BasicGeographicMap: public SimpleGeographicMap: public GeographicMapInterface {
        

    public static const NULL_BASIC_GEOGRAPHIC_MAP_ARRAY: std::vector<BasicGeographicMap> = [];

    private: const mathUtil: MathUtil = MathUtil.getInstance()!;

    private: const geographicMapCellPositionFactory: BasicGeographicMapCellPositionFactory;

    private: const geographicMapCellPositionFactoryInterface: GeographicMapCellPositionFactoryInterface;

    private: const geographicMapCellTypeFactory: GeographicMapCellTypeFactory;

public constructor (Integer id, string name, std::vector<int32_t> cellTypeIdToGeographicMapCellType, AllBinaryTiledLayer tiledLayer, BasicColor foregroundBasicColor, BasicColor backgroundBasicColor, GeographicMapCellPositionFactoryInterface geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory geographicMapCellTypeFactory){
            super(id, name, cellTypeIdToGeographicMapCellType, tiledLayer, foregroundBasicColor, backgroundBasicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.geographicMapCellPositionFactoryInterface= geographicMapCellPositionFactoryInterface;
    
this.geographicMapCellPositionFactory= geographicMapCellPositionBaseFactory!.getInstance(this);
    
this.geographicMapCellTypeFactory= geographicMapCellTypeFactory;
    
}


                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition getCellPosition(int32_t direction, GeographicMapCellPosition oldGeographicMapCellPosition){



        switch (direction) {
            case 0: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellPositionFactory!.getAt(oldGeographicMapCellPosition!.getColumn() -1, oldGeographicMapCellPosition!.getRow());;
    
}
case 1: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellPositionFactory!.getAt(oldGeographicMapCellPosition!.getColumn() +1, oldGeographicMapCellPosition!.getRow());;
    
}
case 2: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellPositionFactory!.getAt(oldGeographicMapCellPosition!.getColumn(), oldGeographicMapCellPosition!.getRow() -1);;
    
}
case 3: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellPositionFactory!.getAt(oldGeographicMapCellPosition!.getColumn(), oldGeographicMapCellPosition!.getRow() +1);;
    
}
default: {


                            throw new Exception("Only Four Directions");
                    
}

        }       
        
    
}


                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition getCellPositionNoThrow(int32_t direction, GeographicMapCellPosition oldGeographicMapCellPosition){



        switch (direction) {
            case 0: {
                        if(oldGeographicMapCellPosition!.getColumn() -1 >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellPositionFactory!.getAt(oldGeographicMapCellPosition!.getColumn() -1, oldGeographicMapCellPosition!.getRow());;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    

                        }
                            
}
case 1: {
                        if(oldGeographicMapCellPosition!.getColumn() +1 < this.getAllBinaryTiledLayer()!.getColumns())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellPositionFactory!.getAt(oldGeographicMapCellPosition!.getColumn() +1, oldGeographicMapCellPosition!.getRow());;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    

                        }
                            
}
case 2: {
                        if(oldGeographicMapCellPosition!.getRow() -1 >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellPositionFactory!.getAt(oldGeographicMapCellPosition!.getColumn(), oldGeographicMapCellPosition!.getRow() -1);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    

                        }
                            
}
case 3: {
                        if(oldGeographicMapCellPosition!.getRow() +1 < this.getAllBinaryTiledLayer()!.getRows())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellPositionFactory!.getAt(oldGeographicMapCellPosition!.getColumn(), oldGeographicMapCellPosition!.getRow() +1);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    

                        }
                            
}
default: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    
}

        }       
        
    
}


                //@Throws(Exception.constructor)
            
    public bool isOfFourDirections(GeographicMapCellPosition oldGeographicMapCellPosition, GeographicMapCellPosition newGeographicMapCellPosition){




                        for (
    index: int32_t = 0;index < 4; index++)
        {

                        if(newGeographicMapCellPosition == this.getCellPositionNoThrow(index, oldGeographicMapCellPosition))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition getCellPositionAtXY(int32_t x, int32_t y){

    allBinaryTiledLayer: AllBinaryTiledLayer = this.getAllBinaryTiledLayer()!;;
    

    i_column: int32_t = this.mathUtil!.abs(x /allBinaryTiledLayer!.getCellHeight())!;;
    

    i_row: int32_t = this.mathUtil!.abs(y /allBinaryTiledLayer!.getCellWidth())!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellPositionFactory!.getAt(i_column, i_row);;
    
}


    public GeographicMapCellPosition getCellPositionAtXYNoThrow(int32_t x, int32_t y){

    allBinaryTiledLayer: AllBinaryTiledLayer = this.getAllBinaryTiledLayer()!;;
    

    i_column: int32_t = this.mathUtil!.abs(x /allBinaryTiledLayer!.getCellHeight())!;;
    

    i_row: int32_t = this.mathUtil!.abs(y /allBinaryTiledLayer!.getCellWidth())!;;
    

                        if(allBinaryTiledLayer!.getColumns() > i_column && allBinaryTiledLayer!.getRows() > i_row)
                        
                                    {
                                    
        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellPositionFactory!.getAt(i_column, i_row);;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    
}


                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public bool isOnMap(GeographicMapCellPosition geographicMapCellPosition){

    allBinaryTiledLayer: AllBinaryTiledLayer = this.getAllBinaryTiledLayer()!;;
    

    i_column: int32_t = geographicMapCellPosition!.getColumn()!;;
    

    i_row: int32_t = geographicMapCellPosition!.getRow()!;;
    

                        if(allBinaryTiledLayer!.getColumns() > i_column && allBinaryTiledLayer!.getRows() > i_row)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList getCellPositionAtNoThrow(int32_t x, int32_t y, int32_t x2, int32_t y2, BasicArrayList geographicMapCellPositionList){
geographicMapCellPositionList!.clear();
    

    allBinaryTiledLayer: AllBinaryTiledLayer = this.getAllBinaryTiledLayer()!;;
    

    i_columnMin: int32_t = this.mathUtil!.abs(x /allBinaryTiledLayer!.getCellHeight())!;;
    

    i_rowMin: int32_t = this.mathUtil!.abs(y /allBinaryTiledLayer!.getCellWidth())!;;
    

    i_columnMax: int32_t = this.mathUtil!.abs(x2 /allBinaryTiledLayer!.getCellHeight()) +1;;
    

    i_rowMax: int32_t = this.mathUtil!.abs(y2 /allBinaryTiledLayer!.getCellWidth()) +1;;
    




                        for (
    columnIndex: int32_t = i_columnMin;columnIndex < i_columnMax; columnIndex++)
        {




                        for (
    rowIndex: int32_t = i_rowMin;rowIndex < i_rowMax; rowIndex++)
        {

                        if(allBinaryTiledLayer!.getColumns() > columnIndex && allBinaryTiledLayer!.getRows() > rowIndex)
                        
                                    {
                                    geographicMapCellPositionList!.add(this.geographicMapCellPositionFactory!.getAt(columnIndex, rowIndex));
    

                                    }
                                
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapCellPositionList;
    
}


                //@Throws(Exception.constructor)
            
    public bool getCellPositionsAt(Layer layer, std::vector<std::vector<GeographicMapCellPosition>> currentCellPositionArray, std::vector<std::vector<GeographicMapCellPosition>> cellPositionArray){

    hasChanged: bool = false;;
    

    size: int32_t = cellPositionArray!.length
                ;;
    

    size2: int32_t = cellPositionArray[0]!.length
                ;;
    

    xPortion: int32_t = layer.getXP() /(size -1);;
    

    yPortion: int32_t = layer.getYP() /(size -1);;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {




                        for (
    index2: int32_t = 0;index2 < size2; index2++)
        {

    x: int32_t = xPortion *index;;
    

    y: int32_t = yPortion *index;;
    
cellPositionArray[index]![index2]= this.getCellPositionAtXY(x, y);
    

                        if(currentCellPositionArray[index]![index2] != cellPositionArray[index]![index2])
                        
                                    {
                                    hasChanged= true;
    

                                    }
                                
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hasChanged;
    
}


                //@Throws(Exception.constructor)
            
    public GeographicMapCellType getCellTypeAtXY(int32_t x, int32_t y){

    cellPosition: GeographicMapCellPosition = this.getCellPositionAtXY(x, y)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getCellTypeAt(cellPosition);;
    
}


    public BasicGeographicMapCellPositionFactory getGeographicMapCellPositionFactory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellPositionFactory;
    
}


    public GeographicMapCellPositionFactoryInterface getGeographicMapCellPositionFactoryInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellPositionFactoryInterface;
    
}


    public GeographicMapCellTypeFactory getGeographicMapCellTypeFactory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellTypeFactory;
    
}


};

            

