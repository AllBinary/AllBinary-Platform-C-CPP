
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
        



        #ifndef VIEWS_ADMIN_INVENTORY_LISTINGS_PRODUCTLISTINGFACTORY_H
        #define VIEWS_ADMIN_INVENTORY_LISTINGS_PRODUCTLISTINGFACTORY_H

        
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
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ProductListing;
class ProductListingInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ProductListingFactory
            : public virtual Object
         {

    public: static ProductListingInterface* getInstance(SearchRequest* searchRequest);

private: ProductListingFactory();

};

            


        #endif //VIEWS_ADMIN_INVENTORY_LISTINGS_PRODUCTLISTINGFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_ADMIN_INVENTORY_LISTINGS_PRODUCTLISTINGFACTORY_H_COMPLETE)
        #define VIEWS_ADMIN_INVENTORY_LISTINGS_PRODUCTLISTINGFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/search/SearchRequest.h>)
#include <org/allbinary/logic/control/search/SearchRequest.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("views/admin/inventory/listings/ProductListing.h")
#include "views/admin/inventory/listings/ProductListing.h"
#endif
#if __has_include("views/admin/inventory/listings/ProductListingInterface.h")
#include "views/admin/inventory/listings/ProductListingInterface.h"
#endif

        #endif
    
