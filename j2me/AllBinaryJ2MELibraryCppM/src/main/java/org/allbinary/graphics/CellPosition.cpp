
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CELLPOSITION_CPP
        #define ORG_ALLBINARY_GRAPHICS_CELLPOSITION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/CellPosition.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/graph/V.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CellPosition::CellPosition(int32_t column, int32_t row, int32_t columns, int32_t rows){
this->column= column;
    
this->row= row;
    
this->id= (row *columns) +column;
    
}


    auto CellPosition::getColumn() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->column;
    
}


    auto CellPosition::getRow() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->row;
    
}


    auto CellPosition::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CellPosition::toStringColRow(this->getColumn(), this->getRow());;
    
}


    auto CellPosition::toStringCellPosition(CellPosition* basicGeographicMapCellPosition) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CellPosition::toStringColRow(basicGeographicMapCellPosition->getColumn(), basicGeographicMapCellPosition->getRow());;
    
}


    auto CellPosition::toStringColRow(int32_t i_column, int32_t i_row) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    
stringBuffer->append(commonSeps->PARENTHESIS_OPEN);
    
stringBuffer->appendint(i_column);
    
stringBuffer->append(commonSeps->COMMA);
    
stringBuffer->appendint(i_row);
    
stringBuffer->append(commonSeps->PARENTHESIS_CLOSE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


    auto CellPosition::getId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->id;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_CELLPOSITION_CPP
