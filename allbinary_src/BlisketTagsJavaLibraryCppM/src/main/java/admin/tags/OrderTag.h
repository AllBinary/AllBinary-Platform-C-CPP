
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
        



        #ifndef ADMIN_TAGS_ORDERTAG_H
        #define ADMIN_TAGS_ORDERTAG_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/lang/reflect/Method.h>
#include <java/util/HashMap.h>
class JspTagException;
class TagSupport;
class OrderHelperFactory;
class StoreFrontData;
class PaymentGatewayData;
class StdUtil;
class AbResponseHandler;
class LogUtil;
class LicensingException;
#include <tags/CustomTagSupport.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OrderTag: public CustomTagSupport {

    /*protected*/ public: LogUtil* logUtil;

    private: std::string command;

    private: std::string storeName;

    private: HashMap<Object*, Object*>* propertiesHashMap;

public: OrderTag();

    public: void setCommand(std::string command);

    public: void setStoreName(std::string value);

                //@Throws(LicensingException.constructor)
            
    private: std::string process();

                //@Throws(LicensingException.constructor)
            
    private: bool setPaymentGateway();

                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag();

};

            


        #endif //ADMIN_TAGS_ORDERTAG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGS_ORDERTAG_H_COMPLETE)
        #define ADMIN_TAGS_ORDERTAG_H_COMPLETE
        #if __has_include(<java/lang/reflect/Method.h>)
#include <java/lang/reflect/Method.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/jsp/JspTagException.h>)
#include <javax/servlet/jsp/JspTagException.h>
#endif
#if __has_include(<javax/servlet/jsp/tagext/TagSupport.h>)
#include <javax/servlet/jsp/tagext/TagSupport.h>
#endif
#if __has_include(<admin/taghelpers/OrderHelperFactory.h>)
#include <admin/taghelpers/OrderHelperFactory.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/AbResponseHandler.h>)
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include(<tags/CustomTagSupport.h>)
#include <tags/CustomTagSupport.h>
#endif

        #endif
    
