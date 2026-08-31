
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
        



        #ifndef ADMIN_TAGHELPERS_PAYMENTHELPER_H
        #define ADMIN_TAGHELPERS_PAYMENTHELPER_H

            #include "../../java/lang/Exception.h"
        
            #include "../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/installer/Portion.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentFactory.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentInterface.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/PaymentEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/PaymentEntityFactory.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlTableUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Table.h"

class PaymentHelper: public Table {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: weblisketSession: WeblisketSession;

    private: request: HttpServletRequest;

    private: value: string;

    private: const portion: Portion;

public constructor (HashMap<any, any> hashMap, PageContext pageContext);

    getFormData();

    public string insert();

    public string select();

    public string delete();

    public string drop();

    public string create();

    public string restore();

    public string backup();

                //@Throws(LicensingException.constructor)
            
    public string update();

};

            


        #endif //ADMIN_TAGHELPERS_PAYMENTHELPER_H
