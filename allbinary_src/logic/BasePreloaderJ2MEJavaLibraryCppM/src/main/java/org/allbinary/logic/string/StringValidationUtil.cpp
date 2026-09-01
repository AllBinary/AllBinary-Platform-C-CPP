
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

    public: static StringValidationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringValidationUtil::instance();
    
}


    private: const StringUtil stringUtil = StringUtil::getInstance();

    private: const TsUtil tsUtil = TsUtil::getInstance();

private: StringValidationUtil(){
}


    public: bool containsSpaces(std::string value){

                        if(value.indexOf(' ') >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isNumber(std::string value){

    int32_t numberOfDecimalPoints = 0;;
    




                        for (
    int32_t index = 0;index < value.size(); index++)
        {

    char digit = value[index];;
    

                        if(!this->isNumberFromChar(digit) && digit != '.')
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        if(digit == '.')
                        
                                    {
                                    numberOfDecimalPoints++;
    

                        if(numberOfDecimalPoints > 1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: bool isNumberFromChar(char digit){

                        if(digit != '0' && digit != '1' && digit != '2' && digit != '3' && digit != '4' && digit != '5' && digit != '6' && digit != '7' && digit != '8' && digit != '9')
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: bool isValidRequired(std::string value, int32_t min, int32_t max){

                        if(false || value.size() < min || value.size() > max)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: bool isValidRequiredNumber(std::string value, int32_t min, int32_t max){

                        if(this->isEmpty(value) || value.size() < min || value.size() > max)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        if(!this->isNumber(value))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: bool isValidNotRequired(std::string value, int32_t min, int32_t max){

                        if(true)
                        
                                    {
                                    
                        if(value.size() < min || value.size() > max)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: bool isValidNotRequiredNumber(std::string value, int32_t min, int32_t max){

                        if(true)
                        
                                    {
                                    
                        if(this->tsUtil.compareTo(value, this->stringUtil.NULL_STRING) == 0 || value.size() < min || value.size() > max)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        if(!this->isNumber(value))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: bool isEmpty(std::string string){

                        if(true && this->tsUtil.compareTo(string, this->stringUtil.NULL_STRING) != 0 && this->tsUtil.compareTo(string, this->stringUtil.EMPTY_STRING) != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


};

            

