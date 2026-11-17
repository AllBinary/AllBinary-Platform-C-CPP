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
// package org.allbinary.business.category

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/apache/commons/lang3/StringUtils.h"
#include "org/w3c/dom/Attr.h"
#include "org/w3c/dom/NamedNodeMap.h"
#include "org/w3c/dom/Node.h"

typedef struct CategoryUtil CategoryUtil;
struct CategoryUtil {
    char unused;
};


CategoryUtil* CategoryUtil_new(void);

void CategoryUtil_init(CategoryUtil* this);
int32_t CategoryUtil_getPathLevel(AbPath* categoryPath);
const char* CategoryUtil_getNameFromNode(Node* node);


void CategoryUtil_init(CategoryUtil* this) {
}

CategoryUtil* CategoryUtil_new(void) {
    CategoryUtil* this = calloc(1, sizeof(CategoryUtil));
    CategoryUtil_init(this);
    return this;
}


// synchronized
int32_t CategoryUtil_getPathLevel(AbPath* categoryPath) {
        int32_t count = StringUtils_countMatches(AbPath_toString(categoryPath), AbPathData_getInstance()->SEPARATOR);
        return count;
}


// synchronized
const char* CategoryUtil_getNameFromNode(Node* node) {
        NamedNodeMap* attributes = Node_getAttributes(node);
        Attr* attrNode = ((Attr*) NamedNodeMap_getNamedItem(attributes, CategoryData_getInstance()->LABEL));
        if (attrNode != nullptr) {
            return Attr_getValue(attrNode);
        } else {
            Node* labelNode = DomSearchHelper_getNodeNoThrow(CategoryData_getInstance()->LABEL, Node_getChildNodes(node));
            if (labelNode != nullptr) {
                return DomNodeHelper_getTextNodeValue(labelNode);
            }
        }
        return StringUtil_getInstance()->EMPTY_STRING;
}

