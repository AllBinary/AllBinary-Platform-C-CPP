
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

class WeblisketSession
            : public Object
        , public WeblisketSessionInterface {

    private: HttpSession* session;

public: WeblisketSession(HashMap<Object*, Object*>* hashMap, PageContext* pageContext) : WeblisketSession(hashMap, dynamic_cast<HttpServletRequest*>(pageContext->getRequest())){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public: WeblisketSession(HashMap<Object*, Object*>* hashMap, HttpServletRequest* httpServletRequest){

    HashMap<Object*, Object*>* propertiesHashMap = hashMap;;
    

    HttpServletRequest* request = httpServletRequest;;
    
this->session= request->getSession(true);
    

                        if(this->getStoreName() == 
                                    nullptr
                                )
                        
                                    {
                                    this->setStoreName(propertiesHashMap->get(StoreFrontData::getInstance()->NAME));
    

                                    }
                                
}


    public: std::string getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session->getId();;
    
}


    public: void setPassword(std::string password){
this->session->setAttribute(UserData::PASSWORD, password);
    
}


    public: void setUserName(std::string userName){
this->session->setAttribute(UserData::USERNAME, userName);
    
}


    public: void setPaymentMethod(std::string value){
this->session->setAttribute(PaymentGatewayData::NAME.toString(), value);
    
}


    public: void setAuthenticated(){
this->session->setAttribute(WeblisketSessionData::AUTHENTICATED, BooleanFactory::getInstance()->TRUE_STRING);
    
}


    public: void setRole(UserRole* aRole){
this->session->setAttribute(UserRoleData::NAME.toString(), aRole);
    
}


    public: void setAttempts(int32_t value){
this->session->setAttribute(WeblisketSessionData::ATTEMPTS, value);
    
}


    public: void setTimeout(std::string value){
this->session->setAttribute(WeblisketSessionData::TIMEOUT, value);
    
}


    public: void setStoreName(std::string value){
this->session->setAttribute(StoreFrontData::getInstance()->NAME, value);
    
}


    public: std::string getWebAppPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session->getAttribute(org.allbinary.globals.GLOBALS2.WEBAPPPATH);
    
}


    public: std::string getUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session->getAttribute(UserData::USERNAME);
    
}


    public: std::string getPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session->getAttribute(UserData::PASSWORD);
    
}


    public: std::string getPaymentMethod(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session->getAttribute(PaymentGatewayData::NAME.toString());
    
}


    public: std::string getAuthentication(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session->getAttribute(WeblisketSessionData::AUTHENTICATED);
    
}


    public: int32_t getAttempts(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session->getAttribute(WeblisketSessionData::ATTEMPTS);
    
}


    public: std::string getTimeout(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session->getAttribute(WeblisketSessionData::TIMEOUT);
    
}


    public: std::string getStoreName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session->getAttribute(StoreFrontData::getInstance()->NAME);
    
}


                //@Throws(Exception.constructor)
            
    public: UserRole* getRole(){

    UserRole* userRole = dynamic_cast<UserRole*>(this->session->getAttribute(UserRoleData::NAME.toString()));;
    

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
            
    public: OrderInterface* getOrder(){

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
                            


                            throw new Exception("Basket Name Not Found");
                    

                        }
                            
}


    public: void setAuthenticated(bool value){
this->session->setAttribute(WeblisketSessionData::AUTHENTICATED, BooleanFactory::getInstance()->FALSE_STRING);
    
}


    public: void clear(){
this->session->removeAttribute(WeblisketSessionData::AUTHENTICATED);
    
this->session->removeAttribute(WeblisketSessionData::TIMEOUT);
    
this->session->removeAttribute(UserRoleData::NAME.toString());
    
this->session->removeAttribute(UserData::USERNAME);
    
}


    public: int64_t getCreationTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session->getCreationTime();;
    
}


    public: int64_t getLastAccessedTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session->getLastAccessedTime();;
    
}


    public: void removeBasket(){

    StoreFrontInterface* storeFrontInterface = StoreFrontFactory::getInstance(this->getStoreName());;
    

    std::string basketName = storeFrontInterface->getBasketName();;
    

                        if(!StringValidationUtil::getInstance()->isEmpty(basketName))
                        
                                    {
                                    this->session->removeAttribute(basketName);
    

                                    }
                                
}


};

            

