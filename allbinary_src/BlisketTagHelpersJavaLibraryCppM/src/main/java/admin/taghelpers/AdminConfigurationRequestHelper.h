
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
        



        #ifndef ADMIN_TAGHELPERS_ADMINCONFIGURATIONREQUESTHELPER_H
        #define ADMIN_TAGHELPERS_ADMINCONFIGURATIONREQUESTHELPER_H

            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/user/modules/admin/configuration/AdminConfiguration.h>

      
#include <org/allbinary/business/user/modules/admin/configuration/AdminConfigurationInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ModifyTable.h"

class AdminConfigurationRequestHelper: public ModifyTable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: HttpServletRequest request;

public: AdminConfigurationRequestHelper(HashMap<Object*, Object*> hashMap, PageContext pageContext);

    public: std::string insert();

    public: std::string delete_();

    public: std::string update();

};

            


        #endif //ADMIN_TAGHELPERS_ADMINCONFIGURATIONREQUESTHELPER_H
