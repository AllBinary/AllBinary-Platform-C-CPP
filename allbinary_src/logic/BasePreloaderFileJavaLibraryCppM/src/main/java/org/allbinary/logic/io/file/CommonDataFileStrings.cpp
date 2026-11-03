
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_COMMONDATAFILESTRINGS_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_COMMONDATAFILESTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/CommonDataFileStrings.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CommonDataFileStrings::CommonDataFileStrings() : UNCRYPTED_EXTENSION(this->XML) {
        }
        auto CommonDataFileStrings::instance_owner() -> CommonDataFileStrings* { static std::unique_ptr<CommonDataFileStrings> value(new CommonDataFileStrings()); return value.get(); }
CommonDataFileStrings* CommonDataFileStrings::instance = CommonDataFileStrings::instance_owner();

    auto CommonDataFileStrings::getInstance() -> CommonDataFileStrings*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CommonDataFileStrings::instance;
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_COMMONDATAFILESTRINGS_CPP
