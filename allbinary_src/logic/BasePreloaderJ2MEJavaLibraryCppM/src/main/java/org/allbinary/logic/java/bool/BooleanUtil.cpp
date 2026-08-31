
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BooleanFactory.h"

class BooleanUtil
            : public Object
         {
        

    private: static const instance: BooleanUtil = new BooleanUtil();

    public static BooleanUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanUtil.instance;
    
}


    private: const tsUtil: TsUtil = TsUtil.getInstance()!;

private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public bool getFromString(string booleanString){

    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

    booleanFactory: BooleanFactory = BooleanFactory.getInstance()!;;
    

                        if(stringValidationUtil!.isEmpty(booleanString))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

    booleanStringLowerCase: string = booleanString!.toLowerCase()!;;
    

                        if(this.tsUtil!.compareTo(booleanStringLowerCase, booleanFactory!.TRUE_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                             else 
                        if(this.tsUtil!.compareTo(booleanStringLowerCase, booleanFactory!.FALSE_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                            throw new Exception("Invalid booleanString - Must be true or false");
                    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public bool isStringBoolean(string booleanString){

    booleanFactory: BooleanFactory = BooleanFactory.getInstance()!;;
    

    booleanStringLowerCase: string = booleanString!.toLowerCase()!;;
    

                        if(booleanStringLowerCase!.compareTo(booleanFactory!.TRUE_STRING) == 0 || booleanStringLowerCase!.compareTo(booleanFactory!.FALSE_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public string toStringFromBooleanArray(std::vector<bool> booleanArray){

    stringMaker: StringMaker = new StringMaker();;
    

    size: int32_t = booleanArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
stringMaker!.appendboolean(booleanArray[index]!);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringMaker!.toString();;
    
}


};

            

