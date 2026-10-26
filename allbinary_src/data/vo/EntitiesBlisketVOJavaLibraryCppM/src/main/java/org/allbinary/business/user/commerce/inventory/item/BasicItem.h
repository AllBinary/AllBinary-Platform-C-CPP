
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

public: BasicItem(HashMap<Object*, Object*> itemHashMap);

public: BasicItem();

    public: void setId(std::string itemId);

    public: void setNumber(std::string number);

    public: void setInBaskets(std::string value);

    public: void setWeight(std::string value);

    public: void setNewOrUsed(std::string value);

    public: void setSummary(std::string value);

    public: void setDistributor(std::string value);

    public: void setIdUsedByDistributor(std::string value);

    public: void setProducedBy(std::string value);

    public: void setProductionDate(std::string value);

    public: void setStartProductionDate(std::string value);

    public: void setDescription(std::string value);

    public: void setKeywords(std::string value);

    public: void setCategory(std::string value);

    public: void setType(std::string value);

    public: void setSmallImage(std::string value);

    public: void setMediumImage(std::string value);

    public: void setLargeImage(std::string value);

    public: void setTimeEntered(std::string value);

    public: void setLastModified(std::string value);

    public: void setPrice(Money value);

    public: void setComment(std::string value);

    public: void setCustoms(std::string value);

    public: void setDownloads(std::string value);

    public: void setGroups(std::string value);

    public: void setOptions(std::string value);

    public: void setPermissions(std::string value);

    public: void setSpecials(std::string value);

    public: void setEnabled(std::string value);

    public: std::string getId();

    public: std::string getNumber();

    public: std::string getInBaskets();

    public: std::string getWeight();

    public: std::string getNewOrUsed();

    public: std::string getSummary();

    public: std::string getDistributor();

    public: std::string getIdUsedByDistributor();

    public: std::string getProducedBy();

    public: std::string getProductionDate();

    public: std::string getStartProductionDate();

    public: std::string getDescription();

    public: std::string getKeywords();

    public: std::string getCategory();

    public: std::string getType();

    public: std::string getSmallImage();

    public: std::string getMediumImage();

    public: std::string getLargeImage();

    public: std::string getTimeEntered();

    public: std::string getLastModified();

    public: Money getPrice();

    public: std::string getComment();

    public: std::string getCustoms();

    public: std::string getDownloads();

    public: std::string getGroups();

    public: std::string getOptions();

    public: std::string getPermissions();

    public: std::string getSpecials();

    public: void setDownloadable(bool downloadable);

    public: bool isDownloadable();

    public: std::string getEnabled();

    public: Money getTotal();

    public: HashMap<Object*, Object*> toHashMap();

    public: BasicArrayList toVector();

                //@Throws(Exception.constructor)
            
    public: Object* getKey();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_BASICITEM_H
