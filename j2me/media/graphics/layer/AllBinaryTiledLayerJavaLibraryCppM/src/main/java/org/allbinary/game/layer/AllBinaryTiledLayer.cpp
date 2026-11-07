
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ALLBINARYTILEDLAYER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_ALLBINARYTILEDLAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/layer/Layer.h>

      
#include <org/allbinary/layer/NamedInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

AllBinaryTiledLayer::AllBinaryTiledLayer(int32_t dataId, int32_t width, int32_t height, int32_t cellWidth, int32_t cellHeight) : Layer(0, 0){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->dataId= dataId;
    
this->setLayerWidth(width);
    
this->setLayerHeight(height);
    
Layer::setPosition(0, 0, 0);
    
this->cellWidth= cellWidth;
    
this->cellHeight= cellHeight;
    
this->halfWidth= (this->getWidth()>>1);
    
this->halfHeight= (this->getHeight()>>1);
    
this->halfCellWidth= (cellWidth>>1);
    
this->halfCellHeight= (cellHeight>>1);
    
}


    auto AllBinaryTiledLayer::setCells(std::vector<std::vector<int32_t>> mapTwoDArray) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Start: r: ");
    
stringBuffer->appendint(mapTwoDArray.size());
    
stringBuffer->append(" c: ");
    
stringBuffer->appendint(mapTwoDArray[0].size());
    
stringBuffer->append(" rows: ");
    
stringBuffer->appendint(this->getRows());
    
stringBuffer->append(" columns: ");
    
stringBuffer->appendint(this->getColumns());
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, "setCells");
    

    int32_t rows = this->getRows();;
    

    int32_t columns = this->getColumns();;
    




                        for (
    int32_t col = 0;col < columns; col++)
        {




                        for (
    int32_t row = 0;row < rows; row++)
        {
this->setCell(col, row, mapTwoDArray[row][col]);
    
}

}

}


    auto AllBinaryTiledLayer::updateCells(std::vector<std::vector<int32_t>> mapTwoDArray, int32_t fromTileId, int32_t toTileId) -> void{

    int32_t rows = this->getRows();;
    

    int32_t columns = this->getColumns();;
    




                        for (
    int32_t col = 0;col < columns; col++)
        {




                        for (
    int32_t row = 0;row < rows; row++)
        {

                        if(fromTileId == mapTwoDArray[row][col])
                        
                                    {
                                    mapTwoDArray[row][col]= toTileId;
    
this->setCell(col, row, mapTwoDArray[row][col]);
    

                                    }
                                
}

}

}


    auto AllBinaryTiledLayer::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getClass()->getName();;
    
}


    auto AllBinaryTiledLayer::paint(Graphics* graphics) -> void{
}


    auto AllBinaryTiledLayer::paintThreed(Graphics* graphics) -> void{
}


    auto AllBinaryTiledLayer::getX2() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->x +this->getWidth();
    
}


    auto AllBinaryTiledLayer::getY2() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->y +this->getHeight();
    
}


    auto AllBinaryTiledLayer::getZ2() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return static_cast<int32_t>((this->z +this->getDepth()));
    
}


    auto AllBinaryTiledLayer::getCellWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->cellWidth;
    
}


    auto AllBinaryTiledLayer::getCellHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->cellHeight;
    
}


    auto AllBinaryTiledLayer::getCell(int32_t col, int32_t row) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return  -1;
    
}


    auto AllBinaryTiledLayer::getColumns() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return  -1;
    
}


    auto AllBinaryTiledLayer::getRows() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return  -1;
    
}


    auto AllBinaryTiledLayer::setCell(int32_t col, int32_t row, int32_t tileIndex) -> void{
}


    auto AllBinaryTiledLayer::getHalfWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->halfWidth;
    
}


    auto AllBinaryTiledLayer::getHalfHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->halfHeight;
    
}


    auto AllBinaryTiledLayer::getDataId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->dataId;
    
}


    auto AllBinaryTiledLayer::getHalfCellWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->halfCellWidth;
    
}


    auto AllBinaryTiledLayer::getHalfCellHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->halfCellHeight;
    
}


    auto AllBinaryTiledLayer::isOnTileLayer(int32_t column, int32_t row) -> bool{

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


    auto AllBinaryTiledLayer::getAnimatedTile(int32_t animationTileIndex) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return animationTileIndex;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_ALLBINARYTILEDLAYER_CPP
