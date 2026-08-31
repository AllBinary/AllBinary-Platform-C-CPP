
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

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PrimitiveLongSingleton
            : public Object
         {
        

    private: static const instance: PrimitiveLongSingleton = new PrimitiveLongSingleton();

    public static PrimitiveLongSingleton getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveLongSingleton.instance;
    
}


    public const UNK: std::vector<char> = ['U','n','k'];

    public const NUMBER_ARRAY: std::vector<int8_t> = [0,1,2,3,4,5,6,7,8,9];

    public const NUMBER_CHAR_ARRAY: std::vector<char> = ['0','1','2','3','4','5','6','7','8','9'];

    public const NUMBER_CHAR_ARRAYS: std::vector<std::vector<char>> = 
                                                        [
                                                            ['0'],['1'],['2'],['3'],['4'],['5'],['6'],['7'],['8'],['9']
                                                        ];

    public const ZERO: std::vector<char> = 
                                                        
                                                        [this.NUMBER_CHAR_ARRAY[0]]
                                                    ;

                //@Throws(Exception.constructor)
            
    public int8_t getNumberFromChar(char numberAsChar){

    size: int32_t = this.NUMBER_CHAR_ARRAY.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

                        if(this.NUMBER_CHAR_ARRAY[index] == numberAsChar)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.NUMBER_ARRAY[index]!;
    

                                    }
                                
}




                            throw new Exception(new StringMaker().append("numberAsChar was not in array: ")!.appendchar(numberAsChar)!.toString());
                    
}


};

            

