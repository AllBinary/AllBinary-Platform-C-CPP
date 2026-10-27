
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
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StringUtil
            : public Object
         {

    private: static StringUtil* instance() { static std::unique_ptr<StringUtil> value(new StringUtil()); return value.get(); }

    public: static StringUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::instance();
    
}


    public: const std::string INIT_STRING = "";

    public: const std::string NULL_STRING = "null";

    public: const std::string EMPTY_STRING = "";

    public: std::vector<std::string> ONE_EMPTY_STRING_ARRAY = 
                                                        {
                                                            this->EMPTY_STRING
                                                        };

    private: const std::vector<std::string> stringArray = {};

private: StringUtil(){
}


    public: std::string getNonNull(std::string string){

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


    public: std::vector<std::string> getArrayInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->stringArray;
    
}


    public: int32_t count(std::string string, char aChar){

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


    public: std::string toString(Object* anyType){

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


};

            

