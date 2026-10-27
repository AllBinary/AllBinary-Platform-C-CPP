
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_ITEM_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_ITEM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/inventory/item/Item.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/business/user/commerce/inventory/item/BasicItem.h"
#include "org/allbinary/business/user/commerce/inventory/item/OrderItemInterface.h"


Item::Item(HashMap<Object*, Object*>* itemHashMap) : BasicItem(itemHashMap){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setData(itemHashMap);
    
}


Item::Item(){

    std::string EMPTY = StringUtil::getInstance()->EMPTY_STRING;;
    
this->group= EMPTY;
    
this->tax= EMPTY;
    
this->shippingType= EMPTY;
    
this->shippingCost= EMPTY;
    
this->shippingAddress= new StreetAddress();
    
}


    auto Item::setData(HashMap<Object*, Object*>* itemHashMap) -> void{
this->group= itemHashMap->get(ShippingMethodData::GROUP);
    
this->tax= itemHashMap->get(OrderHistoryData::TAX);
    
this->shippingType= itemHashMap->get(ShippingMethodData::NAME);
    
this->shippingCost= itemHashMap->get(ShippingMethodData::COST);
    
this->shippedDate= itemHashMap->get(OrderHistoryData::SHIPPEDDATE);
    
itemHashMap->put(StreetAddressData::NAME, itemHashMap->get(ShippingAddressData::NAME));
    
itemHashMap->put(StreetAddressData::STREET, itemHashMap->get(ShippingAddressData::STREET));
    
itemHashMap->put(StreetAddressData::CITY, itemHashMap->get(ShippingAddressData::CITY));
    
itemHashMap->put(StreetAddressData::STATE, itemHashMap->get(ShippingAddressData::STATE));
    
itemHashMap->put(StreetAddressData::CODE, itemHashMap->get(ShippingAddressData::CODE));
    
itemHashMap->put(StreetAddressData::COUNTRY, itemHashMap->get(ShippingAddressData::COUNTRY));
    
this->shippingAddress= new StreetAddress(itemHashMap);
    
}


    auto Item::setGroup(std::string value) -> void{
this->group= value;
    
}


    auto Item::setTax(std::string value) -> void{
this->tax= value;
    
}


    auto Item::setShippingType(std::string value) -> void{
this->shippingType= value;
    
}


    auto Item::setShippingCost(std::string value) -> void{
this->shippingCost= value;
    
}


    auto Item::setShippingAddress(StreetAddress* value) -> void{
this->shippingAddress= value;
    
}


    auto Item::setSpecial(std::string value) -> void{
this->special= value;
    
}


    auto Item::getGroup() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->group;
    
}


    auto Item::getTax() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tax;
    
}


    auto Item::getShippingType() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->shippingType;
    
}


    auto Item::getShippingCost() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->shippingCost;
    
}


    auto Item::getShippingAddress() -> StreetAddress*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->shippingAddress;
    
}


    auto Item::getSpecial() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->special;
    
}


    auto Item::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = BasicItem::toHashMap();;
    
hashMap->put(ShippingMethodData::GROUP, this->group);
    
hashMap->put(OrderHistoryData::TAX, this->tax);
    
hashMap->put(ShippingMethodData::NAME, this->shippingType);
    
hashMap->put(ShippingMethodData::COST, this->shippingCost);
    
hashMap->put(OrderHistoryData::SHIPPEDDATE, this->shippedDate);
    
hashMap->put(EntryData::getInstance()->SPECIAL, this->special);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_ITEM_CPP
