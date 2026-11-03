
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_HTTPFILEPERMISSIONS_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_HTTPFILEPERMISSIONS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/http/file/upload/HttpFilePermissions.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/user/role/BasicUserRoleFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/http/file/upload/FileUploadData.h"


HttpFilePermissions::HttpFilePermissions(AbPath* fullPath) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), userRoles(new BasicArrayListD()){
this->file= AbFile::createAbFileFromAbPath(new AbPath(fullPath->toFileSystemString(), FileUploadData::getInstance()->FILE));
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Loading Privileges: ") +JavaString::valueOf(fullPath->toFileSystemString()), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                

                        if(this->isFile())
                        
                                    {
                                    this->userRoles->add(BasicUserRoleFactory::getInstance()->ADMINISTRATOR);
    

                                    }
                                

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("User Roles: ") +JavaString::valueOf(this->userRoles), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


    auto HttpFilePermissions::isFile() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file->isFile();;
    
}


    auto HttpFilePermissions::getUserRoles() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->userRoles;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_HTTPFILEPERMISSIONS_CPP
