
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
        



        #ifndef ADMIN_TAGHELPERS_AUTHENTICATIONHELPERUTIL_CPP
        #define ADMIN_TAGHELPERS_AUTHENTICATIONHELPERUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/AuthenticationHelperUtil.h"
        

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

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/AuthenticationHelper.h"


AuthenticationHelperUtil::AuthenticationHelperUtil() : logUtil(LogUtil::getInstance()) {
        }
        auto AuthenticationHelperUtil::instance_owner() -> AuthenticationHelperUtil* { static std::unique_ptr<AuthenticationHelperUtil> value(new AuthenticationHelperUtil()); return value.get(); }
AuthenticationHelperUtil* AuthenticationHelperUtil::instance = AuthenticationHelperUtil::instance_owner();

    auto AuthenticationHelperUtil::getInstance() -> AuthenticationHelperUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AuthenticationHelperUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto AuthenticationHelperUtil::isAuthorized(AuthenticationHelper* authenticationHelper, std::string filePath) -> bool{

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(CommonLabels::getInstance()->START) +JavaString::valueOf(filePath), this, "isAuthorized()");
    

                                    }
                                

    int32_t endIndex = HttpRequestUtil::getInstance()->getLastSeparatorIndex(filePath);;
    

    AbPath* fullPath = new AbPath(URLGLOBALS::getWebappPath() +JavaString::substring(filePath, 0, endIndex), StringUtil::getInstance()->EMPTY_STRING);;
    

    HttpFilePermissions* downloadFilePermissions = new HttpFilePermissions(fullPath);;
    

    BasicArrayList* userRoles = downloadFilePermissions->getUserRoles();;
    

    UserRole* userRole = authenticationHelper->getRole();;
    

    BasicUserRole* basicUserRole = userRole->getBasicUserRole();;
    

                        if(userRoles->contains(basicUserRole))
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Authorized", this, "isAuthorized()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Not Authorized: ") +JavaString::valueOf(basicUserRole->toString()), this, "isAuthorized()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}




        #endif //ADMIN_TAGHELPERS_AUTHENTICATIONHELPERUTIL_CPP
