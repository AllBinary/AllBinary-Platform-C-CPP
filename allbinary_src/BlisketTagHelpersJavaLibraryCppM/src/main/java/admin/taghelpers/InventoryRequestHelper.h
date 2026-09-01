
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
        



        #ifndef ADMIN_TAGHELPERS_INVENTORYREQUESTHELPER_H
        #define ADMIN_TAGHELPERS_INVENTORYREQUESTHELPER_H

            #include "../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <admin/tags/AbTagData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/ItemInterface.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <tags/HelperTag.h>

      
#include <views/admin/inventory/InventoryItemView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ModifyTable.h"
#include "InventoryItemViewParentTagHelper.h"

class InventoryRequestHelper: public ModifyTable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: ItemInterface itemInterface;

public: InventoryRequestHelper(HashMap<any, any> propertiesHashMap, PageContext pageContext);

                //@Throws(Exception.constructor)
            
    public: std::string insert();

    public: std::string delete_();

    public: std::string update();

    public: ItemInterface getItemInterface();

};

            


        #endif //ADMIN_TAGHELPERS_INVENTORYREQUESTHELPER_H
