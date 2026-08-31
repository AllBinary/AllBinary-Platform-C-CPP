
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_ADVERTISEMENTSENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_ADVERTISEMENTSENTITY_H

            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/DynamicObjectData.h>

      
#include <org/allbinary/business/advertisement/AdvertisementData.h>

      
#include <org/allbinary/business/advertisement/AdvertisementInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdvertisementsEntityInterface.h"

class AdvertisementsEntity: public AbSqlBean: public AdvertisementsEntityInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const tableName: string = "advertisements";

    private: const _INDEX: string = "_index";

public constructor ();

    public delete(string value);

    public Vector get(string storeName);

    public AdvertisementInterface get(string storeName, string advertismentName);

    public string createTableStatement();

    public string createTable();

    public update(HashMap<any, any> updatedValues);

    public string dropTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_ADVERTISEMENTSENTITY_H
