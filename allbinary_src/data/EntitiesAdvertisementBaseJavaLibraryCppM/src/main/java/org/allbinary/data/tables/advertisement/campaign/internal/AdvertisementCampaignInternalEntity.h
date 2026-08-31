
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

            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaign.h>

      
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaignData.h>

      
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaignInterface.h>

      
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaigns.h>

      
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaignsInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/business/time/TimeData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdvertisementCampaignInternalEntityInterface.h"

class AdvertisementCampaignInternalEntity: public AbSqlBean: public AdvertisementCampaignInternalEntityInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const tableName: string = "adCampaignInternal";

public constructor ();

    public delete(string value);

    public AdvertisementCampaignsInterface getCampaignsInStore(string storeName);

    public AdvertisementCampaignInterface get(string storeName, string name);

    public update(HashMap<any, any> updatedValues);

    public string createTableStatement();

    public string createTable();

    public string dropTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_CAMPAIGN_INTERNAL_ADVERTISEMENTCAMPAIGNINTERNALENTITY_H
