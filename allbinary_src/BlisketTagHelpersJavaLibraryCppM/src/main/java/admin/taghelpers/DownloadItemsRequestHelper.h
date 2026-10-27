
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
        



        #ifndef ADMIN_TAGHELPERS_DOWNLOADITEMSREQUESTHELPER_H
        #define ADMIN_TAGHELPERS_DOWNLOADITEMSREQUESTHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;

class PageContext;
class AbTagData;
class DownloadableItem;
class DownloadItemsEntityFactory;
class LogUtil;
class CommonSeps;
class HelperTag;
class DownloadableInventoryItemView;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/ModifyTable.h"
class InventoryItemViewParentTagHelper;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DownloadItemsRequestHelper: public ModifyTable {

    /*protected*/ public: LogUtil* logUtil;

    private: DownloadableItem* downloadableItem;

public: DownloadItemsRequestHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

    public: std::string insert();

    public: std::string delete_();

    public: std::string update();

};

            


        #endif //ADMIN_TAGHELPERS_DOWNLOADITEMSREQUESTHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_DOWNLOADITEMSREQUESTHELPER_H_COMPLETE)
        #define ADMIN_TAGHELPERS_DOWNLOADITEMSREQUESTHELPER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<admin/tags/AbTagData.h>)
#include <admin/tags/AbTagData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/download/DownloadableItem.h>)
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadableItem.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/item/downloads/DownloadItemsEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/item/downloads/DownloadItemsEntityFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<tags/HelperTag.h>)
#include <tags/HelperTag.h>
#endif
#if __has_include(<views/admin/inventory/download/DownloadableInventoryItemView.h>)
#include <views/admin/inventory/download/DownloadableInventoryItemView.h>
#endif
#if __has_include("admin/taghelpers/ModifyTable.h")
#include "admin/taghelpers/ModifyTable.h"
#endif
#if __has_include("admin/taghelpers/InventoryItemViewParentTagHelper.h")
#include "admin/taghelpers/InventoryItemViewParentTagHelper.h"
#endif

        #endif
    
