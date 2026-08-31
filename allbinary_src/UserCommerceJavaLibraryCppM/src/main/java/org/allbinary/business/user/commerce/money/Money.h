
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
        

    private: units: Long;

    private: const DEFAULT_CURRENCY: string = "USD";

public constructor (Money money);

public constructor ();

public constructor (string usDollarStr);

public constructor (int64_t units);

    public bool isValid();

    public add(Money moreMoney);

    public add(string usDollarStr);

    public subtract(string usDollarStr);

    public multiply(number multiplier);

    public multiply(int32_t multiplier);

    string convertUnitsTo(string currency);

    int64_t convertUsdToUnits(string usDollarStr);

    public int64_t getUnits();

    public Long getUnitsLong();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_MONEY_H
