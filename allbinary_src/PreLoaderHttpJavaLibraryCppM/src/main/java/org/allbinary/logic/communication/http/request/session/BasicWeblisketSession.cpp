
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_SESSION_BASICWEBLISKETSESSION_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_SESSION_BASICWEBLISKETSESSION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/http/request/session/BasicWeblisketSession.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/http/HttpSession.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>

      
#include <org/allbinary/business/user/role/BasicUserRole.h>

      
#include <org/allbinary/business/user/role/BasicUserRoleData.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      

#include <org/allbinary/globals/GLOBALS2.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h"


BasicWeblisketSession::BasicWeblisketSession(PageContext* pageContext){
this->pageContext= pageContext;
    

    HttpServletRequest* request = dynamic_cast<HttpServletRequest*>(pageContext->getRequest());;
    
this->session= request->getSession(true);
    
}


    auto BasicWeblisketSession::setRole(BasicUserRole* aRole) -> void{
this->session->setAttribute(JavaString::valueOf(BasicUserRoleData::NAME), aRole);
    
}


    auto BasicWeblisketSession::getRole() -> BasicUserRole*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<BasicUserRole*>(this->session->getAttribute(JavaString::valueOf(BasicUserRoleData::NAME)));
    
}


    auto BasicWeblisketSession::setPassword(std::string password) -> void{
this->session->setAttribute(UserData::PASSWORD, password);
    
}


    auto BasicWeblisketSession::setUserName(std::string userName) -> void{
this->session->setAttribute(UserData::USERNAME, userName);
    
}


    auto BasicWeblisketSession::setPaymentMethod(std::string value) -> void{
this->session->setAttribute(JavaString::valueOf(PaymentGatewayData::NAME), value);
    
}


    auto BasicWeblisketSession::setAuthenticated() -> void{
this->session->setAttribute(WeblisketSessionData::AUTHENTICATED, BooleanFactory::getInstance()->TRUE_STRING);
    
}


    auto BasicWeblisketSession::setAttempts(int32_t value) -> void{
this->session->setAttribute(WeblisketSessionData::ATTEMPTS, value);
    
}


    auto BasicWeblisketSession::setTimeout(std::string value) -> void{
this->session->setAttribute(WeblisketSessionData::TIMEOUT, value);
    
}


    auto BasicWeblisketSession::setStoreName(std::string value) -> void{
this->session->setAttribute(StoreFrontData::getInstance()->NAME, value);
    
}


    auto BasicWeblisketSession::getWebAppPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->session->getAttribute(GLOBALS2::WEBAPPPATH));
    
}


    auto BasicWeblisketSession::getUserName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->session->getAttribute(UserData::USERNAME));
    
}


    auto BasicWeblisketSession::getPassword() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->session->getAttribute(UserData::PASSWORD));
    
}


    auto BasicWeblisketSession::getPaymentMethod() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->session->getAttribute(JavaString::valueOf(PaymentGatewayData::NAME)));
    
}


    auto BasicWeblisketSession::getAuthentication() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->session->getAttribute(WeblisketSessionData::AUTHENTICATED));
    
}


    auto BasicWeblisketSession::getAttempts() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<int32_t>(this->session->getAttribute(WeblisketSessionData::ATTEMPTS));
    
}


    auto BasicWeblisketSession::getTimeout() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->session->getAttribute(WeblisketSessionData::TIMEOUT));
    
}


    auto BasicWeblisketSession::getStoreName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->session->getAttribute(StoreFrontData::getInstance()->NAME));
    
}


    auto BasicWeblisketSession::setAuthenticated(bool value) -> void{
this->session->setAttribute(WeblisketSessionData::AUTHENTICATED, BooleanFactory::getInstance()->FALSE_STRING);
    
}


    auto BasicWeblisketSession::clear() -> void{
this->session->removeAttribute(WeblisketSessionData::AUTHENTICATED);
    
this->session->removeAttribute(WeblisketSessionData::TIMEOUT);
    
this->session->removeAttribute(JavaString::valueOf(BasicUserRoleData::NAME));
    
this->session->removeAttribute(UserData::USERNAME);
    
}


    auto BasicWeblisketSession::getCreationTime() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->session->getCreationTime();;
    
}


    auto BasicWeblisketSession::getLastAccessedTime() -> int64_t{

    int64_t lastAccessedTime = this->session->getLastAccessedTime();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return lastAccessedTime;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_SESSION_BASICWEBLISKETSESSION_CPP
