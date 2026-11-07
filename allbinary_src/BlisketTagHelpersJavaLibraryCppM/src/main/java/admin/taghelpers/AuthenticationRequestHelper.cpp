
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
        



        #ifndef ADMIN_TAGHELPERS_AUTHENTICATIONREQUESTHELPER_CPP
        #define ADMIN_TAGHELPERS_AUTHENTICATIONREQUESTHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/AuthenticationRequestHelper.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/business/user/password/Password.h>

      
#include <org/allbinary/business/user/role/BasicUserRole.h>

      
#include <org/allbinary/data/tables/user/UserEntityFactory.h>

      
#include <org/allbinary/data/tables/user/UserEntityInterface.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/email/NewPasswordEmail.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/TagHelper.h"


AuthenticationRequestHelper::AuthenticationRequestHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext) : logUtil(LogUtil::getInstance()), abeClientInformation(ServiceClientInformationInterfaceFactory::getInstance()){
this->weblisketSession= new WeblisketSession(hashMap, pageContext);
    
this->request= dynamic_cast<HttpServletRequest*>(pageContext->getRequest());
    
}


AuthenticationRequestHelper::AuthenticationRequestHelper(HashMap<Object*, Object*>* hashMap, HttpServletRequest* httpServletRequest) : logUtil(LogUtil::getInstance()), abeClientInformation(ServiceClientInformationInterfaceFactory::getInstance()){
this->weblisketSession= new WeblisketSession(hashMap, httpServletRequest);
    
this->request= httpServletRequest;
    
}


                //@Throws(Exception.constructor)
            
    auto AuthenticationRequestHelper::generateNewPassword() -> std::string{

                        if(this->weblisketSession != 
                                    nullptr
                                 && this->weblisketSession->getId() != 
                                    nullptr
                                )
                        
                                    {
                                    
    int32_t startIndex = this->weblisketSession->getId()->length();;
    

                        if(startIndex >= 8)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->weblisketSession->getId()->substring(startIndex -8);;
    

                                    }
                                
                        else {
                            


                            throw Exception("Error Generating New Password");
                    

                        }
                            

                                    }
                                
                        else {
                            


                            throw Exception("No Session Available For Generating New Password");
                    

                        }
                            
}


    auto AuthenticationRequestHelper::newPassword() -> bool{

        try {
            
    std::string userName = this->request->getParameter(WeblisketSessionData::REMOVABLEUSERNAME);;
    

    std::string email = this->request->getParameter(UserData::MAINEMAIL);;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPER))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Generating New Password For: ") +JavaString::valueOf(userName), this, "newPassword()");
    

                                    }
                                

    UserEntityInterface* userEntityInterface = UserEntityFactory::getInstance();;
    

    UserInterface* userInterface = userEntityInterface->getUser(userName);;
    

                        if(userInterface->getMainEmail()->compareTo(email) != 0)
                        
                                    {
                                    
                        if(userInterface->getSecondaryEmail() != 
                                    nullptr
                                 && userInterface->getSecondaryEmail()->compareTo(email) != 0)
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPER))
                        
                                    {
                                    this->logUtil->putF("Requested Email Is Not In User Profile", this, "newPassword()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                                    }
                                

    std::string newPassword = this->generateNewPassword();;
    
userInterface->setPassword(newPassword);
    

    HashMap<Object*, Object*>* newPasswordHashMap = userInterface->toPasswordHashMap();;
    
UserEntityFactory::getInstance()->update(userName, newPasswordHashMap);
    
(new NewPasswordEmail(this->abeClientInformation, userInterface, newPassword))->process();
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPER))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Generated New Password For: ") +JavaString::valueOf(userName), this, "newPassword()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPERERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "newPassword()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}


    auto AuthenticationRequestHelper::changePassword() -> bool{

        try {
            
    std::string userName = this->request->getParameter(WeblisketSessionData::REMOVABLEUSERNAME);;
    

    std::string passwordString = this->request->getParameter(WeblisketSessionData::REMOVABLEPASSWORD);;
    

    std::string newPassword = this->request->getParameter(WeblisketSessionData::REMOVABLENEWPASSWORD);;
    

    std::string newReenteredPassword = this->request->getParameter(WeblisketSessionData::REMOVABLEREENTERNEWPASSWORD);;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPER))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Changing Password For User: ") +JavaString::valueOf(userName), this, "changePassword()");
    

                                    }
                                

    Password* password = new Password(newPassword);;
    

                        if(!JavaBoxes::value<bool>(password->isValid()))
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPER))
                        
                                    {
                                    this->logUtil->putF("New Password Is Not Valid", this, "changePassword()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(newPassword.compare(newReenteredPassword) != 0)
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPER))
                        
                                    {
                                    this->logUtil->putF("New Password Fields Do Not Match", this, "changePassword()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

    std::string sessionPassword = this->weblisketSession->getPassword();;
    

    UserEntityInterface* userEntityInterface = UserEntityFactory::getInstance();;
    

    UserInterface* userInterface = userEntityInterface->getUser(userName);;
    

    std::string login = userEntityInterface->login(userName, passwordString);;
    

                        if(login.compare(GLOBALS2::LOGINSUCCESS) == 0)
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPER))
                        
                                    {
                                    this->logUtil->putF("Authentication Successful", this, "changePassword()");
    

                                    }
                                

    HashMap<Object*, Object*>* newPasswordHashMap = password->toHashMap(
                            nullptr);;
    
UserEntityFactory::getInstance()->update(userName, newPasswordHashMap);
    
(new NewPasswordEmail(this->abeClientInformation, userInterface, newPassword))->process();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    

                                    }
                                

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPER))
                        
                                    {
                                    this->logUtil->putF("Authentication Failed", this, "changePassword()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPERERROR))
                        
                                    {
                                    this->logUtil->put("Authentication Failed", this, "changePassword()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}


    auto AuthenticationRequestHelper::isRoleValid(std::string userName, std::string password, BasicArrayList* roles) -> bool{

        try {
            
    UserEntityInterface* userEntityInterface = UserEntityFactory::getInstance();;
    

    UserInterface* userInterface = userEntityInterface->getUser(userName);;
    

                        if(userInterface->getRole() == 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPER))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Role is null: ") +JavaString::valueOf(userInterface->getRole())) +JavaString::valueOf(" Valid Roles: ")) +JavaString::valueOf(JavaString::valueOf(roles)), this, "isRoleValid()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

    std::vector<Object*> basicUserRoleArray = roles->toArray();;
    

    int32_t size = basicUserRoleArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    BasicUserRole* nextRole = dynamic_cast<BasicUserRole*>(basicUserRoleArray[index]);;
    

                        if(JavaObjects::equals(userInterface->getRole()->getBasicUserRole(), nextRole))
                        
                                    {
                                    userInterface->validateSession(dynamic_cast<WeblisketSessionInterface*>(this->weblisketSession));
    
this->request->removeAttribute(WeblisketSessionData::REMOVABLEUSERNAME);
    
this->request->removeAttribute(WeblisketSessionData::REMOVABLEPASSWORD);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    

                                    }
                                
}


                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPER))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Role is not valid: ");
    
stringBuffer->append(JavaString::valueOf(userInterface->getRole()));
    
stringBuffer->append(" Valid Roles: ");
    
stringBuffer->append(JavaString::valueOf(roles));
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, "isRoleValid()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPERERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "isRoleValid()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}




        #endif //ADMIN_TAGHELPERS_AUTHENTICATIONREQUESTHELPER_CPP
