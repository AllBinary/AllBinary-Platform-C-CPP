
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONLOCATIONHELPER_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONLOCATIONHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/TouchButtonLocationHelper.h"
        

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


TouchButtonLocationHelper::TouchButtonLocationHelper(){

    int32_t buttonSize = CommonButtons::getInstance()->STANDARD_BUTTON_SIZE;;
    

    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    
this->totalColumns= Math::round(displayInfo->getLastWidth() /buttonSize);
    
this->totalRows= Math::round(displayInfo->getLastHeight() /buttonSize);
    
this->columnsRemainder= displayInfo->getLastWidth() % buttonSize;
    
this->columnsRemainderHalf= (this->columnsRemainder>>1);
    
this->rowsRemainder= displayInfo->getLastHeight() % buttonSize;
    
this->rowsRemainderHalf= (this->rowsRemainder>>1);
    
}


    auto TouchButtonLocationHelper::getTotalColumns() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->totalColumns;
    
}


    auto TouchButtonLocationHelper::getTotalRows() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->totalRows;
    
}


    auto TouchButtonLocationHelper::getColumnsRemainder() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->columnsRemainder;
    
}


    auto TouchButtonLocationHelper::getRowsRemainder() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rowsRemainder;
    
}


    auto TouchButtonLocationHelper::getColumnsRemainderHalf() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->columnsRemainderHalf;
    
}


    auto TouchButtonLocationHelper::getRowsRemainderHalf() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rowsRemainderHalf;
    
}


    auto TouchButtonLocationHelper::toString() -> std::string{

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




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONLOCATIONHELPER_CPP
