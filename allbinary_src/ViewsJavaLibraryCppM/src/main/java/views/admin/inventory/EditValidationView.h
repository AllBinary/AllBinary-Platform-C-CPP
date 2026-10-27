
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
        



        #ifndef VIEWS_ADMIN_INVENTORY_EDITVALIDATIONVIEW_H
        #define VIEWS_ADMIN_INVENTORY_EDITVALIDATIONVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

class MoneyException;
class InventoryEntityFactory;
class DownloadItemsEntity;
class DownloadItemsEntityFactory;
class RequestParams;
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
class StringMaker;
class StringUtil;
class StringValidationUtil;
class TransformInfoInterface;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/admin/inventory/InventoryItemView.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class EditValidationView: public InventoryItemView, public ValidationComponentInterface {

    private: std::string id;

public: EditValidationView(TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: void getFormData();

                //@Throws(Exception.constructor)
            
    public: bool isValid();

    public: Document* toValidationInfoDoc();

    public: Node* toValidationInfoNode(Document* document);

                //@Throws(MoneyException.constructor)
            
    public: std::string validationInfo();

};

            


        #endif //VIEWS_ADMIN_INVENTORY_EDITVALIDATIONVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_ADMIN_INVENTORY_EDITVALIDATIONVIEW_H_COMPLETE)
        #define VIEWS_ADMIN_INVENTORY_EDITVALIDATIONVIEW_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif

#if __has_include(<org/allbinary/business/user/commerce/money/MoneyException.h>)
#include <org/allbinary/business/user/commerce/money/MoneyException.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/item/downloads/DownloadItemsEntity.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/item/downloads/DownloadItemsEntity.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/item/downloads/DownloadItemsEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/item/downloads/DownloadItemsEntityFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/RequestParams.h>)
#include <org/allbinary/logic/communication/http/request/RequestParams.h>
#endif
#if __has_include(<org/allbinary/logic/control/validate/ValidationComponentInterface.h>)
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
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
    
