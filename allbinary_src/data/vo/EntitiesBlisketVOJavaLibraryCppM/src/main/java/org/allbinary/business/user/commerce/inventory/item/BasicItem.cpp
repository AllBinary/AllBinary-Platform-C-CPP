
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ItemInterface.h"
#include "BasicItemData.h"

class BasicItem
            : public Object
        : public ItemInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const BasicItemData basicItemData = BasicItemData::getInstance();

    protected: std::string itemId;

    protected: std::string number;

    protected: std::string inBaskets;

    protected: std::string weight;

    protected: std::string enabled;

    protected: std::string newOrUsed;

    protected: std::string summary;

    protected: std::string distributor;

    protected: std::string idUsedByDistributor;

    protected: std::string producedBy;

    protected: std::string productionDate;

    protected: std::string startProductionDate;

    protected: std::string description;

    protected: std::string keywords;

    protected: std::string category;

    protected: std::string type;

    protected: std::string smallImage;

    protected: std::string mediumImage;

    protected: std::string largeImage;

    protected: Money price;

    protected: std::string comment;

    protected: std::string customs;

    private: std::string downloads;

    protected: std::string groups;

    protected: std::string options;

    protected: std::string permissions;

    protected: std::string specials;

    private: bool downloadable= false;

    protected: std::string timeEntered;

    protected: std::string lastModified;

public: BasicItem(HashMap<Object*, Object*> itemHashMap){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, "Constructor(HashMap)");
    

                                    }
                                
this->itemId= itemHashMap.get(basicItemData.ID);
    
this->number= itemHashMap.get(basicItemData.NUMBER);
    
this->inBaskets= itemHashMap.get(basicItemData.INBASKETS);
    
this->weight= itemHashMap.get(basicItemData.WEIGHT);
    
this->enabled= itemHashMap.get(EntryData::getInstance().ENABLE);
    
this->newOrUsed= itemHashMap.get(basicItemData.NEWORUSED);
    
this->summary= itemHashMap.get(basicItemData.SUMMARY);
    
this->distributor= itemHashMap.get(basicItemData.DISTRIBUTOR);
    
this->idUsedByDistributor= itemHashMap.get(basicItemData.IDUSEDBYDISTRIBUTOR);
    
this->producedBy= itemHashMap.get(basicItemData.PRODUCEDBY);
    
this->productionDate= itemHashMap.get(basicItemData.PRODUCTIONDATE);
    
this->startProductionDate= itemHashMap.get(basicItemData.STARTPRODUCTIONDATE);
    
this->description= itemHashMap.get(basicItemData.DESCRIPTION);
    
this->keywords= itemHashMap.get(basicItemData.KEYWORDS);
    
this->category= itemHashMap.get(basicItemData.CATEGORY);
    
this->type= itemHashMap.get(basicItemData.TYPE);
    
this->smallImage= itemHashMap.get(basicItemData.SMALLIMAGE);
    
this->mediumImage= itemHashMap.get(basicItemData.MEDIUMIMAGE);
    
this->largeImage= itemHashMap.get(basicItemData.LARGEIMAGE);
    
this->timeEntered= itemHashMap.get(EntryData::getInstance().TIMECREATED);
    
this->lastModified= itemHashMap.get(EntryData::getInstance().LASTMODIFIED);
    
this->price= Money(itemHashMap.get(basicItemData.PRICE));
    
this->comment= itemHashMap.get(basicItemData.COMMENT);
    
this->customs= itemHashMap.get(basicItemData.CUSTOMS);
    
this->setDownloads(itemHashMap.get(basicItemData.DOWNLOADS));
    
this->groups= itemHashMap.get(basicItemData.GROUPS);
    
this->options= itemHashMap.get(basicItemData.OPTIONS);
    
this->permissions= itemHashMap.get(basicItemData.PERMISSIONS);
    
this->specials= itemHashMap.get(basicItemData.SPECIALS);
    
}


public: BasicItem(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                

    std::string EMPTY = StringUtil::getInstance().EMPTY_STRING;;
    
this->itemId= ProductIdGenerator().getNext();
    
this->number= CommonPhoneStrings::getInstance().ZERO;
    
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
    
this->price= Money();
    
this->comment= EMPTY;
    
this->customs= EMPTY;
    
this->setDownloads(EMPTY);
    
this->groups= EMPTY;
    
this->options= EMPTY;
    
this->permissions= EMPTY;
    
this->specials= EMPTY;
    
}


    public: void setId(std::string itemId){
this->itemId= itemId;
    
}


    public: void setNumber(std::string number){
this->number= number;
    
}


    public: void setInBaskets(std::string value){
this->inBaskets= value;
    
}


    public: void setWeight(std::string value){
this->weight= value;
    
}


    public: void setNewOrUsed(std::string value){
this->newOrUsed= value;
    
}


    public: void setSummary(std::string value){
this->summary= value;
    
}


    public: void setDistributor(std::string value){
this->distributor= value;
    
}


    public: void setIdUsedByDistributor(std::string value){
this->idUsedByDistributor= value;
    
}


    public: void setProducedBy(std::string value){
this->producedBy= value;
    
}


    public: void setProductionDate(std::string value){
this->productionDate= value;
    
}


    public: void setStartProductionDate(std::string value){
this->startProductionDate= value;
    
}


    public: void setDescription(std::string value){
this->description= value;
    
}


    public: void setKeywords(std::string value){
this->keywords= value;
    
}


    public: void setCategory(std::string value){
this->category= value;
    
}


    public: void setType(std::string value){
this->type= value;
    
}


    public: void setSmallImage(std::string value){
this->smallImage= value;
    
}


    public: void setMediumImage(std::string value){
this->mediumImage= value;
    
}


    public: void setLargeImage(std::string value){
this->largeImage= value;
    
}


    public: void setTimeEntered(std::string value){
this->timeEntered= value;
    
}


    public: void setLastModified(std::string value){
this->lastModified= value;
    
}


    public: void setPrice(Money value){
this->price= value;
    
}


    public: void setComment(std::string value){
this->comment= value;
    
}


    public: void setCustoms(std::string value){
this->customs= value;
    
}


    public: void setDownloads(std::string value){
this->downloads= value;
    

                        if(!StringValidationUtil::getInstance().isEmpty(this->downloads))
                        
                                    {
                                    
    Integer downloadInteger = Integer::valueOf(this->downloads);;
    

                        if(downloadInteger.intValue() != 0)
                        
                                    {
                                    this->setDownloadable(true);
    

                                    }
                                

                                    }
                                
}


    public: void setGroups(std::string value){
this->groups= value;
    
}


    public: void setOptions(std::string value){
this->options= value;
    
}


    public: void setPermissions(std::string value){
this->permissions= value;
    
}


    public: void setSpecials(std::string value){
this->specials= value;
    
}


    public: void setEnabled(std::string value){
this->enabled= value;
    
}


    public: std::string getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->itemId;
    
}


    public: std::string getNumber(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->number;
    
}


    public: std::string getInBaskets(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->inBaskets;
    
}


    public: std::string getWeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->weight;
    
}


    public: std::string getNewOrUsed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->newOrUsed;
    
}


    public: std::string getSummary(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->summary;
    
}


    public: std::string getDistributor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->distributor;
    
}


    public: std::string getIdUsedByDistributor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->idUsedByDistributor;
    
}


    public: std::string getProducedBy(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->producedBy;
    
}


    public: std::string getProductionDate(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->productionDate;
    
}


    public: std::string getStartProductionDate(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->startProductionDate;
    
}


    public: std::string getDescription(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->description;
    
}


    public: std::string getKeywords(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keywords;
    
}


    public: std::string getCategory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->category;
    
}


    public: std::string getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->type;
    
}


    public: std::string getSmallImage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->smallImage;
    
}


    public: std::string getMediumImage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->mediumImage;
    
}


    public: std::string getLargeImage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->largeImage;
    
}


    public: std::string getTimeEntered(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeEntered;
    
}


    public: std::string getLastModified(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastModified;
    
}


    public: Money getPrice(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->price;
    
}


    public: std::string getComment(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->comment;
    
}


    public: std::string getCustoms(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->customs;
    
}


    public: std::string getDownloads(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->downloads;
    
}


    public: std::string getGroups(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->groups;
    
}


    public: std::string getOptions(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->options;
    
}


    public: std::string getPermissions(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->permissions;
    
}


    public: std::string getSpecials(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->specials;
    
}


    public: void setDownloadable(bool downloadable){
this->downloadable= downloadable;
    
}


    public: bool isDownloadable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->downloadable;
    
}


    public: std::string getEnabled(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->enabled;
    
}


    public: Money getTotal(){

    Money itemTotal = Money(this->price);;
    
itemTotal.multiply(Integer(this->number).intValue());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return itemTotal;
    
}


    public: HashMap<Object*, Object*> toHashMap(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, "toHashMap");
    

                                    }
                                

    HashMap<Object*, Object*> hashMap = StdUtil::getInstance().createHashMap();;
    
hashMap.put(basicItemData.ID, this->itemId);
    
hashMap.put(basicItemData.NUMBER, this->number);
    
hashMap.put(basicItemData.INBASKETS, this->inBaskets);
    
hashMap.put(basicItemData.WEIGHT, this->weight);
    
hashMap.put(EntryData::getInstance().ENABLE, this->enabled);
    
hashMap.put(basicItemData.NEWORUSED, this->newOrUsed);
    
hashMap.put(basicItemData.SUMMARY, this->summary);
    
hashMap.put(basicItemData.DISTRIBUTOR, this->distributor);
    
hashMap.put(basicItemData.IDUSEDBYDISTRIBUTOR, this->idUsedByDistributor);
    
hashMap.put(basicItemData.PRODUCEDBY, this->producedBy);
    
hashMap.put(basicItemData.PRODUCTIONDATE, this->productionDate);
    
hashMap.put(basicItemData.STARTPRODUCTIONDATE, this->startProductionDate);
    
hashMap.put(basicItemData.DESCRIPTION, this->description);
    
hashMap.put(basicItemData.KEYWORDS, this->keywords);
    
hashMap.put(basicItemData.CATEGORY, this->category);
    
hashMap.put(basicItemData.TYPE, this->type);
    
hashMap.put(basicItemData.SMALLIMAGE, this->smallImage);
    
hashMap.put(basicItemData.MEDIUMIMAGE, this->mediumImage);
    
hashMap.put(basicItemData.LARGEIMAGE, this->largeImage);
    

    Calendar calendar = Calendar::getInstance();;
    

    std::string time = Long(calendar.getTimeInMillis()).toString();;
    
hashMap.put(EntryData::getInstance().LASTMODIFIED, time);
    
hashMap.put(basicItemData.PRICE, this->price.toString());
    
hashMap.put(basicItemData.COMMENT, this->comment);
    
hashMap.put(basicItemData.CUSTOMS, this->customs);
    
hashMap.put(basicItemData.DOWNLOADS, this->getDownloads());
    
hashMap.put(basicItemData.GROUPS, this->groups);
    
hashMap.put(basicItemData.OPTIONS, this->options);
    
hashMap.put(basicItemData.PERMISSIONS, this->permissions);
    
hashMap.put(basicItemData.SPECIALS, this->specials);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


    public: BasicArrayList toVector(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, "toVector");
    

                                    }
                                

    BasicArrayList values = BasicArrayListD();;
    
values.add(this->itemId);
    
values.add(this->number);
    
values.add(this->inBaskets);
    
values.add(this->weight);
    
values.add(this->enabled);
    
values.add(this->newOrUsed);
    
values.add(this->summary);
    
values.add(this->distributor);
    
values.add(this->idUsedByDistributor);
    
values.add(this->producedBy);
    
values.add(this->productionDate);
    
values.add(this->startProductionDate);
    
values.add(this->description);
    
values.add(this->keywords);
    
values.add(this->category);
    
values.add(this->type);
    
values.add(this->getSmallImage());
    
values.add(this->getMediumImage());
    
values.add(this->getLargeImage());
    

    Calendar calendar = Calendar::getInstance();;
    

    std::string time = Long(calendar.getTimeInMillis()).toString();;
    
values.add(time);
    
values.add(time);
    
values.add(this->price.toString());
    
values.add(this->comment);
    
values.add(this->customs);
    
values.add(this->getDownloads());
    
values.add(this->groups);
    
values.add(this->options);
    
values.add(this->permissions);
    
values.add(this->specials);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return values;
    
}


                //@Throws(Exception.constructor)
            
    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getId();
    
}


};

            

