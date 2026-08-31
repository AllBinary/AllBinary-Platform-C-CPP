
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
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicGeographicMap.h"
#include "GeographicMapCellPositionFactoryInterface.h"
#include "GeographicMapCellPosition.h"
#include "GeographicMapCellPositionFactoryInitVisitorInterface.h"

class BasicGeographicMapCellPositionFactory
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const geographicMapCellPositionArray: std::vector<std::vector<GeographicMapCellPosition>>;

    const geographicMapInterface: BasicGeographicMap;

    const geographicMapCellPositionFactoryInterface: GeographicMapCellPositionFactoryInterface;

    private: const columns: int32_t;

    private: const rows: int32_t;

    private: const tiledLayer: AllBinaryTiledLayer;

public constructor (BasicGeographicMap geographicMapInterface){

            super();
        this.geographicMapInterface= geographicMapInterface;
    
this.geographicMapCellPositionFactoryInterface= this.geographicMapInterface!.getGeographicMapCellPositionFactoryInterface();
    
this.tiledLayer= this.geographicMapInterface!.getAllBinaryTiledLayer();
    
this.columns= this.tiledLayer!.getColumns();
    
this.rows= this.tiledLayer!.getRows();
    
this.geographicMapCellPositionArray= new Array(this.rows).fill(null).map(() => new Array(this.columns).fill(0))
                                                            ;
    
this.init();
    
}


                //@Throws(Exception.constructor)
            
    init(){

    tiledLayer: AllBinaryTiledLayer = this.tiledLayer;;
    

    columns: int32_t = this.getColumns()!;;
    

    rows: int32_t = this.getRows()!;;
    

    width: int32_t = tiledLayer!.getCellWidth()!;;
    

    height: int32_t = tiledLayer!.getCellHeight()!;;
    




                        for (
    column: int32_t = 0;column < columns; column++)
        {




                        for (
    row: int32_t = 0;row < rows; row++)
        {
this.createInstance(column, row, width, height);
    
}

}

}


                //@Throws(Exception.constructor)
            
    public visit(GeographicMapCellPositionFactoryInitVisitorInterface geographicMapCelPositionFactoryInitVisitorInterface){

    tiledLayer: AllBinaryTiledLayer = this.tiledLayer;;
    

    columns: int32_t = this.getColumns()!;;
    

    rows: int32_t = this.getRows()!;;
    

        try {
            
    cellPosition: GeographicMapCellPosition;;
    




                        for (
    column: int32_t = 0;column < columns; column++)
        {




                        for (
    row: int32_t = 0;row < rows; row++)
        {
cellPosition= this.getAt(column, row);
    
geographicMapCelPositionFactoryInitVisitorInterface!.visit(tiledLayer, cellPosition);
    
}

}


                //: 
} catch(e) 
            {

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    
this.logUtil!.put(new StringMaker().append(commonSeps!.BRACKET_OPEN)!.appendint(rows)!.append(commonSeps!.BRACKET_CLOSE)!.append(commonSeps!.BRACKET_OPEN)!.appendint(columns)!.append(commonSeps!.BRACKET_CLOSE)!.toString(), this, "visit", e);
    



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition getAt(int32_t i_column, int32_t i_row){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellPositionArray[i_row]![i_column]!;
    
}


                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition getInstance(GeographicMapCellPosition anotherMapGeographicMapCellPosition){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getAt(anotherMapGeographicMapCellPosition!.getColumn(), anotherMapGeographicMapCellPosition!.getRow());;
    
}


                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition createInstance(int32_t i_column, int32_t i_row, int32_t width, int32_t height){

    cellPositionCanBeNull: any = this.geographicMapCellPositionArray[i_row]![i_column];;
    

                        if(cellPositionCanBeNull == 
                                    null
                                )
                        
                                    {
                                    cellPositionCanBeNull= this.geographicMapCellPositionFactoryInterface!.getInstance(this.geographicMapInterface, i_column, i_row, this.columns, this.rows, width, height);
    
this.geographicMapCellPositionArray[i_row]![i_column]= cellPositionCanBeNull as GeographicMapCellPosition;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return cellPositionCanBeNull as GeographicMapCellPosition;
    
}


    public int32_t getColumns(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.columns;
    
}


    public int32_t getRows(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rows;
    
}


};

            

