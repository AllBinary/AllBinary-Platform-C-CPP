
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
        



        #ifndef ORG_ALLBINARY_LOGIC_STRING_SPECIALCHARACTERUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_STRING_SPECIALCHARACTERUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/string/SpecialCharacterUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/math/MathData.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/string/StringUtil.h"


SpecialCharacterUtil::SpecialCharacterUtil() {
        }
        
    auto SpecialCharacterUtil::getHashMap() -> HashMap<Object*, Object*>*{

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    CommonPhoneStrings* commonPhoneStrings = CommonPhoneStrings::getInstance();;
    

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put("!", stringUtil->EMPTY_STRING);
    
hashMap->put("@", stringUtil->EMPTY_STRING);
    
hashMap->put(commonPhoneStrings->POUND, stringUtil->EMPTY_STRING);
    
hashMap->put("$", stringUtil->EMPTY_STRING);
    
hashMap->put("%", stringUtil->EMPTY_STRING);
    
hashMap->put("^", stringUtil->EMPTY_STRING);
    
hashMap->put(commonSeps->AMPERSAND, stringUtil->EMPTY_STRING);
    
hashMap->put(commonPhoneStrings->STAR, stringUtil->EMPTY_STRING);
    
hashMap->put(commonSeps->PARENTHESIS_OPEN, stringUtil->EMPTY_STRING);
    
hashMap->put(commonSeps->PARENTHESIS_CLOSE, stringUtil->EMPTY_STRING);
    
hashMap->put(commonSeps->DASH, stringUtil->EMPTY_STRING);
    
hashMap->put(commonSeps->UNDERSCORE, stringUtil->EMPTY_STRING);
    
hashMap->put(MathData::getInstance()->PLUS, stringUtil->EMPTY_STRING);
    
hashMap->put(commonSeps->EQUALS, stringUtil->EMPTY_STRING);
    
hashMap->put("\\", stringUtil->EMPTY_STRING);
    
hashMap->put("|", stringUtil->EMPTY_STRING);
    
hashMap->put(AbPathData::getInstance()->EXTENSION_SEP, stringUtil->EMPTY_STRING);
    
hashMap->put(",", stringUtil->EMPTY_STRING);
    
hashMap->put("<", stringUtil->EMPTY_STRING);
    
hashMap->put(">", stringUtil->EMPTY_STRING);
    
hashMap->put("?", stringUtil->EMPTY_STRING);
    
hashMap->put(AbPathData::getInstance()->SEPARATOR, stringUtil->EMPTY_STRING);
    
hashMap->put("~", stringUtil->EMPTY_STRING);
    
hashMap->put("`", stringUtil->EMPTY_STRING);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}




        #endif //ORG_ALLBINARY_LOGIC_STRING_SPECIALCHARACTERUTIL_CPP
