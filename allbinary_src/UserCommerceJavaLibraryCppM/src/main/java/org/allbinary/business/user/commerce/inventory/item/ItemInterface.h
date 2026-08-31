
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_ITEMINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_ITEMINTERFACE_H

#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ItemInterface: public TableMappingInterface {
        

    setId(string itemId);

    setNumber(string number);

    setInBaskets(string value);

    setWeight(string value);

    setEnabled(string value);

    setNewOrUsed(string value);

    setSummary(string value);

    setDistributor(string value);

    setIdUsedByDistributor(string value);

    setProducedBy(string value);

    setProductionDate(string value);

    setStartProductionDate(string value);

    setDescription(string value);

    setKeywords(string value);

    setCategory(string value);

    setType(string value);

    setSmallImage(string value);

    setMediumImage(string value);

    setLargeImage(string value);

    setTimeEntered(string value);

    setLastModified(string value);

    setPrice(Money value);

    setComment(string value);

    setCustoms(string value);

    setDownloads(string value);

    setGroups(string value);

    setOptions(string value);

    setPermissions(string value);

    setSpecials(string value);

    string getId();

    string getNumber();

    string getInBaskets();

    string getWeight();

    string getEnabled();

    string getNewOrUsed();

    string getSummary();

    string getDistributor();

    string getIdUsedByDistributor();

    string getProducedBy();

    string getProductionDate();

    string getStartProductionDate();

    string getDescription();

    string getKeywords();

    string getCategory();

    string getType();

    string getSmallImage();

    string getMediumImage();

    string getLargeImage();

    string getTimeEntered();

    string getLastModified();

    Money getPrice();

    string getComment();

    string getCustoms();

    string getDownloads();

    string getGroups();

    string getOptions();

    string getPermissions();

    string getSpecials();

    Money getTotal();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_ITEMINTERFACE_H
