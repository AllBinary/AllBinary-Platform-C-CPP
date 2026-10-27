
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
        



        #ifndef ORG_ALLBINARY_LOGIC_STRING_STRINGVALIDATIONUTIL_H
        #define ORG_ALLBINARY_LOGIC_STRING_STRINGVALIDATIONUTIL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/TsUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/string/StringUtil.h"

class StringValidationUtil
            : public Object
         {

    private: static StringValidationUtil* instance() { static std::unique_ptr<StringValidationUtil> value(new StringValidationUtil()); return value.get(); }

    public: static StringValidationUtil* getInstance();

    private: StringUtil* stringUtil = StringUtil::getInstance();

    private: TsUtil* tsUtil = TsUtil::getInstance();

private: StringValidationUtil();

    public: bool containsSpaces(std::string value);

    public: bool isNumber(std::string value);

    public: bool isNumberFromChar(char digit);

    public: bool isValidRequired(std::string value, int32_t min, int32_t max);

    public: bool isValidRequiredNumber(std::string value, int32_t min, int32_t max);

    public: bool isValidNotRequired(std::string value, int32_t min, int32_t max);

    public: bool isValidNotRequiredNumber(std::string value, int32_t min, int32_t max);

    public: bool isEmpty(std::string string);

};

            


        #endif //ORG_ALLBINARY_LOGIC_STRING_STRINGVALIDATIONUTIL_H
