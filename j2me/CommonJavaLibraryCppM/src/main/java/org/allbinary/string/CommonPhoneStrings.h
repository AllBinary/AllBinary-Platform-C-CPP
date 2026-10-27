
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
        



        #ifndef ORG_ALLBINARY_STRING_COMMONPHONESTRINGS_H
        #define ORG_ALLBINARY_STRING_COMMONPHONESTRINGS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class JsType;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CommonPhoneStrings
            : public virtual Object
         {

    private: static CommonPhoneStrings* instance_owner();
    private: static CommonPhoneStrings* instance;

    public: static CommonPhoneStrings* getInstance();


            
    public: CommonPhoneStrings();
        
    public: const std::string UP = "UP";

    public: const std::string DOWN = "DOWN";

    public: const std::string LEFT = "LEFT";

    public: const std::string RIGHT = "RIGHT";

    public: const std::string ZERO = "0";

    public: const std::string ONE = "1";

    public: const std::string TWO = "2";

    public: const std::string THREE = "3";

    public: const std::string FOUR = "4";

    public: const std::string FIVE = "5";

    public: const std::string SIX = "6";

    public: const std::string SEVEN = "7";

    public: const std::string EIGHT = "8";

    public: const std::string NINE = "9";

    public: const std::string POUND = "#";

    public: const std::string STAR = "*";

    public: const std::string FIRE = "FIRE";

};

            


        #endif //ORG_ALLBINARY_STRING_COMMONPHONESTRINGS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_STRING_COMMONPHONESTRINGS_H_COMPLETE)
        #define ORG_ALLBINARY_STRING_COMMONPHONESTRINGS_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif

        #endif
    
