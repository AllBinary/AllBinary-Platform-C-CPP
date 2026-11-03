
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
        



        #ifndef ADMIN_TAGS_FILEAUTHENTICATIONTAG_CPP
        #define ADMIN_TAGS_FILEAUTHENTICATIONTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/FileAuthenticationTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/Calendar.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <javax/servlet/jsp/tagext/TagSupport.h>

      
#include <org/allbinary/business/init/InstallerInfo.h>

      
#include <org/allbinary/business/user/role/BasicUserRole.h>

      
#include <org/allbinary/business/user/role/BasicUserRoleFactory.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/http/request/session/BasicWeblisketSession.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/java/bool/BooleanUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/CustomTagSupport.h>

      

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

#include <org/allbinary/globals/GLOBALS2.h>

#include <org/allbinary/globals/GLOBALS2.h>

#include <org/allbinary/globals/GLOBALS2.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/globals/GLOBALS2.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/globals/GLOBALS2.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/globals/GLOBALS2.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/globals/GLOBALS2.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/globals/GLOBALS2.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/globals/GLOBALS2.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/globals/GLOBALS2.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

FileAuthenticationTag::FileAuthenticationTag() : logUtil(LogUtil::getInstance()){
}


    auto FileAuthenticationTag::setCommand(std::string command) -> void{
this->command= command;
    
}


    auto FileAuthenticationTag::setUserName(std::string userName) -> void{
this->userName= userName;
    
}


    auto FileAuthenticationTag::setPassword(std::string value) -> void{
this->password= value;
    
}


    auto FileAuthenticationTag::setNewPassword(std::string value) -> void{
this->newPassword= value;
    
}


    auto FileAuthenticationTag::setRoles(BasicArrayList* values) -> void{
this->roles= values;
    
}


    auto FileAuthenticationTag::makeSessionValid(BasicUserRole* storedRole, std::string userName) -> void{
this->weblisketSession->setAuthenticated();
    
this->weblisketSession->setRole(storedRole);
    
this->weblisketSession->setUserName(userName);
    
this->request->removeAttribute(WeblisketSessionData::REMOVABLEUSERNAME);
    
this->request->removeAttribute(WeblisketSessionData::REMOVABLEPASSWORD);
    
}


    auto FileAuthenticationTag::getFormData() -> void{
this->authenticated= this->weblisketSession->getAuthentication();
    
this->sessionUserName= this->weblisketSession->getUserName();
    
this->role= this->weblisketSession->getRole();
    
this->attemptsInteger= this->weblisketSession->getAttempts();
    
this->timeout= this->weblisketSession->getTimeout();
    
}


    auto FileAuthenticationTag::nextAttempt() -> void{

                        if(this->attemptsInteger != 
                                    nullptr
                                 && this->attemptsInteger > 0)
                        
                                    {
                                    this->weblisketSession->setAttempts(int32_t(this->attemptsInteger +1));
    

                                    }
                                
                        else {
                            this->weblisketSession->setAttempts(int32_t(1));
    

                        }
                            
}


                //@Throws(LicensingException.constructor)
            
    auto FileAuthenticationTag::changePassword() -> bool{

        try {
            
    std::string userName = this->request->getParameter(WeblisketSessionData::REMOVABLEUSERNAME);;
    

    std::string password = this->request->getParameter(WeblisketSessionData::REMOVABLEPASSWORD);;
    

    std::string newPassword = this->request->getParameter(WeblisketSessionData::REMOVABLENEWPASSWORD);;
    

    std::string newReenteredPassword = this->request->getParameter(WeblisketSessionData::REMOVABLEREENTERNEWPASSWORD);;
    

                        if(newPassword.compare(newReenteredPassword) != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                                    }
                                

    InstallerInfo* installerInfo = new InstallerInfo();;
    

                        if(installerInfo->isValid(userName, password))
                        
                                    {
                                    installerInfo->setPassword(newPassword);
    
installerInfo->write();
    
this->weblisketSession->setUserName(userName);
    
this->weblisketSession->setPassword(newPassword);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                //: 
} catch(LicensingException& e) 
            {



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "invalidateSession()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


    auto FileAuthenticationTag::invalidateSession() -> int32_t{

        try {
            this->weblisketSession->clear();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return (int32_t(TagSupport::EVAL_BODY_INCLUDE));;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "invalidateSession()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TagSupport::SKIP_BODY;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto FileAuthenticationTag::isSessionOld() -> bool{

        try {
            
                        if(this->role != 
                                    nullptr
                                )
                        
                                    {
                                    
    int64_t timeCreated = this->weblisketSession->getCreationTime();;
    

    int64_t sessionTimout = this->role->getSessionTimeout();;
    

    Calendar* calendar = Calendar::getInstance();;
    

    int64_t timeFirst = calendar->getTimeInMillis() -sessionTimout;;
    

                        if(timeFirst > timeCreated)
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->AUTHENTICATION))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Session Is Old - Timeout: ");
    
stringBuffer->appendlong(sessionTimout);
    
stringBuffer->append(" Eval: ");
    
stringBuffer->appendlong(timeFirst);
    
stringBuffer->append(" > ");
    
stringBuffer->appendlong(timeCreated);
    
this->logUtil->putF(stringBuffer->toString(), this, "isSessionOld()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE.valueOf();;
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->AUTHENTICATION))
                        
                                    {
                                    this->logUtil->putF("Role Is Not In Session", this, "isSessionOld()");
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->isRarelyUsedSession();;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "isSessionOld()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


    auto FileAuthenticationTag::isRarelyUsedSession() -> bool{

                        if(this->role != 
                                    nullptr
                                )
                        
                                    {
                                    
    int64_t timeCreated = this->weblisketSession->getCreationTime();;
    

    int64_t lastAccess = this->weblisketSession->getLastAccessedTime();;
    

    int64_t timePassed = this->role->getSessionInactivityTimeout();;
    

    Calendar* calendar = Calendar::getInstance();;
    

    int64_t timeFirst = calendar->getTimeInMillis() -lastAccess;;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->AUTHENTICATION))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Session Is Rarely Used - Timeout: ");
    
stringBuffer->appendlong(lastAccess);
    
stringBuffer->append(" Eval: ");
    
stringBuffer->appendlong(timeFirst);
    
stringBuffer->append(" > ");
    
stringBuffer->appendlong(timePassed);
    
this->logUtil->putF(stringBuffer->toString(), this, "isRarelyUsedSession()");
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->AUTHENTICATION))
                        
                                    {
                                    this->logUtil->putF("Role Is Not In Session", this, "isRarelyUsedSession()");
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}


                //@Throws(LicensingException.constructor)
            
    auto FileAuthenticationTag::isRoleValid() -> bool{

        try {
            this->makeSessionValid(BasicUserRoleFactory::getInstance()->INSTALLER, userName);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE.valueOf();;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "isRoleValid()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto FileAuthenticationTag::validRole() -> std::string{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Trying New login<p>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to set valid role";;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "validRole()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto FileAuthenticationTag::invalidRole() -> std::string{

        try {
            this->weblisketSession->setAuthenticated(false);
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Sorry your username and password is invalid on this page.");
    
stringBuffer->append("Trying New login<p>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to set role invalid";;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "invalidRole()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto FileAuthenticationTag::isAuthenticationSessionValid() -> bool{

        try {
            
                        if(BooleanUtil::getInstance()->getFromString(this->authenticated))
                        
                                    {
                                    
    int32_t size = this->roles->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    BasicUserRole* mustBeOfRole = dynamic_cast<BasicUserRole*>(this->roles->get(index));;
    

                        if(true && JavaObjects::equals(this->role, mustBeOfRole))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE.valueOf();;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE.valueOf();;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE.valueOf();;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "isAuthenticationSessionValid()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto FileAuthenticationTag::processIfNewLogin() -> bool{

        try {
            
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->TAGHELPERERROR))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Starting for User: ") +JavaString::valueOf(this->userName)) +JavaString::valueOf(" Attempt: ")) +JavaString::valueOf(this->weblisketSession->getAttempts()), this, "processIfNewLogin()");
    

                                    }
                                

                        if(true && this->userName.compare(StringUtil::getInstance()->EMPTY_STRING) != 0 && true && this->password.compare(StringUtil::getInstance()->EMPTY_STRING) != 0)
                        
                                    {
                                    
    std::string login;;
    

    InstallerInfo* installerInfo = new InstallerInfo();;
    

                        if(installerInfo->isValid(this->userName, this->password))
                        
                                    {
                                    login= GLOBALS2::LOGINSUCCESS;
    

                                    }
                                
                        else {
                            login= GLOBALS2::LOGINFAILED;
    

                        }
                            

                        if(login.compare(GLOBALS2::LOGINSUCCESS) == 0)
                        
                                    {
                                    this->weblisketSession->setAttempts(int32_t(0));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE.valueOf();;
    

                                    }
                                
this->nextAttempt();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE.valueOf();;
    

                                    }
                                
this->nextAttempt();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE.valueOf();;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "processIfNewLogin()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto FileAuthenticationTag::processInvalidation() -> bool{

        try {
            
                        if(BooleanUtil::getInstance()->getFromString(this->timeout))
                        
                                    {
                                    this->invalidateSession();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE.valueOf();;
    

                                    }
                                


                            {
                            this->weblisketSession->setTimeout(BooleanFactory::getInstance()->TRUE_STRING);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE.valueOf();;
    

                            }
                    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "isSetToInvalidate()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


                //@Throws(JspTagException.constructor)
            
    auto FileAuthenticationTag::doStartTag() -> int32_t{

        try {
            
    StringUtil* stringUtil = StringUtil::getInstance();;
    
this->request= dynamic_cast<HttpServletRequest*>(pageContext.getRequest());
    
this->weblisketSession= new BasicWeblisketSession(pageContext);
    
this->getFormData();
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF("Started", this, this->tagStrings->DO_START_TAG);
    

                                    }
                                

                        if(true)
                        
                                    {
                                    
                        if(this->command.compare(GLOBALS2::CHANGEPASSWORD) == 0)
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF("Change Password", this, this->tagStrings->DO_START_TAG);
    

                                    }
                                

                        if(!this->changePassword())
                        
                                    {
                                    pageContext.getOut()->print("Password Change Attempt Failed.<p>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return EVAL_BODY_INCLUDE;
    

                                    }
                                
                        else {
                            pageContext.getOut()->print("Password Changed Successfully.<p>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    

                        }
                            

                                    }
                                
                             else 
                        if(this->command.compare(WeblisketSessionData::INVALIDATESESSION) == 0)
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF("INVALIDATESESSION", this, this->tagStrings->DO_START_TAG);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->invalidateSession();;
    

                                    }
                                
                        else {
                            
                        if(this->isSessionOld())
                        
                                    {
                                    
                        if(this->processInvalidation())
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF("Processing Invalidation", this, this->tagStrings->DO_START_TAG);
    

                                    }
                                
pageContext.getOut()->print("Please login again.<p>");
    

                        if(this->command.compare(GLOBALS2::PROCESSBODYIFAUTHENTICATED) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TagSupport::SKIP_BODY;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TagSupport::EVAL_BODY_INCLUDE;
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF("Preparing session for invalidation", this, this->tagStrings->DO_START_TAG);
    

                                    }
                                

                        if(this->command.compare(GLOBALS2::PROCESSBODYIFAUTHENTICATED) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TagSupport::SKIP_BODY;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TagSupport::EVAL_BODY_INCLUDE;
    

                        }
                            

                        }
                            

                                    }
                                

                        if((false || this->userName.compare(stringUtil->EMPTY_STRING) == 0) && (false || this->password.compare(stringUtil->EMPTY_STRING) == 0) && this->roles != 
                                    nullptr
                                 && this->isAuthenticationSessionValid())
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF("Authenticated session is valid", this, this->tagStrings->DO_START_TAG);
    

                                    }
                                

                        if(this->command.compare(GLOBALS2::PROCESSBODYIFAUTHENTICATED) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TagSupport::EVAL_BODY_INCLUDE;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TagSupport::SKIP_BODY;
    

                        }
                            

                                    }
                                

                        if(true && true && this->processIfNewLogin())
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF("Processing new login.", this, this->tagStrings->DO_START_TAG);
    

                                    }
                                

                        if(this->isRoleValid())
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF("Role is valid - Processing new login", this, this->tagStrings->DO_START_TAG);
    

                                    }
                                
pageContext.getOut()->print(validRole());
    

                        if(this->command.compare(GLOBALS2::PROCESSBODYIFAUTHENTICATED) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return EVAL_BODY_INCLUDE;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF("Role is not valid - Processing new login", this, this->tagStrings->DO_START_TAG);
    

                                    }
                                
pageContext.getOut()->print(invalidRole());
    

                        if(this->command.compare(GLOBALS2::PROCESSBODYIFAUTHENTICATED) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return EVAL_BODY_INCLUDE;
    

                        }
                            

                        }
                            

                                    }
                                
                        else {
                            
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF("Invalid Login", this, this->tagStrings->DO_START_TAG);
    

                                    }
                                

                        if(true && this->userName.compare(StringUtil::getInstance()->EMPTY_STRING) != 0 && true && this->password.compare(StringUtil::getInstance()->EMPTY_STRING) != 0)
                        
                                    {
                                    pageContext.getOut()->print("Sorry your username and/or password is invalid.<p>");
    

                                    }
                                

                        }
                            

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Major authentication error - userName: ");
    
stringBuffer->append(this->userName);
    
stringBuffer->append(" Password: ");
    
stringBuffer->append(this->password);
    
stringBuffer->append(" Command: ");
    
stringBuffer->append(this->command);
    
this->logUtil->putF(stringBuffer->toString(), this, this->tagStrings->DO_START_TAG);
    

                                    }
                                

                        if(this->command.compare(GLOBALS2::PROCESSBODYIFAUTHENTICATED) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TagSupport::SKIP_BODY;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TagSupport::EVAL_BODY_INCLUDE;
    

                        }
                            

                        }
                            

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    

                //: 
} catch(LicensingException& e) 
            {
AbResponseHandler::sendJspTagLicensingRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    
}

                //: 
 catch(Exception& e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    
}

}




        #endif //ADMIN_TAGS_FILEAUTHENTICATIONTAG_CPP
