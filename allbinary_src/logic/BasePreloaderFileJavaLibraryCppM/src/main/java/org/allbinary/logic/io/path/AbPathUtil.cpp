
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/path/AbPathUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/path/AbPath.h"


AbPathUtil::AbPathUtil() : NO_ABPATH(AbPath::createAbPath()) {
        }
        auto AbPathUtil::instance_owner() -> AbPathUtil* { static std::unique_ptr<AbPathUtil> value(new AbPathUtil()); return value.get(); }
AbPathUtil* AbPathUtil::instance = AbPathUtil::instance_owner();

    auto AbPathUtil::getInstance() -> AbPathUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbPathUtil::instance;
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHUTIL_CPP
