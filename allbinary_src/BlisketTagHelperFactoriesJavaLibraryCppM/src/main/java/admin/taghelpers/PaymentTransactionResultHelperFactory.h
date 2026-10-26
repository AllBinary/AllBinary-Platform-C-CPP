
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
        



        #ifndef ADMIN_TAGHELPERS_PAYMENTTRANSACTIONRESULTHELPERFACTORY_H
        #define ADMIN_TAGHELPERS_PAYMENTTRANSACTIONRESULTHELPERFACTORY_H

            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TagHelperFactory.h"
#include "PaymentTransactionResultHelper.h"

class PaymentTransactionResultHelperFactory: public TagHelperFactory {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: PaymentTransactionResultHelperFactory();

                //@Throws(LicensingException.constructor)
            
    public: Object* getInstance(HashMap<Object*, Object*> hashMap, PageContext pageContext);

};

            


        #endif //ADMIN_TAGHELPERS_PAYMENTTRANSACTIONRESULTHELPERFACTORY_H
