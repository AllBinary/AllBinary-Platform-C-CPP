
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
        



            #include "../../../../java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/game/TiledLayer.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryTiledLayer.h"

class AllBinaryJ2METiledLayer: public AllBinaryTiledLayer {
        

    const tiledLayerP: TiledLayer;

    const debugColor: int32_t;

public constructor (Integer dataId, TiledLayer tiledLayer, std::vector<std::vector<int32_t>> mapTwoDArray, int32_t debugColor){
            super(dataId, tiledLayer!.getWidth(), tiledLayer!.getHeight(), tiledLayer!.getCellWidth(), tiledLayer!.getCellHeight());
                    

                            //For kotlin this is before the body of the constructor.
                    
this.tiledLayerP= tiledLayer;
    
this.debugColor= debugColor;
    
this.setCells(mapTwoDArray);
    
}


    public paint(Graphics graphics){
this.tiledLayerP!.paint(graphics);
    
}


    const font2: Font = Font.getFont(Font.FACE_SYSTEM, Font.STYLE_PLAIN, 4)!;

    public paintDebug(Graphics graphics){

    font: Font = graphics.getFont()!;;
    
graphics.setFont(this.font2);
    
graphics.setColor(this.debugColor);
    

    x: int32_t = this.tiledLayerP!.getX()!;;
    

    y: int32_t = this.tiledLayerP!.getY()!;;
    

    firstColumn: int32_t = 0;;
    

    firstRow: int32_t = 0;;
    

    totalColumns: int32_t = this.tiledLayerP!.getColumns()!;;
    

    totalRows: int32_t = this.tiledLayerP!.getRows()!;;
    

    x0: int32_t = x;;
    

    tile: int32_t = 0;;
    

    tileHeight: int32_t = this.tiledLayerP!.getCellHeight()!;;
    

    tileWidth: int32_t = this.tiledLayerP!.getCellWidth()!;;
    

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    

    stringMaker: StringMaker = new StringMaker();;
    




                        for (
    rowIndex: int32_t = firstRow;rowIndex < totalRows; rowIndex++)
        {
x= x0;
    




                        for (
    columnIndex: int32_t = firstColumn;columnIndex < totalColumns; columnIndex++)
        {
tile= this.tiledLayerP!.getCell(columnIndex, rowIndex);
    

                        if(tile < 0)
                        
                                    {
                                    tile= this.tiledLayerP!.getAnimatedTile(tile);
    

                                    }
                                

                        if(tile == 0)
                        
                                    {
                                    

                        continue
                    

                                    }
                                
tile--;
    
stringMaker!.delete(0, stringMaker!.length());
    
graphics.drawString(stringMaker!.appendint(columnIndex)!.append(commonSeps!.COMMA)!.appendint(rowIndex)!.append(commonSeps!.COLON)!.appendint(tile)!.toString(), x +5, y +10, 0);
    
}

}

graphics.setFont(font);
    
}


    public moveDXY(int32_t dx, int32_t dy){
this.tiledLayerP!.move(dx, dy);
    
super.moveDXY( -dx,  -dy);
    
}


    public setPosition(int32_t x, int32_t y, int32_t z){
this.tiledLayerP!.setPosition(x, y);
    
super.setPosition( -x,  -y, z);
    
}


    public TiledLayer getTiledLayer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.tiledLayerP;
    
}


    public int32_t getCellWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.tiledLayerP!.getCellWidth();;
    
}


    public int32_t getCellHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.tiledLayerP!.getCellHeight();;
    
}


    public int32_t getCell(int32_t col, int32_t row){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.tiledLayerP!.getCell(col, row);;
    
}


    public int32_t getColumns(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.tiledLayerP!.getColumns();;
    
}


    public int32_t getRows(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.tiledLayerP!.getRows();;
    
}


    public setCell(int32_t col, int32_t row, int32_t index){
this.tiledLayerP!.setCell(col, row, index);
    
}


    public int32_t getAnimatedTile(int32_t animationTileIndex){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.tiledLayerP!.getAnimatedTile(animationTileIndex);;
    
}


};

            

