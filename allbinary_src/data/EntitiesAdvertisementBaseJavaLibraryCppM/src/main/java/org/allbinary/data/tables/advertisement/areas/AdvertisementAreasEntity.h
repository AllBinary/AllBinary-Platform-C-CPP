
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
class AdvertisementArea;
class AdvertisementAreaData;
class AdvertisementAreaInterface;
class AdvertisementCampaignData;
class StoreFrontData;
class EntryData;
class UserDbInitInfo;
class StdUtil;
class LogUtil;
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/advertisement/areas/AdvertisementAreasEntityInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdvertisementAreasEntity: public AbSqlBean, public AdvertisementAreasEntityInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: const std::string tableName = "advertisements";

public: AdvertisementAreasEntity();

    public: void delete_(std::string value);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* get(std::string storeName);

                //@Throws(Exception.constructor)
            
    public: AdvertisementAreaInterface* get(std::string storeName, std::string advertisementAreaName);

    public: std::string createTableStatement();

    public: std::string createTable();

    public: void update(HashMap<Object*, Object*>* updatedValues);

    public: std::string dropTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_AREAS_ADVERTISEMENTAREASENTITY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_AREAS_ADVERTISEMENTAREASENTITY_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_AREAS_ADVERTISEMENTAREASENTITY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/area/AdvertisementArea.h>)
#include <org/allbinary/business/advertisement/area/AdvertisementArea.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/area/AdvertisementAreaData.h>)
#include <org/allbinary/business/advertisement/area/AdvertisementAreaData.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/area/AdvertisementAreaInterface.h>)
#include <org/allbinary/business/advertisement/area/AdvertisementAreaInterface.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/campaign/AdvertisementCampaignData.h>)
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaignData.h>
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
#if __has_include("org/allbinary/data/tables/advertisement/areas/AdvertisementAreasEntityInterface.h")
#include "org/allbinary/data/tables/advertisement/areas/AdvertisementAreasEntityInterface.h"
#endif

        #endif
    
