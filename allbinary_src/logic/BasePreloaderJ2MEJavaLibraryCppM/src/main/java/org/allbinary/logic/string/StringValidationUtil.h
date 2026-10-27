
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class TsUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class StringUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StringValidationUtil
            : public virtual Object
         {

    private: static StringValidationUtil* instance_owner();
    private: static StringValidationUtil* instance;

    public: static StringValidationUtil* getInstance();

    private: StringUtil* stringUtil;

    private: TsUtil* tsUtil;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_STRING_STRINGVALIDATIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_STRING_STRINGVALIDATIONUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif

        #endif
    
