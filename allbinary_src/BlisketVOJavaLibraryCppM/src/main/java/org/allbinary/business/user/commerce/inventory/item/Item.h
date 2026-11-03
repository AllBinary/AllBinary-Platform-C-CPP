
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_ITEM_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_ITEM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class EntryData;
class ShippingAddressData;
class StreetAddress;
class StreetAddressData;
class OrderHistoryData;
class MoneyException;
class ShippingMethodData;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/inventory/item/BasicItem.h"
#include "org/allbinary/business/user/commerce/inventory/item/OrderItemInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Item: public BasicItem, public virtual OrderItemInterface {

    private: std::string group;

    private: std::string tax;

    private: std::string shippingType;

    private: std::string shippingCost;

    private: std::string shippedDate;

    private: StreetAddress* shippingAddress;

    private: std::string special;

public: Item(HashMap<Object*, Object*>* itemHashMap);

public: Item();

    private: void setData(HashMap<Object*, Object*>* itemHashMap);

    public: void setGroup(std::string value);

    public: void setTax(std::string value);

    public: void setShippingType(std::string value);

    public: void setShippingCost(std::string value);

    public: void setShippingAddress(StreetAddress* value);

    public: void setSpecial(std::string value);

    public: std::string getGroup();

    public: std::string getTax();

    public: std::string getShippingType();

    public: std::string getShippingCost();

    public: StreetAddress* getShippingAddress();

    public: std::string getSpecial();

    public: HashMap<Object*, Object*>* toHashMap();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_ITEM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_ITEM_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_ITEM_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/user/address/ShippingAddressData.h>)
#include <org/allbinary/business/user/address/ShippingAddressData.h>
#endif
#if __has_include(<org/allbinary/business/user/address/StreetAddress.h>)
#include <org/allbinary/business/user/address/StreetAddress.h>
#endif
#if __has_include(<org/allbinary/business/user/address/StreetAddressData.h>)
#include <org/allbinary/business/user/address/StreetAddressData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/MoneyException.h>)
#include <org/allbinary/business/user/commerce/money/MoneyException.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>)
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/inventory/item/BasicItem.h")
#include "org/allbinary/business/user/commerce/inventory/item/BasicItem.h"
#endif
#if __has_include("org/allbinary/business/user/commerce/inventory/item/OrderItemInterface.h")
#include "org/allbinary/business/user/commerce/inventory/item/OrderItemInterface.h"
#endif

        #endif
    
