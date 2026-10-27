
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_BASICPAYMENTTYPEUTIL_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_BASICPAYMENTTYPEUTIL_H

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

class BasicPaymentTypeUtil
            : public Object
         {

    private: static BasicPaymentTypeUtil* instance() { static std::unique_ptr<BasicPaymentTypeUtil> value(new BasicPaymentTypeUtil()); return value.get(); }

                    static int32_t initResult;
                static int32_t init();
            
    public: static BasicPaymentTypeUtil* getInstance();

private: BasicPaymentTypeUtil();

    private: BasicArrayList* paymentTypeVector = new BasicArrayListD();

    public: void add(BasicPaymentType* paymentType);

                //@Throws(Exception.constructor)
            
    public: BasicPaymentType* get(std::string paymentTypeString);

    public: bool isContain(BasicPaymentType* paymentType);

    public: BasicArrayList* difference(BasicArrayList* a_PaymentTypeVector);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_BASICPAYMENTTYPEUTIL_H
