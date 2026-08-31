
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
        



        #ifndef ADMIN_TAGS_BASKETTAG_H
        #define ADMIN_TAGS_BASKETTAG_H

            #include "../../java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/BasketHelperFactory.h>

      
#include <admin/taghelpers/BasketRequestHelperFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/BasketData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/CustomTagSupport.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasketTag: public CustomTagSupport {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: command: string;

    private: storeName: string;

    private: propertiesHashMap: HashMap<any, any>;

public constructor ();

    public setCommand(string command);

    public setStoreName(string value);

                //@Throws(LicensingException.constructor)
            
    bool isBasketEmpty();

                //@Throws(LicensingException.constructor)
            
    bool addItemToBasket();

                //@Throws(LicensingException.constructor)
            
    bool removeItemFromBasket();

                //@Throws(LicensingException.constructor)
            
    bool adjustBasket();

                //@Throws(JspTagException.constructor)
            
    public int32_t doStartTag();

};

            


        #endif //ADMIN_TAGS_BASKETTAG_H
