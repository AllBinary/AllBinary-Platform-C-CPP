
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_PRIMITIVEARRAYTOSTRING_CPP
        #define ORG_ALLBINARY_LOGIC_JAVA_PRIMITIVEARRAYTOSTRING_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/java/PrimitiveArrayToString.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PrimitiveArrayToString::PrimitiveArrayToString() {
        }
        
    auto PrimitiveArrayToString::toString(std::vector<float> floats) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    




                        for (
    int32_t index = 0;index < floats.size(); index++)
        {
stringBuffer->appendfloat(floats[index]);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_LOGIC_JAVA_PRIMITIVEARRAYTOSTRING_CPP
