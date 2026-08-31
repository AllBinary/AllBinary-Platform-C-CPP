
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PrimitiveLongSingleton.h"
#include "MathUtil.h"

class PrimitiveLongUtil
            : public Object
         {
        

    public static PrimitiveLongUtil createPowerOfTen(int32_t powerOfTen){

    primitiveLongUtil: PrimitiveLongUtil = new PrimitiveLongUtil(powerOfTen, NullUtil.getInstance()!.NULL_OBJECT);;
    

                        if(powerOfTen % 10 != 0)
                        
                                    {
                                    
    logUtil: LogUtil = LogUtil.getInstance()!;;
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
logUtil!.put(commonStrings!.EXCEPTION, primitiveLongUtil, commonStrings!.CONSTRUCTOR, new Exception("Max must be power of 10"));
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return primitiveLongUtil;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: powerOfTen: int32_t;

    private: maxValue: int32_t;

    private: maxDigits: int32_t;

    private: const charArray: std::vector<char>;

    private: currentTotalDigits: int32_t= 0;

    private: const primitiveLongSingleton: PrimitiveLongSingleton = PrimitiveLongSingleton.getInstance()!;

public constructor (int32_t powerOfTen, any = {} unused){

            super();
        this.maxDigits= MathUtil.getInstance()!.getTotalDigits(powerOfTen);
    
this.powerOfTen= powerOfTen;
    
this.maxValue= (powerOfTen *10) -1;
    
this.charArray= new Array(this.maxDigits);
    
}


    public std::vector<char> getCharArray(int32_t value){

                        if(value < 10)
                        
                                    {
                                    this.setCurrentTotalDigits(1);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.primitiveLongSingleton!.NUMBER_CHAR_ARRAYS[value]!;
    

                                    }
                                

                        if(value > this.maxValue)
                        
                                    {
                                    this.setCurrentTotalDigits(3);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.primitiveLongSingleton!.UNK;
    

                                    }
                                

    index: int32_t = 0;;
    

    div: int32_t = this.powerOfTen;;
    

    lastValue: int32_t = 0;;
    

        while(div >= 1)
        {

    digit: int32_t = (value -lastValue) /div;;
    

                        if(digit >= 0 && digit < 10)
                        
                                    {
                                    
                        if(digit == 0 && index == 0)
                        
                                    {
                                    
                                    }
                                
                        else {
                            this.charArray[index++]= this.primitiveLongSingleton!.NUMBER_CHAR_ARRAY[digit]!;
    

                        }
                            
lastValue += digit *div;
    

                                    }
                                
div= div /10;
    
}

this.setCurrentTotalDigits(index);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.charArray;
    
}


    setCurrentTotalDigits(int32_t currentTotalDigits){
this.currentTotalDigits= currentTotalDigits;
    
}


    public int32_t getCurrentTotalDigits(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.currentTotalDigits;
    
}


    public int32_t getMaxDigits(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxDigits;
    
}


};

            

