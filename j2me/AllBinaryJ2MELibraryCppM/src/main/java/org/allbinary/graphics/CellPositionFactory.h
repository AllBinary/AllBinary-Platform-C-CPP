
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CELLPOSITIONFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_CELLPOSITIONFACTORY_H

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

    public static CellPositionFactory getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const NONE: CellPosition = new CellPosition( -1,  -1,  -1,  -1);

    private: cellPositionArray: std::vector<std::vector<CellPosition>> = new Array(0).fill(null).map(() => new Array(0).fill(0))
                                                            ;

    private: columns: int32_t= 0;

    private: rows: int32_t= 0;

private constructor ();

    public init(int32_t columns, int32_t rows);

    public CellPosition getInstanceColRow(int32_t i_column, int32_t i_row);

    public CellPosition createInstance(int32_t i_column, int32_t i_row);

    public int32_t getColumns();

    public int32_t getRows();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CELLPOSITIONFACTORY_H
