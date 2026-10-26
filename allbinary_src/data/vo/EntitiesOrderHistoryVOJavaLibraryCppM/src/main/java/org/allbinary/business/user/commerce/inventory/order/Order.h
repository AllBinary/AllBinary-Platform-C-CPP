
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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

      
#include <org/allbinary/logic/StdUtil.h>

      
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

    private: BasketInterface basket;

    private: std::string paymentMethod;

    private: std::string shippingType;

    private: std::string storeName;

    private: std::string special;

    private: std::string id;

    private: std::string userComment;

    private: std::string userCancelComment;

    private: std::string storeComment;

    private: std::string storeCancelComment;

public: Order(BasketInterface basket);

public: Order(std::string storeName, BasketInterface basket, std::string id, std::string shippingType, std::string special, std::string paymentMethod);

    public: Boolean isIdValid();

    public: Boolean isValid();

    public: std::string getIdValidationInfo();

    public: void setShippingMethod(std::string shippingType);

    public: void setPaymentMethod(std::string value);

    public: void setSpecial(std::string special);

    public: void setId(std::string value);

    public: void setStoreName(std::string value);

    public: void setUserComments(std::string value);

    public: void setUserCancelComments(std::string value);

    public: void setStoreComments(std::string value);

    public: void setStoreCancelComments(std::string value);

    public: BasketInterface getBasket();

    public: std::string getShippingMethod();

    public: std::string getPaymentMethod();

    public: std::string getSpecial();

    public: std::string getId();

    public: std::string getStoreName();

    public: std::string getUserComments();

    public: std::string getUserCancelComments();

    public: std::string getStoreComments();

    public: std::string getStoreCancelComments();

    public: std::string reviewOrder(std::string paymentMethod);

    public: std::string viewOrder(std::string paymentMethod);

    public: std::string emailOrder(std::string userName, std::string paymentMethod, StoreFrontInterface storeFrontInterface);

    public: HashMap<Object*, Object*> toHashMapOrder();

                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ORDER_ORDER_H
