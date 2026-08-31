
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CommonButtons.h"

class TouchButtonLocationHelper
            : public Object
         {
        

    private: const totalColumns: int32_t;

    private: const totalRows: int32_t;

    private: columnsRemainder: int32_t;

    private: rowsRemainder: int32_t;

    private: columnsRemainderHalf: int32_t;

    private: rowsRemainderHalf: int32_t;

public constructor (){

            super();
        
    buttonSize: int32_t = CommonButtons.getInstance()!.STANDARD_BUTTON_SIZE;;
    

    displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;;
    
this.totalColumns= displayInfo!.getLastWidth() /buttonSize;
    
this.totalRows= displayInfo!.getLastHeight() /buttonSize;
    
this.columnsRemainder= displayInfo!.getLastWidth() % buttonSize;
    
this.columnsRemainderHalf= (this.columnsRemainder>>1);
    
this.rowsRemainder= displayInfo!.getLastHeight() % buttonSize;
    
this.rowsRemainderHalf= (this.rowsRemainder>>1);
    
}


    public int32_t getTotalColumns(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.totalColumns;
    
}


    public int32_t getTotalRows(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.totalRows;
    
}


    public int32_t getColumnsRemainder(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.columnsRemainder;
    
}


    public int32_t getRowsRemainder(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rowsRemainder;
    
}


    public int32_t getColumnsRemainderHalf(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.columnsRemainderHalf;
    
}


    public int32_t getRowsRemainderHalf(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rowsRemainderHalf;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("totalColumns: ");
    
stringBuffer!.appendint(this.totalColumns);
    
stringBuffer!.append(" totalRows: ");
    
stringBuffer!.appendint(this.totalRows);
    
stringBuffer!.append(" columnsRemainder: ");
    
stringBuffer!.appendint(this.columnsRemainder);
    
stringBuffer!.append(" rowsRemainder: ");
    
stringBuffer!.appendint(this.rowsRemainder);
    
stringBuffer!.append(" columnsRemainderHalf: ");
    
stringBuffer!.appendint(this.columnsRemainderHalf);
    
stringBuffer!.append(" rowsRemainderHalf: ");
    
stringBuffer!.appendint(this.rowsRemainderHalf);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

