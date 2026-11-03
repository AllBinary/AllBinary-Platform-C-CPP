
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHDATA_CPP
        #define ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/path/AbPathData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto AbPathData::instance_owner() -> AbPathData* { static std::unique_ptr<AbPathData> value(new AbPathData()); return value.get(); }
AbPathData* AbPathData::instance = AbPathData::instance_owner();

    auto AbPathData::getInstance() -> AbPathData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbPathData::instance;
    
}


AbPathData::AbPathData() : EXTENSION_SEP(CommonSeps::getInstance()->PERIOD), SEPARATOR(CommonSeps::getInstance()->FORWARD_SLASH){
}




        #endif //ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHDATA_CPP
