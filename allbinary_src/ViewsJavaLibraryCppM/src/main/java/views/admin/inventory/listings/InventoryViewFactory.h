
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/search/SearchRequest.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <views/generic/inventory/InventorySearch.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InventoryViewSearchInterface.h"

class InventoryViewFactory
            : public Object
         {

                //@Throws(LicensingException.constructor)
            
    public: static InventoryViewSearchInterface getInstance(SearchRequest searchRequest);

private: InventoryViewFactory();

};

            


        #endif //VIEWS_ADMIN_INVENTORY_LISTINGS_INVENTORYVIEWFACTORY_H
