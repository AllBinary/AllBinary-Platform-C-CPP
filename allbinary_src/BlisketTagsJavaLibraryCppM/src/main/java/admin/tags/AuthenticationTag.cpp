
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
        



        #ifndef ADMIN_TAGS_AUTHENTICATIONTAG_CPP
        #define ADMIN_TAGS_AUTHENTICATIONTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/AuthenticationTag.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/lang/reflect/Method.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <javax/servlet/jsp/tagext/TagSupport.h>

      
#include <admin/taghelpers/AuthenticationHelperFactory.h>

      
#include <admin/taghelpers/AuthenticationRequestHelperFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
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

#include <org/allbinary/globals/GLOBALS2.h>

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

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

AuthenticationTag::AuthenticationTag() : logUtil(LogUtil::getInstance()){

    StringUtil* stringUtil = StringUtil::getInstance();;
    
this->userName= stringUtil->EMPTY_STRING;
    
this->password= stringUtil->EMPTY_STRING;
    
}


    auto AuthenticationTag::setCommand(std::string command) -> void{
this->command= command;
    
}


    auto AuthenticationTag::setUserName(std::string userName) -> void{
this->userName= userName;
    
}


    auto AuthenticationTag::setPassword(std::string value) -> void{
this->password= value;
    
}


    auto AuthenticationTag::setNewPassword(std::string value) -> void{
this->newPassword_= value;
    
}


    auto AuthenticationTag::setRoles(BasicArrayList* values) -> void{
this->roles= values;
    
}


                //@Throws(LicensingException.constructor)
            
    auto AuthenticationTag::changePassword() -> bool{

        try {
            
    Object* anyType = JavaBoxes::toObject((new AuthenticationRequestHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext));;
    

    Class* addressHelperClass = anyType->getClass();;
    

    Method* method = addressHelperClass->getMethod("changePassword", 
                            nullptr);;
    

    bool result = JavaBoxes::unbox<bool>(method->invoke(anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;;
    

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
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "changePassword()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto AuthenticationTag::newPassword() -> bool{

        try {
            
    Object* anyType = JavaBoxes::toObject((new AuthenticationRequestHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext));;
    

    Class* addressHelperClass = anyType->getClass();;
    

    Method* method = addressHelperClass->getMethod("newPassword", 
                            nullptr);;
    

    bool result = JavaBoxes::unbox<bool>(method->invoke(anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;;
    

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
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "newPassword()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto AuthenticationTag::invalidateSession() -> int32_t{

        try {
            
    Object* anyType = JavaBoxes::toObject((new AuthenticationHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext));;
    

    Class* addressHelperClass = anyType->getClass();;
    

    Method* method = addressHelperClass->getMethod("invalidateSession", 
                            nullptr);;
    

    int32_t resultInteger = JavaBoxes::unbox<int32_t>(method->invoke(anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return resultInteger;;
    

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
                        
                        
                        return TagSupport::SKIP_BODY;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto AuthenticationTag::isSessionOld() -> bool{

        try {
            
    Object* anyType = JavaBoxes::toObject((new AuthenticationHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext));;
    

    Class* helperClass = anyType->getClass();;
    

    Method* method = helperClass->getMethod("isSessionOld", 
                            nullptr);;
    

    bool resultBoolean = JavaBoxes::unbox<bool>(method->invoke(anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return resultBoolean;;
    

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
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "isSessionOld()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto AuthenticationTag::isRoleValid() -> bool{

        try {
            
    Object* anyType = JavaBoxes::toObject((new AuthenticationRequestHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext));;
    

    Class* addressHelperClass = anyType->getClass();;
    

    std::vector<Class*> methodParams = 
                                                        {
                                                            this->userName.getClass(), this->password.getClass(), this->roles->getClass()
                                                        };;
    

    Method* method = addressHelperClass->getMethod("isRoleValid", methodParams);;
    

    std::vector<Object*> methodArgs = 
                                                        {
                                                            this->userName,this->password,this->roles
                                                        };;
    

    bool resultBoolean = JavaBoxes::unbox<bool>(method->invoke(anyType, methodArgs));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return resultBoolean;;
    

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
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "isRoleValid()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto AuthenticationTag::validRole() -> std::string{

        try {
            
    Object* anyType = JavaBoxes::toObject((new AuthenticationHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext));;
    

    Class* addressHelperClass = anyType->getClass();;
    

    Method* method = addressHelperClass->getMethod("validRole", 
                            nullptr);;
    

    std::string result = JavaBoxes::unbox<std::string>(method->invoke(anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(LicensingException& e) 
            {



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
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
            
    auto AuthenticationTag::invalidRole() -> std::string{

        try {
            
    Object* anyType = JavaBoxes::toObject((new AuthenticationHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext));;
    

    Class* addressHelperClass = anyType->getClass();;
    

    Method* method = addressHelperClass->getMethod("invalidRole", 
                            nullptr);;
    

    std::string result = JavaBoxes::unbox<std::string>(method->invoke(anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(LicensingException& e) 
            {



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
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
            
    auto AuthenticationTag::isAuthenticationSessionValid() -> bool{

        try {
            
    Object* anyType = JavaBoxes::toObject((new AuthenticationHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext));;
    

    Class* addressHelperClass = anyType->getClass();;
    

    std::vector<Class*> methodParams = 
                                                        {
                                                            this->roles->getClass()
                                                        };;
    

    Method* method = addressHelperClass->getMethod("isAuthenticationSessionValid", methodParams);;
    

    std::vector<Object*> methodArgs = 
                                                        {
                                                            this->roles
                                                        };;
    

    bool resultBoolean = JavaBoxes::unbox<bool>(method->invoke(anyType, methodArgs));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return resultBoolean;;
    

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
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "isAuthenticationSessionValid()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto AuthenticationTag::processIfNewLogin() -> bool{

        try {
            
    Object* anyType = JavaBoxes::toObject((new AuthenticationHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext));;
    

    Class* helperClass = anyType->getClass();;
    

    std::vector<Class*> methodParams = 
                                                        {
                                                            this->userName.getClass(), this->password.getClass()
                                                        };;
    

    Method* method = helperClass->getMethod("processIfNewLogin", methodParams);;
    

    std::vector<Object*> methodArgs = 
                                                        {
                                                            this->userName,this->password
                                                        };;
    

    bool resultBoolean = JavaBoxes::unbox<bool>(method->invoke(anyType, methodArgs));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return resultBoolean;;
    

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
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "processIfNewLogin()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto AuthenticationTag::processInvalidation() -> bool{

        try {
            
    Object* anyType = JavaBoxes::toObject((new AuthenticationHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext));;
    

    Class* addressHelperClass = anyType->getClass();;
    

    Method* method = addressHelperClass->getMethod("processInvalidation", 
                            nullptr);;
    

    bool resultBoolean = JavaBoxes::unbox<bool>(method->invoke(anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return resultBoolean;;
    

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
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "isSetToInvalidate()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


                //@Throws(JspTagException.constructor)
            
    auto AuthenticationTag::doStartTag() -> int32_t{

        try {
            
    StringUtil* stringUtil = StringUtil::getInstance();;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    
    HttpServletRequest* request = dynamic_cast<HttpServletRequest*>(this->pageContext->getRequest());;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(" Request URI: ");
    
stringBuffer->append(request->getRequestURI());
    
this->logUtil->putF(stringBuffer->toString(), this, tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(true)
                        
                                    {
                                    this->propertiesHashMap= StdUtil::getInstance()->createHashMap();
    

                        if(this->command.compare(GLOBALS2::NEWPASSWORD) == 0)
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF("New Password", this, tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(!this->newPassword())
                        
                                    {
                                    pageContext.getOut()->print("New Password Request Failed.<p/>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return EVAL_BODY_INCLUDE;
    

                                    }
                                
                        else {
                            pageContext.getOut()->print("New Password Was Sent.<p/>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    

                        }
                            

                                    }
                                
                             else 
                        if(this->command.compare(GLOBALS2::CHANGEPASSWORD) == 0)
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF("Change Password", this, tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(!this->changePassword())
                        
                                    {
                                    pageContext.getOut()->print("Password Change Attempt Failed.<p/>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return EVAL_BODY_INCLUDE;
    

                                    }
                                
                        else {
                            pageContext.getOut()->print("Password Changed Successfully.<p/>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    

                        }
                            

                                    }
                                
                             else 
                        if(this->command.compare(WeblisketSessionData::INVALIDATESESSION) == 0)
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF("INVALIDATESESSION", this, tagStrings.DO_START_TAG);
    

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
                                    this->logUtil->putF("Processing Invalidation", this, tagStrings.DO_START_TAG);
    

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
                                    this->logUtil->putF("Preparing session for invalidation", this, tagStrings.DO_START_TAG);
    

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
                                    this->logUtil->putF("Authenticated session is valid", this, tagStrings.DO_START_TAG);
    

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
                                    this->logUtil->putF("Processing new login.", this, tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(this->isRoleValid())
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF("Role is valid - Processing new login", this, tagStrings.DO_START_TAG);
    

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
                                    this->logUtil->putF("Role is not valid - Processing new login", this, tagStrings.DO_START_TAG);
    

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
                                    this->logUtil->putF("Invalid Login", this, tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(true && this->userName.compare(stringUtil->EMPTY_STRING) != 0 && true && this->password.compare(stringUtil->EMPTY_STRING) != 0)
                        
                                    {
                                    pageContext.getOut()->print("Sorry your username and/or password is invalid.<p/>");
    

                                    }
                                

                        }
                            

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append("Major authentication error - userName: ")->append(this->userName)->append(" Password: ")->append(this->password)->append(" Command: ")->append(this->command)->toString(), this, tagStrings.DO_START_TAG);
    

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




        #endif //ADMIN_TAGS_AUTHENTICATIONTAG_CPP
