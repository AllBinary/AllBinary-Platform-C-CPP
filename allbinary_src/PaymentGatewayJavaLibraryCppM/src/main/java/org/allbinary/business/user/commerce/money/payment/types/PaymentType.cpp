
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_PAYMENTTYPE_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_PAYMENTTYPE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/money/payment/types/PaymentType.h"
        

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

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/processor/PaymentProcessorInterfaceFactoryInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterfaceFactoryInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h"
#include "org/allbinary/business/user/commerce/money/payment/types/PaymentTypeUtil.h"


PaymentType::PaymentType(BasicPaymentType* basicPaymentType){
this->basicPaymentType= basicPaymentType;
    
this->paymentTransactionInterfaceFactoryInterface= 
                                        nullptr
                                    ;
    
this->paymentProcessorInterfaceFactoryInterface= 
                                        nullptr
                                    ;
    
PaymentTypeUtil::getInstance()->add(this);
    
}


PaymentType::PaymentType(BasicPaymentType* basicPaymentType, PaymentTransactionInterfaceFactoryInterface* paymentTransactionInterfaceFactoryInterface, PaymentProcessorInterfaceFactoryInterface* paymentProcessorInterfaceFactoryInterface){
this->basicPaymentType= basicPaymentType;
    
this->paymentTransactionInterfaceFactoryInterface= paymentTransactionInterfaceFactoryInterface;
    
this->paymentProcessorInterfaceFactoryInterface= paymentProcessorInterfaceFactoryInterface;
    
PaymentTypeUtil::getInstance()->add(this);
    
}


                //@Throws(Exception.constructor)
            
    auto PaymentType::getPaymentTransactionInterfaceFactoryInterface() -> PaymentTransactionInterfaceFactoryInterface*{

                        if(this->paymentTransactionInterfaceFactoryInterface == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("PaymentTransactionInterfaceFactoryInterface is Null");
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paymentTransactionInterfaceFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto PaymentType::getPaymentProcessorInterfaceFactoryInterface() -> PaymentProcessorInterfaceFactoryInterface*{

                        if(this->paymentProcessorInterfaceFactoryInterface == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("PaymentProcessorInterfaceFactoryInterface is Null");
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paymentProcessorInterfaceFactoryInterface;
    
}


    auto PaymentType::toVector() -> BasicArrayList*{

    BasicArrayList* vector = new BasicArrayListD();;
    
vector->addAllList(this->getBasicPaymentType()->toVector());
    

                        if(this->paymentTransactionInterfaceFactoryInterface != 
                                    nullptr
                                )
                        
                                    {
                                    vector->add(this->paymentTransactionInterfaceFactoryInterface->getClass()->getName());
    

                                    }
                                

                        if(this->paymentProcessorInterfaceFactoryInterface != 
                                    nullptr
                                )
                        
                                    {
                                    vector->add(this->paymentProcessorInterfaceFactoryInterface->getClass()->getName());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


    auto PaymentType::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->putAll(this->getBasicPaymentType()->toHashMap());
    

                        if(this->paymentTransactionInterfaceFactoryInterface != 
                                    nullptr
                                )
                        
                                    {
                                    hashMap->put(PaymentGatewayData::PAYMENTTRANSACTIONINTERFACEFACTORYINTERFACE->toString(), this->paymentTransactionInterfaceFactoryInterface->getClass()->getName());
    

                                    }
                                

                        if(this->paymentProcessorInterfaceFactoryInterface != 
                                    nullptr
                                )
                        
                                    {
                                    hashMap->put(PaymentGatewayData::PAYMENTPROCESSORINTERFACEFACTORYINTERFACE->toString(), this->paymentProcessorInterfaceFactoryInterface->getClass()->getName());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


    auto PaymentType::getBasicPaymentType() -> BasicPaymentType*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicPaymentType;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_PAYMENTTYPE_CPP
