/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package views.admin.orderhistory

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Calendar.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderData.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistory.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h"
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/globals/GLOBALS2.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/time/TimeUtil.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct DateRangeOrderHistoryView DateRangeOrderHistoryView;
struct DateRangeOrderHistoryView {
    HttpStoreComponentView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    const char* VIEWALLORDERS;
    const char* VIEWORDERSINLASTHOUR;
    const char* VIEWORDERSINLASTDAY;
    const char* VIEWORDERSINLASTWEEK;
    const char* VIEWORDERSINLAST30DAYS;
    HttpServletRequest* request;
    const char* shipped;
    const char* partiallyShipped;
    const char* processing;
    const char* preprocessing;
    const char* cancelled;
    const char* dateType;
    const char* toDate;
    const char* fromDate;
    const char* fromYear;
    const char* fromMonth;
    const char* fromDay;
    const char* fromHour;
    const char* toYear;
    const char* toMonth;
    const char* toDay;
    const char* toHour;
    const char* command;
    const char* ON;
    int32_t MAXLEN;
};


DateRangeOrderHistoryView* DateRangeOrderHistoryView_new(TransformInfoInterface* transformInfoInterface);

void DateRangeOrderHistoryView_init(DateRangeOrderHistoryView* this, TransformInfoInterface* transformInfoInterface);
static void DateRangeOrderHistoryView_getFormData(DateRangeOrderHistoryView* this);
void DateRangeOrderHistoryView_addDomNodeInterfaces(DateRangeOrderHistoryView* this);
const char* DateRangeOrderHistoryView_view(DateRangeOrderHistoryView* this);
Node* DateRangeOrderHistoryView_toXmlNode(DateRangeOrderHistoryView* this, Document* document);
bool DateRangeOrderHistoryView_isValid(DateRangeOrderHistoryView* this);
Document* DateRangeOrderHistoryView_toValidationInfoDoc(DateRangeOrderHistoryView* this);
Node* DateRangeOrderHistoryView_toValidationInfoNode(DateRangeOrderHistoryView* this, Document* document);
const char* DateRangeOrderHistoryView_validationInfo(DateRangeOrderHistoryView* this);
TransformInfoInterface* DateRangeOrderHistoryView_getTransformInfoInterface(DateRangeOrderHistoryView* this);

static void DateRangeOrderHistoryView_initFields(DateRangeOrderHistoryView* this) {
    this->logUtil = LogUtil_getInstance();
    this->VIEWALLORDERS = "View All";
    this->VIEWORDERSINLASTHOUR = "Last Hour";
    this->VIEWORDERSINLASTDAY = "Last Day";
    this->VIEWORDERSINLASTWEEK = "Last Week";
    this->VIEWORDERSINLAST30DAYS = "30 Days";
    
    this->shipped = nullptr;
    this->partiallyShipped = nullptr;
    this->processing = nullptr;
    this->preprocessing = nullptr;
    this->cancelled = nullptr;
    this->dateType = nullptr;
    this->toDate = nullptr;
    this->fromDate = nullptr;
    this->fromYear = nullptr;
    this->fromMonth = nullptr;
    this->fromDay = nullptr;
    this->fromHour = nullptr;
    this->toYear = nullptr;
    this->toMonth = nullptr;
    this->toDay = nullptr;
    this->toHour = nullptr;
    this->command = nullptr;
    this->ON = "on";
    this->MAXLEN = 15;
}


void DateRangeOrderHistoryView_init(DateRangeOrderHistoryView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        DateRangeOrderHistoryView_initFields(this);
        this->request = ((HttpServletRequest*) JAVA_CALL(DateRangeOrderHistoryView_getPageContext(this), getRequest));
        DateRangeOrderHistoryView_getFormData(this);
}

DateRangeOrderHistoryView* DateRangeOrderHistoryView_new(TransformInfoInterface* transformInfoInterface) {
    DateRangeOrderHistoryView* this = calloc(1, sizeof(DateRangeOrderHistoryView));
    DateRangeOrderHistoryView_init(this, transformInfoInterface);
    return this;
}


static void DateRangeOrderHistoryView_getFormData(DateRangeOrderHistoryView* this) {
        this->dateType = HttpServletRequest_getParameter(this->request, OrderHistoryData_DATETYPE);
        this->preprocessing = HttpServletRequest_getParameter(this->request, OrderHistoryData_PREPROCESSINGNAME);
        this->shipped = HttpServletRequest_getParameter(this->request, OrderHistoryData_SHIPPEDNAME);
        this->partiallyShipped = HttpServletRequest_getParameter(this->request, OrderHistoryData_PARTIALLYSHIPPEDNAME);
        this->processing = HttpServletRequest_getParameter(this->request, OrderHistoryData_PROCESSINGNAME);
        this->cancelled = HttpServletRequest_getParameter(this->request, OrderHistoryData_CANCELLEDNAME);
        this->fromYear = HttpServletRequest_getParameter(this->request, OrderHistoryData_FROMYEAR);
        this->fromMonth = HttpServletRequest_getParameter(this->request, OrderHistoryData_FROMMONTH);
        this->fromDay = HttpServletRequest_getParameter(this->request, OrderHistoryData_FROMDAY);
        this->fromHour = HttpServletRequest_getParameter(this->request, OrderHistoryData_FROMHOUR);
        this->toYear = HttpServletRequest_getParameter(this->request, OrderHistoryData_TOYEAR);
        this->toMonth = HttpServletRequest_getParameter(this->request, OrderHistoryData_TOMONTH);
        this->toDay = HttpServletRequest_getParameter(this->request, OrderHistoryData_TODAY);
        this->toHour = HttpServletRequest_getParameter(this->request, OrderHistoryData_TOHOUR);
        this->command = HttpServletRequest_getParameter(this->request, HttpStoreComponentView_GLOBALS2->ADMINCOMMAND);
}


void DateRangeOrderHistoryView_addDomNodeInterfaces(DateRangeOrderHistoryView* this) {
        DateRangeOrderHistoryView_addDomNodeInterface(this, ((DomNodeInterface*) this));
}


// throws Exception
const char* DateRangeOrderHistoryView_view(DateRangeOrderHistoryView* this) {
        JAVA_TRY {
            DateRangeOrderHistoryView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


Node* DateRangeOrderHistoryView_toXmlNode(DateRangeOrderHistoryView* this, Document* document) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Attempt to View orders in (fromDate=");
                StringMaker_append(stringBuffer, this->fromDate);
                StringMaker_append(stringBuffer, ",toDate=");
                StringMaker_append(stringBuffer, this->toDate);
                StringMaker_append(stringBuffer, ") and status");
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "view");
            }
            Node* node = Document_createElement(document, OrderData_ORDERS);
            if (this->preprocessing != nullptr && strcmp(this->preprocessing, this->ON) == 0) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "Adding Preprocessing Orders", this, "toXmlNode");
                }
                BasicArrayList* orderHistoryVector = OrderHistoryEntityFactory_getOrders(OrderHistoryEntityFactory_getInstance(), OrderHistoryData_PREPROCESSING, this->fromDate, this->toDate);
                int32_t size = BasicArrayList_size(orderHistoryVector);
                for (int32_t index = 0; index < size; index++) {
                    OrderHistory* orderHistory = ((OrderHistory*) BasicArrayList_get(orderHistoryVector, index));
                    Node_appendChild(node, OrderHistory_toXmlNode(orderHistory, document));
                }
            }
            if (this->shipped != nullptr && strcmp(this->shipped, this->ON) == 0) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "Adding Shipped Orders", this, "toXmlNode");
                }
                BasicArrayList* orderHistoryVector = OrderHistoryEntityFactory_getOrders(OrderHistoryEntityFactory_getInstance(), OrderHistoryData_SHIPPED, this->fromDate, this->toDate);
                int32_t size = BasicArrayList_size(orderHistoryVector);
                for (int32_t index = 0; index < size; index++) {
                    OrderHistory* orderHistory = ((OrderHistory*) BasicArrayList_get(orderHistoryVector, index));
                    Node_appendChild(node, OrderHistory_toXmlNode(orderHistory, document));
                }
            }
            if (this->partiallyShipped != nullptr && strcmp(this->partiallyShipped, this->ON) == 0) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "Adding Partially Shipped Orders", this, "toDomNode");
                }
                BasicArrayList* orderHistoryVector = OrderHistoryEntityFactory_getOrders(OrderHistoryEntityFactory_getInstance(), OrderHistoryData_PARTIALLYSHIPPED, this->fromDate, this->toDate);
                int32_t size = BasicArrayList_size(orderHistoryVector);
                for (int32_t index = 0; index < size; index++) {
                    OrderHistory* orderHistory = ((OrderHistory*) BasicArrayList_get(orderHistoryVector, index));
                    Node_appendChild(node, OrderHistory_toXmlNode(orderHistory, document));
                }
            }
            if (this->processing != nullptr && strcmp(this->processing, this->ON) == 0) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "Adding Processing Orders", this, "toXmlNode");
                }
                BasicArrayList* orderHistoryVector = OrderHistoryEntityFactory_getOrders(OrderHistoryEntityFactory_getInstance(), OrderHistoryData_PROCESSING, this->fromDate, this->toDate);
                int32_t size = BasicArrayList_size(orderHistoryVector);
                for (int32_t index = 0; index < size; index++) {
                    OrderHistory* orderHistory = ((OrderHistory*) BasicArrayList_get(orderHistoryVector, index));
                    Node_appendChild(node, OrderHistory_toXmlNode(orderHistory, document));
                }
            }
            if (this->cancelled != nullptr && strcmp(this->cancelled, this->ON) == 0) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "Adding Cancelled Orders", this, "view");
                }
                BasicArrayList* orderHistoryVector = OrderHistoryEntityFactory_getOrders(OrderHistoryEntityFactory_getInstance(), OrderHistoryData_CANCELLED, this->fromDate, this->toDate);
                int32_t size = BasicArrayList_size(orderHistoryVector);
                for (int32_t index = 0; index < size; index++) {
                    OrderHistory* orderHistory = ((OrderHistory*) BasicArrayList_get(orderHistoryVector, index));
                    Node_appendChild(node, OrderHistory_toXmlNode(orderHistory, document));
                }
            }
            Node_appendChild(node, ModDomHelper_createNameValueNodes(document, OrderHistoryData_PREPROCESSINGNAME, OrderHistoryData_PREPROCESSING));
            Node_appendChild(node, ModDomHelper_createNameValueNodes(document, OrderHistoryData_PROCESSINGNAME, OrderHistoryData_PROCESSING));
            Node_appendChild(node, ModDomHelper_createNameValueNodes(document, OrderHistoryData_CANCELLEDNAME, OrderHistoryData_CANCELLED));
            Node_appendChild(node, ModDomHelper_createNameValueNodes(document, OrderHistoryData_PARTIALLYSHIPPEDNAME, OrderHistoryData_PARTIALLYSHIPPED));
            Node_appendChild(node, ModDomHelper_createNameValueNodes(document, OrderHistoryData_SHIPPEDNAME, OrderHistoryData_SHIPPED));
            Node_appendChild(node, ModDomHelper_createNameValueNodes(document, HttpStoreComponentView_GLOBALS2->VIEWNAME, HttpStoreComponentView_GLOBALS2->VIEW));
            return node;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->XSLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "toXmlNode", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


bool DateRangeOrderHistoryView_isValid(DateRangeOrderHistoryView* this) {
        JAVA_TRY {
            bool isValid = true;
            if (this->dateType == nullptr || (strcmp(this->dateType, OrderHistoryData_TYPELONG) != 0 && strcmp(this->dateType, OrderHistoryData_TYPECAESAR) != 0)) {
                isValid = false;
            }
            if (this->dateType != nullptr) {
                if (strcmp(this->dateType, OrderHistoryData_TYPELONG) == 0) {
                    Calendar* calendar = Calendar_getInstance();
                    int64_t currentTime = Calendar_getTimeInMillis(calendar);
                    const char* rangeDate = StringUtil_getInstance()->EMPTY_STRING;
                    if (strcmp(this->command, this->VIEWORDERSINLASTHOUR) == 0) {
                        int64_t oneHour = 60LL * 60LL * 1000LL;
                        rangeDate = Long_toString(oneHour);
                    } else if (strcmp(this->command, this->VIEWORDERSINLASTDAY) == 0) {
                        int64_t oneDay = 24LL * 60LL * 60LL * 1000LL;
                        rangeDate = Long_toString(oneDay);
                    } else if (strcmp(this->command, this->VIEWORDERSINLASTWEEK) == 0) {
                        int64_t oneWeek = 7LL * 24LL * 60LL * 60LL * 1000LL;
                        rangeDate = Long_toString(oneWeek);
                    } else if (strcmp(this->command, this->VIEWORDERSINLAST30DAYS) == 0) {
                        int64_t thirtyDays = 30LL * 24LL * 60LL * 60LL * 1000LL;
                        rangeDate = Long_toString(thirtyDays);
                    } else if (strcmp(this->command, this->VIEWALLORDERS) == 0) {
                        rangeDate = Long_toString(currentTime);
                    }
                    int64_t rangeDateLong = Long_longValue(rangeDate);
                    this->fromDate = Long_toString(currentTime - rangeDateLong);
                    const char* time = java_string_new(Long_toString(currentTime));
                    this->toDate = time;
                } else if (strcmp(this->dateType, OrderHistoryData_TYPECAESAR) == 0) {
                    Calendar* calendar = Calendar_getInstance();
                    TimeUtil_setCalendar(TimeUtil_getInstance(), calendar, this->fromYear, this->fromMonth, this->fromDay, this->fromHour);
                    this->fromDate = Long_toString(Calendar_getTimeInMillis(calendar));
                    TimeUtil_setCalendar(TimeUtil_getInstance(), calendar, this->toYear, this->toMonth, this->toDay, this->toHour);
                    this->toDate = Long_toString(Calendar_getTimeInMillis(calendar));
                }
                if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), this->toDate) || ((int32_t) strlen(this->toDate)) > this->MAXLEN) {
                    isValid = false;
                }
                if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), this->fromDate) || ((int32_t) strlen(this->fromDate)) > this->MAXLEN) {
                    isValid = false;
                }
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Attempt to View orders in (fromDate=");
                StringMaker_append(stringBuffer, this->fromDate);
                StringMaker_append(stringBuffer, ",toDate=");
                StringMaker_append(stringBuffer, this->toDate);
                StringMaker_append(stringBuffer, ")");
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->IS_VALID);
            }
            return isValid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_put(this->logUtil, "Exception in validation", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


Document* DateRangeOrderHistoryView_toValidationInfoDoc(DateRangeOrderHistoryView* this) {
        return nullptr;
}


Node* DateRangeOrderHistoryView_toValidationInfoNode(DateRangeOrderHistoryView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* DateRangeOrderHistoryView_validationInfo(DateRangeOrderHistoryView* this) {
        JAVA_TRY {
            StringMaker* result = StringMaker_new();
            if (this->dateType == nullptr || (strcmp(this->dateType, OrderHistoryData_TYPELONG) != 0 && strcmp(this->dateType, OrderHistoryData_TYPECAESAR) != 0)) {
                StringMaker_append(result, "DATETYPE not recognized");
            }
            if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), this->toDate) || ((int32_t) strlen(this->toDate)) > this->MAXLEN) {
                StringMaker_append(result, "Invalid To Date");
            }
            if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), this->fromDate) || ((int32_t) strlen(this->fromDate)) > this->MAXLEN) {
                StringMaker_append(result, "Invalid From Date");
            }
            return StringMaker_toString(result);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Getting Validation Info";
        } JAVA_END_TRY;
}


// throws Exception
TransformInfoInterface* DateRangeOrderHistoryView_getTransformInfoInterface(DateRangeOrderHistoryView* this) {
        return HttpStoreComponentView_getTransformInfoInterface((&this->base));
}

