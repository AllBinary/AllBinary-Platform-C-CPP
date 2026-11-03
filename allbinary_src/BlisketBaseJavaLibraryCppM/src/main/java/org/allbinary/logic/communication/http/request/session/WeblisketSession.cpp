
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_SESSION_WEBLISKETSESSION_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_SESSION_WEBLISKETSESSION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/http/HttpSession.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/Basket.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/Order.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>

      
#include <org/allbinary/business/user/role/UserRole.h>

      
#include <org/allbinary/business/user/role/UserRoleB.h>

      
#include <org/allbinary/business/user/role/UserRoleData.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSessionData.h"


WeblisketSession::WeblisketSession(HashMap<Object*, Object*>* hashMap, PageContext* pageContext) : WeblisketSession(hashMap, dynamic_cast<HttpServletRequest*>(pageContext->getRequest())){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


WeblisketSession::WeblisketSession(HashMap<Object*, Object*>* hashMap, HttpServletRequest* httpServletRequest){

    HashMap<Object*, Object*>* propertiesHashMap = hashMap;;
    

    HttpServletRequest* request = httpServletRequest;;
    
this->session= request->getSession(true);
    

                        if(this->getStoreName() == 
                                    nullptr
                                )
                        
                                    {
                                    this->setStoreName(JavaBoxes::unbox<std::string>(propertiesHashMap->get(StoreFrontData::getInstance()->NAME)));
    

                                    }
                                
}


    auto WeblisketSession::getId() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->session->getId();;
    
}


    auto WeblisketSession::setPassword(std::string password) -> void{
this->session->setAttribute(UserData::PASSWORD, password);
    
}


    auto WeblisketSession::setUserName(std::string userName) -> void{
this->session->setAttribute(UserData::USERNAME, userName);
    
}


    auto WeblisketSession::setPaymentMethod(std::string value) -> void{
this->session->setAttribute(PaymentGatewayData::NAME->toString(), value);
    
}


    auto WeblisketSession::setAuthenticated() -> void{
this->session->setAttribute(WeblisketSessionData::AUTHENTICATED, BooleanFactory::getInstance()->TRUE_STRING);
    
}


    auto WeblisketSession::setRole(UserRole* aRole) -> void{
this->session->setAttribute(UserRoleData::NAME->toString(), aRole);
    
}


    auto WeblisketSession::setAttempts(int32_t value) -> void{
this->session->setAttribute(WeblisketSessionData::ATTEMPTS, value);
    
}


    auto WeblisketSession::setTimeout(std::string value) -> void{
this->session->setAttribute(WeblisketSessionData::TIMEOUT, value);
    
}


    auto WeblisketSession::setStoreName(std::string value) -> void{
this->session->setAttribute(StoreFrontData::getInstance()->NAME, value);
    
}


    auto WeblisketSession::getWebAppPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->session->getAttribute(org.allbinary->globals->GLOBALS2->WEBAPPPATH));
    
}


    auto WeblisketSession::getUserName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->session->getAttribute(UserData::USERNAME));
    
}


    auto WeblisketSession::getPassword() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->session->getAttribute(UserData::PASSWORD));
    
}


    auto WeblisketSession::getPaymentMethod() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->session->getAttribute(PaymentGatewayData::NAME->toString()));
    
}


    auto WeblisketSession::getAuthentication() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->session->getAttribute(WeblisketSessionData::AUTHENTICATED));
    
}


    auto WeblisketSession::getAttempts() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<int32_t>(this->session->getAttribute(WeblisketSessionData::ATTEMPTS));
    
}


    auto WeblisketSession::getTimeout() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->session->getAttribute(WeblisketSessionData::TIMEOUT));
    
}


    auto WeblisketSession::getStoreName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->session->getAttribute(StoreFrontData::getInstance()->NAME));
    
}


                //@Throws(Exception.constructor)
            
    auto WeblisketSession::getRole() -> UserRole*{

    UserRole* userRole = dynamic_cast<UserRole*>(this->session->getAttribute(UserRoleData::NAME->toString()));;
    

                        if(userRole != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return UserRoleB::getRole(userRole->getBasicUserRole()->getRole());;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto WeblisketSession::getOrder() -> OrderInterface*{

    StoreFrontInterface* storeFrontInterface = StoreFrontFactory::getInstance(this->getStoreName());;
    

    std::string basketName = storeFrontInterface->getBasketName();;
    

                        if(!StringValidationUtil::getInstance()->isEmpty(basketName))
                        
                                    {
                                    
    OrderInterface* orderInterface = dynamic_cast<OrderInterface*>(this->session->getAttribute(basketName));;
    

                        if(orderInterface == 
                                    nullptr
                                )
                        
                                    {
                                    orderInterface= dynamic_cast<OrderInterface*>(new Order(new Basket()));
    

                                    }
                                
this->session->setAttribute(basketName, orderInterface);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return orderInterface;
    

                                    }
                                
                        else {
                            


                            throw Exception("Basket Name Not Found");
                    

                        }
                            
}


    auto WeblisketSession::setAuthenticated(bool value) -> void{
this->session->setAttribute(WeblisketSessionData::AUTHENTICATED, BooleanFactory::getInstance()->FALSE_STRING);
    
}


    auto WeblisketSession::clear() -> void{
this->session->removeAttribute(WeblisketSessionData::AUTHENTICATED);
    
this->session->removeAttribute(WeblisketSessionData::TIMEOUT);
    
this->session->removeAttribute(UserRoleData::NAME->toString());
    
this->session->removeAttribute(UserData::USERNAME);
    
}


    auto WeblisketSession::getCreationTime() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->session->getCreationTime();;
    
}


    auto WeblisketSession::getLastAccessedTime() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->session->getLastAccessedTime();;
    
}


    auto WeblisketSession::removeBasket() -> void{

    StoreFrontInterface* storeFrontInterface = StoreFrontFactory::getInstance(this->getStoreName());;
    

    std::string basketName = storeFrontInterface->getBasketName();;
    

                        if(!StringValidationUtil::getInstance()->isEmpty(basketName))
                        
                                    {
                                    this->session->removeAttribute(basketName);
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_SESSION_WEBLISKETSESSION_CPP
