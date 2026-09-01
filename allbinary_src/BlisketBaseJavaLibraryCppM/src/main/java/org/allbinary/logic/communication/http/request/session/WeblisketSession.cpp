
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
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
        #include "WeblisketSessionInterface.h"
#include "WeblisketSessionData.h"

class WeblisketSession
            : public Object
        : public WeblisketSessionInterface {

    private: HttpSession session;

public: WeblisketSession(HashMap<any, any> hashMap, PageContext pageContext){
            this(hashMap, pageContext.getRequest() as HttpServletRequest);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public: WeblisketSession(HashMap<any, any> hashMap, HttpServletRequest httpServletRequest){

    HashMap<any, any> propertiesHashMap = hashMap;;
    

    HttpServletRequest request = httpServletRequest;;
    
this->session= request.getSession(true);
    

                        if(this->getStoreName() == 
                                    nullptr
                                )
                        
                                    {
                                    this->setStoreName(propertiesHashMap.get(StoreFrontData::getInstance().NAME) as string);
    

                                    }
                                
}


    public: std::string getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session.getId();;
    
}


    public: void setPassword(std::string password){
this->session.setAttribute(UserData::PASSWORD, password);
    
}


    public: void setUserName(std::string userName){
this->session.setAttribute(UserData::USERNAME, userName);
    
}


    public: void setPaymentMethod(std::string value){
this->session.setAttribute(PaymentGatewayData::NAME.toString(), value);
    
}


    public: void setAuthenticated(){
this->session.setAttribute(WeblisketSessionData::AUTHENTICATED, BooleanFactory::getInstance().TRUE_STRING);
    
}


    public: void setRole(UserRole aRole){
this->session.setAttribute(UserRoleData::NAME.toString(), aRole);
    
}


    public: void setAttempts(Integer value){
this->session.setAttribute(WeblisketSessionData::ATTEMPTS, value);
    
}


    public: void setTimeout(std::string value){
this->session.setAttribute(WeblisketSessionData::TIMEOUT, value);
    
}


    public: void setStoreName(std::string value){
this->session.setAttribute(StoreFrontData::getInstance().NAME, value);
    
}


    public: std::string getWebAppPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session.getAttribute(org.allbinary.globals.GLOBALS2.WEBAPPPATH) as string;
    
}


    public: std::string getUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session.getAttribute(UserData::USERNAME) as string;
    
}


    public: std::string getPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session.getAttribute(UserData::PASSWORD) as string;
    
}


    public: std::string getPaymentMethod(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session.getAttribute(PaymentGatewayData::NAME.toString()) as string;
    
}


    public: std::string getAuthentication(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session.getAttribute(WeblisketSessionData::AUTHENTICATED) as string;
    
}


    public: Integer getAttempts(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session.getAttribute(WeblisketSessionData::ATTEMPTS) as Integer;
    
}


    public: std::string getTimeout(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session.getAttribute(WeblisketSessionData::TIMEOUT) as string;
    
}


    public: std::string getStoreName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session.getAttribute(StoreFrontData::getInstance().NAME) as string;
    
}


                //@Throws(Exception.constructor)
            
    public: UserRole getRole(){

    UserRole userRole = this->session.getAttribute(UserRoleData::NAME.toString()) as UserRole;;
    

                        if(userRole != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UserRoleB::getRole(userRole.getBasicUserRole().getRole());;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: OrderInterface getOrder(){

    StoreFrontInterface storeFrontInterface = StoreFrontFactory::getInstance(this->getStoreName());;
    

    std::string basketName = storeFrontInterface.getBasketName();;
    

                        if(!StringValidationUtil::getInstance().isEmpty(basketName))
                        
                                    {
                                    
    OrderInterface orderInterface = this->session.getAttribute(basketName) as OrderInterface;;
    

                        if(orderInterface == 
                                    nullptr
                                )
                        
                                    {
                                    orderInterface= Order(Basket()) as OrderInterface;
    

                                    }
                                
this->session.setAttribute(basketName, orderInterface);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return orderInterface;
    

                                    }
                                
                        else {
                            


                            throw Exception("Basket Name Not Found");
                    

                        }
                            
}


    public: void setAuthenticated(bool value){
this->session.setAttribute(WeblisketSessionData::AUTHENTICATED, BooleanFactory::getInstance().FALSE_STRING);
    
}


    public: void clear(){
this->session.removeAttribute(WeblisketSessionData::AUTHENTICATED);
    
this->session.removeAttribute(WeblisketSessionData::TIMEOUT);
    
this->session.removeAttribute(UserRoleData::NAME.toString());
    
this->session.removeAttribute(UserData::USERNAME);
    
}


    public: int64_t getCreationTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session.getCreationTime();;
    
}


    public: int64_t getLastAccessedTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session.getLastAccessedTime();;
    
}


    public: void removeBasket(){

    StoreFrontInterface storeFrontInterface = StoreFrontFactory::getInstance(this->getStoreName());;
    

    std::string basketName = storeFrontInterface.getBasketName();;
    

                        if(!StringValidationUtil::getInstance().isEmpty(basketName))
                        
                                    {
                                    this->session.removeAttribute(basketName);
    

                                    }
                                
}


};

            

