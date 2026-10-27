
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
        



        #ifndef ORG_ALLBINARY_LOGIC_STRING_STRINGVALIDATIONUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_STRING_STRINGVALIDATIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/string/StringValidationUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/TsUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/string/StringUtil.h"

auto StringValidationUtil::instance_owner() -> StringValidationUtil* { static std::unique_ptr<StringValidationUtil> value(new StringValidationUtil()); return value.get(); }
StringValidationUtil* StringValidationUtil::instance = StringValidationUtil::instance_owner();

    auto StringValidationUtil::getInstance() -> StringValidationUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringValidationUtil::instance;
    
}


StringValidationUtil::StringValidationUtil() : stringUtil(StringUtil::getInstance()), tsUtil(TsUtil::getInstance()){
}


    auto StringValidationUtil::containsSpaces(std::string value) -> bool{

                        if(JavaString::indexOf(value, ' ') >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto StringValidationUtil::isNumber(std::string value) -> bool{

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


    auto StringValidationUtil::isNumberFromChar(char digit) -> bool{

                        if(digit != '0' && digit != '1' && digit != '2' && digit != '3' && digit != '4' && digit != '5' && digit != '6' && digit != '7' && digit != '8' && digit != '9')
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    auto StringValidationUtil::isValidRequired(std::string value, int32_t min, int32_t max) -> bool{

                        if(false || value.size() < min || value.size() > max)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    auto StringValidationUtil::isValidRequiredNumber(std::string value, int32_t min, int32_t max) -> bool{

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


    auto StringValidationUtil::isValidNotRequired(std::string value, int32_t min, int32_t max) -> bool{

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


    auto StringValidationUtil::isValidNotRequiredNumber(std::string value, int32_t min, int32_t max) -> bool{

                        if(true)
                        
                                    {
                                    
                        if(this->tsUtil->compareTo(value, this->stringUtil->NULL_STRING) == 0 || value.size() < min || value.size() > max)
                        
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


    auto StringValidationUtil::isEmpty(std::string string) -> bool{

                        if(true && this->tsUtil->compareTo(string, this->stringUtil->NULL_STRING) != 0 && this->tsUtil->compareTo(string, this->stringUtil->EMPTY_STRING) != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_LOGIC_STRING_STRINGVALIDATIONUTIL_CPP
