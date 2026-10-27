
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
        
class Money
            : public Object
         {

    private: int64_t units;

    private: const std::string DEFAULT_CURRENCY = "USD";

public: Money(Money* money){
this->units= int64_t(money->getUnits());
    
}


public: Money(){
this->units= int64_t(0);
    
}


public: Money(std::string usDollarStr){

                        if(true && StringValidationUtil::getInstance()->isNumber(usDollarStr))
                        
                                    {
                                    this->units= int64_t(convertUsdToUnits(usDollarStr));
    

                                    }
                                
}


public: Money(int64_t units){
this->units= int64_t(units);
    
}


    public: bool isValid(){

                        if(this->units != 
                                    nullptr
                                 && this->units.longValue() > 0 && this->units.longValue() < Long.MAX_VALUE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public: void add(Money* moreMoney){
this->add(moreMoney->toString());
    
}


    public: void add(std::string usDollarStr){
this->units= int64_t(this->units.longValue() +convertUsdToUnits(usDollarStr));
    
}


    public: void subtract(std::string usDollarStr){
this->units= int64_t(this->units.longValue() -convertUsdToUnits(usDollarStr));
    
}


    public: void multiply(float multiplier){
this->units= int64_t((float(this->units.longValue() *multiplier)).longValue());
    
}


    public: void multiply(int32_t multiplier){
this->units= int64_t(this->units.longValue() *multiplier);
    
}


    private: std::string convertUnitsTo(std::string currency){

    StringMaker* stringBuffer = new StringMaker();;
    

                        if(currency.compare(this->DEFAULT_CURRENCY) == 0)
                        
                                    {
                                    
    int64_t dollar = this->units.longValue() /100;;
    

    int64_t cents = this->units.longValue() -(dollar *100);;
    
stringBuffer->append((int64_t(dollar)).toString());
    
stringBuffer->append(AbPathData::getInstance()->EXTENSION_SEP);
    

                        if(cents < 10)
                        
                                    {
                                    stringBuffer->append(CommonPhoneStrings::getInstance()->ZERO);
    

                                    }
                                
stringBuffer->append((int64_t(cents)).toString());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    private: int64_t convertUsdToUnits(std::string usDollarStr){

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
                            
localUnit= (int64_t((int64_t(dollarStr)).longValue() *100)).longValue();
    
localUnit += (int64_t(centsStr)).longValue();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return localUnit;
    
}


    public: int64_t getUnits(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->units.longValue();;
    
}


    public: int64_t getUnitsLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->units;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return convertUnitsTo.toCharArray();
    
}


};

            

