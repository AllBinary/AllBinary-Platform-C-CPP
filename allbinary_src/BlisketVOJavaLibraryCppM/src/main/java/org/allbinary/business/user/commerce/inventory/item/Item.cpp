
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

public constructor (HashMap<any, any> itemHashMap){
            super(itemHashMap);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.setData(itemHashMap);
    
}


public constructor (){

            super();
        
    EMPTY: string = StringUtil.getInstance()!.EMPTY_STRING;;
    
this.group= EMPTY;
    
this.tax= EMPTY;
    
this.shippingType= EMPTY;
    
this.shippingCost= EMPTY;
    
this.shippingAddress= new StreetAddress();
    
}


    setData(HashMap<any, any> itemHashMap){
this.group= itemHashMap!.get(ShippingMethodData.GROUP) as string;
    
this.tax= itemHashMap!.get(OrderHistoryData.TAX) as string;
    
this.shippingType= itemHashMap!.get(ShippingMethodData.NAME) as string;
    
this.shippingCost= itemHashMap!.get(ShippingMethodData.COST) as string;
    
this.shippedDate= itemHashMap!.get(OrderHistoryData.SHIPPEDDATE) as string;
    
itemHashMap!.put(StreetAddressData.NAME, itemHashMap!.get(ShippingAddressData.NAME));
    
itemHashMap!.put(StreetAddressData.STREET, itemHashMap!.get(ShippingAddressData.STREET));
    
itemHashMap!.put(StreetAddressData.CITY, itemHashMap!.get(ShippingAddressData.CITY));
    
itemHashMap!.put(StreetAddressData.STATE, itemHashMap!.get(ShippingAddressData.STATE));
    
itemHashMap!.put(StreetAddressData.CODE, itemHashMap!.get(ShippingAddressData.CODE));
    
itemHashMap!.put(StreetAddressData.COUNTRY, itemHashMap!.get(ShippingAddressData.COUNTRY));
    
this.shippingAddress= new StreetAddress(itemHashMap);
    
}


    public setGroup(string value){
this.group= value;
    
}


    public setTax(string value){
this.tax= value;
    
}


    public setShippingType(string value){
this.shippingType= value;
    
}


    public setShippingCost(string value){
this.shippingCost= value;
    
}


    public setShippingAddress(StreetAddress value){
this.shippingAddress= value;
    
}


    public setSpecial(string value){
this.special= value;
    
}


    public string getGroup(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.group;
    
}


    public string getTax(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.tax;
    
}


    public string getShippingType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.shippingType;
    
}


    public string getShippingCost(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.shippingCost;
    
}


    public StreetAddress getShippingAddress(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.shippingAddress;
    
}


    public string getSpecial(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.special;
    
}


    public HashMap<any, any> toHashMap(){

    hashMap: HashMap<any, any> = super.toHashMap()!;;
    
hashMap!.put(ShippingMethodData.GROUP, this.group);
    
hashMap!.put(OrderHistoryData.TAX, this.tax);
    
hashMap!.put(ShippingMethodData.NAME, this.shippingType);
    
hashMap!.put(ShippingMethodData.COST, this.shippingCost);
    
hashMap!.put(OrderHistoryData.SHIPPEDDATE, this.shippedDate);
    
hashMap!.put(EntryData.getInstance()!.SPECIAL, this.special);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


};

            

