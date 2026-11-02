
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
        



        #ifndef ADMIN_TAGHELPERS_AUTHENTICATIONHELPER_CPP
        #define ADMIN_TAGHELPERS_AUTHENTICATIONHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/AuthenticationHelper.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <javax/servlet/jsp/tagext/TagSupport.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/business/user/role/BasicUserRole.h>

      
#include <org/allbinary/business/user/role/UserRole.h>

      
#include <org/allbinary/business/user/role/UserRoleFactory.h>

      
#include <org/allbinary/data/tables/user/UserEntityFactory.h>

      
#include <org/allbinary/data/tables/user/UserEntityInterface.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/java/bool/BooleanUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/TagHelper.h"


AuthenticationHelper::AuthenticationHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext) : AuthenticationHelper(hashMap, dynamic_cast<HttpServletRequest*>(pageContext->getRequest())){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


AuthenticationHelper::AuthenticationHelper(HashMap<Object*, Object*>* hashMap, HttpServletRequest* httpServletRequest) : logUtil(LogUtil::getInstance()){
this->weblisketSession= new WeblisketSession(hashMap, httpServletRequest);
    
this->getFormData();
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->AUTHENTICATION))
                        
                                    {
                                    this->logUtil->putF(this->outputSessionInfo(), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto AuthenticationHelper::getFormData() -> void{
this->authenticated= this->weblisketSession->getAuthentication();
    
this->sessionUserName= this->weblisketSession->getUserName();
    
this->role= this->weblisketSession->getRole();
    
this->attemptsInteger= this->weblisketSession->getAttempts();
    
this->timeout= this->weblisketSession->getTimeout();
    
}


                //@Throws(Exception.constructor)
            
    auto AuthenticationHelper::invalidateSession() -> int32_t{

        try {
            this->weblisketSession->clear();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int32_t(TagSupport::EVAL_BODY_INCLUDE);
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->AUTHENTICATIONERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "invalidateSession()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    auto AuthenticationHelper::isSessionOld() -> bool{

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
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->AUTHENTICATION))
                        
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
                        return Boolean::TRUE;
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->AUTHENTICATION))
                        
                                    {
                                    this->logUtil->putF("Role Is Not In Session", this, "isSessionOld()");
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isRarelyUsedSession();;
    
}


    auto AuthenticationHelper::isRarelyUsedSession() -> bool{

                        if(this->role != 
                                    nullptr
                                )
                        
                                    {
                                    
    int64_t timeCreated = this->weblisketSession->getCreationTime();;
    

    int64_t lastAccess = this->weblisketSession->getLastAccessedTime();;
    

    int64_t inactivityAllowed = this->role->getSessionInactivityTimeout();;
    

    Calendar* calendar = Calendar::getInstance();;
    

    int64_t timeFirst = calendar->getTimeInMillis() -lastAccess;;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->AUTHENTICATION))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Session Is Rarely Used - Timeout: ");
    
stringBuffer->appendlong(lastAccess);
    
stringBuffer->append(" Eval: ");
    
stringBuffer->appendlong(timeFirst);
    
stringBuffer->append(" > ");
    
stringBuffer->appendlong(inactivityAllowed);
    
this->logUtil->putF(stringBuffer->toString(), this, "isRarelyUsedSession()");
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->AUTHENTICATION))
                        
                                    {
                                    this->logUtil->putF("Role Is Not In Session", this, "isRarelyUsedSession()");
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}


    auto AuthenticationHelper::validRole() -> std::string{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Trying New login<p/>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to set valid role";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->AUTHENTICATIONERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "validRole()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    auto AuthenticationHelper::invalidRole() -> std::string{

        try {
            this->weblisketSession->setAuthenticated(false);
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Sorry your username and password is invalid on this page. ");
    
stringBuffer->append("Trying New login<p/>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to set role invalid";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->AUTHENTICATIONERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "invalidRole()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(Exception.constructor)
            
    auto AuthenticationHelper::isAuthenticated() -> bool{

                        if(BooleanUtil::getInstance()->getFromString(this->authenticated))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    auto AuthenticationHelper::isAuthenticationSessionValid(BasicArrayList* roles) -> bool{

        try {
            
                        if(this->role != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(this->isAuthenticated())
                        
                                    {
                                    
                        if(true)
                        
                                    {
                                    
    BasicUserRole* basicUserRole = this->role->getBasicUserRole();;
    

    std::vector<Object*> basicUserRoleArray = roles->toArray();;
    

    int32_t size = basicUserRoleArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    BasicUserRole* mustBeOfRole = dynamic_cast<BasicUserRole*>(basicUserRoleArray[index]);;
    

                        if(JavaObjects::equals(basicUserRole, mustBeOfRole))
                        
                                    {
                                    
                        if(JavaObjects::equals(basicUserRole, UserRoleFactory::getInstance()->CUSTOMER))
                        
                                    {
                                    
    UserEntityInterface* userEntityInterface = UserEntityFactory::getInstance();;
    

    UserInterface* userInterface = userEntityInterface->getUser(this->sessionUserName);;
    

                        if(!userInterface->isSessionValid().valueOf())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->AUTHENTICATION))
                        
                                    {
                                    this->logUtil->putF("Role Is Not In Session", this, "isAuthenticationSessionValid()");
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->AUTHENTICATIONERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "isAuthenticatedSessionValid()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


    auto AuthenticationHelper::nextAttempt() -> void{

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


    auto AuthenticationHelper::processIfNewLogin(std::string userName, std::string password) -> bool{

        try {
            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->AUTHENTICATIONERROR))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Starting: ") +JavaString::valueOf(userName), this, "processIfNewLogin()");
    

                                    }
                                

                        if(true && userName.compare(StringUtil::getInstance()->EMPTY_STRING) != 0 && true && password.compare(StringUtil::getInstance()->EMPTY_STRING) != 0)
                        
                                    {
                                    
    std::string login;;
    

    UserEntityInterface* userEntityInterface = UserEntityFactory::getInstance();;
    
login= userEntityInterface->login(userName, password);
    

                        if(login.compare(GLOBALS2::LOGINSUCCESS) == 0)
                        
                                    {
                                    
    UserInterface* userInterface = userEntityInterface->getUser(userName);;
    

                        if(userInterface->isSessionValid().valueOf())
                        
                                    {
                                    this->weblisketSession->setAttempts(int32_t(0));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                                    }
                                

                                    }
                                
this->nextAttempt();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                
this->nextAttempt();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->AUTHENTICATIONERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "processIfNewLogin()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


    auto AuthenticationHelper::processInvalidation() -> bool{

        try {
            
                        if(BooleanUtil::getInstance()->getFromString(this->timeout))
                        
                                    {
                                    this->invalidateSession();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                                    }
                                


                            {
                            this->weblisketSession->setTimeout(BooleanFactory::getInstance()->TRUE_STRING);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                            }
                    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->AUTHENTICATIONERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "processInvalidation()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


    auto AuthenticationHelper::outputSessionInfo() -> std::string{

        try {
            
    Calendar* calendar = Calendar::getInstance();;
    

    int64_t timeCreated = this->weblisketSession->getCreationTime();;
    

    StringMaker* stringBuffer = new StringMaker();;
    

    int64_t lastAccess = this->weblisketSession->getLastAccessedTime();;
    
stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Time Since Last Access: ") +JavaString::valueOf((calendar->getTimeInMillis() -lastAccess))) +JavaString::valueOf("<br/>\n"));
    

                        if(this->role != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append("Auth: ");
    
stringBuffer->append(this->authenticated);
    
stringBuffer->append(" UserName: ");
    
stringBuffer->append(this->sessionUserName);
    
stringBuffer->append(" Role: ");
    
stringBuffer->append(this->role->toString());
    
stringBuffer->append("<br/>\n");
    
stringBuffer->append("Time Left: ");
    
stringBuffer->appendlong((this->role->getSessionTimeout() -(calendar->getTimeInMillis() -timeCreated)));
    
stringBuffer->append("<br/>\n");
    
stringBuffer->append("Inactivity Time Allowed: ");
    
stringBuffer->appendlong(this->role->getSessionTimeout());
    
stringBuffer->append("<br/>\n");
    
stringBuffer->append("Inactivity Time Allowed: ");
    
stringBuffer->appendlong(this->role->getSessionInactivityTimeout());
    
stringBuffer->append("<br/>\n");
    

                                    }
                                
                        else {
                            stringBuffer->append("Role Is Not Set<br/>\n");
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error";
    
}

}


    auto AuthenticationHelper::getRole() -> UserRole*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->role;
    
}




        #endif //ADMIN_TAGHELPERS_AUTHENTICATIONHELPER_CPP
