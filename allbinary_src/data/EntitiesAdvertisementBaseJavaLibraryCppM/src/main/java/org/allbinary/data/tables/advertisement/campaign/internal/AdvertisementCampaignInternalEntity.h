
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
class AdvertisementCampaign;
class AdvertisementCampaignData;
class AdvertisementCampaignInterface;
class AdvertisementCampaigns;
class AdvertisementCampaignsInterface;
class StoreFrontData;
class EntryData;
class UserDbInitInfo;
class TimeData;
class StdUtil;
class LogUtil;
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/advertisement/campaign/internal/AdvertisementCampaignInternalEntityInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdvertisementCampaignInternalEntity: public AbSqlBean, public virtual AdvertisementCampaignInternalEntityInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: const std::string tableName = "adCampaignInternal";

public: AdvertisementCampaignInternalEntity();

    public: void delete_(std::string value);

    public: AdvertisementCampaignsInterface* getCampaignsInStore(std::string storeName);

    public: AdvertisementCampaignInterface* get(std::string storeName, std::string name);

    public: void update(HashMap<Object*, Object*>* updatedValues);

    public: std::string createTableStatement();

    public: std::string createTable();

    public: std::string dropTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_CAMPAIGN_INTERNAL_ADVERTISEMENTCAMPAIGNINTERNALENTITY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_CAMPAIGN_INTERNAL_ADVERTISEMENTCAMPAIGNINTERNALENTITY_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_CAMPAIGN_INTERNAL_ADVERTISEMENTCAMPAIGNINTERNALENTITY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/campaign/AdvertisementCampaign.h>)
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaign.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/campaign/AdvertisementCampaignData.h>)
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaignData.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/campaign/AdvertisementCampaignInterface.h>)
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaignInterface.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/campaign/AdvertisementCampaigns.h>)
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaigns.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/campaign/AdvertisementCampaignsInterface.h>)
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaignsInterface.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/init/db/UserDbInitInfo.h>)
#include <org/allbinary/business/init/db/UserDbInitInfo.h>
#endif
#if __has_include(<org/allbinary/business/time/TimeData.h>)
#include <org/allbinary/business/time/TimeData.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/AbSqlBean.h>)
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include("org/allbinary/data/tables/advertisement/campaign/internal/AdvertisementCampaignInternalEntityInterface.h")
#include "org/allbinary/data/tables/advertisement/campaign/internal/AdvertisementCampaignInternalEntityInterface.h"
#endif

        #endif
    
