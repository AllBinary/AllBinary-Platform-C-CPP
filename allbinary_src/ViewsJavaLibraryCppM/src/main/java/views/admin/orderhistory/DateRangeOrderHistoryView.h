
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/Calendar.h>
class BasicArrayList;

class HttpServletRequest;
class OrderData;
class OrderHistory;
class OrderHistoryData;
class OrderHistoryEntityFactory;
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class ModDomHelper;
class GLOBALS2;
class LogUtil;
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
class StringMaker;
class StringUtil;
class StringValidationUtil;
class TransformInfoInterface;
class TimeUtil;
class Document;
class Node;
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DateRangeOrderHistoryView: public HttpStoreComponentView, public virtual ValidationComponentInterface, public virtual DomNodeInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: const std::string VIEWALLORDERS = "View All";

    private: const std::string VIEWORDERSINLASTHOUR = "Last Hour";

    private: const std::string VIEWORDERSINLASTDAY = "Last Day";

    private: const std::string VIEWORDERSINLASTWEEK = "Last Week";

    private: const std::string VIEWORDERSINLAST30DAYS = "30 Days";

    private: HttpServletRequest* request;

    private: std::string shipped;

    private: std::string partiallyShipped;

    private: std::string processing;

    private: std::string preprocessing;

    private: std::string cancelled;

    private: std::string dateType;

    private: std::string toDate;

    private: std::string fromDate;

    private: std::string fromYear;

    private: std::string fromMonth;

    private: std::string fromDay;

    private: std::string fromHour;

    private: std::string toYear;

    private: std::string toMonth;

    private: std::string toDay;

    private: std::string toHour;

    private: std::string command;

    private: const std::string ON = "on";

    private: int32_t MAXLEN = 15;

public: DateRangeOrderHistoryView(TransformInfoInterface* transformInfoInterface);

    private: void getFormData();

    public: void addDomNodeInterfaces();

                //@Throws(Exception.constructor)
            
    public: std::string view();

    public: Node* toXmlNode(Document* document);

    public: bool isValid();

    public: Document* toValidationInfoDoc();

    public: Node* toValidationInfoNode(Document* document);

                //@Throws(Exception.constructor)
            
    public: std::string validationInfo();

};

            


        #endif //VIEWS_ADMIN_ORDERHISTORY_DATERANGEORDERHISTORYVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_ADMIN_ORDERHISTORY_DATERANGEORDERHISTORYVIEW_H_COMPLETE)
        #define VIEWS_ADMIN_ORDERHISTORY_DATERANGEORDERHISTORYVIEW_H_COMPLETE
        #if __has_include(<java/util/Calendar.h>)
#include <java/util/Calendar.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderData.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/globals/GLOBALS2.h>)
#include <org/allbinary/globals/GLOBALS2.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/validate/ValidationComponentInterface.h>)
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/time/TimeUtil.h>)
#include <org/allbinary/time/TimeUtil.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include(<views/business/context/modules/storefront/HttpStoreComponentView.h>)
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
#endif

        #endif
    
