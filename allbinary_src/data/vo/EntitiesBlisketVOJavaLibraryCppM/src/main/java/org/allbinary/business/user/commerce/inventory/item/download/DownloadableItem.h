
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_DOWNLOAD_DOWNLOADABLEITEM_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_DOWNLOAD_DOWNLOADABLEITEM_H

            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/data/generator/ProductIdGenerator.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/time/TimeUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DownloadItemData.h"

class DownloadableItem
            : public Object
         {

    private: std::string id;

    private: std::string basicItemId;

    private: std::string enabled;

    private: std::string system;

    private: std::string platform;

    private: std::string specialName;

    private: std::string version;

    private: std::string changes;

    private: std::string licenseFile;

    private: std::string file;

    private: Long size;

    private: Long validTime;

    private: std::string retries;

public: DownloadableItem(std::string id);

public: DownloadableItem(HashMap<any, any> hashMap);

    public: BasicArrayList toVector();

    public: HashMap<any, any> toHashMap();

    public: std::string getId();

    public: std::string getSystem();

    public: std::string getPlatform();

    public: std::string getSpecialName();

    public: std::string getVersion();

    public: std::string getChanges();

    public: std::string getLicenseFile();

    public: std::string getFile();

    public: Long getSize();

    public: Long getValidTime();

    public: std::string getRetries();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_DOWNLOAD_DOWNLOADABLEITEM_H
