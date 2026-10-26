
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
        



        #ifndef ADMIN_TAGHELPERS_ORDERHISTORYREQUESTHELPER_H
        #define ADMIN_TAGHELPERS_ORDERHISTORYREQUESTHELPER_H

            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/status/OrderStatusEmail.h>

      
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderItemsEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TagHelper.h"

class OrderHistoryRequestHelper: public TagHelper {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const AbeClientInformationInterface abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();

    private: HttpServletRequest request;

    private: std::string id;

    private: std::string groupId;

    private: std::string status;

public: OrderHistoryRequestHelper(HashMap<Object*, Object*> hashMap, PageContext pageContext);

    private: void getFormData();

    public: std::string setOrderStatus();

    public: std::string setOrderStatus(std::string newStatus);

};

            


        #endif //ADMIN_TAGHELPERS_ORDERHISTORYREQUESTHELPER_H
