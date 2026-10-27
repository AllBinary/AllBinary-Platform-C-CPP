
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/Calendar.h>
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
class EntryData;
class BasicItemData;
class ProductIdGenerator;
class StdUtil;
class StringUtil;
class StringValidationUtil;
class TimeUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class DownloadItemData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DownloadableItem
            : public virtual Object
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

    private: int64_t size;

    private: int64_t validTime;

    private: std::string retries;

public: DownloadableItem(std::string id);

public: DownloadableItem(HashMap<Object*, Object*>* hashMap);

    public: BasicArrayList* toVector();

    public: HashMap<Object*, Object*>* toHashMap();

    public: std::string getId();

    public: std::string getSystem();

    public: std::string getPlatform();

    public: std::string getSpecialName();

    public: std::string getVersion();

    public: std::string getChanges();

    public: std::string getLicenseFile();

    public: std::string getFile();

    public: int64_t getSize();

    public: int64_t getValidTime();

    public: std::string getRetries();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_DOWNLOAD_DOWNLOADABLEITEM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_DOWNLOAD_DOWNLOADABLEITEM_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_DOWNLOAD_DOWNLOADABLEITEM_H_COMPLETE
        #if __has_include(<java/util/Calendar.h>)
#include <java/util/Calendar.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>)
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>
#endif
#if __has_include(<org/allbinary/data/generator/ProductIdGenerator.h>)
#include <org/allbinary/data/generator/ProductIdGenerator.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/time/TimeUtil.h>)
#include <org/allbinary/time/TimeUtil.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/inventory/item/download/DownloadItemData.h")
#include "org/allbinary/business/user/commerce/inventory/item/download/DownloadItemData.h"
#endif

        #endif
    
