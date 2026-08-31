
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

            #include "../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <admin/tags/AbTagData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadableItem.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/downloads/DownloadItemsEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <tags/HelperTag.h>

      
#include <views/admin/inventory/download/DownloadableInventoryItemView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ModifyTable.h"
#include "InventoryItemViewParentTagHelper.h"

class DownloadItemsRequestHelper: public ModifyTable {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const downloadableItem: DownloadableItem;

public constructor (HashMap<any, any> hashMap, PageContext pageContext);

    public string insert();

    public string delete();

    public string update();

};

            


        #endif //ADMIN_TAGHELPERS_DOWNLOADITEMSREQUESTHELPER_H
