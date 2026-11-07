
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_BASICPAYMENTTYPE_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_BASICPAYMENTTYPE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterfaceFactoryInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/modules/gateway/PaymentGatewayDomNodeFactoryInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h"


BasicPaymentType::BasicPaymentType(std::string paymentMethod){
this->init(paymentMethod);
    
}


BasicPaymentType::BasicPaymentType(std::string paymentMethod, PaymentGatewayInterfaceFactoryInterface* paymentGatewayInterfaceFactoryInterface, PaymentGatewayDomNodeFactoryInterface* paymentGatewayDomNodeFactoryInterface){
this->init(paymentMethod);
    
this->paymentGatewayInterfaceFactoryInterface= paymentGatewayInterfaceFactoryInterface;
    
this->paymentGatewayDomNodeFactoryInterface= paymentGatewayDomNodeFactoryInterface;
    
}


    auto BasicPaymentType::init(std::string paymentMethod) -> void{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    

    std::string UNDERSCORE = "_";;
    
hashMap->put(CommonSeps::getInstance()->SPACE, UNDERSCORE);
    
hashMap->put(AbPathData::getInstance()->EXTENSION_SEP, UNDERSCORE);
    
hashMap->put("-", UNDERSCORE);
    

    Replace* replace = new Replace(hashMap);;
    
this->name= replace->all(paymentMethod);
    
this->value= paymentMethod;
    
BasicPaymentTypeUtil::getInstance()->add(this);
    
}


    auto BasicPaymentType::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


    auto BasicPaymentType::getValue() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->value;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicPaymentType::getPaymentGatewayInterfaceFactoryInterface() -> PaymentGatewayInterfaceFactoryInterface*{

                        if(this->paymentGatewayInterfaceFactoryInterface == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("PaymentGatewayInterfaceFactoryInterface is Null");
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->paymentGatewayInterfaceFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicPaymentType::getPaymentGatewayDomNodeFactoryInterface() -> PaymentGatewayDomNodeFactoryInterface*{

                        if(this->paymentGatewayDomNodeFactoryInterface == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("PaymentGatewayDomNodeFactoryInterface is Null");
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->paymentGatewayDomNodeFactoryInterface;
    
}


    auto BasicPaymentType::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(this->getName(););
    
}


    auto BasicPaymentType::toVector() -> BasicArrayList*{

    BasicArrayList* vector = new BasicArrayListD();;
    
vector->add(this->name);
    
vector->add(this->value);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return vector;
    
}


    auto BasicPaymentType::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(JavaString::valueOf(PaymentGatewayData::NAME), this->name);
    
hashMap->put(JavaString::valueOf(PaymentGatewayData::VALUE), this->value);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}


    auto BasicPaymentType::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_BASICPAYMENTTYPE_CPP
