
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
        



        #ifndef VIEWS_ADMIN_INVENTORY_UPDATEFILEVALIDATIONVIEW_H
        #define VIEWS_ADMIN_INVENTORY_UPDATEFILEVALIDATIONVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
class StoreFrontFactory;
class StoreFrontInterface;

class BasicItemValidation;
class MoneyException;
class InventoryEntity;
class InventoryEntityFactory;
class GLOBALS2;
class URLGLOBALS;
class HttpFileUploadUtil;
class LogUtil;
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
class AbFile;
class FileData;
class StringMaker;
class StringValidationUtil;
class TransformInfoInterface;
class CommonSeps;
class CommonStrings;
class FileItem;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/admin/inventory/InventoryItemView.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UpdateFileValidationView: public InventoryItemView, public virtual ValidationComponentInterface {

    private: static const std::string UPDATEPRODUCT;

    /*protected*/ public: LogUtil* logUtil;

public: UpdateFileValidationView(TransformInfoInterface* transformInfoInterface);

    public: bool isValid();

    public: Document* toValidationInfoDoc();

    public: Node* toValidationInfoNode(Document* document);

                //@Throws(Exception.constructor)
            
    public: std::string validationInfo();

                //@Throws(Exception.constructor)
            
    private: bool isValid(std::string fileName, int64_t size);

    private: void validationInfo(StringMaker* stringBuffer, std::string fileName, std::string fileItemFieldName, int64_t size);

};

            


        #endif //VIEWS_ADMIN_INVENTORY_UPDATEFILEVALIDATIONVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_ADMIN_INVENTORY_UPDATEFILEVALIDATIONVIEW_H_COMPLETE)
        #define VIEWS_ADMIN_INVENTORY_UPDATEFILEVALIDATIONVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif

#if __has_include(<org/allbinary/business/user/commerce/inventory/item/BasicItemValidation.h>)
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemValidation.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/MoneyException.h>)
#include <org/allbinary/business/user/commerce/money/MoneyException.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>
#endif
#if __has_include(<org/allbinary/globals/GLOBALS2.h>)
#include <org/allbinary/globals/GLOBALS2.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/file/upload/HttpFileUploadUtil.h>)
#include <org/allbinary/logic/communication/http/file/upload/HttpFileUploadUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/validate/ValidationComponentInterface.h>)
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/FileData.h>)
#include <org/allbinary/logic/io/file/FileData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/apache/commons/fileupload/FileItem.h>)
#include <org/apache/commons/fileupload/FileItem.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("views/admin/inventory/InventoryItemView.h")
#include "views/admin/inventory/InventoryItemView.h"
#endif

        #endif
    
