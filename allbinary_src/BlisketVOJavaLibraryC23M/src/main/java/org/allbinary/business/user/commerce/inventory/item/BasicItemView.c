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
// package org.allbinary.business.user.commerce.inventory.item

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "java/util/Set.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct BasicItemView BasicItemView;
struct BasicItemView {
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    BasicItemData* basicItemData;
    ItemInterface* itemInterface;
    BasicArrayList* vector;
};


BasicItemView* BasicItemView_new(ItemInterface* itemInterface, BasicArrayList* vector);

void BasicItemView_init(BasicItemView* this, ItemInterface* itemInterface, BasicArrayList* vector);
Node* BasicItemView_toXmlNode(BasicItemView* this, Document* document);
Document* BasicItemView_toXmlDoc(BasicItemView* this);
const char* BasicItemView_view(BasicItemView* this);

static void BasicItemView_initFields(BasicItemView* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->basicItemData = BasicItemData_getInstance();
    
    
}


void BasicItemView_init(BasicItemView* this, ItemInterface* itemInterface, BasicArrayList* vector) {
    BasicItemView_initFields(this);
        this->itemInterface = itemInterface;
        this->vector = vector;
}

BasicItemView* BasicItemView_new(ItemInterface* itemInterface, BasicArrayList* vector) {
    BasicItemView* this = calloc(1, sizeof(BasicItemView));
    BasicItemView_init(this, itemInterface, vector);
    return this;
}


// throws Exception
Node* BasicItemView_toXmlNode(BasicItemView* this, Document* document) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PRODUCTSEARCHLOGGING)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "toXmlNode");
        }
        HashMap* hashMap = ItemInterface_toHashMap(this->itemInterface);
        const char* EMPTY_STRING = StringUtil_getInstance()->EMPTY_STRING;
        HashMap_put(hashMap, this->basicItemData->IMAGE, EMPTY_STRING);
        StringUtil* stringUtil = StringUtil_getInstance();
        Set* keySet = HashMap_keySet(hashMap);
        Node* node = Document_createElement(document, this->basicItemData->ITEM);
        Any** nameArray = Set_toArray(keySet);
        int32_t size2 = java_array_length(nameArray);
        for (int32_t index = 0; index < size2; index++) {
            const char* name = ((const char*) nameArray[index]);
            const char* value = ((const char*) HashMap_get(hashMap, name));
            value = StringUtil_getNonNull(stringUtil, value);
            Node_appendChild(node, ModDomHelper_createNameValueNodes(document, name, value));
        }
        Node* totalNode = ModDomHelper_createNameValueNodes(document, this->basicItemData->TOTAL, JAVA_CALL(ItemInterface_getTotal(this->itemInterface), toString));
        Node_appendChild(node, totalNode);
        int32_t size = BasicArrayList_size(this->vector);
        for (int32_t index = 0; index < size; index++) {
            DomNodeInterface* domNodeInterface = ((DomNodeInterface*) BasicArrayList_get(this->vector, index));
            Node* customNode = DomNodeInterface_toXmlNode(domNodeInterface, document);
            Node_appendChild(node, customNode);
        }
        return node;
}


Document* BasicItemView_toXmlDoc(BasicItemView* this) {
        return nullptr;
}


const char* BasicItemView_view(BasicItemView* this) {
        return nullptr;
}

