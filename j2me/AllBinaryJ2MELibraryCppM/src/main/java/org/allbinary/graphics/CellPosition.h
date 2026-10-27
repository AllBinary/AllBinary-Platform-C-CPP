
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/graph/V.h>
class StringMaker;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CellPosition: public V {

    public: static std::string toStringCellPosition(CellPosition* basicGeographicMapCellPosition);

    public: static std::string toStringColRow(int32_t i_column, int32_t i_row);

    private: int32_t id;

    private: int32_t column;

    private: int32_t row;

public: CellPosition(int32_t column, int32_t row, int32_t columns, int32_t rows);

    public: int32_t getColumn();

    public: int32_t getRow();

    public: std::string toString();

    public: int32_t getId();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CELLPOSITION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_CELLPOSITION_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_CELLPOSITION_H_COMPLETE
        #if __has_include(<org/allbinary/graph/V.h>)
#include <org/allbinary/graph/V.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif

        #endif
    
