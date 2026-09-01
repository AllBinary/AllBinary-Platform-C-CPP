
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
        



            #include <vector>
        
            #include "../../java/lang/Class.h"
        
            #include "../../java/lang/Exception.h"
        
            #include "../../java/lang/Integer.h"
        
#include <java/lang/reflect/Method.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <javax/servlet/jsp/tagext/TagSupport.h>

      
#include <admin/taghelpers/AuthenticationHelperFactory.h>

      
#include <admin/taghelpers/AuthenticationRequestHelperFactory.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/CustomTagSupport.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AuthenticationTag: public CustomTagSupport {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string command;

    private: std::string userName;

    private: std::string password;

    private: std::string newPassword;

    private: Vector roles;

    private: HashMap<any, any> propertiesHashMap;

public: AuthenticationTag(){

    StringUtil stringUtil = StringUtil::getInstance();;
    
this->userName= stringUtil.EMPTY_STRING;
    
this->password= stringUtil.EMPTY_STRING;
    
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


                //@Throws(LicensingException.constructor)
            
    private: bool changePassword(){

        try {
            
    Object* anyType = AuthenticationRequestHelperFactory().getInstance(this->propertiesHashMap, this->pageContext);;
    

    Function addressHelperClass = anyType->constructor;;
    

    Method method = addressHelperClass.getMethod("changePassword", 
                            nullptr);;
    

    Boolean result = method.invoke(anyType, 
                            nullptr) as Boolean;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result.valueOf();;
    

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
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "changePassword()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}
*/
}


                //@Throws(LicensingException.constructor)
            
    private: bool newPassword(){

        try {
            
    Object* anyType = AuthenticationRequestHelperFactory().getInstance(this->propertiesHashMap, this->pageContext);;
    

    Function addressHelperClass = anyType->constructor;;
    

    Method method = addressHelperClass.getMethod("newPassword", 
                            nullptr);;
    

    Boolean result = method.invoke(anyType, 
                            nullptr) as Boolean;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result.valueOf();;
    

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
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "newPassword()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}
*/
}


                //@Throws(LicensingException.constructor)
            
    private: int32_t invalidateSession(){

        try {
            
    Object* anyType = AuthenticationHelperFactory().getInstance(this->propertiesHashMap, this->pageContext);;
    

    Function addressHelperClass = anyType->constructor;;
    

    Method method = addressHelperClass.getMethod("invalidateSession", 
                            nullptr);;
    

    Integer resultInteger = method.invoke(anyType, 
                            nullptr) as Integer;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return resultInteger.intValue();;
    

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
                        return TagSupport::SKIP_BODY;
    
}
*/
}


                //@Throws(LicensingException.constructor)
            
    private: bool isSessionOld(){

        try {
            
    Object* anyType = AuthenticationHelperFactory().getInstance(this->propertiesHashMap, this->pageContext);;
    

    Function helperClass = anyType->constructor;;
    

    Method method = helperClass.getMethod("isSessionOld", 
                            nullptr);;
    

    Boolean resultBoolean = method.invoke(anyType, 
                            nullptr) as Boolean;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return resultBoolean.valueOf();;
    

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
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "isSessionOld()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}
*/
}


                //@Throws(LicensingException.constructor)
            
    private: bool isRoleValid(){

        try {
            
    Object* anyType = AuthenticationRequestHelperFactory().getInstance(this->propertiesHashMap, this->pageContext);;
    

    Function addressHelperClass = anyType->constructor;;
    

    std::vector<Function> methodParams = 
                                                        {
                                                            this->userName.constructor, this->password.constructor, this->roles.constructor
                                                        };;
    

    Method method = addressHelperClass.getMethod("isRoleValid", methodParams);;
    

    std::vector<Object*> methodArgs = 
                                                        {
                                                            this->userName,this->password,this->roles
                                                        };;
    

    Boolean resultBoolean = method.invoke(anyType, methodArgs) as Boolean;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return resultBoolean.valueOf();;
    

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
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "isRoleValid()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}
*/
}


                //@Throws(LicensingException.constructor)
            
    private: std::string validRole(){

        try {
            
    Object* anyType = AuthenticationHelperFactory().getInstance(this->propertiesHashMap, this->pageContext);;
    

    Function addressHelperClass = anyType->constructor;;
    

    Method method = addressHelperClass.getMethod("validRole", 
                            nullptr);;
    

    std::string result = method.invoke(anyType, 
                            nullptr) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

    std::string error = "Failed to set valid role";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "validRole()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}
*/
}


                //@Throws(LicensingException.constructor)
            
    private: std::string invalidRole(){

        try {
            
    Object* anyType = AuthenticationHelperFactory().getInstance(this->propertiesHashMap, this->pageContext);;
    

    Function addressHelperClass = anyType->constructor;;
    

    Method method = addressHelperClass.getMethod("invalidRole", 
                            nullptr);;
    

    std::string result = method.invoke(anyType, 
                            nullptr) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

    std::string error = "Failed to set role invalid";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "invalidRole()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}
*/
}


                //@Throws(LicensingException.constructor)
            
    private: bool isAuthenticationSessionValid(){

        try {
            
    Object* anyType = AuthenticationHelperFactory().getInstance(this->propertiesHashMap, this->pageContext);;
    

    Function addressHelperClass = anyType->constructor;;
    

    std::vector<Function> methodParams = 
                                                        {
                                                            this->roles.constructor
                                                        };;
    

    Method method = addressHelperClass.getMethod("isAuthenticationSessionValid", methodParams);;
    

    std::vector<Object*> methodArgs = 
                                                        {
                                                            this->roles
                                                        };;
    

    Boolean resultBoolean = method.invoke(anyType, methodArgs) as Boolean;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return resultBoolean.valueOf();;
    

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
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "isAuthenticationSessionValid()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}
*/
}


                //@Throws(LicensingException.constructor)
            
    private: bool processIfNewLogin(){

        try {
            
    Object* anyType = AuthenticationHelperFactory().getInstance(this->propertiesHashMap, this->pageContext);;
    

    Function helperClass = anyType->constructor;;
    

    std::vector<Function> methodParams = 
                                                        {
                                                            this->userName.constructor, this->password.constructor
                                                        };;
    

    Method method = helperClass.getMethod("processIfNewLogin", methodParams);;
    

    std::vector<Object*> methodArgs = 
                                                        {
                                                            this->userName,this->password
                                                        };;
    

    Boolean resultBoolean = method.invoke(anyType, methodArgs) as Boolean;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return resultBoolean.valueOf();;
    

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
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "processIfNewLogin()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}
*/
}


                //@Throws(LicensingException.constructor)
            
    private: bool processInvalidation(){

        try {
            
    Object* anyType = AuthenticationHelperFactory().getInstance(this->propertiesHashMap, this->pageContext);;
    

    Function addressHelperClass = anyType->constructor;;
    

    Method method = addressHelperClass.getMethod("processInvalidation", 
                            nullptr);;
    

    Boolean resultBoolean = method.invoke(anyType, 
                            nullptr) as Boolean;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return resultBoolean.valueOf();;
    

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
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "isSetToInvalidate()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}
*/
}


                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag(){

        try {
            
    StringUtil stringUtil = StringUtil::getInstance();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    
    HttpServletRequest request = this->pageContext.getRequest() as HttpServletRequest;;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(" Request URI: ");
    
stringBuffer.append(request.getRequestURI());
    
this->logUtil.putF(stringBuffer.toString(), this, tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(true)
                        
                                    {
                                    this->propertiesHashMap= HashMap<any, any>();
    

                        if(this->command.compareTo(org.allbinary.globals.GLOBALS2.NEWPASSWORD) == 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF("New Password", this, tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(!this->newPassword())
                        
                                    {
                                    pageContext.getOut().print("New Password Request Failed.<p/>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EVAL_BODY_INCLUDE;
    

                                    }
                                
                        else {
                            pageContext.getOut().print("New Password Was Sent.<p/>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    

                        }
                            

                                    }
                                
                             else 
                        if(this->command.compareTo(org.allbinary.globals.GLOBALS2.CHANGEPASSWORD) == 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF("Change Password", this, tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(!this->changePassword())
                        
                                    {
                                    pageContext.getOut().print("Password Change Attempt Failed.<p/>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EVAL_BODY_INCLUDE;
    

                                    }
                                
                        else {
                            pageContext.getOut().print("Password Changed Successfully.<p/>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    

                        }
                            

                                    }
                                
                             else 
                        if(this->command.compareTo(WeblisketSessionData::INVALIDATESESSION) == 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF("INVALIDATESESSION", this, tagStrings.DO_START_TAG);
    

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
                                    this->logUtil.putF("Processing Invalidation", this, tagStrings.DO_START_TAG);
    

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
                                    this->logUtil.putF("Preparing session for invalidation", this, tagStrings.DO_START_TAG);
    

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
                                    this->logUtil.putF("Authenticated session is valid", this, tagStrings.DO_START_TAG);
    

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
                                    this->logUtil.putF("Processing new login.", this, tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(this->isRoleValid())
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF("Role is valid - Processing new login", this, tagStrings.DO_START_TAG);
    

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
                                    this->logUtil.putF("Role is not valid - Processing new login", this, tagStrings.DO_START_TAG);
    

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
                                    this->logUtil.putF("Invalid Login", this, tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(true && this->userName.compareTo(stringUtil.EMPTY_STRING) != 0 && true && this->password.compareTo(stringUtil.EMPTY_STRING) != 0)
                        
                                    {
                                    pageContext.getOut().print("Sorry your username and/or password is invalid.<p/>");
    

                                    }
                                

                        }
                            

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF(StringMaker().append("Major authentication error - userName: ").append(this->userName).append(" Password: ").append(this->password).append(" Command: ").append(this->command).toString(), this, tagStrings.DO_START_TAG);
    

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

            

