
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
        



        #ifndef ORG_ALLBINARY_STRING_COMMONSTATESTRINGS_CPP
        #define ORG_ALLBINARY_STRING_COMMONSTATESTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/string/CommonStateStrings.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CommonStateStrings::CommonStateStrings() {
        }
        auto CommonStateStrings::instance_owner() -> CommonStateStrings* { static std::unique_ptr<CommonStateStrings> value(new CommonStateStrings()); return value.get(); }
CommonStateStrings* CommonStateStrings::instance = CommonStateStrings::instance_owner();

    auto CommonStateStrings::getInstance() -> CommonStateStrings*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CommonStateStrings::instance;
    
}




        #endif //ORG_ALLBINARY_STRING_COMMONSTATESTRINGS_CPP
