
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_PRIMITIVELONGSINGLETON_CPP
        #define ORG_ALLBINARY_LOGIC_MATH_PRIMITIVELONGSINGLETON_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/math/PrimitiveLongSingleton.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PrimitiveLongSingleton::PrimitiveLongSingleton() : UNK({'U','n','k'}), NUMBER_ARRAY({0,1,2,3,4,5,6,7,8,9}), NUMBER_CHAR_ARRAY({'0','1','2','3','4','5','6','7','8','9'}), NUMBER_CHAR_ARRAYS(
                                                        {
                                                            {'0'},{'1'},{'2'},{'3'},{'4'},{'5'},{'6'},{'7'},{'8'},{'9'}
                                                        }), ZERO(
                                                        
                                                        {this->NUMBER_CHAR_ARRAY[0]}
                                                    ) {
        }
        auto PrimitiveLongSingleton::instance_owner() -> PrimitiveLongSingleton* { static std::unique_ptr<PrimitiveLongSingleton> value(new PrimitiveLongSingleton()); return value.get(); }
PrimitiveLongSingleton* PrimitiveLongSingleton::instance = PrimitiveLongSingleton::instance_owner();

    auto PrimitiveLongSingleton::getInstance() -> PrimitiveLongSingleton*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PrimitiveLongSingleton::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto PrimitiveLongSingleton::getNumberFromChar(char numberAsChar) -> int8_t{

    int32_t size = this->NUMBER_CHAR_ARRAY.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(this->NUMBER_CHAR_ARRAY[index] == numberAsChar)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->NUMBER_ARRAY[index];
    

                                    }
                                
}




                            throw Exception(JavaString::valueOf((new StringMaker())->append("numberAsChar was not in array: ")->appendchar(numberAsChar)));
                    
}




        #endif //ORG_ALLBINARY_LOGIC_MATH_PRIMITIVELONGSINGLETON_CPP
