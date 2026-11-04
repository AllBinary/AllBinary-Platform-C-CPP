
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_MONEY_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_MONEY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/money/Money.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Long.h"
        
            #include "java/lang/Float.h"
        
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

Money::Money(Money* money){
this->units= int64_t(money->getUnits());
    
}


Money::Money(){
this->units= int64_t(0);
    
}


Money::Money(std::string usDollarStr){

                        if(true && StringValidationUtil::getInstance()->isNumber(usDollarStr))
                        
                                    {
                                    this->units= int64_t(convertUsdToUnits(usDollarStr));
    

                                    }
                                
}


Money::Money(int64_t units){
this->units= int64_t(units);
    
}


    auto Money::isValid() -> bool{

                        if(this->units != 
                                    nullptr
                                 && this->units > 0 && this->units < Long.MAX_VALUE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


    auto Money::add(Money* moreMoney) -> void{
this->add(moreMoney->toString());
    
}


    auto Money::add(std::string usDollarStr) -> void{
this->units= int64_t(this->units +convertUsdToUnits(usDollarStr));
    
}


    auto Money::subtract(std::string usDollarStr) -> void{
this->units= int64_t(this->units -convertUsdToUnits(usDollarStr));
    
}


    auto Money::multiply(float multiplier) -> void{
this->units= int64_t((float(this->units *multiplier)));
    
}


    auto Money::multiply(int32_t multiplier) -> void{
this->units= int64_t(this->units *multiplier);
    
}


    auto Money::convertUnitsTo(std::string currency) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

                        if(currency.compare(this->DEFAULT_CURRENCY) == 0)
                        
                                    {
                                    
    int64_t dollar = this->units /100;;
    

    int64_t cents = this->units -(dollar *100);;
    
stringBuffer->append(JavaString::valueOf((int64_t(dollar))));
    
stringBuffer->append(AbPathData::getInstance()->EXTENSION_SEP);
    

                        if(cents < 10)
                        
                                    {
                                    stringBuffer->append(CommonPhoneStrings::getInstance()->ZERO);
    

                                    }
                                
stringBuffer->append(JavaString::valueOf((int64_t(cents))));
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


    auto Money::convertUsdToUnits(std::string usDollarStr) -> int64_t{

    int64_t localUnit = 0;;
    

    int32_t index = JavaString::indexOf(usDollarStr, AbPathData::getInstance()->EXTENSION_SEP);;
    

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    std::string dollarStr = stringUtil->EMPTY_STRING;;
    

    std::string centsStr = stringUtil->EMPTY_STRING;;
    

                        if(index < 1)
                        
                                    {
                                    dollarStr= std::string(usDollarStr);
    
centsStr= "00";
    

                                    }
                                
                        else {
                            dollarStr= substring.toCharArray();
    
centsStr= substring.toCharArray();
    

                        }
                            
localUnit= (int64_t((Long.valueOf(dollarStr)) *100));
    
localUnit += (Long.valueOf(centsStr));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return localUnit;
    
}


    auto Money::getUnits() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->units;;
    
}


    auto Money::getUnitsLong() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->units;
    
}


    auto Money::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return convertUnitsTo.toCharArray();
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_MONEY_CPP
