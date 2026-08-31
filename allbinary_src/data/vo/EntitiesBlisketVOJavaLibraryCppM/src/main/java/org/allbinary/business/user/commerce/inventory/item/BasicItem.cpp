
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../../java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/business/user/commerce/money/MoneyException.h>

      
#include <org/allbinary/data/generator/ProductIdGenerator.h>

      
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    itemId: string;

    number: string;

    inBaskets: string;

    weight: string;

    enabled: string;

    newOrUsed: string;

    summary: string;

    distributor: string;

    idUsedByDistributor: string;

    producedBy: string;

    productionDate: string;

    startProductionDate: string;

    description: string;

    keywords: string;

    category: string;

    type: string;

    smallImage: string;

    mediumImage: string;

    largeImage: string;

    price: Money;

    comment: string;

    customs: string;

    private: downloads: string;

    groups: string;

    options: string;

    permissions: string;

    specials: string;

    private: downloadable: bool= false;

    timeEntered: string;

    lastModified: string;

public constructor (HashMap<any, any> itemHashMap){

            super();
        
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.START, this, "Constructor(HashMap)");
    

                                    }
                                
this.itemId= itemHashMap!.get(BasicItemData.ID) as string;
    
this.number= itemHashMap!.get(BasicItemData.NUMBER) as string;
    
this.inBaskets= itemHashMap!.get(BasicItemData.INBASKETS) as string;
    
this.weight= itemHashMap!.get(BasicItemData.WEIGHT) as string;
    
this.enabled= itemHashMap!.get(EntryData.getInstance()!.ENABLE) as string;
    
this.newOrUsed= itemHashMap!.get(BasicItemData.NEWORUSED) as string;
    
this.summary= itemHashMap!.get(BasicItemData.SUMMARY) as string;
    
this.distributor= itemHashMap!.get(BasicItemData.DISTRIBUTOR) as string;
    
this.idUsedByDistributor= itemHashMap!.get(BasicItemData.IDUSEDBYDISTRIBUTOR) as string;
    
this.producedBy= itemHashMap!.get(BasicItemData.PRODUCEDBY) as string;
    
this.productionDate= itemHashMap!.get(BasicItemData.PRODUCTIONDATE) as string;
    
this.startProductionDate= itemHashMap!.get(BasicItemData.STARTPRODUCTIONDATE) as string;
    
this.description= itemHashMap!.get(BasicItemData.DESCRIPTION) as string;
    
this.keywords= itemHashMap!.get(BasicItemData.KEYWORDS) as string;
    
this.category= itemHashMap!.get(BasicItemData.CATEGORY) as string;
    
this.type= itemHashMap!.get(BasicItemData.TYPE) as string;
    
this.smallImage= itemHashMap!.get(BasicItemData.SMALLIMAGE) as string;
    
this.mediumImage= itemHashMap!.get(BasicItemData.MEDIUMIMAGE) as string;
    
this.largeImage= itemHashMap!.get(BasicItemData.LARGEIMAGE) as string;
    
this.timeEntered= itemHashMap!.get(EntryData.getInstance()!.TIMECREATED) as string;
    
this.lastModified= itemHashMap!.get(EntryData.getInstance()!.LASTMODIFIED) as string;
    
this.price= new Money(itemHashMap!.get(BasicItemData.PRICE) as string);
    
this.comment= itemHashMap!.get(BasicItemData.COMMENT) as string;
    
this.customs= itemHashMap!.get(BasicItemData.CUSTOMS) as string;
    
this.setDownloads(itemHashMap!.get(BasicItemData.DOWNLOADS) as string);
    
this.groups= itemHashMap!.get(BasicItemData.GROUPS) as string;
    
this.options= itemHashMap!.get(BasicItemData.OPTIONS) as string;
    
this.permissions= itemHashMap!.get(BasicItemData.PERMISSIONS) as string;
    
this.specials= itemHashMap!.get(BasicItemData.SPECIALS) as string;
    
}


public constructor (){

            super();
        
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    

                                    }
                                

    EMPTY: string = StringUtil.getInstance()!.EMPTY_STRING;;
    
this.itemId= new ProductIdGenerator().getNext();
    
this.number= CommonPhoneStrings.getInstance()!.ZERO;
    
this.inBaskets= EMPTY;
    
this.weight= EMPTY;
    
this.enabled= EMPTY;
    
this.newOrUsed= EMPTY;
    
this.summary= EMPTY;
    
this.distributor= EMPTY;
    
this.idUsedByDistributor= EMPTY;
    
this.producedBy= EMPTY;
    
this.productionDate= EMPTY;
    
this.startProductionDate= EMPTY;
    
this.description= EMPTY;
    
this.keywords= EMPTY;
    
this.category= EMPTY;
    
this.type= EMPTY;
    
this.smallImage= EMPTY;
    
this.mediumImage= EMPTY;
    
this.largeImage= EMPTY;
    
this.timeEntered= EMPTY;
    
this.lastModified= EMPTY;
    
this.price= new Money();
    
this.comment= EMPTY;
    
this.customs= EMPTY;
    
this.setDownloads(EMPTY);
    
this.groups= EMPTY;
    
this.options= EMPTY;
    
this.permissions= EMPTY;
    
this.specials= EMPTY;
    
}


    public setId(string itemId){
this.itemId= itemId;
    
}


    public setNumber(string number){
this.number= number;
    
}


    public setInBaskets(string value){
this.inBaskets= value;
    
}


    public setWeight(string value){
this.weight= value;
    
}


    public setNewOrUsed(string value){
this.newOrUsed= value;
    
}


    public setSummary(string value){
this.summary= value;
    
}


    public setDistributor(string value){
this.distributor= value;
    
}


    public setIdUsedByDistributor(string value){
this.idUsedByDistributor= value;
    
}


    public setProducedBy(string value){
this.producedBy= value;
    
}


    public setProductionDate(string value){
this.productionDate= value;
    
}


    public setStartProductionDate(string value){
this.startProductionDate= value;
    
}


    public setDescription(string value){
this.description= value;
    
}


    public setKeywords(string value){
this.keywords= value;
    
}


    public setCategory(string value){
this.category= value;
    
}


    public setType(string value){
this.type= value;
    
}


    public setSmallImage(string value){
this.smallImage= value;
    
}


    public setMediumImage(string value){
this.mediumImage= value;
    
}


    public setLargeImage(string value){
this.largeImage= value;
    
}


    public setTimeEntered(string value){
this.timeEntered= value;
    
}


    public setLastModified(string value){
this.lastModified= value;
    
}


    public setPrice(Money value){
this.price= value;
    
}


    public setComment(string value){
this.comment= value;
    
}


    public setCustoms(string value){
this.customs= value;
    
}


    public setDownloads(string value){
this.downloads= value;
    

                        if(!StringValidationUtil.getInstance()!.isEmpty(this.downloads))
                        
                                    {
                                    
    downloadInteger: Integer = Integer.valueOf(this.downloads)!;;
    

                        if(downloadInteger!.intValue() != 0)
                        
                                    {
                                    this.setDownloadable(true);
    

                                    }
                                

                                    }
                                
}


    public setGroups(string value){
this.groups= value;
    
}


    public setOptions(string value){
this.options= value;
    
}


    public setPermissions(string value){
this.permissions= value;
    
}


    public setSpecials(string value){
this.specials= value;
    
}


    public setEnabled(string value){
this.enabled= value;
    
}


    public string getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.itemId;
    
}


    public string getNumber(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.number;
    
}


    public string getInBaskets(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.inBaskets;
    
}


    public string getWeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.weight;
    
}


    public string getNewOrUsed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.newOrUsed;
    
}


    public string getSummary(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.summary;
    
}


    public string getDistributor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.distributor;
    
}


    public string getIdUsedByDistributor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.idUsedByDistributor;
    
}


    public string getProducedBy(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.producedBy;
    
}


    public string getProductionDate(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.productionDate;
    
}


    public string getStartProductionDate(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.startProductionDate;
    
}


    public string getDescription(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.description;
    
}


    public string getKeywords(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.keywords;
    
}


    public string getCategory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.category;
    
}


    public string getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.type;
    
}


    public string getSmallImage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.smallImage;
    
}


    public string getMediumImage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.mediumImage;
    
}


    public string getLargeImage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.largeImage;
    
}


    public string getTimeEntered(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.timeEntered;
    
}


    public string getLastModified(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.lastModified;
    
}


    public Money getPrice(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.price;
    
}


    public string getComment(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.comment;
    
}


    public string getCustoms(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.customs;
    
}


    public string getDownloads(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.downloads;
    
}


    public string getGroups(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.groups;
    
}


    public string getOptions(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.options;
    
}


    public string getPermissions(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.permissions;
    
}


    public string getSpecials(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.specials;
    
}


    public setDownloadable(bool downloadable){
this.downloadable= downloadable;
    
}


    public bool isDownloadable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.downloadable;
    
}


    public string getEnabled(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.enabled;
    
}


    public Money getTotal(){

    itemTotal: Money = new Money(this.price);;
    
itemTotal!.multiply(new Integer(this.number).intValue());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return itemTotal;
    
}


    public HashMap<any, any> toHashMap(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.START, this, "toHashMap");
    

                                    }
                                

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(BasicItemData.ID, this.itemId);
    
hashMap!.put(BasicItemData.NUMBER, this.number);
    
hashMap!.put(BasicItemData.INBASKETS, this.inBaskets);
    
hashMap!.put(BasicItemData.WEIGHT, this.weight);
    
hashMap!.put(EntryData.getInstance()!.ENABLE, this.enabled);
    
hashMap!.put(BasicItemData.NEWORUSED, this.newOrUsed);
    
hashMap!.put(BasicItemData.SUMMARY, this.summary);
    
hashMap!.put(BasicItemData.DISTRIBUTOR, this.distributor);
    
hashMap!.put(BasicItemData.IDUSEDBYDISTRIBUTOR, this.idUsedByDistributor);
    
hashMap!.put(BasicItemData.PRODUCEDBY, this.producedBy);
    
hashMap!.put(BasicItemData.PRODUCTIONDATE, this.productionDate);
    
hashMap!.put(BasicItemData.STARTPRODUCTIONDATE, this.startProductionDate);
    
hashMap!.put(BasicItemData.DESCRIPTION, this.description);
    
hashMap!.put(BasicItemData.KEYWORDS, this.keywords);
    
hashMap!.put(BasicItemData.CATEGORY, this.category);
    
hashMap!.put(BasicItemData.TYPE, this.type);
    
hashMap!.put(BasicItemData.SMALLIMAGE, this.smallImage);
    
hashMap!.put(BasicItemData.MEDIUMIMAGE, this.mediumImage);
    
hashMap!.put(BasicItemData.LARGEIMAGE, this.largeImage);
    

    calendar: Calendar = Calendar.getInstance()!;;
    

    time: string = new Long(calendar.getTimeInMillis()).toString()!;;
    
hashMap!.put(EntryData.getInstance()!.LASTMODIFIED, time);
    
hashMap!.put(BasicItemData.PRICE, this.price.toString());
    
hashMap!.put(BasicItemData.COMMENT, this.comment);
    
hashMap!.put(BasicItemData.CUSTOMS, this.customs);
    
hashMap!.put(BasicItemData.DOWNLOADS, this.getDownloads());
    
hashMap!.put(BasicItemData.GROUPS, this.groups);
    
hashMap!.put(BasicItemData.OPTIONS, this.options);
    
hashMap!.put(BasicItemData.PERMISSIONS, this.permissions);
    
hashMap!.put(BasicItemData.SPECIALS, this.specials);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


    public Vector toVector(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.START, this, "toVector");
    

                                    }
                                

    values: Vector = new Vector();;
    
values.add(this.itemId);
    
values.add(this.number);
    
values.add(this.inBaskets);
    
values.add(this.weight);
    
values.add(this.enabled);
    
values.add(this.newOrUsed);
    
values.add(this.summary);
    
values.add(this.distributor);
    
values.add(this.idUsedByDistributor);
    
values.add(this.producedBy);
    
values.add(this.productionDate);
    
values.add(this.startProductionDate);
    
values.add(this.description);
    
values.add(this.keywords);
    
values.add(this.category);
    
values.add(this.type);
    
values.add(this.getSmallImage());
    
values.add(this.getMediumImage());
    
values.add(this.getLargeImage());
    

    calendar: Calendar = Calendar.getInstance()!;;
    

    time: string = new Long(calendar.getTimeInMillis()).toString()!;;
    
values.add(time);
    
values.add(time);
    
values.add(this.price.toString());
    
values.add(this.comment);
    
values.add(this.customs);
    
values.add(this.getDownloads());
    
values.add(this.groups);
    
values.add(this.options);
    
values.add(this.permissions);
    
values.add(this.specials);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return values;
    
}


                //@Throws(Exception.constructor)
            
    public any getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getId();
    
}


};

            

