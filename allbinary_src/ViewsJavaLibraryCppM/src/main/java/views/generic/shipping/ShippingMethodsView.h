
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
        



        #ifndef VIEWS_GENERIC_SHIPPING_SHIPPINGMETHODSVIEW_H
        #define VIEWS_GENERIC_SHIPPING_SHIPPINGMETHODSVIEW_H

            #include "java/lang/Exception.h"
        
            #include "java/lang/Float.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/business/user/commerce/money/tax/TaxFactory.h>

      
#include <org/allbinary/business/user/commerce/shipping/ShippingMethods.h>

      
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodsData.h>

      
#include <org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h>

      
#include <org/allbinary/data/tables/user/address/StreetAddressesEntityInterface.h>

      
#include <org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntityFactory.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ShippingMethodsView: public HttpStoreComponentView, public DomNodeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: ShippingMethods shippingMethods;

    private: StoreFrontInterface storeFrontInterface;

public: ShippingMethodsView(TransformInfoInterface transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document);

    public: void addDomNodeInterfaces();

    public: std::string view();

};

            


        #endif //VIEWS_GENERIC_SHIPPING_SHIPPINGMETHODSVIEW_H
