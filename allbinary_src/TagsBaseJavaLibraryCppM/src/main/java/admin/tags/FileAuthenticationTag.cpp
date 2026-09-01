
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
        



            #include "../../java/lang/Exception.h"
        
            #include "../../java/lang/Integer.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/Vector.h>

      
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FileAuthenticationTag: public CustomTagSupport {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: Integer attemptsInteger;

    private: BasicWeblisketSession weblisketSession;

    private: HttpServletRequest request;

    private: std::string command;

    private: std::string userName;

    private: std::string password;

    private: std::string newPassword;

    private: std::string authenticated;

    private: std::string sessionUserName;

    private: BasicUserRole role;

    private: std::string timeout;

    private: Vector roles;

public: FileAuthenticationTag(){
}


    public: void setCommand(std::string command){
this->command= command;
    
}


    public: void setUserName(std::string userName){
this->userName= userName;
    
}


    public: void setPassword(std::string value){
this->password= value;
    
}


    public: void setNewPassword(std::string value){
this->newPassword= value;
    
}


    public: void setRoles(Vector values){
this->roles= values;
    
}


    private: void makeSessionValid(BasicUserRole storedRole, std::string userName){
this->weblisketSession.setAuthenticated();
    
this->weblisketSession.setRole(storedRole);
    
this->weblisketSession.setUserName(userName);
    
this->request.removeAttribute(WeblisketSessionData::REMOVABLEUSERNAME);
    
this->request.removeAttribute(WeblisketSessionData::REMOVABLEPASSWORD);
    
}


    private: void getFormData(){
this->authenticated= this->weblisketSession.getAuthentication();
    
this->sessionUserName= this->weblisketSession.getUserName();
    
this->role= this->weblisketSession.getRole();
    
this->attemptsInteger= this->weblisketSession.getAttempts();
    
this->timeout= this->weblisketSession.getTimeout();
    
}


    public: void nextAttempt(){

                        if(this->attemptsInteger != 
                                    nullptr
                                 && this->attemptsInteger.intValue() > 0)
                        
                                    {
                                    this->weblisketSession.setAttempts(Integer(this->attemptsInteger.intValue() +1));
    

                                    }
                                
                        else {
                            this->weblisketSession.setAttempts(Integer(1));
    

                        }
                            
}


                //@Throws(LicensingException.constructor)
            
    private: bool changePassword(){

        try {
            
    std::string userName = this->request.getParameter(WeblisketSessionData::REMOVABLEUSERNAME);;
    

    std::string password = this->request.getParameter(WeblisketSessionData::REMOVABLEPASSWORD);;
    

    std::string newPassword = this->request.getParameter(WeblisketSessionData::REMOVABLENEWPASSWORD);;
    

    std::string newReenteredPassword = this->request.getParameter(WeblisketSessionData::REMOVABLEREENTERNEWPASSWORD);;
    

                        if(newPassword.compareTo(newReenteredPassword) != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

    InstallerInfo installerInfo = InstallerInfo();;
    

                        if(installerInfo.isValid(userName, password))
                        
                                    {
                                    installerInfo.setPassword(newPassword);
    
installerInfo.write();
    
this->weblisketSession.setUserName(userName);
    
this->weblisketSession.setPassword(newPassword);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "invalidateSession()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}
*/
}


    private: int32_t invalidateSession(){

        try {
            this->weblisketSession.clear();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Integer(TagSupport::EVAL_BODY_INCLUDE).intValue();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "invalidateSession()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TagSupport::SKIP_BODY;
    
}

}


                //@Throws(LicensingException.constructor)
            
    private: bool isSessionOld(){

        try {
            
                        if(this->role != 
                                    nullptr
                                )
                        
                                    {
                                    
    int64_t timeCreated = this->weblisketSession.getCreationTime();;
    

    int64_t sessionTimout = this->role.getSessionTimeout();;
    

    Calendar calendar = Calendar::getInstance();;
    

    int64_t timeFirst = calendar.getTimeInMillis() -sessionTimout;;
    

                        if(timeFirst > timeCreated)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().AUTHENTICATION))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Session Is Old - Timeout: ");
    
stringBuffer.appendlong(sessionTimout);
    
stringBuffer.append(" Eval: ");
    
stringBuffer.appendlong(timeFirst);
    
stringBuffer.append(" > ");
    
stringBuffer.appendlong(timeCreated);
    
this->logUtil.putF(stringBuffer.toString(), this, "isSessionOld()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE.valueOf();;
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().AUTHENTICATION))
                        
                                    {
                                    this->logUtil.putF("Role Is Not In Session", this, "isSessionOld()");
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isRarelyUsedSession().valueOf();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "isSessionOld()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    private: Boolean isRarelyUsedSession(){

                        if(this->role != 
                                    nullptr
                                )
                        
                                    {
                                    
    int64_t timeCreated = this->weblisketSession.getCreationTime();;
    

    int64_t lastAccess = this->weblisketSession.getLastAccessedTime();;
    

    int64_t timePassed = this->role.getSessionInactivityTimeout();;
    

    Calendar calendar = Calendar::getInstance();;
    

    int64_t timeFirst = calendar.getTimeInMillis() -lastAccess;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().AUTHENTICATION))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Session Is Rarely Used - Timeout: ");
    
stringBuffer.appendlong(lastAccess);
    
stringBuffer.append(" Eval: ");
    
stringBuffer.appendlong(timeFirst);
    
stringBuffer.append(" > ");
    
stringBuffer.appendlong(timePassed);
    
this->logUtil.putF(stringBuffer.toString(), this, "isRarelyUsedSession()");
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().AUTHENTICATION))
                        
                                    {
                                    this->logUtil.putF("Role Is Not In Session", this, "isRarelyUsedSession()");
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}


                //@Throws(LicensingException.constructor)
            
    private: bool isRoleValid(){

        try {
            this->makeSessionValid(BasicUserRoleFactory::getInstance().INSTALLER, userName);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE.valueOf();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "isRoleValid()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


                //@Throws(LicensingException.constructor)
            
    private: std::string validRole(){

        try {
            
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Trying New login<p>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to set valid role";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "validRole()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    private: std::string invalidRole(){

        try {
            this->weblisketSession.setAuthenticated(false);
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Sorry your username and password is invalid on this page.");
    
stringBuffer.append("Trying New login<p>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to set role invalid";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "invalidRole()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    private: bool isAuthenticationSessionValid(){

        try {
            
                        if(BooleanUtil::getInstance().getFromString(this->authenticated))
                        
                                    {
                                    
    int32_t size = this->roles.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    BasicUserRole mustBeOfRole = this->roles.get(index) as BasicUserRole;;
    

                        if(true && this->role. === mustBeOfRole)
                        
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
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "isAuthenticationSessionValid()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


                //@Throws(LicensingException.constructor)
            
    private: bool processIfNewLogin(){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERERROR))
                        
                                    {
                                    this->logUtil.putF("Starting for User: " +this->userName +" Attempt: " +this->weblisketSession.getAttempts(), this, "processIfNewLogin()");
    

                                    }
                                

                        if(true && this->userName.compareTo(StringUtil::getInstance().EMPTY_STRING) != 0 && true && this->password.compareTo(StringUtil::getInstance().EMPTY_STRING) != 0)
                        
                                    {
                                    
    std::string login;;
    

    InstallerInfo installerInfo = InstallerInfo();;
    

                        if(installerInfo.isValid(this->userName, this->password))
                        
                                    {
                                    login= org.allbinary.globals.GLOBALS2.LOGINSUCCESS;
    

                                    }
                                
                        else {
                            login= org.allbinary.globals.GLOBALS2.LOGINFAILED;
    

                        }
                            

                        if(login.compareTo(org.allbinary.globals.GLOBALS2.LOGINSUCCESS) == 0)
                        
                                    {
                                    this->weblisketSession.setAttempts(Integer(0));
    



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
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "processIfNewLogin()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


                //@Throws(LicensingException.constructor)
            
    private: bool processInvalidation(){

        try {
            
                        if(BooleanUtil::getInstance().getFromString(this->timeout))
                        
                                    {
                                    this->invalidateSession();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE.valueOf();;
    

                                    }
                                


                            {
                            this->weblisketSession.setTimeout(BooleanFactory::getInstance().TRUE_STRING);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE.valueOf();;
    

                            }
                    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "isSetToInvalidate()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag(){

        try {
            
    StringUtil stringUtil = StringUtil::getInstance();;
    
this->request= pageContext.getRequest() as HttpServletRequest;
    
this->weblisketSession= BasicWeblisketSession(pageContext);
    
this->getFormData();
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF("Started", this, this->tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(true)
                        
                                    {
                                    
                        if(this->command.compareTo(org.allbinary.globals.GLOBALS2.CHANGEPASSWORD) == 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF("Change Password", this, this->tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(!this->changePassword())
                        
                                    {
                                    pageContext.getOut().print("Password Change Attempt Failed.<p>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EVAL_BODY_INCLUDE;
    

                                    }
                                
                        else {
                            pageContext.getOut().print("Password Changed Successfully.<p>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    

                        }
                            

                                    }
                                
                             else 
                        if(this->command.compareTo(WeblisketSessionData::INVALIDATESESSION) == 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF("INVALIDATESESSION", this, this->tagStrings.DO_START_TAG);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->invalidateSession();;
    

                                    }
                                
                        else {
                            
                        if(this->isSessionOld())
                        
                                    {
                                    
                        if(this->processInvalidation())
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF("Processing Invalidation", this, this->tagStrings.DO_START_TAG);
    

                                    }
                                
pageContext.getOut().print("Please login again.<p>");
    

                        if(this->command.compareTo(org.allbinary.globals.GLOBALS2.PROCESSBODYIFAUTHENTICATED) == 0)
                        
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
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF("Preparing session for invalidation", this, this->tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(this->command.compareTo(org.allbinary.globals.GLOBALS2.PROCESSBODYIFAUTHENTICATED) == 0)
                        
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
                                

                        if((false || this->userName.compareTo(stringUtil.EMPTY_STRING) == 0) && (false || this->password.compareTo(stringUtil.EMPTY_STRING) == 0) && this->roles != 
                                    nullptr
                                 && this->isAuthenticationSessionValid())
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF("Authenticated session is valid", this, this->tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(this->command.compareTo(org.allbinary.globals.GLOBALS2.PROCESSBODYIFAUTHENTICATED) == 0)
                        
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
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF("Processing new login.", this, this->tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(this->isRoleValid())
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF("Role is valid - Processing new login", this, this->tagStrings.DO_START_TAG);
    

                                    }
                                
pageContext.getOut().print(validRole());
    

                        if(this->command.compareTo(org.allbinary.globals.GLOBALS2.PROCESSBODYIFAUTHENTICATED) == 0)
                        
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
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF("Role is not valid - Processing new login", this, this->tagStrings.DO_START_TAG);
    

                                    }
                                
pageContext.getOut().print(invalidRole());
    

                        if(this->command.compareTo(org.allbinary.globals.GLOBALS2.PROCESSBODYIFAUTHENTICATED) == 0)
                        
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
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF("Invalid Login", this, this->tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(true && this->userName.compareTo(StringUtil::getInstance().EMPTY_STRING) != 0 && true && this->password.compareTo(StringUtil::getInstance().EMPTY_STRING) != 0)
                        
                                    {
                                    pageContext.getOut().print("Sorry your username and/or password is invalid.<p>");
    

                                    }
                                

                        }
                            

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Major authentication error - userName: ");
    
stringBuffer.append(this->userName);
    
stringBuffer.append(" Password: ");
    
stringBuffer.append(this->password);
    
stringBuffer.append(" Command: ");
    
stringBuffer.append(this->command);
    
this->logUtil.putF(stringBuffer.toString(), this, this->tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(this->command.compareTo(org.allbinary.globals.GLOBALS2.PROCESSBODYIFAUTHENTICATED) == 0)
                        
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
} catch(e) 
            {
AbResponseHandler::sendJspTagLicensingRedirect(this->pageContext, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}

                //: 
/* catch(e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}
*/
}


};

            

