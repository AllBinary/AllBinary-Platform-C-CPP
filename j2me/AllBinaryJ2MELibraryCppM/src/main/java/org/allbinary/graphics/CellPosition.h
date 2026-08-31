
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CELLPOSITION_H
        #define ORG_ALLBINARY_GRAPHICS_CELLPOSITION_H

#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graph/V.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CellPosition: public V {
        

    public static string toStringCellPosition(CellPosition basicGeographicMapCellPosition);

    public static string toStringColRow(int32_t i_column, int32_t i_row);

    private: const id: int32_t;

    private: const column: int32_t;

    private: const row: int32_t;

public constructor (int32_t column, int32_t row, int32_t columns, int32_t rows);

    public int32_t getColumn();

    public int32_t getRow();

    public string toString();

    public int32_t getId();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CELLPOSITION_H
