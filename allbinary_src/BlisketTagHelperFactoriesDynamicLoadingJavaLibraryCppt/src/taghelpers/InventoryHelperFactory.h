
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
        



        #ifndef TAGHELPERS_INVENTORYHELPERFACTORY_H
        #define TAGHELPERS_INVENTORYHELPERFACTORY_H

            #include "../java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <admin/taghelpers/HelperFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InventoryHelperFactory
            : public Object
         {
        

    private: static const CLASSNAME: string = "taghelpers.InventoryHelper";

    private: static const FACTORYNAME: string = "taghelpers.InventoryHelperFactory";

                //@Throws(LicensingException.constructor)
            
    public static any getInstance(HashMap<any, any> hashMap, PageContext pageContext);

private constructor ();

};

            


        #endif //TAGHELPERS_INVENTORYHELPERFACTORY_H
