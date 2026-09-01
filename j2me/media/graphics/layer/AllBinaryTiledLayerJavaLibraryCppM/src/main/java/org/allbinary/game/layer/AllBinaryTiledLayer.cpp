
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        
            #include "../../../../java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/layer/Layer.h>

      
#include <org/allbinary/layer/NamedInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AllBinaryTiledLayer: public Layer, public NamedInterface, public PaintableInterface {

    private: int32_t cellWidth;

    private: int32_t cellHeight;

    private: int32_t halfWidth;

    private: int32_t halfHeight;

    private: int32_t halfCellWidth;

    private: int32_t halfCellHeight;

    private: Integer dataId;

public: AllBinaryTiledLayer(Integer dataId, int32_t width, int32_t height, int32_t cellWidth, int32_t cellHeight){
            super(0, 0);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->dataId= dataId;
    
this->setLayerWidth(width);
    
this->setLayerHeight(height);
    
super.setPosition(0, 0, 0);
    
this->cellWidth= cellWidth;
    
this->cellHeight= cellHeight;
    
this->halfWidth= (this->getWidth()>>1);
    
this->halfHeight= (this->getHeight()>>1);
    
this->halfCellWidth= (cellWidth>>1);
    
this->halfCellHeight= (cellHeight>>1);
    
}


    public: void setCells(std::vector<std::vector<int32_t>> mapTwoDArray){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Start: r: ");
    
stringBuffer.appendint(mapTwoDArray.size());
    
stringBuffer.append(" c: ");
    
stringBuffer.appendint(mapTwoDArray[0]!.size());
    
stringBuffer.append(" rows: ");
    
stringBuffer.appendint(this->getRows());
    
stringBuffer.append(" columns: ");
    
stringBuffer.appendint(this->getColumns());
    
this->logUtil.putF(stringBuffer.toString(), this, "setCells");
    

    int32_t rows = this->getRows();;
    

    int32_t columns = this->getColumns();;
    




                        for (
    int32_t col = 0;col < columns; col++)
        {




                        for (
    int32_t row = 0;row < rows; row++)
        {
this->setCell(col, row, mapTwoDArray[row]![col]!);
    
}

}

}


    public: void updateCells(std::vector<std::vector<int32_t>> mapTwoDArray, int32_t fromTileId, int32_t toTileId){

    int32_t rows = this->getRows();;
    

    int32_t columns = this->getColumns();;
    




                        for (
    int32_t col = 0;col < columns; col++)
        {




                        for (
    int32_t row = 0;row < rows; row++)
        {

                        if(fromTileId == mapTwoDArray[row]![col])
                        
                                    {
                                    mapTwoDArray[row]![col]= toTileId;
    
this->setCell(col, row, mapTwoDArray[row]![col]!);
    

                                    }
                                
}

}

}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->constructor.name.toString()!;;
    
}


    public: void paint(Graphics graphics){
}


    public: void paintThreed(Graphics graphics){
}


    public: int32_t getX2(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->x +this->getWidth();
    
}


    public: int32_t getY2(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->y +this->getHeight();
    
}


    public: int32_t getZ2(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>((this->z +this->getDepth()));
    
}


    public: int32_t getCellWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cellWidth;
    
}


    public: int32_t getCellHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cellHeight;
    
}


    public: int32_t getCell(int32_t col, int32_t row){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public: int32_t getColumns(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public: int32_t getRows(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public: void setCell(int32_t col, int32_t row, int32_t tileIndex){
}


    public: int32_t getHalfWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->halfWidth;
    
}


    public: int32_t getHalfHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->halfHeight;
    
}


    public: Integer getDataId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dataId;
    
}


    public: int32_t getHalfCellWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->halfCellWidth;
    
}


    public: int32_t getHalfCellHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->halfCellHeight;
    
}


    public: bool isOnTileLayer(int32_t column, int32_t row){

                        if(this->getColumns() > column && this->getRows() > row && row >= 0 && column >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public: int32_t getAnimatedTile(int32_t animationTileIndex){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return animationTileIndex;
    
}


};

            

