
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

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/data/generator/ProductIdGenerator.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/time/TimeUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DownloadItemData.h"

class DownloadableItem
            : public Object
         {
        

    private: const id: string;

    private: const basicItemId: string;

    private: const enabled: string;

    private: const system: string;

    private: const platform: string;

    private: const specialName: string;

    private: const version: string;

    private: const changes: string;

    private: const licenseFile: string;

    private: const file: string;

    private: const size: Long;

    private: const validTime: Long;

    private: const retries: string;

public constructor (string id);

public constructor (HashMap<any, any> hashMap);

    public Vector toVector();

    public HashMap<any, any> toHashMap();

    public string getId();

    public string getSystem();

    public string getPlatform();

    public string getSpecialName();

    public string getVersion();

    public string getChanges();

    public string getLicenseFile();

    public string getFile();

    public Long getSize();

    public Long getValidTime();

    public string getRetries();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_DOWNLOAD_DOWNLOADABLEITEM_H
