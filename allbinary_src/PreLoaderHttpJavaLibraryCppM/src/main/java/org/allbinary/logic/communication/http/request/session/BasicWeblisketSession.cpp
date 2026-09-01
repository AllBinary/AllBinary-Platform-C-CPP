
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
        
            #include "../../../../../../../java/lang/Integer.h"
        
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/http/HttpSession.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>

      
#include <org/allbinary/business/user/role/BasicUserRole.h>

      
#include <org/allbinary/business/user/role/BasicUserRoleData.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WeblisketSessionData.h"

class BasicWeblisketSession
            : public Object
         {

    private: HttpSession session;

    private: PageContext pageContext;

public: BasicWeblisketSession(PageContext pageContext){
this->pageContext= pageContext;
    

    HttpServletRequest request = pageContext.getRequest() as HttpServletRequest;;
    
this->session= request.getSession(true);
    
}


    public: void setRole(BasicUserRole aRole){
this->session.setAttribute(BasicUserRoleData::NAME.toString(), aRole);
    
}


    public: BasicUserRole getRole(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session.getAttribute(BasicUserRoleData::NAME.toString()) as BasicUserRole;
    
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


    public: void setAuthenticated(bool value){
this->session.setAttribute(WeblisketSessionData::AUTHENTICATED, BooleanFactory::getInstance().FALSE_STRING);
    
}


    public: void clear(){
this->session.removeAttribute(WeblisketSessionData::AUTHENTICATED);
    
this->session.removeAttribute(WeblisketSessionData::TIMEOUT);
    
this->session.removeAttribute(BasicUserRoleData::NAME.toString());
    
this->session.removeAttribute(UserData::USERNAME);
    
}


    public: int64_t getCreationTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->session.getCreationTime();;
    
}


    public: int64_t getLastAccessedTime(){

    int64_t lastAccessedTime = this->session.getLastAccessedTime();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return lastAccessedTime;
    
}


};

            

