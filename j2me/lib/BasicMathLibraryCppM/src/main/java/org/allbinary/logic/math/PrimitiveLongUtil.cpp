
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/math/PrimitiveLongSingleton.h"
#include "org/allbinary/logic/math/MathUtil.h"

class PrimitiveLongUtil
            : public Object
         {

    public: static PrimitiveLongUtil* createPowerOfTen(int32_t powerOfTen){

    PrimitiveLongUtil* primitiveLongUtil = new PrimitiveLongUtil(powerOfTen, NullUtil::getInstance()->NULL_OBJECT);;
    

                        if(powerOfTen % 10 != 0)
                        
                                    {
                                    
    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->put(commonStrings->EXCEPTION, primitiveLongUtil, commonStrings->CONSTRUCTOR, new Exception("Max must be power of 10"));
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return primitiveLongUtil;
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: int32_t powerOfTen;

    private: int32_t maxValue;

    private: int32_t maxDigits;

    private: std::vector<char> charArray;

    private: int32_t currentTotalDigits= 0;

    private: PrimitiveLongSingleton* primitiveLongSingleton = PrimitiveLongSingleton::getInstance();

public: PrimitiveLongUtil(int32_t powerOfTen, Object* unused){
this->maxDigits= MathUtil::getInstance()->getTotalDigits(powerOfTen);
    
this->powerOfTen= powerOfTen;
    
this->maxValue= (powerOfTen *10) -1;
    
this->charArray= std::vector<char>(this->maxDigits);
    
}


    public: std::vector<char> getCharArray(int32_t value){

                        if(value < 10)
                        
                                    {
                                    this->setCurrentTotalDigits(1);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->primitiveLongSingleton->NUMBER_CHAR_ARRAYS[value];
    

                                    }
                                

                        if(value > this->maxValue)
                        
                                    {
                                    this->setCurrentTotalDigits(3);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->primitiveLongSingleton->UNK;
    

                                    }
                                

    int32_t index = 0;;
    

    int32_t div = this->powerOfTen;;
    

    int32_t lastValue = 0;;
    

        while(div >= 1)
        {

    int32_t digit = (value -lastValue) /div;;
    

                        if(digit >= 0 && digit < 10)
                        
                                    {
                                    
                        if(digit == 0 && index == 0)
                        
                                    {
                                    
                                    }
                                
                        else {
                            this->charArray[index++]= this->primitiveLongSingleton->NUMBER_CHAR_ARRAY[digit];
    

                        }
                            
lastValue += digit *div;
    

                                    }
                                
div= div /10;
    
}

this->setCurrentTotalDigits(index);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->charArray;
    
}


    private: void setCurrentTotalDigits(int32_t currentTotalDigits){
this->currentTotalDigits= currentTotalDigits;
    
}


    public: int32_t getCurrentTotalDigits(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentTotalDigits;
    
}


    public: int32_t getMaxDigits(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxDigits;
    
}


};

            

