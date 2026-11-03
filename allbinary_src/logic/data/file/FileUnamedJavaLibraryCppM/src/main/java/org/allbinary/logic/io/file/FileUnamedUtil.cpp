
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEUNAMEDUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEUNAMEDUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/FileUnamedUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

FileUnamedUtil::FileUnamedUtil() : commonSeps(CommonSeps::getInstance()) {
        }
        auto FileUnamedUtil::instance_owner() -> FileUnamedUtil* { static std::unique_ptr<FileUnamedUtil> value(new FileUnamedUtil()); return value.get(); }
FileUnamedUtil* FileUnamedUtil::instance = FileUnamedUtil::instance_owner();

    auto FileUnamedUtil::getInstance() -> FileUnamedUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return FileUnamedUtil::instance;
    
}


    auto FileUnamedUtil::process(std::string string) -> std::string{

    std::string simplifiedString = JavaString::toLowerCase(string);;
    
simplifiedString= JavaString::replace(simplifiedString, this->commonSeps->SPACE, this->commonSeps->UNDERSCORE);
    
simplifiedString= JavaString::replace(simplifiedString, this->commonSeps->DASH, this->commonSeps->UNDERSCORE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return simplifiedString;
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEUNAMEDUTIL_CPP
