
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_MONEY_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_MONEY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Long.h"
        
            #include "java/lang/Float.h"
        
class AbPathData;
class StringMaker;
class StringUtil;
class StringValidationUtil;
class CommonPhoneStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Money
            : public virtual Object
         {

    private: int64_t units;

    private: const std::string DEFAULT_CURRENCY = "USD";

public: Money(Money* money);

public: Money();

public: Money(std::string usDollarStr);

public: Money(int64_t units);

    public: bool isValid();

    public: void add(Money* moreMoney);

    public: void add(std::string usDollarStr);

    public: void subtract(std::string usDollarStr);

    public: void multiply(float multiplier);

    public: void multiply(int32_t multiplier);

    private: std::string convertUnitsTo(std::string currency);

    private: int64_t convertUsdToUnits(std::string usDollarStr);

    public: int64_t getUnits();

    public: int64_t getUnitsLong();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_MONEY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_MONEY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_MONEY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonPhoneStrings.h>)
#include <org/allbinary/string/CommonPhoneStrings.h>
#endif

        #endif
    
