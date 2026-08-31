
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

public constructor (Money money){

            super();
        this.units= new Long(money.getUnits());
    
}


public constructor (){

            super();
        this.units= new Long(0);
    
}


public constructor (string usDollarStr){

            super();
        
                        if(usDollarStr != 
                                    null
                                 && StringValidationUtil.getInstance()!.isNumber(usDollarStr))
                        
                                    {
                                    this.units= new Long(convertUsdToUnits(usDollarStr));
    

                                    }
                                
}


public constructor (int64_t units){

            super();
        this.units= new Long(units);
    
}


    public bool isValid(){

                        if(this.units != 
                                    null
                                 && this.units.longValue() > 0 && this.units.longValue() < Long.MAX_VALUE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public add(Money moreMoney){
this.add(moreMoney!.toString());
    
}


    public add(string usDollarStr){
this.units= new Long(this.units.longValue() +convertUsdToUnits(usDollarStr));
    
}


    public subtract(string usDollarStr){
this.units= new Long(this.units.longValue() -convertUsdToUnits(usDollarStr));
    
}


    public multiply(number multiplier){
this.units= new Long(new number(this.units.longValue() *multiplier).longValue());
    
}


    public multiply(int32_t multiplier){
this.units= new Long(this.units.longValue() *multiplier);
    
}


    string convertUnitsTo(string currency){

    stringBuffer: StringMaker = new StringMaker();;
    

                        if(currency.compareTo(this.DEFAULT_CURRENCY) == 0)
                        
                                    {
                                    
    dollar: int64_t = this.units.longValue() /100;;
    

    cents: int64_t = this.units.longValue() -(dollar *100);;
    
stringBuffer!.append(new Long(dollar).toString());
    
stringBuffer!.append(AbPathData.getInstance()!.EXTENSION_SEP);
    

                        if(cents < 10)
                        
                                    {
                                    stringBuffer!.append(CommonPhoneStrings.getInstance()!.ZERO);
    

                                    }
                                
stringBuffer!.append(new Long(cents).toString());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    int64_t convertUsdToUnits(string usDollarStr){

    localUnit: int64_t = 0;;
    

    index: int32_t = usDollarStr!.indexOf(AbPathData.getInstance()!.EXTENSION_SEP)!;;
    

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    dollarStr: string = stringUtil!.EMPTY_STRING;;
    

    centsStr: string = stringUtil!.EMPTY_STRING;;
    

                        if(index < 1)
                        
                                    {
                                    dollarStr= usDollarStr.toCharArray().slice(0, ).join('');
    
centsStr= "00";
    

                                    }
                                
                        else {
                            dollarStr= substring.toCharArray();
    
centsStr= substring.toCharArray();
    

                        }
                            
localUnit= new Long(new Long(dollarStr).longValue() *100).longValue();
    
localUnit += new Long(centsStr).longValue();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return localUnit;
    
}


    public int64_t getUnits(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.units.longValue();;
    
}


    public Long getUnitsLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.units;
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return convertUnitsTo.toCharArray();
    
}


};

            

