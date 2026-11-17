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
// package org.allbinary.logic.visual.dhtml.style.color

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct ColorsView ColorsView;
struct ColorsView {
    DomNodeInterface DomNodeInterface_interface;
    CommonPhoneStrings* commonPhoneStrings;
    int32_t HEXRADIX;
    int32_t MAX;
    int32_t delta;
};


ColorsView* ColorsView_new(void);

void ColorsView_init(ColorsView* this);
Node* ColorsView_getColorNode(ColorsView* this, Document* document, int32_t redIndex, int32_t greenIndex, int32_t blueIndex);
Node* ColorsView_toXmlNode(ColorsView* this, Document* document);

static void ColorsView_initFields(ColorsView* this) {
    this->commonPhoneStrings = CommonPhoneStrings_getInstance();
    this->HEXRADIX = 16;
    this->MAX = 255;
    this->delta = 20;
}


void ColorsView_init(ColorsView* this) {
    ColorsView_initFields(this);
}

ColorsView* ColorsView_new(void) {
    ColorsView* this = calloc(1, sizeof(ColorsView));
    ColorsView_init(this);
    return this;
}


// throws Exception
Node* ColorsView_getColorNode(ColorsView* this, Document* document, int32_t redIndex, int32_t greenIndex, int32_t blueIndex) {
        StringMaker* hexColorStringBuffer = StringMaker_new();
        if (redIndex < this->HEXRADIX) {
            StringMaker_append(hexColorStringBuffer, this->commonPhoneStrings->ZERO);
        }
        StringMaker_append(hexColorStringBuffer, Integer_toString(redIndex, this->HEXRADIX));
        if (greenIndex < this->HEXRADIX) {
            StringMaker_append(hexColorStringBuffer, this->commonPhoneStrings->ZERO);
        }
        StringMaker_append(hexColorStringBuffer, Integer_toString(greenIndex, this->HEXRADIX));
        if (blueIndex < this->HEXRADIX) {
            StringMaker_append(hexColorStringBuffer, this->commonPhoneStrings->ZERO);
        }
        StringMaker_append(hexColorStringBuffer, Integer_toString(blueIndex, this->HEXRADIX));
        Node* colorNode = ModDomHelper_createNameValueNodes(document, ColorData_getInstance()->NAME, StringMaker_toString(hexColorStringBuffer));
        return colorNode;
}


// throws Exception
Node* ColorsView_toXmlNode(ColorsView* this, Document* document) {
        Node* node = ModDomHelper_createNameValueNodes(document, ColorsData_getInstance()->NAME, "RGB Colors In Hex");
        Node* blackNode = ModDomHelper_createNameValueNodes(document, ColorData_getInstance()->NAME, "000000");
        Node_appendChild(node, blackNode);
        for (int32_t index = 0; index < this->MAX; index += this->delta) {
            StringMaker* hexColorStringBuffer = StringMaker_new();
            if (index < this->HEXRADIX) {
                StringMaker_append(hexColorStringBuffer, this->commonPhoneStrings->ZERO);
            }
            StringMaker_append(hexColorStringBuffer, Integer_toString(index, this->HEXRADIX));
            if (index < this->HEXRADIX) {
                StringMaker_append(hexColorStringBuffer, this->commonPhoneStrings->ZERO);
            }
            StringMaker_append(hexColorStringBuffer, Integer_toString(index, this->HEXRADIX));
            if (index < this->HEXRADIX) {
                StringMaker_append(hexColorStringBuffer, this->commonPhoneStrings->ZERO);
            }
            StringMaker_append(hexColorStringBuffer, Integer_toString(index, this->HEXRADIX));
            Node* colorNode = ModDomHelper_createNameValueNodes(document, ColorData_getInstance()->NAME, StringMaker_toString(hexColorStringBuffer));
            Node_appendChild(node, colorNode);
        }
        Node* whiteNode = ModDomHelper_createNameValueNodes(document, ColorData_getInstance()->NAME, "FFFFFF");
        Node_appendChild(node, whiteNode);
        for (int32_t blueIndex = this->MAX / 2; blueIndex < this->MAX; blueIndex += this->delta) {
            for (int32_t greenIndex = 0; greenIndex < this->MAX / 2; greenIndex += this->delta) {
                for (int32_t redIndex = 0; redIndex < this->MAX / 2; redIndex += this->delta) {
                    Node_appendChild(node, ColorsView_getColorNode(this, document, redIndex, greenIndex, blueIndex));
                }
            }
        }
        for (int32_t redIndex = this->MAX / 2; redIndex < this->MAX; redIndex += this->delta) {
            for (int32_t greenIndex = 0; greenIndex < this->MAX / 2; greenIndex += this->delta) {
                for (int32_t blueIndex = 0; blueIndex < this->MAX / 2; blueIndex += this->delta) {
                    Node_appendChild(node, ColorsView_getColorNode(this, document, redIndex, greenIndex, blueIndex));
                }
            }
        }
        for (int32_t greenIndex = this->MAX / 2; greenIndex < this->MAX; greenIndex += this->delta) {
            for (int32_t redIndex = 0; redIndex < this->MAX / 2; redIndex += this->delta) {
                for (int32_t blueIndex = 0; blueIndex < this->MAX / 2; blueIndex += this->delta) {
                    Node_appendChild(node, ColorsView_getColorNode(this, document, redIndex, greenIndex, blueIndex));
                }
            }
        }
        for (int32_t greenIndex = 0; greenIndex < this->MAX; greenIndex += 2 * this->delta) {
            for (int32_t redIndex = 0; redIndex < this->MAX; redIndex += 2 * this->delta) {
                for (int32_t blueIndex = 0; blueIndex < this->MAX; blueIndex += 2 * this->delta) {
                    Node_appendChild(node, ColorsView_getColorNode(this, document, redIndex, greenIndex, blueIndex));
                }
            }
        }
        return node;
}

