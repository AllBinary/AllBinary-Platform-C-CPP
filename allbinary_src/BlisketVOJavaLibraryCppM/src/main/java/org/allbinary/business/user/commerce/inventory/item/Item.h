
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

            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/address/ShippingAddressData.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/address/StreetAddressData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>

      
#include <org/allbinary/business/user/commerce/money/MoneyException.h>

      
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicItem.h"
#include "OrderItemInterface.h"

class Item: public BasicItem: public OrderItemInterface {
        

    private: group: string;

    private: tax: string;

    private: shippingType: string;

    private: shippingCost: string;

    private: shippedDate: string;

    private: shippingAddress: StreetAddress;

    private: special: string;

public constructor (HashMap<any, any> itemHashMap);

public constructor ();

    setData(HashMap<any, any> itemHashMap);

    public setGroup(string value);

    public setTax(string value);

    public setShippingType(string value);

    public setShippingCost(string value);

    public setShippingAddress(StreetAddress value);

    public setSpecial(string value);

    public string getGroup();

    public string getTax();

    public string getShippingType();

    public string getShippingCost();

    public StreetAddress getShippingAddress();

    public string getSpecial();

    public HashMap<any, any> toHashMap();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_ITEM_H
