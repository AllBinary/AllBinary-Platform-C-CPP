
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
        



            #include <vector>
        
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

class BasicGeographicMap: public SimpleGeographicMap, public GeographicMapInterface {

    public: static const std::vector<BasicGeographicMap> NULL_BASIC_GEOGRAPHIC_MAP_ARRAY = {};

    private: const MathUtil mathUtil = MathUtil::getInstance();

    private: BasicGeographicMapCellPositionFactory geographicMapCellPositionFactory;

    private: GeographicMapCellPositionFactoryInterface geographicMapCellPositionFactoryInterface;

    private: GeographicMapCellTypeFactory geographicMapCellTypeFactory;

public: BasicGeographicMap(Integer id, std::string name, std::vector<int32_t> cellTypeIdToGeographicMapCellType, AllBinaryTiledLayer tiledLayer, BasicColor foregroundBasicColor, BasicColor backgroundBasicColor, GeographicMapCellPositionFactoryInterface geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory geographicMapCellTypeFactory){
            super(id, name, cellTypeIdToGeographicMapCellType, tiledLayer, foregroundBasicColor, backgroundBasicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->geographicMapCellPositionFactoryInterface= geographicMapCellPositionFactoryInterface;
    
this->geographicMapCellPositionFactory= geographicMapCellPositionBaseFactory.getInstance(this);
    
this->geographicMapCellTypeFactory= geographicMapCellTypeFactory;
    
}


                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition getCellPosition(int32_t direction, GeographicMapCellPosition oldGeographicMapCellPosition){



        switch (direction) {
            case 0: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellPositionFactory.getAt(oldGeographicMapCellPosition.getColumn() -1, oldGeographicMapCellPosition.getRow());;
    
}
case 1: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellPositionFactory.getAt(oldGeographicMapCellPosition.getColumn() +1, oldGeographicMapCellPosition.getRow());;
    
}
case 2: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellPositionFactory.getAt(oldGeographicMapCellPosition.getColumn(), oldGeographicMapCellPosition.getRow() -1);;
    
}
case 3: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellPositionFactory.getAt(oldGeographicMapCellPosition.getColumn(), oldGeographicMapCellPosition.getRow() +1);;
    
}
default: {


                            throw Exception("Only Four Directions");
                    
}

        }       
        
    
}


                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition getCellPositionNoThrow(int32_t direction, GeographicMapCellPosition oldGeographicMapCellPosition){



        switch (direction) {
            case 0: {
                        if(oldGeographicMapCellPosition.getColumn() -1 >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellPositionFactory.getAt(oldGeographicMapCellPosition.getColumn() -1, oldGeographicMapCellPosition.getRow());;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    

                        }
                            
}
case 1: {
                        if(oldGeographicMapCellPosition.getColumn() +1 < this->getAllBinaryTiledLayer().getColumns())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellPositionFactory.getAt(oldGeographicMapCellPosition.getColumn() +1, oldGeographicMapCellPosition.getRow());;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    

                        }
                            
}
case 2: {
                        if(oldGeographicMapCellPosition.getRow() -1 >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellPositionFactory.getAt(oldGeographicMapCellPosition.getColumn(), oldGeographicMapCellPosition.getRow() -1);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    

                        }
                            
}
case 3: {
                        if(oldGeographicMapCellPosition.getRow() +1 < this->getAllBinaryTiledLayer().getRows())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellPositionFactory.getAt(oldGeographicMapCellPosition.getColumn(), oldGeographicMapCellPosition.getRow() +1);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    

                        }
                            
}
default: {


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    
}

        }       
        
    
}


                //@Throws(Exception.constructor)
            
    public: bool isOfFourDirections(GeographicMapCellPosition oldGeographicMapCellPosition, GeographicMapCellPosition newGeographicMapCellPosition){




                        for (
    int32_t index = 0;index < 4; index++)
        {

                        if(newGeographicMapCellPosition == this->getCellPositionNoThrow(index, oldGeographicMapCellPosition))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition getCellPositionAtXY(int32_t x, int32_t y){

    AllBinaryTiledLayer allBinaryTiledLayer = this->getAllBinaryTiledLayer();;
    

    int32_t i_column = this->mathUtil.abs(x /allBinaryTiledLayer.getCellHeight());;
    

    int32_t i_row = this->mathUtil.abs(y /allBinaryTiledLayer.getCellWidth());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellPositionFactory.getAt(i_column, i_row);;
    
}


    public: GeographicMapCellPosition getCellPositionAtXYNoThrow(int32_t x, int32_t y){

    AllBinaryTiledLayer allBinaryTiledLayer = this->getAllBinaryTiledLayer();;
    

    int32_t i_column = this->mathUtil.abs(x /allBinaryTiledLayer.getCellHeight());;
    

    int32_t i_row = this->mathUtil.abs(y /allBinaryTiledLayer.getCellWidth());;
    

                        if(allBinaryTiledLayer.getColumns() > i_column && allBinaryTiledLayer.getRows() > i_row)
                        
                                    {
                                    
        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellPositionFactory.getAt(i_column, i_row);;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    
}


                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: bool isOnMap(GeographicMapCellPosition geographicMapCellPosition){

    AllBinaryTiledLayer allBinaryTiledLayer = this->getAllBinaryTiledLayer();;
    

    int32_t i_column = geographicMapCellPosition.getColumn();;
    

    int32_t i_row = geographicMapCellPosition.getRow();;
    

                        if(allBinaryTiledLayer.getColumns() > i_column && allBinaryTiledLayer.getRows() > i_row)
                        
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
            
    public: BasicArrayList getCellPositionAtNoThrow(int32_t x, int32_t y, int32_t x2, int32_t y2, BasicArrayList geographicMapCellPositionList){
geographicMapCellPositionList.clear();
    

    AllBinaryTiledLayer allBinaryTiledLayer = this->getAllBinaryTiledLayer();;
    

    int32_t i_columnMin = this->mathUtil.abs(x /allBinaryTiledLayer.getCellHeight());;
    

    int32_t i_rowMin = this->mathUtil.abs(y /allBinaryTiledLayer.getCellWidth());;
    

    int32_t i_columnMax = this->mathUtil.abs(x2 /allBinaryTiledLayer.getCellHeight()) +1;;
    

    int32_t i_rowMax = this->mathUtil.abs(y2 /allBinaryTiledLayer.getCellWidth()) +1;;
    




                        for (
    int32_t columnIndex = i_columnMin;columnIndex < i_columnMax; columnIndex++)
        {




                        for (
    int32_t rowIndex = i_rowMin;rowIndex < i_rowMax; rowIndex++)
        {

                        if(allBinaryTiledLayer.getColumns() > columnIndex && allBinaryTiledLayer.getRows() > rowIndex)
                        
                                    {
                                    geographicMapCellPositionList.add(this->geographicMapCellPositionFactory.getAt(columnIndex, rowIndex));
    

                                    }
                                
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapCellPositionList;
    
}


                //@Throws(Exception.constructor)
            
    public: bool getCellPositionsAt(Layer layer, std::vector<std::vector<GeographicMapCellPosition>> currentCellPositionArray, std::vector<std::vector<GeographicMapCellPosition>> cellPositionArray){

    bool hasChanged = false;;
    

    int32_t size = cellPositionArray.size();;
    

    int32_t size2 = cellPositionArray[0]!.size();;
    

    int32_t xPortion = layer.getXP() /(size -1);;
    

    int32_t yPortion = layer.getYP() /(size -1);;
    




                        for (
    int32_t index = 0;index < size; index++)
        {




                        for (
    int32_t index2 = 0;index2 < size2; index2++)
        {

    int32_t x = xPortion *index;;
    

    int32_t y = yPortion *index;;
    
cellPositionArray[index]![index2]= this->getCellPositionAtXY(x, y);
    

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
            
    public: GeographicMapCellType getCellTypeAtXY(int32_t x, int32_t y){

    GeographicMapCellPosition cellPosition = this->getCellPositionAtXY(x, y);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getCellTypeAt(cellPosition);;
    
}


    public: BasicGeographicMapCellPositionFactory getGeographicMapCellPositionFactory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellPositionFactory;
    
}


    public: GeographicMapCellPositionFactoryInterface getGeographicMapCellPositionFactoryInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellPositionFactoryInterface;
    
}


    public: GeographicMapCellTypeFactory getGeographicMapCellTypeFactory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellTypeFactory;
    
}


};

            

