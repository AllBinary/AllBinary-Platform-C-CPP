
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
        



        #ifndef VIEWS_ADMIN_INVENTORY_LISTINGS_INVENTORYVIEWFACTORY_H
        #define VIEWS_ADMIN_INVENTORY_LISTINGS_INVENTORYVIEWFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class LogUtil;
class SearchRequest;
class LicensingException;
class CommonStrings;
class InventorySearch;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class InventoryViewSearchInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InventoryViewFactory
            : public virtual Object
         {

                //@Throws(LicensingException.constructor)
            
    public: static InventoryViewSearchInterface* getInstance(SearchRequest* searchRequest);

private: InventoryViewFactory();

};

            


        #endif //VIEWS_ADMIN_INVENTORY_LISTINGS_INVENTORYVIEWFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_ADMIN_INVENTORY_LISTINGS_INVENTORYVIEWFACTORY_H_COMPLETE)
        #define VIEWS_ADMIN_INVENTORY_LISTINGS_INVENTORYVIEWFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/search/SearchRequest.h>)
#include <org/allbinary/logic/control/search/SearchRequest.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<views/generic/inventory/InventorySearch.h>)
#include <views/generic/inventory/InventorySearch.h>
#endif
#if __has_include("views/admin/inventory/listings/InventoryViewSearchInterface.h")
#include "views/admin/inventory/listings/InventoryViewSearchInterface.h"
#endif

        #endif
    
