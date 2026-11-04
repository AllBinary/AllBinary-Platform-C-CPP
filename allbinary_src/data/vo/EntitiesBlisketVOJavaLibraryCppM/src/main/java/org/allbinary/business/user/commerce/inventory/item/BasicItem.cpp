
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_BASICITEM_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_BASICITEM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/inventory/item/BasicItem.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/business/user/commerce/money/MoneyException.h>

      
#include <org/allbinary/data/generator/ProductIdGenerator.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/inventory/item/ItemInterface.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"


BasicItem::BasicItem(HashMap<Object*, Object*>* itemHashMap) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), basicItemData(BasicItemData::getInstance()){

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "Constructor(HashMap)");
    

                                    }
                                
this->itemId= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->ID));
    
this->number= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->NUMBER));
    
this->inBaskets= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->INBASKETS));
    
this->weight= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->WEIGHT));
    
this->enabled= JavaBoxes::unbox<std::string>(itemHashMap->get(EntryData::getInstance()->ENABLE));
    
this->newOrUsed= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->NEWORUSED));
    
this->summary= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->SUMMARY));
    
this->distributor= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->DISTRIBUTOR));
    
this->idUsedByDistributor= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->IDUSEDBYDISTRIBUTOR));
    
this->producedBy= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->PRODUCEDBY));
    
this->productionDate= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->PRODUCTIONDATE));
    
this->startProductionDate= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->STARTPRODUCTIONDATE));
    
this->description= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->DESCRIPTION));
    
this->keywords= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->KEYWORDS));
    
this->category= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->CATEGORY));
    
this->type= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->TYPE));
    
this->smallImage= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->SMALLIMAGE));
    
this->mediumImage= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->MEDIUMIMAGE));
    
this->largeImage= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->LARGEIMAGE));
    
this->timeEntered= JavaBoxes::unbox<std::string>(itemHashMap->get(EntryData::getInstance()->TIMECREATED));
    
this->lastModified= JavaBoxes::unbox<std::string>(itemHashMap->get(EntryData::getInstance()->LASTMODIFIED));
    
this->price= new Money(JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->PRICE)));
    
this->comment= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->COMMENT));
    
this->customs= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->CUSTOMS));
    
this->setDownloads(JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->DOWNLOADS)));
    
this->groups= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->GROUPS));
    
this->options= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->OPTIONS));
    
this->permissions= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->PERMISSIONS));
    
this->specials= JavaBoxes::unbox<std::string>(itemHashMap->get(basicItemData->SPECIALS));
    
}


BasicItem::BasicItem() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), basicItemData(BasicItemData::getInstance()){

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                

    std::string EMPTY = StringUtil::getInstance()->EMPTY_STRING;;
    
this->itemId= (new ProductIdGenerator())->getNext();
    
this->number= CommonPhoneStrings::getInstance()->ZERO;
    
this->inBaskets= EMPTY;
    
this->weight= EMPTY;
    
this->enabled= EMPTY;
    
this->newOrUsed= EMPTY;
    
this->summary= EMPTY;
    
this->distributor= EMPTY;
    
this->idUsedByDistributor= EMPTY;
    
this->producedBy= EMPTY;
    
this->productionDate= EMPTY;
    
this->startProductionDate= EMPTY;
    
this->description= EMPTY;
    
this->keywords= EMPTY;
    
this->category= EMPTY;
    
this->type= EMPTY;
    
this->smallImage= EMPTY;
    
this->mediumImage= EMPTY;
    
this->largeImage= EMPTY;
    
this->timeEntered= EMPTY;
    
this->lastModified= EMPTY;
    
this->price= new Money();
    
this->comment= EMPTY;
    
this->customs= EMPTY;
    
this->setDownloads(EMPTY);
    
this->groups= EMPTY;
    
this->options= EMPTY;
    
this->permissions= EMPTY;
    
this->specials= EMPTY;
    
}


    auto BasicItem::setId(std::string itemId) -> void{
this->itemId= itemId;
    
}


    auto BasicItem::setNumber(std::string number) -> void{
this->number= number;
    
}


    auto BasicItem::setInBaskets(std::string value) -> void{
this->inBaskets= value;
    
}


    auto BasicItem::setWeight(std::string value) -> void{
this->weight= value;
    
}


    auto BasicItem::setNewOrUsed(std::string value) -> void{
this->newOrUsed= value;
    
}


    auto BasicItem::setSummary(std::string value) -> void{
this->summary= value;
    
}


    auto BasicItem::setDistributor(std::string value) -> void{
this->distributor= value;
    
}


    auto BasicItem::setIdUsedByDistributor(std::string value) -> void{
this->idUsedByDistributor= value;
    
}


    auto BasicItem::setProducedBy(std::string value) -> void{
this->producedBy= value;
    
}


    auto BasicItem::setProductionDate(std::string value) -> void{
this->productionDate= value;
    
}


    auto BasicItem::setStartProductionDate(std::string value) -> void{
this->startProductionDate= value;
    
}


    auto BasicItem::setDescription(std::string value) -> void{
this->description= value;
    
}


    auto BasicItem::setKeywords(std::string value) -> void{
this->keywords= value;
    
}


    auto BasicItem::setCategory(std::string value) -> void{
this->category= value;
    
}


    auto BasicItem::setType(std::string value) -> void{
this->type= value;
    
}


    auto BasicItem::setSmallImage(std::string value) -> void{
this->smallImage= value;
    
}


    auto BasicItem::setMediumImage(std::string value) -> void{
this->mediumImage= value;
    
}


    auto BasicItem::setLargeImage(std::string value) -> void{
this->largeImage= value;
    
}


    auto BasicItem::setTimeEntered(std::string value) -> void{
this->timeEntered= value;
    
}


    auto BasicItem::setLastModified(std::string value) -> void{
this->lastModified= value;
    
}


    auto BasicItem::setPrice(Money* value) -> void{
this->price= value;
    
}


    auto BasicItem::setComment(std::string value) -> void{
this->comment= value;
    
}


    auto BasicItem::setCustoms(std::string value) -> void{
this->customs= value;
    
}


    auto BasicItem::setDownloads(std::string value) -> void{
this->downloads= value;
    

                        if(!StringValidationUtil::getInstance()->isEmpty(this->downloads))
                        
                                    {
                                    
    int32_t downloadInteger = Integer.valueOf(this->downloads);;
    

                        if(downloadInteger != 0)
                        
                                    {
                                    this->setDownloadable(true);
    

                                    }
                                

                                    }
                                
}


    auto BasicItem::setGroups(std::string value) -> void{
this->groups= value;
    
}


    auto BasicItem::setOptions(std::string value) -> void{
this->options= value;
    
}


    auto BasicItem::setPermissions(std::string value) -> void{
this->permissions= value;
    
}


    auto BasicItem::setSpecials(std::string value) -> void{
this->specials= value;
    
}


    auto BasicItem::setEnabled(std::string value) -> void{
this->enabled= value;
    
}


    auto BasicItem::getId() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->itemId;
    
}


    auto BasicItem::getNumber() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->number;
    
}


    auto BasicItem::getInBaskets() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->inBaskets;
    
}


    auto BasicItem::getWeight() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->weight;
    
}


    auto BasicItem::getNewOrUsed() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->newOrUsed;
    
}


    auto BasicItem::getSummary() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->summary;
    
}


    auto BasicItem::getDistributor() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->distributor;
    
}


    auto BasicItem::getIdUsedByDistributor() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->idUsedByDistributor;
    
}


    auto BasicItem::getProducedBy() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->producedBy;
    
}


    auto BasicItem::getProductionDate() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->productionDate;
    
}


    auto BasicItem::getStartProductionDate() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->startProductionDate;
    
}


    auto BasicItem::getDescription() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->description;
    
}


    auto BasicItem::getKeywords() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->keywords;
    
}


    auto BasicItem::getCategory() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->category;
    
}


    auto BasicItem::getType() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->type;
    
}


    auto BasicItem::getSmallImage() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->smallImage;
    
}


    auto BasicItem::getMediumImage() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->mediumImage;
    
}


    auto BasicItem::getLargeImage() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->largeImage;
    
}


    auto BasicItem::getTimeEntered() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->timeEntered;
    
}


    auto BasicItem::getLastModified() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->lastModified;
    
}


    auto BasicItem::getPrice() -> Money*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->price;
    
}


    auto BasicItem::getComment() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->comment;
    
}


    auto BasicItem::getCustoms() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->customs;
    
}


    auto BasicItem::getDownloads() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->downloads;
    
}


    auto BasicItem::getGroups() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->groups;
    
}


    auto BasicItem::getOptions() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->options;
    
}


    auto BasicItem::getPermissions() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->permissions;
    
}


    auto BasicItem::getSpecials() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->specials;
    
}


    auto BasicItem::setDownloadable(bool downloadable) -> void{
this->downloadable= downloadable;
    
}


    auto BasicItem::isDownloadable() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->downloadable;
    
}


    auto BasicItem::getEnabled() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->enabled;
    
}


    auto BasicItem::getTotal() -> Money*{

    Money* itemTotal = new Money(this->price);;
    
itemTotal->multiply((int32_t(this->number)));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return itemTotal;
    
}


    auto BasicItem::toHashMap() -> HashMap<Object*, Object*>*{

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "toHashMap");
    

                                    }
                                

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(basicItemData->ID, this->itemId);
    
hashMap->put(basicItemData->NUMBER, this->number);
    
hashMap->put(basicItemData->INBASKETS, this->inBaskets);
    
hashMap->put(basicItemData->WEIGHT, this->weight);
    
hashMap->put(EntryData::getInstance()->ENABLE, this->enabled);
    
hashMap->put(basicItemData->NEWORUSED, this->newOrUsed);
    
hashMap->put(basicItemData->SUMMARY, this->summary);
    
hashMap->put(basicItemData->DISTRIBUTOR, this->distributor);
    
hashMap->put(basicItemData->IDUSEDBYDISTRIBUTOR, this->idUsedByDistributor);
    
hashMap->put(basicItemData->PRODUCEDBY, this->producedBy);
    
hashMap->put(basicItemData->PRODUCTIONDATE, this->productionDate);
    
hashMap->put(basicItemData->STARTPRODUCTIONDATE, this->startProductionDate);
    
hashMap->put(basicItemData->DESCRIPTION, this->description);
    
hashMap->put(basicItemData->KEYWORDS, this->keywords);
    
hashMap->put(basicItemData->CATEGORY, this->category);
    
hashMap->put(basicItemData->TYPE, this->type);
    
hashMap->put(basicItemData->SMALLIMAGE, this->smallImage);
    
hashMap->put(basicItemData->MEDIUMIMAGE, this->mediumImage);
    
hashMap->put(basicItemData->LARGEIMAGE, this->largeImage);
    

    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = (int64_t(calendar->getTimeInMillis())).toString();;
    
hashMap->put(EntryData::getInstance()->LASTMODIFIED, time);
    
hashMap->put(basicItemData->PRICE, this->price->toString());
    
hashMap->put(basicItemData->COMMENT, this->comment);
    
hashMap->put(basicItemData->CUSTOMS, this->customs);
    
hashMap->put(basicItemData->DOWNLOADS, this->getDownloads());
    
hashMap->put(basicItemData->GROUPS, this->groups);
    
hashMap->put(basicItemData->OPTIONS, this->options);
    
hashMap->put(basicItemData->PERMISSIONS, this->permissions);
    
hashMap->put(basicItemData->SPECIALS, this->specials);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}


    auto BasicItem::toVector() -> BasicArrayList*{

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "toVector");
    

                                    }
                                

    BasicArrayList* values = new BasicArrayListD();;
    
values->add(this->itemId);
    
values->add(this->number);
    
values->add(this->inBaskets);
    
values->add(this->weight);
    
values->add(this->enabled);
    
values->add(this->newOrUsed);
    
values->add(this->summary);
    
values->add(this->distributor);
    
values->add(this->idUsedByDistributor);
    
values->add(this->producedBy);
    
values->add(this->productionDate);
    
values->add(this->startProductionDate);
    
values->add(this->description);
    
values->add(this->keywords);
    
values->add(this->category);
    
values->add(this->type);
    
values->add(this->getSmallImage());
    
values->add(this->getMediumImage());
    
values->add(this->getLargeImage());
    

    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = (int64_t(calendar->getTimeInMillis())).toString();;
    
values->add(time);
    
values->add(time);
    
values->add(this->price->toString());
    
values->add(this->comment);
    
values->add(this->customs);
    
values->add(this->getDownloads());
    
values->add(this->groups);
    
values->add(this->options);
    
values->add(this->permissions);
    
values->add(this->specials);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return values;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicItem::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(this->getId());
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_BASICITEM_CPP
