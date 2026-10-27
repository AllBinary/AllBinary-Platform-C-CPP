
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
        



        #ifndef ADMIN_TAGHELPERS_AUTHENTICATIONHELPERUTIL_H
        #define ADMIN_TAGHELPERS_AUTHENTICATIONHELPERUTIL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/user/role/BasicUserRole.h>

      
#include <org/allbinary/business/user/role/UserRole.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/http/file/upload/HttpFilePermissions.h>

      
#include <org/allbinary/logic/communication/http/request/HttpRequestUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/AuthenticationHelper.h"

class AuthenticationHelperUtil
            : public Object
         {

    private: static AuthenticationHelperUtil* instance() { static std::unique_ptr<AuthenticationHelperUtil> value(new AuthenticationHelperUtil()); return value.get(); }

    public: static AuthenticationHelperUtil* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: bool isAuthorized(AuthenticationHelper* authenticationHelper, std::string filePath);

};

            


        #endif //ADMIN_TAGHELPERS_AUTHENTICATIONHELPERUTIL_H
