
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
        



        #ifndef ORG_ALLBINARY_LOGIC_STRING_STRINGUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_STRING_STRINGUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/string/StringUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto StringUtil::instance_owner() -> StringUtil* { static std::unique_ptr<StringUtil> value(new StringUtil()); return value.get(); }
StringUtil* StringUtil::instance = StringUtil::instance_owner();

    auto StringUtil::getInstance() -> StringUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::instance;
    
}


StringUtil::StringUtil() : INIT_STRING(""), ONE_EMPTY_STRING_ARRAY(
                                                        {
                                                            this->EMPTY_STRING
                                                        }), ONE_EMPTY_STRING_ARRAY_OF_ARRAYS(std::vector<std::vector<std::string>>(0, std::vector<std::string>(0))), stringArray({}){
}


    auto StringUtil::getNonNull(std::string string) -> std::string{

                        if(false)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->EMPTY_STRING;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return string;
    

                        }
                            
}


    auto StringUtil::getArrayInstance() -> std::vector<std::string>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->stringArray;
    
}


    auto StringUtil::count(std::string string, char aChar) -> int32_t{

    int32_t count = 0;;
    

    int32_t size = string.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(string[index] == aChar)
                        
                                    {
                                    count++;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return count;
    
}


    auto StringUtil::toString(Object* anyType) -> std::string{

                        if(anyType != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return anyType->toString();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->NULL_STRING;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_LOGIC_STRING_STRINGUTIL_CPP
