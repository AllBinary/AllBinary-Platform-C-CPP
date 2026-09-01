
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

    void setId(std::string itemId);

    void setNumber(std::string number);

    void setInBaskets(std::string value);

    void setWeight(std::string value);

    void setEnabled(std::string value);

    void setNewOrUsed(std::string value);

    void setSummary(std::string value);

    void setDistributor(std::string value);

    void setIdUsedByDistributor(std::string value);

    void setProducedBy(std::string value);

    void setProductionDate(std::string value);

    void setStartProductionDate(std::string value);

    void setDescription(std::string value);

    void setKeywords(std::string value);

    void setCategory(std::string value);

    void setType(std::string value);

    void setSmallImage(std::string value);

    void setMediumImage(std::string value);

    void setLargeImage(std::string value);

    void setTimeEntered(std::string value);

    void setLastModified(std::string value);

    void setPrice(Money value);

    void setComment(std::string value);

    void setCustoms(std::string value);

    void setDownloads(std::string value);

    void setGroups(std::string value);

    void setOptions(std::string value);

    void setPermissions(std::string value);

    void setSpecials(std::string value);

    std::string getId();

    std::string getNumber();

    std::string getInBaskets();

    std::string getWeight();

    std::string getEnabled();

    std::string getNewOrUsed();

    std::string getSummary();

    std::string getDistributor();

    std::string getIdUsedByDistributor();

    std::string getProducedBy();

    std::string getProductionDate();

    std::string getStartProductionDate();

    std::string getDescription();

    std::string getKeywords();

    std::string getCategory();

    std::string getType();

    std::string getSmallImage();

    std::string getMediumImage();

    std::string getLargeImage();

    std::string getTimeEntered();

    std::string getLastModified();

    Money getPrice();

    std::string getComment();

    std::string getCustoms();

    std::string getDownloads();

    std::string getGroups();

    std::string getOptions();

    std::string getPermissions();

    std::string getSpecials();

    Money getTotal();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_ITEMINTERFACE_H
