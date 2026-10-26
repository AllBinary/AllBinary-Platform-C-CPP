
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_HTTPFILEPERMISSIONS_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_HTTPFILEPERMISSIONS_H

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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "FileUploadData.h"

class HttpFilePermissions
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: AbFile file;

    private: const BasicArrayList userRoles = BasicArrayListD();

public: HttpFilePermissions(AbPath fullPath);

    public: bool isFile();

    public: BasicArrayList getUserRoles();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_HTTPFILEPERMISSIONS_H
