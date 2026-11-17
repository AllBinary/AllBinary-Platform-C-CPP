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
#include "org/allbinary/business/user/address/StreetAddressData.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct ItemView ItemView;
struct ItemView {
    OrderItemInterface* itemInterface;
    BasicArrayList* vector;
};


ItemView* ItemView_new(OrderItemInterface* itemInterface, BasicArrayList* vector);

void ItemView_init(ItemView* this, OrderItemInterface* itemInterface, BasicArrayList* vector);
Node* ItemView_toXmlNode(ItemView* this, Document* document);

static void ItemView_initFields(ItemView* this) {
    
    
}


void ItemView_init(ItemView* this, OrderItemInterface* itemInterface, BasicArrayList* vector) {
    ItemView_initFields(this);
        this->itemInterface = itemInterface;
        this->vector = vector;
}

ItemView* ItemView_new(OrderItemInterface* itemInterface, BasicArrayList* vector) {
    ItemView* this = calloc(1, sizeof(ItemView));
    ItemView_init(this, itemInterface, vector);
    return this;
}


// throws Exception
Node* ItemView_toXmlNode(ItemView* this, Document* document) {
        HashMap* hashMap = OrderItemInterface_toHashMap(this->itemInterface);
        Set* keySet = HashMap_keySet(hashMap);
        Node* node = Document_createElement(document, ItemData_ITEM);
        BasicItemView* basicItemView = BasicItemView_new(this->itemInterface, this->vector);
        Node_appendChild(node, BasicItemView_toXmlNode(basicItemView, document));
        StringUtil* stringUtil = StringUtil_getInstance();
        Any** nameArray = Set_toArray(keySet);
        int32_t size = java_array_length(nameArray);
        for (int32_t index = 0; index < size; index++) {
            const char* name = ((const char*) nameArray[index]);
            const char* value = ((const char*) HashMap_get(hashMap, name));
            value = StringUtil_getNonNull(stringUtil, value);
            Node_appendChild(node, ModDomHelper_createNameValueNodes(document, name, value));
        }
        Node* shippingAddressNode = Document_createElement(document, StreetAddressData_NAME);
        Node_appendChild(shippingAddressNode, JAVA_CALL(OrderItemInterface_getShippingAddress(this->itemInterface), toXmlNode, document));
        return node;
}

