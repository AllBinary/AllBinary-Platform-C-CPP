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
// package org.allbinary.business.user.commerce.inventory.item.download

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Calendar.h"
// #include "java/util/HashMap.h"
// #include "java/util/Set.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct DownloadableItemView DownloadableItemView;
struct DownloadableItemView {
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    DownloadableItem* downloadableItem;
};


DownloadableItemView* DownloadableItemView_new(DownloadableItem* downloadableItem);

void DownloadableItemView_init(DownloadableItemView* this, DownloadableItem* downloadableItem);
Node* DownloadableItemView_toXmlNode(DownloadableItemView* this, Document* document);
Document* DownloadableItemView_toXmlDoc(DownloadableItemView* this);
const char* DownloadableItemView_view(DownloadableItemView* this);

static void DownloadableItemView_initFields(DownloadableItemView* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
}


void DownloadableItemView_init(DownloadableItemView* this, DownloadableItem* downloadableItem) {
    DownloadableItemView_initFields(this);
        this->downloadableItem = downloadableItem;
}

DownloadableItemView* DownloadableItemView_new(DownloadableItem* downloadableItem) {
    DownloadableItemView* this = calloc(1, sizeof(DownloadableItemView));
    DownloadableItemView_init(this, downloadableItem);
    return this;
}


// throws Exception
Node* DownloadableItemView_toXmlNode(DownloadableItemView* this, Document* document) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PRODUCTSEARCHLOGGING)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "toXmlNode");
        }
        HashMap* hashMap = DownloadableItem_toHashMap(this->downloadableItem);
        int64_t totalTime = JAVA_CALL(DownloadableItem_getValidTime(this->downloadableItem), longValue);
        Calendar* calendar = Calendar_getInstance();
        int32_t year = Calendar_get(calendar, Calendar_YEAR);
        int32_t month = Calendar_get(calendar, Calendar_MONTH);
        int32_t day = Calendar_get(calendar, Calendar_DAY_OF_MONTH);
        int32_t hour = Calendar_get(calendar, Calendar_HOUR);
        int32_t minute = Calendar_get(calendar, Calendar_MINUTE);
        int32_t second = Calendar_get(calendar, Calendar_SECOND);
        Calendar_setTimeInMillis(calendar, Calendar_getTimeInMillis(calendar) + totalTime);
        int32_t yearDelta = Calendar_get(calendar, Calendar_YEAR);
        int32_t monthDelta = Calendar_get(calendar, Calendar_MONTH);
        int32_t dayDelta = Calendar_get(calendar, Calendar_DAY_OF_MONTH);
        int32_t hourDelta = Calendar_get(calendar, Calendar_HOUR);
        int32_t minuteDelta = Calendar_get(calendar, Calendar_MINUTE);
        int32_t secondDelta = Calendar_get(calendar, Calendar_SECOND);
        HashMap_put(hashMap, DownloadItemData_VALID_TIME_YEARS, java_string_of(yearDelta - year));
        HashMap_put(hashMap, DownloadItemData_VALID_TIME_MONTHS, java_string_of(monthDelta - month));
        HashMap_put(hashMap, DownloadItemData_VALID_TIME_DAYS, java_string_of(dayDelta - day));
        HashMap_put(hashMap, DownloadItemData_VALID_TIME_HOURS, java_string_of(hourDelta - hour));
        HashMap_put(hashMap, DownloadItemData_VALID_TIME_MINUTES, java_string_of(minuteDelta - minute));
        HashMap_put(hashMap, DownloadItemData_VALID_TIME_SECONDS, java_string_of(secondDelta - second));
        Set* keySet = HashMap_keySet(hashMap);
        Node* node = Document_createElement(document, DownloadItemData_NAME);
        StringUtil* stringUtil = StringUtil_getInstance();
        Any** nameArray = Set_toArray(keySet);
        int32_t size = java_array_length(nameArray);
        for (int32_t index = 0; index < size; index++) {
            const char* name = ((const char*) nameArray[index]);
            const char* value = ((const char*) HashMap_get(hashMap, name));
            value = StringUtil_getNonNull(stringUtil, value);
            Node_appendChild(node, ModDomHelper_createNameValueNodes(document, name, value));
        }
        return node;
}


Document* DownloadableItemView_toXmlDoc(DownloadableItemView* this) {
        return nullptr;
}


const char* DownloadableItemView_view(DownloadableItemView* this) {
        return nullptr;
}

