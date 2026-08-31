
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CellPosition.h"

class CellPositionFactory
            : public Object
         {
        

    private: static SINGLETON: CellPositionFactory = new CellPositionFactory();

    public static CellPositionFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CellPositionFactory.SINGLETON;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const NONE: CellPosition = new CellPosition( -1,  -1,  -1,  -1);

    private: cellPositionArray: std::vector<std::vector<CellPosition>> = new Array(0).fill(null).map(() => new Array(0).fill(0))
                                                            ;

    private: columns: int32_t= 0;

    private: rows: int32_t= 0;

private constructor (){

            super();
        }


    public init(int32_t columns, int32_t rows){
this.cellPositionArray= new Array(columns).fill(null).map(() => new Array(rows).fill(0))
                                                            ;
    
this.columns= columns;
    
this.rows= rows;
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Init: columns: ");
    
stringBuffer!.appendint(columns);
    
stringBuffer!.append(" rows: ");
    
stringBuffer!.appendint(rows);
    
this.logUtil!.putF(stringBuffer!.toString(), this, commonStrings!.INIT);
    




                        for (
    column: int32_t = 0;column < columns; column++)
        {




                        for (
    row: int32_t = 0;row < rows; row++)
        {
this.createInstance(column, row);
    
}

}

}


    public CellPosition getInstanceColRow(int32_t i_column, int32_t i_row){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.cellPositionArray[i_column]![i_row]!;
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(new StringMaker().append("columns: ")!.appendint(this.getColumns())!.append(" rows: ")!.appendint(this.getRows())!.append(" col: ")!.appendint(i_column)!.append(" row: ")!.appendint(i_row)!.toString(), this, commonStrings!.GET_INSTANCE, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.NONE;
    
}

}


    public CellPosition createInstance(int32_t i_column, int32_t i_row){

    cellPositionCanBeNull: CellPosition = this.cellPositionArray[i_column]![i_row];;
    

                        if(cellPositionCanBeNull == 
                                    null
                                )
                        
                                    {
                                    cellPositionCanBeNull= new CellPosition(i_column, i_row, this.columns, this.rows);
    
this.cellPositionArray[i_column]![i_row]= cellPositionCanBeNull;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return cellPositionCanBeNull;
    
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

            

