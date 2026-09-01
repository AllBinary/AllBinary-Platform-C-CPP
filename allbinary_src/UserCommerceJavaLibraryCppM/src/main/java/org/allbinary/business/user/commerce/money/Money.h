
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

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Long.h"
        
            #include "../../../../../../java/lang/Float.h"
        
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Money
            : public Object
         {

    private: Long units;

    private: const std::string DEFAULT_CURRENCY = "USD";

public: Money(Money money);

public: Money();

public: Money(std::string usDollarStr);

public: Money(int64_t units);

    public: bool isValid();

    public: void add(Money moreMoney);

    public: void add(std::string usDollarStr);

    public: void subtract(std::string usDollarStr);

    public: void multiply(number multiplier);

    public: void multiply(int32_t multiplier);

    private: std::string convertUnitsTo(std::string currency);

    private: int64_t convertUsdToUnits(std::string usDollarStr);

    public: int64_t getUnits();

    public: Long getUnitsLong();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_MONEY_H
