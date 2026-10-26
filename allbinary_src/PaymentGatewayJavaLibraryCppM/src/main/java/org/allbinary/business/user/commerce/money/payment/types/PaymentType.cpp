
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
        #include "BasicPaymentType.h"
#include "PaymentTypeUtil.h"

class PaymentType
            : public Object
         {

    private: BasicPaymentType basicPaymentType;

    private: PaymentTransactionInterfaceFactoryInterface paymentTransactionInterfaceFactoryInterface;

    private: PaymentProcessorInterfaceFactoryInterface paymentProcessorInterfaceFactoryInterface;

protected: PaymentType(BasicPaymentType basicPaymentType){
this->basicPaymentType= basicPaymentType;
    
this->paymentTransactionInterfaceFactoryInterface= 
                                        nullptr
                                    ;
    
this->paymentProcessorInterfaceFactoryInterface= 
                                        nullptr
                                    ;
    
PaymentTypeUtil::getInstance().add(this);
    
}


protected: PaymentType(BasicPaymentType basicPaymentType, PaymentTransactionInterfaceFactoryInterface paymentTransactionInterfaceFactoryInterface, PaymentProcessorInterfaceFactoryInterface paymentProcessorInterfaceFactoryInterface){
this->basicPaymentType= basicPaymentType;
    
this->paymentTransactionInterfaceFactoryInterface= paymentTransactionInterfaceFactoryInterface;
    
this->paymentProcessorInterfaceFactoryInterface= paymentProcessorInterfaceFactoryInterface;
    
PaymentTypeUtil::getInstance().add(this);
    
}


                //@Throws(Exception.constructor)
            
    public: PaymentTransactionInterfaceFactoryInterface getPaymentTransactionInterfaceFactoryInterface(){

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
            
    public: PaymentProcessorInterfaceFactoryInterface getPaymentProcessorInterfaceFactoryInterface(){

                        if(this->paymentProcessorInterfaceFactoryInterface == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("PaymentProcessorInterfaceFactoryInterface is Null");
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paymentProcessorInterfaceFactoryInterface;
    
}


    public: BasicArrayList toVector(){

    BasicArrayList vector = BasicArrayListD();;
    
vector.addAllList(this->getBasicPaymentType().toVector());
    

                        if(this->paymentTransactionInterfaceFactoryInterface != 
                                    nullptr
                                )
                        
                                    {
                                    vector.add(this->paymentTransactionInterfaceFactoryInterface.constructor.name.toString());
    

                                    }
                                

                        if(this->paymentProcessorInterfaceFactoryInterface != 
                                    nullptr
                                )
                        
                                    {
                                    vector.add(this->paymentProcessorInterfaceFactoryInterface.constructor.name.toString());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


    public: HashMap<Object*, Object*> toHashMap(){

    HashMap<Object*, Object*> hashMap = StdUtil::getInstance().createHashMap();;
    
hashMap.putAll(this->getBasicPaymentType().toHashMap());
    

                        if(this->paymentTransactionInterfaceFactoryInterface != 
                                    nullptr
                                )
                        
                                    {
                                    hashMap.put(PaymentGatewayData::PAYMENTTRANSACTIONINTERFACEFACTORYINTERFACE.toString(), this->paymentTransactionInterfaceFactoryInterface.constructor.name.toString());
    

                                    }
                                

                        if(this->paymentProcessorInterfaceFactoryInterface != 
                                    nullptr
                                )
                        
                                    {
                                    hashMap.put(PaymentGatewayData::PAYMENTPROCESSORINTERFACEFACTORYINTERFACE.toString(), this->paymentProcessorInterfaceFactoryInterface.constructor.name.toString());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


    public: BasicPaymentType getBasicPaymentType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicPaymentType;
    
}


};

            

