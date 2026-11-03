
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_BASICPAYMENTTYPEUTIL_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_BASICPAYMENTTYPEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h"

auto BasicPaymentTypeUtil::instance_owner() -> BasicPaymentTypeUtil* { static std::unique_ptr<BasicPaymentTypeUtil> value(new BasicPaymentTypeUtil()); return value.get(); }
BasicPaymentTypeUtil* BasicPaymentTypeUtil::instance = BasicPaymentTypeUtil::instance_owner();
int32_t BasicPaymentTypeUtil::initResult = BasicPaymentTypeUtil::init();
        auto BasicPaymentTypeUtil::init() -> int32_t {
                    


                    return 0;
        }
                
    auto BasicPaymentTypeUtil::getInstance() -> BasicPaymentTypeUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicPaymentTypeUtil::instance;
    
}


BasicPaymentTypeUtil::BasicPaymentTypeUtil() : paymentTypeVector(new BasicArrayListD()){
}


    auto BasicPaymentTypeUtil::add(BasicPaymentType* paymentType) -> void{
this->paymentTypeVector->add(paymentType);
    
}


                //@Throws(Exception.constructor)
            
    auto BasicPaymentTypeUtil::get(std::string paymentTypeString) -> BasicPaymentType*{

    int32_t size = this->paymentTypeVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    BasicPaymentType* paymentType = dynamic_cast<BasicPaymentType*>(this->paymentTypeVector->get(i));;
    

                        if(paymentType->getName().compare(paymentTypeString) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return paymentType;
    

                                    }
                                
}




                            throw Exception(JavaString::valueOf("Unknown PaymentType: ") +JavaString::valueOf(paymentTypeString));
                    
}


    auto BasicPaymentTypeUtil::isContain(BasicPaymentType* paymentType) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->paymentTypeVector->contains(paymentType);;
    
}


    auto BasicPaymentTypeUtil::difference(BasicArrayList* a_PaymentTypeVector) -> BasicArrayList*{

    BasicArrayList* diff = new BasicArrayListD();;
    

    int32_t size = this->paymentTypeVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    BasicPaymentType* paymentType = dynamic_cast<BasicPaymentType*>(this->paymentTypeVector->get(i));;
    

                        if(!a_PaymentTypeVector->contains(paymentType))
                        diff->add(paymentType);
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return diff;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_BASICPAYMENTTYPEUTIL_CPP
