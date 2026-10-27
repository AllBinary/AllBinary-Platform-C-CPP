
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
        
#include <org/allbinary/business/context/modules/storefront/StoreFront.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/gateway/Serializable.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGateway.h"

class PaymentGatewayPrimaryKey
            : public Object
        , public java::io::Serializable {

    private: std::string storeName;

    private: std::string name;

public: PaymentGatewayPrimaryKey(std::string storeName, std::string gatewayName){
this->setStoreName(storeName);
    
this->setName(gatewayName);
    
}


    public: std::string getStoreName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeName;
    
}


    public: void setStoreName(std::string storeName){
this->storeName= storeName;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: void setName(std::string name){
this->name= name;
    
}


    public: std::string toString(){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(PaymentGatewayPrimaryKey.constructor.getName());
    
stringBuffer->append(StoreFront.constructor.getName());
    
stringBuffer->append(" =");
    
stringBuffer->append(this->getStoreName());
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(PaymentGateway.constructor.getName());
    
stringBuffer->append("=");
    
stringBuffer->append(this->getName());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


};

            

