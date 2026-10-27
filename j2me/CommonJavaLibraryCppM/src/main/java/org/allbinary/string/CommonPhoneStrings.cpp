
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
        



        #ifndef ORG_ALLBINARY_STRING_COMMONPHONESTRINGS_CPP
        #define ORG_ALLBINARY_STRING_COMMONPHONESTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/string/CommonPhoneStrings.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CommonPhoneStrings::CommonPhoneStrings() {
        }
        auto CommonPhoneStrings::instance_owner() -> CommonPhoneStrings* { static std::unique_ptr<CommonPhoneStrings> value(new CommonPhoneStrings()); return value.get(); }
CommonPhoneStrings* CommonPhoneStrings::instance = CommonPhoneStrings::instance_owner();

    auto CommonPhoneStrings::getInstance() -> CommonPhoneStrings*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CommonPhoneStrings::instance;
    
}




        #endif //ORG_ALLBINARY_STRING_COMMONPHONESTRINGS_CPP
