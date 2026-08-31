
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
        



        #ifndef VIEWS_ADMIN_ORDERHISTORY_DATERANGEORDERHISTORYVIEW_H
        #define VIEWS_ADMIN_ORDERHISTORY_DATERANGEORDERHISTORYVIEW_H

            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderData.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/time/TimeUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DateRangeOrderHistoryView: public HttpStoreComponentView: public ValidationComponentInterface, public DomNodeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const VIEWALLORDERS: string = "View All";

    private: const VIEWORDERSINLASTHOUR: string = "Last Hour";

    private: const VIEWORDERSINLASTDAY: string = "Last Day";

    private: const VIEWORDERSINLASTWEEK: string = "Last Week";

    private: const VIEWORDERSINLAST30DAYS: string = "30 Days";

    private: request: HttpServletRequest;

    private: shipped: string;

    private: partiallyShipped: string;

    private: processing: string;

    private: preprocessing: string;

    private: cancelled: string;

    private: dateType: string;

    private: toDate: string;

    private: fromDate: string;

    private: fromYear: string;

    private: fromMonth: string;

    private: fromDay: string;

    private: fromHour: string;

    private: toYear: string;

    private: toMonth: string;

    private: toDay: string;

    private: toHour: string;

    private: command: string;

    private: const ON: string = "on";

    private: MAXLEN: int32_t = 15;

public constructor (TransformInfoInterface transformInfoInterface);

    getFormData();

    public addDomNodeInterfaces();

                //@Throws(Exception.constructor)
            
    public string view();

    public Node toXmlNode(Document document);

    public Boolean isValid();

    public Document toValidationInfoDoc();

    public Node toValidationInfoNode(Document document);

                //@Throws(Exception.constructor)
            
    public string validationInfo();

};

            


        #endif //VIEWS_ADMIN_ORDERHISTORY_DATERANGEORDERHISTORYVIEW_H
