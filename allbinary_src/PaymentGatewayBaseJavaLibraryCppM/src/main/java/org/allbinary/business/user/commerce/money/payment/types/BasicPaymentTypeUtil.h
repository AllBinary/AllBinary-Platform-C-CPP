
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;
class BasicArrayListD;

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicPaymentType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicPaymentTypeUtil
            : public virtual Object
         {

    private: static BasicPaymentTypeUtil* instance_owner();
    private: static BasicPaymentTypeUtil* instance;

                    static int32_t initResult;
                static int32_t init();
            
    public: static BasicPaymentTypeUtil* getInstance();

private: BasicPaymentTypeUtil();

    private: BasicArrayList* paymentTypeVector;

    public: void add(BasicPaymentType* paymentType);

                //@Throws(Exception.constructor)
            
    public: BasicPaymentType* get(std::string paymentTypeString);

    public: bool isContain(BasicPaymentType* paymentType);

    public: BasicArrayList* difference(BasicArrayList* a_PaymentTypeVector);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_BASICPAYMENTTYPEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_BASICPAYMENTTYPEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_BASICPAYMENTTYPEUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

#if __has_include("org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h")
#include "org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h"
#endif

        #endif
    
