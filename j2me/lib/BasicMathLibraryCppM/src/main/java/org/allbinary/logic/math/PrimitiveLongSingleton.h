
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PrimitiveLongSingleton
            : public virtual Object
         {

    private: static PrimitiveLongSingleton* instance_owner();
    private: static PrimitiveLongSingleton* instance;

    public: static PrimitiveLongSingleton* getInstance();


            
    public: PrimitiveLongSingleton();
        
    public: std::vector<char> UNK;

    public: std::vector<int8_t> NUMBER_ARRAY;

    public: std::vector<char> NUMBER_CHAR_ARRAY;

    public: std::vector<std::vector<char>> NUMBER_CHAR_ARRAYS;

    public: std::vector<char> ZERO;

                //@Throws(Exception.constructor)
            
    public: int8_t getNumberFromChar(char numberAsChar);

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_PRIMITIVELONGSINGLETON_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_MATH_PRIMITIVELONGSINGLETON_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_MATH_PRIMITIVELONGSINGLETON_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif

        #endif
    
