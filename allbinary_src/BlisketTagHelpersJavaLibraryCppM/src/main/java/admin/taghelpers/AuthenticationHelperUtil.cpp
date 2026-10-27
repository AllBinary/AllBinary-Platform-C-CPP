
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

    public: static AuthenticationHelperUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AuthenticationHelperUtil::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: bool isAuthorized(AuthenticationHelper* authenticationHelper, std::string filePath){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->putF(CommonLabels::getInstance()->START +filePath, this, "isAuthorized()");
    

                                    }
                                

    int32_t endIndex = HttpRequestUtil::getInstance()->getLastSeparatorIndex(filePath);;
    

    AbPath* fullPath = new AbPath(URLGLOBALS::getWebappPath() +JavaString::substring(filePath, 0, endIndex), StringUtil::getInstance()->EMPTY_STRING);;
    

    HttpFilePermissions* downloadFilePermissions = new HttpFilePermissions(fullPath);;
    

    BasicArrayList* userRoles = downloadFilePermissions->getUserRoles();;
    

    UserRole* userRole = authenticationHelper->getRole();;
    

    BasicUserRole* basicUserRole = userRole->getBasicUserRole();;
    

                        if(userRoles->contains(basicUserRole))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Authorized", this, "isAuthorized()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Not Authorized: " +basicUserRole->toString(), this, "isAuthorized()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


};

            

