
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
        



        #ifndef ADMIN_TAGHELPERS_UPDATEORDERHELPER_H
        #define ADMIN_TAGHELPERS_UPDATEORDERHELPER_H

            #include "../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/address/BillingAddressData.h>

      
#include <org/allbinary/business/user/address/ShippingAddressData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentData.h>

      
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TagHelper.h"

class UpdateOrderHelper: public TagHelper {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: request: HttpServletRequest;

    private: entryId: string;

    private: orderId: string;

    private: userName: string;

    private: storeName: string;

    private: shipDate: string;

    private: orderDate: string;

    private: transDate: string;

    private: cancelDate: string;

    private: status: string;

    private: paymentMethod: string;

    private: name: string;

    private: type: string;

    private: expiration: string;

    private: number: string;

    private: encryption: string;

    private: billingName: string;

    private: billingStreet: string;

    private: billingCity: string;

    private: billingState: string;

    private: billingCode: string;

    private: billingCountry: string;

    private: shippingName: string;

    private: shippingStreet: string;

    private: shippingCity: string;

    private: shippingState: string;

    private: shippingCode: string;

    private: shippingCountry: string;

    private: shippingMethodName: string;

    private: subTotal: string;

    private: shippingCost: string;

    private: tax: string;

    private: total: string;

    private: special: string;

    private: userComment: string;

    private: userCancelComment: string;

    private: storeComment: string;

    private: storeCancelComment: string;

public constructor (HashMap<any, any> hashMap, PageContext pageContext);

    getFormData();

    public string update();

};

            


        #endif //ADMIN_TAGHELPERS_UPDATEORDERHELPER_H
