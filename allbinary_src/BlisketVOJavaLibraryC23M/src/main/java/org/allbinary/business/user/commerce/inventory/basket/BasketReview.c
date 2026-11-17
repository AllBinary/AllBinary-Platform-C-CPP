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
// package org.allbinary.business.user.commerce.inventory.basket

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashSet.h"
// #include "java/util/Set.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/user/commerce/inventory/item/Item.h"
#include "org/allbinary/business/user/commerce/inventory/item/ItemView.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct BasketReview BasketReview;
struct BasketReview {
    BasicArrayList* items;
};


BasketReview* BasketReview_new(void);

void BasketReview_init(BasketReview* this);
bool BasketReview_isValid(BasketReview* this);
void BasketReview_addItem(BasketReview* this, Item* item);
BasicArrayList* BasketReview_getItems(BasketReview* this);
void BasketReview_removeItem(BasketReview* this, const char* id);
void BasketReview_adjustItem(BasketReview* this, const char* id, const char* num);
const char* BasketReview_getTotalWeight(BasketReview* this);
int32_t BasketReview_getNumberOfItems(BasketReview* this);
Set* BasketReview_getIds(BasketReview* this);
int32_t BasketReview_getNumberOf(BasketReview* this, const char* id);
Node* BasketReview_toXmlNode(BasketReview* this, Document* document);

static void BasketReview_initFields(BasketReview* this) {
    this->items = BasicArrayListD_new();
}


void BasketReview_init(BasketReview* this) {
    BasketReview_initFields(this);
}

BasketReview* BasketReview_new(void) {
    BasketReview* this = calloc(1, sizeof(BasketReview));
    BasketReview_init(this);
    return this;
}


bool BasketReview_isValid(BasketReview* this) {
        return true;
}


void BasketReview_addItem(BasketReview* this, Item* item) {
        BasicArrayList_add(this->items, item);
}


BasicArrayList* BasketReview_getItems(BasketReview* this) {
        return this->items;
}


void BasketReview_removeItem(BasketReview* this, const char* id) {
        Any** itemArray = BasicArrayList_toArray(this->items);
        int32_t size = java_array_length(itemArray);
        for (int32_t index = 0; index < size; index++) {
            Item* item = ((Item*) itemArray[index]);
            if (JAVA_CALL(Item_getId(item), compareTo, id) == 0) {
                BasicArrayList_remove(this->items, item);
            }
        }
}


void BasketReview_adjustItem(BasketReview* this, const char* id, const char* num) {
        Any** itemArray = BasicArrayList_toArray(this->items);
        int32_t size = java_array_length(itemArray);
        for (int32_t index = 0; index < size; index++) {
            Item* item = ((Item*) itemArray[index]);
            if (JAVA_CALL(Item_getId(item), compareTo, id) == 0) {
                Item_setNumber(item, num);
            }
        }
}


const char* BasketReview_getTotalWeight(BasketReview* this) {
        float weightFloat = 0.0f;
        Any** itemArray = BasicArrayList_toArray(this->items);
        int32_t size = java_array_length(itemArray);
        for (int32_t index = 0; index < size; index++) {
            Item* item = ((Item*) itemArray[index]);
            weightFloat += Float_floatValue(Item_getWeight(item));
        }
        return Float_toString(weightFloat);
}


int32_t BasketReview_getNumberOfItems(BasketReview* this) {
        return BasicArrayList_size(this->items);
}


Set* BasketReview_getIds(BasketReview* this) {
        HashSet* idSet = HashSet_new();
        Any** itemArray = BasicArrayList_toArray(this->items);
        int32_t size = java_array_length(itemArray);
        for (int32_t index = 0; index < size; index++) {
            Item* item = ((Item*) itemArray[index]);
            HashSet_add(idSet, Item_getId(item));
        }
        return ((Set*) idSet);
}


int32_t BasketReview_getNumberOf(BasketReview* this, const char* id) {
        Any** itemArray = BasicArrayList_toArray(this->items);
        int32_t size = java_array_length(itemArray);
        for (int32_t index = 0; index < size; index++) {
            Item* item = ((Item*) itemArray[index]);
            if (JAVA_CALL(Item_getId(item), compareTo, id) == 0) {
                return Item_getNumber(item);
            }
        }
        return 0;
}


// throws Exception
Node* BasketReview_toXmlNode(BasketReview* this, Document* document) {
        Node* node = Document_createElement(document, BasketData_BASKET);
        Any** itemArray = BasicArrayList_toArray(this->items);
        int32_t size = java_array_length(itemArray);
        for (int32_t index = 0; index < size; index++) {
            Item* item = ((Item*) itemArray[index]);
            Node_appendChild(node, ItemView_toXmlNode(ItemView_new(item, BasicArrayListD_new()), document));
        }
        return node;
}

