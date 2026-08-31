
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
        



        #ifndef ADMIN_TAGS_INVENTORYTAG_H
        #define ADMIN_TAGS_INVENTORYTAG_H

            #include "../../java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <javax/servlet/jsp/tagext/Tag.h>

      
#include <admin/taghelpers/InventoryHelperFactory.h>

      
#include <admin/taghelpers/InventoryRequestHelperFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TableTag.h"
#include "ParentInventoryTagHelper.h"
#include "AbTagData.h"

class InventoryTag: public TableTag {
        

    private: storeName: string;

public constructor ();

    public setStoreName(string value);

                //@Throws(JspTagException.constructor)
            
    public int32_t doStartTag();

};

            


        #endif //ADMIN_TAGS_INVENTORYTAG_H
