
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
        



#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graph/V.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CellPosition: public V {

    public: static std::string toStringCellPosition(CellPosition basicGeographicMapCellPosition){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CellPosition::toStringColRow(basicGeographicMapCellPosition.getColumn(), basicGeographicMapCellPosition.getRow());;
    
}


    public: static std::string toStringColRow(int32_t i_column, int32_t i_row){

    StringMaker stringBuffer = StringMaker();;
    

    CommonSeps commonSeps = CommonSeps::getInstance();;
    
stringBuffer.append(commonSeps.PARENTHESIS_OPEN);
    
stringBuffer.appendint(i_column);
    
stringBuffer.append(commonSeps.COMMA);
    
stringBuffer.appendint(i_row);
    
stringBuffer.append(commonSeps.PARENTHESIS_CLOSE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    private: int32_t id;

    private: int32_t column;

    private: int32_t row;

public: CellPosition(int32_t column, int32_t row, int32_t columns, int32_t rows){
this->column= column;
    
this->row= row;
    
this->id= (row *columns) +column;
    
}


    public: int32_t getColumn(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->column;
    
}


    public: int32_t getRow(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->row;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CellPosition::toStringColRow(this->getColumn(), this->getRow());;
    
}


    public: int32_t getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->id;
    
}


};

            

