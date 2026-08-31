
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
        



        #ifndef ADMIN_TAGHELPERS_INVENTORYITEMVIEWPARENTTAGHELPER_H
        #define ADMIN_TAGHELPERS_INVENTORYITEMVIEWPARENTTAGHELPER_H

            #include "../../java/lang/Object.h"
        
            #include "../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/http/request/RequestMapInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <taghelpers/ValidationViewHelper.h>

      
#include <tags/HelperTag.h>

      
#include <views/admin/inventory/InventoryItemView.h>

      
#include <views/admin/inventory/download/DownloadableInventoryItemView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InventoryItemViewParentTagHelper
            : public Object
         {
        

    private: static const instance: InventoryItemViewParentTagHelper = new InventoryItemViewParentTagHelper();

    public static InventoryItemViewParentTagHelper getInstance();

                //@Throws(Exception.constructor)
            
    public InventoryItemView getInventoryItemView(HelperTag inventoryTag);

                //@Throws(Exception.constructor)
            
    public DownloadableInventoryItemView getDownloadableInventoryItemView(HelperTag inventoryTag);

                //@Throws(Exception.constructor)
            
    public RequestMapInterface getRequestMapInterface(HelperTag inventoryTag);

                //@Throws(Exception.constructor)
            
    public checkForValidationViewHelper(any = {} helperObject);

};

            


        #endif //ADMIN_TAGHELPERS_INVENTORYITEMVIEWPARENTTAGHELPER_H
