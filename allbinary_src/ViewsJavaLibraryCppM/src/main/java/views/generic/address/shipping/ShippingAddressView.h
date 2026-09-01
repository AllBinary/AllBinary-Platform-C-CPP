
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
        



        #ifndef VIEWS_GENERIC_ADDRESS_SHIPPING_SHIPPINGADDRESSVIEW_H
        #define VIEWS_GENERIC_ADDRESS_SHIPPING_SHIPPINGADDRESSVIEW_H

            #include "../../../../java/lang/Exception.h"
        
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/address/StreetAddressData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
#include <views/generic/address/StatesView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ShippingAddressView: public HttpStoreComponentView, public DomNodeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: HttpServletRequest request;

    protected: StreetAddress streetAddress;

public: ShippingAddressView(TransformInfoInterface transformInfoInterface);

    protected: HttpServletRequest getRequest();

                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document);

    public: void addDomNodeInterfaces();

                //@Throws(Exception.constructor)
            
    public: std::string view();

};

            


        #endif //VIEWS_GENERIC_ADDRESS_SHIPPING_SHIPPINGADDRESSVIEW_H
