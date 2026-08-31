
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

            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicPaymentType.h"

class BasicPaymentTypeUtil
            : public Object
         {
        

    private: static const instance: BasicPaymentTypeUtil = new BasicPaymentTypeUtil();

                    static int32_t initResult;
                static int32_t init();
            
    public static BasicPaymentTypeUtil getInstance();

private constructor ();

    private: paymentTypeVector: Vector = new Vector();

    public add(BasicPaymentType paymentType);

                //@Throws(Exception.constructor)
            
    public BasicPaymentType get(string paymentTypeString);

    public bool isContain(BasicPaymentType paymentType);

    public Vector difference(Vector a_PaymentTypeVector);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_BASICPAYMENTTYPEUTIL_H
