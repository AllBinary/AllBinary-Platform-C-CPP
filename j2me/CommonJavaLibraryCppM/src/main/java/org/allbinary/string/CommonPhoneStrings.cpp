
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CommonPhoneStrings
            : public Object
         {

    private: static CommonPhoneStrings* instance() { static std::unique_ptr<CommonPhoneStrings> value(new CommonPhoneStrings()); return value.get(); }

    public: static CommonPhoneStrings* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CommonPhoneStrings::instance();
    
}


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

            

