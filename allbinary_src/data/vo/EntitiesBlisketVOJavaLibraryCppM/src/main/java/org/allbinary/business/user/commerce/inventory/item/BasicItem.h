
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_BASICITEM_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_BASICITEM_H

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

public constructor (HashMap<any, any> itemHashMap);

public constructor ();

    public setId(string itemId);

    public setNumber(string number);

    public setInBaskets(string value);

    public setWeight(string value);

    public setNewOrUsed(string value);

    public setSummary(string value);

    public setDistributor(string value);

    public setIdUsedByDistributor(string value);

    public setProducedBy(string value);

    public setProductionDate(string value);

    public setStartProductionDate(string value);

    public setDescription(string value);

    public setKeywords(string value);

    public setCategory(string value);

    public setType(string value);

    public setSmallImage(string value);

    public setMediumImage(string value);

    public setLargeImage(string value);

    public setTimeEntered(string value);

    public setLastModified(string value);

    public setPrice(Money value);

    public setComment(string value);

    public setCustoms(string value);

    public setDownloads(string value);

    public setGroups(string value);

    public setOptions(string value);

    public setPermissions(string value);

    public setSpecials(string value);

    public setEnabled(string value);

    public string getId();

    public string getNumber();

    public string getInBaskets();

    public string getWeight();

    public string getNewOrUsed();

    public string getSummary();

    public string getDistributor();

    public string getIdUsedByDistributor();

    public string getProducedBy();

    public string getProductionDate();

    public string getStartProductionDate();

    public string getDescription();

    public string getKeywords();

    public string getCategory();

    public string getType();

    public string getSmallImage();

    public string getMediumImage();

    public string getLargeImage();

    public string getTimeEntered();

    public string getLastModified();

    public Money getPrice();

    public string getComment();

    public string getCustoms();

    public string getDownloads();

    public string getGroups();

    public string getOptions();

    public string getPermissions();

    public string getSpecials();

    public setDownloadable(bool downloadable);

    public bool isDownloadable();

    public string getEnabled();

    public Money getTotal();

    public HashMap<any, any> toHashMap();

    public Vector toVector();

                //@Throws(Exception.constructor)
            
    public any getKey();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_BASICITEM_H
