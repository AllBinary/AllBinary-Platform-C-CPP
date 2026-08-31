
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
        



        #ifndef TAGHELPERS_ORDERHISTORYHELPERFACTORY_H
        #define TAGHELPERS_ORDERHISTORYHELPERFACTORY_H

            #include "../java/lang/Object.h"
        
            #include "../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OrderHistoryHelper.h"

class OrderHistoryHelperFactory
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor ();

                //@Throws(LicensingException.constructor)
            
    public any getInstance(HashMap<any, any> hashMap, PageContext pageContext);

};

            


        #endif //TAGHELPERS_ORDERHISTORYHELPERFACTORY_H
