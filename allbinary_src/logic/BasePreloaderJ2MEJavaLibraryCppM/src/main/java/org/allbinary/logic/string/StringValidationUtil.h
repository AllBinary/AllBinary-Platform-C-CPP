
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

            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StringUtil.h"

class StringValidationUtil
            : public Object
         {

    private: static StringValidationUtil instance() { return StringValidationUtil(); }

    public: static StringValidationUtil getInstance();

    private: const StringUtil stringUtil = StringUtil::getInstance();

    private: const TsUtil tsUtil = TsUtil::getInstance();

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
