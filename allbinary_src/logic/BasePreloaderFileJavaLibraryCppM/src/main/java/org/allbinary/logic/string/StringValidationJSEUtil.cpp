
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
        



        #ifndef ORG_ALLBINARY_LOGIC_STRING_STRINGVALIDATIONJSEUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_STRING_STRINGVALIDATIONJSEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/string/StringValidationJSEUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Character.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

StringValidationJSEUtil::StringValidationJSEUtil(){
}


    auto StringValidationJSEUtil::isBlank(std::string string) -> bool{

    int32_t len = string.size();;
    




                        for (
    int32_t i = 0;i < len; i++)
        {

    char c = string[i];;
    

                        if(Character::isWhitespace(c) == false)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}




        #endif //ORG_ALLBINARY_LOGIC_STRING_STRINGVALIDATIONJSEUTIL_CPP
