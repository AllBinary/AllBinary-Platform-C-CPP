
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_AREAS_ADVERTISEMENTAREASENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_AREAS_ADVERTISEMENTAREASENTITY_H

            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/advertisement/area/AdvertisementArea.h>

      
#include <org/allbinary/business/advertisement/area/AdvertisementAreaData.h>

      
#include <org/allbinary/business/advertisement/area/AdvertisementAreaInterface.h>

      
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaignData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdvertisementAreasEntityInterface.h"

class AdvertisementAreasEntity: public AbSqlBean: public AdvertisementAreasEntityInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const tableName: string = "advertisements";

public constructor ();

    public delete(string value);

                //@Throws(Exception.constructor)
            
    public Vector get(string storeName);

                //@Throws(Exception.constructor)
            
    public AdvertisementAreaInterface get(string storeName, string advertisementAreaName);

    public string createTableStatement();

    public string createTable();

    public update(HashMap<any, any> updatedValues);

    public string dropTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_AREAS_ADVERTISEMENTAREASENTITY_H
