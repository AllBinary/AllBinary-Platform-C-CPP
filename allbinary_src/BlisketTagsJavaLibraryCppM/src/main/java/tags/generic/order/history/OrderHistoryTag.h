
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
        



        #ifndef TAGS_GENERIC_ORDER_HISTORY_ORDERHISTORYTAG_H
        #define TAGS_GENERIC_ORDER_HISTORY_ORDERHISTORYTAG_H

            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <taghelpers/OrderHistoryHelperFactory.h>

      
#include <tags/StoreValidationTransformTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OrderHistoryTag: public StoreValidationTransformTag {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string status;

public: OrderHistoryTag();

    public: void setStatus(std::string value);

                //@Throws(LicensingException.constructor)
            
    private: std::string setOrderStatus();

                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag();

};

            


        #endif //TAGS_GENERIC_ORDER_HISTORY_ORDERHISTORYTAG_H
