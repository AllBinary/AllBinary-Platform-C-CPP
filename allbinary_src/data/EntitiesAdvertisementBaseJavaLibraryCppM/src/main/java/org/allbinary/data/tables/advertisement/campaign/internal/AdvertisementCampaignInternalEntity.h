
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_CAMPAIGN_INTERNAL_ADVERTISEMENTCAMPAIGNINTERNALENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_CAMPAIGN_INTERNAL_ADVERTISEMENTCAMPAIGNINTERNALENTITY_H

            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaign.h>

      
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaignData.h>

      
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaignInterface.h>

      
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaigns.h>

      
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaignsInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/business/time/TimeData.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdvertisementCampaignInternalEntityInterface.h"

class AdvertisementCampaignInternalEntity: public AbSqlBean, public AdvertisementCampaignInternalEntityInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const std::string tableName = "adCampaignInternal";

public: AdvertisementCampaignInternalEntity();

    public: void delete_(std::string value);

    public: AdvertisementCampaignsInterface getCampaignsInStore(std::string storeName);

    public: AdvertisementCampaignInterface get(std::string storeName, std::string name);

    public: void update(HashMap<Object*, Object*> updatedValues);

    public: std::string createTableStatement();

    public: std::string createTable();

    public: std::string dropTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_CAMPAIGN_INTERNAL_ADVERTISEMENTCAMPAIGNINTERNALENTITY_H
