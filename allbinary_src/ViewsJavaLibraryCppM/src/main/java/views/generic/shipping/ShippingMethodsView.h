
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Float.h"
        
class BasicArrayList;

class StoreFrontFactory;
class StoreFrontInterface;
class EntryData;
class StreetAddress;
class BasketInterface;
class OrderInterface;
class Money;
class TaxFactory;
class ShippingMethods;
class ShippingMethodsData;
class ShippingInterface;
class StreetAddressesEntityInterface;
class ShippingAddressesEntityFactory;
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class ModDomHelper;
class LogUtil;
class TransformInfoInterface;
class Document;
class Node;
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ShippingMethodsView: public HttpStoreComponentView, public virtual DomNodeInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: ShippingMethods* shippingMethods;

    private: StoreFrontInterface* storeFrontInterface;

public: ShippingMethodsView(TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

    public: void addDomNodeInterfaces();

    public: std::string view();

};

            


        #endif //VIEWS_GENERIC_SHIPPING_SHIPPINGMETHODSVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_GENERIC_SHIPPING_SHIPPINGMETHODSVIEW_H_COMPLETE)
        #define VIEWS_GENERIC_SHIPPING_SHIPPINGMETHODSVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/user/address/StreetAddress.h>)
#include <org/allbinary/business/user/address/StreetAddress.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>)
#include <org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/Money.h>)
#include <org/allbinary/business/user/commerce/money/Money.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/tax/TaxFactory.h>)
#include <org/allbinary/business/user/commerce/money/tax/TaxFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/shipping/ShippingMethods.h>)
#include <org/allbinary/business/user/commerce/shipping/ShippingMethods.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/shipping/ShippingMethodsData.h>)
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodsData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h>)
#include <org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/address/StreetAddressesEntityInterface.h>)
#include <org/allbinary/data/tables/user/address/StreetAddressesEntityInterface.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntityFactory.h>)
#include <org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include(<views/business/context/modules/storefront/HttpStoreComponentView.h>)
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
#endif

        #endif
    
