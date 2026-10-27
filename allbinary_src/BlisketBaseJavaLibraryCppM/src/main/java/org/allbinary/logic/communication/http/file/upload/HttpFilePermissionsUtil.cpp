
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_HTTPFILEPERMISSIONSUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_HTTPFILEPERMISSIONSUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/http/file/upload/HttpFilePermissionsUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

HttpFilePermissionsUtil::HttpFilePermissionsUtil() {
        }
        auto HttpFilePermissionsUtil::instance_owner() -> HttpFilePermissionsUtil* { static std::unique_ptr<HttpFilePermissionsUtil> value(new HttpFilePermissionsUtil()); return value.get(); }
HttpFilePermissionsUtil* HttpFilePermissionsUtil::instance = HttpFilePermissionsUtil::instance_owner();

    auto HttpFilePermissionsUtil::getInstance() -> HttpFilePermissionsUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HttpFilePermissionsUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto HttpFilePermissionsUtil::create(AbPath* path) -> void{

    AbFile* file = AbFile::createAbFileFromAbPath(path);;
    

                        if(!file->isFile())
                        
                                    {
                                    file->createNewFile();
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_HTTPFILEPERMISSIONSUTIL_CPP
