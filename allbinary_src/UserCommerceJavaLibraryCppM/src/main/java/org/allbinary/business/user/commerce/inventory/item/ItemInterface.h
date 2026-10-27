
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ItemInterface: public TableMappingInterface {

    public: virtual void setId(std::string itemId) = 0;

    public: virtual void setNumber(std::string number) = 0;

    public: virtual void setInBaskets(std::string value) = 0;

    public: virtual void setWeight(std::string value) = 0;

    public: virtual void setEnabled(std::string value) = 0;

    public: virtual void setNewOrUsed(std::string value) = 0;

    public: virtual void setSummary(std::string value) = 0;

    public: virtual void setDistributor(std::string value) = 0;

    public: virtual void setIdUsedByDistributor(std::string value) = 0;

    public: virtual void setProducedBy(std::string value) = 0;

    public: virtual void setProductionDate(std::string value) = 0;

    public: virtual void setStartProductionDate(std::string value) = 0;

    public: virtual void setDescription(std::string value) = 0;

    public: virtual void setKeywords(std::string value) = 0;

    public: virtual void setCategory(std::string value) = 0;

    public: virtual void setType(std::string value) = 0;

    public: virtual void setSmallImage(std::string value) = 0;

    public: virtual void setMediumImage(std::string value) = 0;

    public: virtual void setLargeImage(std::string value) = 0;

    public: virtual void setTimeEntered(std::string value) = 0;

    public: virtual void setLastModified(std::string value) = 0;

    public: virtual void setPrice(Money* value) = 0;

    public: virtual void setComment(std::string value) = 0;

    public: virtual void setCustoms(std::string value) = 0;

    public: virtual void setDownloads(std::string value) = 0;

    public: virtual void setGroups(std::string value) = 0;

    public: virtual void setOptions(std::string value) = 0;

    public: virtual void setPermissions(std::string value) = 0;

    public: virtual void setSpecials(std::string value) = 0;

    public: virtual std::string getId() = 0;

    public: virtual std::string getNumber() = 0;

    public: virtual std::string getInBaskets() = 0;

    public: virtual std::string getWeight() = 0;

    public: virtual std::string getEnabled() = 0;

    public: virtual std::string getNewOrUsed() = 0;

    public: virtual std::string getSummary() = 0;

    public: virtual std::string getDistributor() = 0;

    public: virtual std::string getIdUsedByDistributor() = 0;

    public: virtual std::string getProducedBy() = 0;

    public: virtual std::string getProductionDate() = 0;

    public: virtual std::string getStartProductionDate() = 0;

    public: virtual std::string getDescription() = 0;

    public: virtual std::string getKeywords() = 0;

    public: virtual std::string getCategory() = 0;

    public: virtual std::string getType() = 0;

    public: virtual std::string getSmallImage() = 0;

    public: virtual std::string getMediumImage() = 0;

    public: virtual std::string getLargeImage() = 0;

    public: virtual std::string getTimeEntered() = 0;

    public: virtual std::string getLastModified() = 0;

    public: virtual Money* getPrice() = 0;

    public: virtual std::string getComment() = 0;

    public: virtual std::string getCustoms() = 0;

    public: virtual std::string getDownloads() = 0;

    public: virtual std::string getGroups() = 0;

    public: virtual std::string getOptions() = 0;

    public: virtual std::string getPermissions() = 0;

    public: virtual std::string getSpecials() = 0;

    public: virtual Money* getTotal() = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_ITEMINTERFACE_H
