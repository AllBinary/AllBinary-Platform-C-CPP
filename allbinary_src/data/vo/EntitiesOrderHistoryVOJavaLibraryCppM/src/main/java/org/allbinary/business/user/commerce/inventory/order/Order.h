
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDER_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDER_H

            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/io/Serializable.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentData.h>

      
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OrderInterface.h"
#include "OrderHistoryData.h"
#include "OrderData.h"

class Order
            : public Object
        : public OrderInterface, public Serializable {
        

    private: const basket: BasketInterface;

    private: paymentMethod: string;

    private: shippingType: string;

    private: storeName: string;

    private: special: string;

    private: id: string;

    private: userComment: string;

    private: userCancelComment: string;

    private: storeComment: string;

    private: storeCancelComment: string;

public constructor (BasketInterface basket);

public constructor (string storeName, BasketInterface basket, string id, string shippingType, string special, string paymentMethod);

    public Boolean isIdValid();

    public Boolean isValid();

    public string getIdValidationInfo();

    public setShippingMethod(string shippingType);

    public setPaymentMethod(string value);

    public setSpecial(string special);

    public setId(string value);

    public setStoreName(string value);

    public setUserComments(string value);

    public setUserCancelComments(string value);

    public setStoreComments(string value);

    public setStoreCancelComments(string value);

    public BasketInterface getBasket();

    public string getShippingMethod();

    public string getPaymentMethod();

    public string getSpecial();

    public string getId();

    public string getStoreName();

    public string getUserComments();

    public string getUserCancelComments();

    public string getStoreComments();

    public string getStoreCancelComments();

    public string reviewOrder(string paymentMethod);

    public string viewOrder(string paymentMethod);

    public string emailOrder(string userName, string paymentMethod, StoreFrontInterface storeFrontInterface);

    public HashMap<any, any> toHashMapOrder();

                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDER_H
