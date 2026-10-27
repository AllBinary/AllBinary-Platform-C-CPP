
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_PRIMITIVELONGSINGLETON_H
        #define ORG_ALLBINARY_LOGIC_MATH_PRIMITIVELONGSINGLETON_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PrimitiveLongSingleton
            : public Object
         {

    private: static PrimitiveLongSingleton* instance() { static std::unique_ptr<PrimitiveLongSingleton> value(new PrimitiveLongSingleton()); return value.get(); }

    public: static PrimitiveLongSingleton* getInstance();

    public: const std::vector<char> UNK = ['U','n','k'];

    public: const std::vector<int8_t> NUMBER_ARRAY = {0,1,2,3,4,5,6,7,8,9};

    public: const std::vector<char> NUMBER_CHAR_ARRAY = ['0','1','2','3','4','5','6','7','8','9'];

    public: const std::vector<std::vector<char>> NUMBER_CHAR_ARRAYS = 
                                                        {
                                                            ['0'],['1'],['2'],['3'],['4'],['5'],['6'],['7'],['8'],['9']
                                                        };

    public: const std::vector<char> ZERO = 
                                                        
                                                        {this->NUMBER_CHAR_ARRAY[0]}
                                                    ;

                //@Throws(Exception.constructor)
            
    public: int8_t getNumberFromChar(char numberAsChar);

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_PRIMITIVELONGSINGLETON_H
