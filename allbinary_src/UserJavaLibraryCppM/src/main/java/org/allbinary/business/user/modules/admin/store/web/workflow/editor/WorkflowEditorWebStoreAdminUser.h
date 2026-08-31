
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_STORE_WEB_WORKFLOW_EDITOR_WORKFLOWEDITORWEBSTOREADMINUSER_H
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_STORE_WEB_WORKFLOW_EDITOR_WORKFLOWEDITORWEBSTOREADMINUSER_H

            #include "../../../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/user/modules/User.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class WorkflowEditorWebStoreAdminUser: public User {
        

public constructor ();

public constructor (HashMap<any, any> userHashMap);

    public validateSession(WeblisketSessionInterface weblisketSession);

    public updateSession(WeblisketSessionInterface weblisketSession);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_STORE_WEB_WORKFLOW_EDITOR_WORKFLOWEDITORWEBSTOREADMINUSER_H
