
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

    private: static PrimitiveLongSingleton instance() { return PrimitiveLongSingleton(); }

    public: static PrimitiveLongSingleton getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveLongSingleton::instance();
    
}


    public: const std::vector<char> UNK = ['U','n','k'];

    public: const std::vector<int8_t> NUMBER_ARRAY = {0,1,2,3,4,5,6,7,8,9};

    public: const std::vector<char> NUMBER_CHAR_ARRAY = ['0','1','2','3','4','5','6','7','8','9'];

    public: const std::vector<std::vector<char>> NUMBER_CHAR_ARRAYS = 
                                                        {
                                                            ['0'],['1'],['2'],['3'],['4'],['5'],['6'],['7'],['8'],['9']
                                                        };

    public: const std::vector<char> ZERO = 
                                                        
                                                        [this->NUMBER_CHAR_ARRAY[0]]
                                                    ;

                //@Throws(Exception.constructor)
            
    public: int8_t getNumberFromChar(char numberAsChar){

    int32_t size = this->NUMBER_CHAR_ARRAY.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(this->NUMBER_CHAR_ARRAY[index] == numberAsChar)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NUMBER_ARRAY[index]!;
    

                                    }
                                
}




                            throw Exception(StringMaker().append("numberAsChar was not in array: ").appendchar(numberAsChar).toString());
                    
}


};

            

