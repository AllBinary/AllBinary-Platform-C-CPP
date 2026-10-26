
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
        



        #ifndef ADMIN_TAGS_SHIPPINGADDRESSTAG_H
        #define ADMIN_TAGS_SHIPPINGADDRESSTAG_H

            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/ShippingAddressHelperFactory.h>

      
#include <org/allbinary/business/user/address/ShippingAddressData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TableTag.h"

class ShippingAddressTag: public TableTag {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string value;

public: ShippingAddressTag();

    public: void setValue(std::string value);

                //@Throws(LicensingException.constructor)
            
    private: std::string set();

                //@Throws(LicensingException.constructor)
            
    private: std::string setToBillingAddress();

                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag();

};

            


        #endif //ADMIN_TAGS_SHIPPINGADDRESSTAG_H
