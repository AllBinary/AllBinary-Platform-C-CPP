
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StringUtil
            : public Object
         {
        

    private: static const instance: StringUtil = new StringUtil();

    public static StringUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil.instance;
    
}


    public const INIT_STRING: string = .toCharArray();

    public const NULL_STRING: string = "null";

    public const EMPTY_STRING: string = "";

    public ONE_EMPTY_STRING_ARRAY: std::vector<string> = 
                                                        [
                                                            this.EMPTY_STRING
                                                        ];

    private: const stringArray: std::vector<string> = [];

private constructor (){

            super();
        }


    public string getNonNull(string string){

                        if(string == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.EMPTY_STRING;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return string;
    

                        }
                            
}


    public std::vector<string> getArrayInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.stringArray;
    
}


    public int32_t count(string string, char aChar){

    count: int32_t = 0;;
    

    size: int32_t = string.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

                        if(string[index] == aChar)
                        
                                    {
                                    count++;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return count;
    
}


    public string toString(any = {} anyType){

                        if(anyType != 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyType!.toString();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.NULL_STRING;
    

                        }
                            
}


};

            

