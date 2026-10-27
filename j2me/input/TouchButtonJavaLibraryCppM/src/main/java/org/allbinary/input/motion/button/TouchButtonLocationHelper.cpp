
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Math.h"
        
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/CommonButtons.h"

class TouchButtonLocationHelper
            : public Object
         {

    private: int32_t totalColumns;

    private: int32_t totalRows;

    private: int32_t columnsRemainder;

    private: int32_t rowsRemainder;

    private: int32_t columnsRemainderHalf;

    private: int32_t rowsRemainderHalf;

public: TouchButtonLocationHelper(){

    int32_t buttonSize = CommonButtons::getInstance()->STANDARD_BUTTON_SIZE;;
    

    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    
this->totalColumns= Math::round(displayInfo->getLastWidth() /buttonSize);
    
this->totalRows= Math::round(displayInfo->getLastHeight() /buttonSize);
    
this->columnsRemainder= displayInfo->getLastWidth() % buttonSize;
    
this->columnsRemainderHalf= (this->columnsRemainder>>1);
    
this->rowsRemainder= displayInfo->getLastHeight() % buttonSize;
    
this->rowsRemainderHalf= (this->rowsRemainder>>1);
    
}


    public: int32_t getTotalColumns(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->totalColumns;
    
}


    public: int32_t getTotalRows(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->totalRows;
    
}


    public: int32_t getColumnsRemainder(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->columnsRemainder;
    
}


    public: int32_t getRowsRemainder(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rowsRemainder;
    
}


    public: int32_t getColumnsRemainderHalf(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->columnsRemainderHalf;
    
}


    public: int32_t getRowsRemainderHalf(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rowsRemainderHalf;
    
}


    public: std::string toString(){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("totalColumns: ");
    
stringBuffer->appendint(this->totalColumns);
    
stringBuffer->append(" totalRows: ");
    
stringBuffer->appendint(this->totalRows);
    
stringBuffer->append(" columnsRemainder: ");
    
stringBuffer->appendint(this->columnsRemainder);
    
stringBuffer->append(" rowsRemainder: ");
    
stringBuffer->appendint(this->rowsRemainder);
    
stringBuffer->append(" columnsRemainderHalf: ");
    
stringBuffer->appendint(this->columnsRemainderHalf);
    
stringBuffer->append(" rowsRemainderHalf: ");
    
stringBuffer->appendint(this->rowsRemainderHalf);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


};

            

