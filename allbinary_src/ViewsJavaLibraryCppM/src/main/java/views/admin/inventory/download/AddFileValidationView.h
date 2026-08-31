
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
        



        #ifndef VIEWS_ADMIN_INVENTORY_DOWNLOAD_ADDFILEVALIDATIONVIEW_H
        #define VIEWS_ADMIN_INVENTORY_DOWNLOAD_ADDFILEVALIDATIONVIEW_H

            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Long.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemValidation.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadableItem.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/download/DownloadableItemValidation.h>

      
#include <org/allbinary/business/user/commerce/money/MoneyException.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/http/file/upload/HttpFileUploadUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FileData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/apache/commons/fileupload/FileItem.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DownloadableInventoryItemView.h"

class AddFileValidationView: public DownloadableInventoryItemView: public ValidationComponentInterface {
        

    private: static const ADDPRODUCT: string = "Finish";

    private: static const ADDANOTHERDOWNLOADABLE: string = "Add Another";

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (TransformInfoInterface transformInfoInterface);

    public Boolean isValid();

    public Document toValidationInfoDoc();

    public Node toValidationInfoNode(Document document);

    public string validationInfo();

                //@Throws(Exception.constructor)
            
    Boolean isValid(string fileName, int64_t size);

    validationInfo(StringMaker stringBuffer, string fileName, int64_t size);

};

            


        #endif //VIEWS_ADMIN_INVENTORY_DOWNLOAD_ADDFILEVALIDATIONVIEW_H
