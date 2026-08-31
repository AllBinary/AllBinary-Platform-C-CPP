
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
        



        #ifndef VIEWS_GENERIC_PAYMENT_PAYMENTVIEW_H
        #define VIEWS_GENERIC_PAYMENT_PAYMENTVIEW_H

            #include "../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/business/user/commerce/money/payment/Payment.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentData.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/PaymentEntityFactory.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PaymentView: public HttpStoreComponentView: public DomNodeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (TransformInfoInterface transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document);

    public addDomNodeInterfaces();

    public string view();

};

            


        #endif //VIEWS_GENERIC_PAYMENT_PAYMENTVIEW_H
