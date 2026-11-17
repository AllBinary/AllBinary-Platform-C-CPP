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
// package org.allbinary.business.advertisement.area

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraints.h"
#include "org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraintsInterface.h"
#include "org/allbinary/logic/control/contraints/size/TwoDimensionalConstraint.h"
#include "org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/business/advertisement/area/AdvertisementAreaConstraintsInterface.h"

typedef struct AdvertisementAreaConstraints AdvertisementAreaConstraints;
struct AdvertisementAreaConstraints {
    AdvertisementAreaConstraintsInterface AdvertisementAreaConstraintsInterface_interface;
    DisplayInBrowserContraintsInterface* displayInBrowserContraintsInterface;
    TwoDimensionalConstraintInterface* twoDimensionConstraintsInterface;
};


AdvertisementAreaConstraints* AdvertisementAreaConstraints_new(Document* document);

void AdvertisementAreaConstraints_init(AdvertisementAreaConstraints* this, Document* document);
void AdvertisementAreaConstraints_setDisplayInBrowserContraints(AdvertisementAreaConstraints* this, DisplayInBrowserContraintsInterface* displayInBrowserContraintsInterface);
void AdvertisementAreaConstraints_getTwoDimensionContraints(AdvertisementAreaConstraints* this, TwoDimensionalConstraintInterface* twoDimensionConstraintsInterface);
DisplayInBrowserContraintsInterface* AdvertisementAreaConstraints_getDisplayInBrowserContraints(AdvertisementAreaConstraints* this);
TwoDimensionalConstraintInterface* AdvertisementAreaConstraints_getTwoDimensionContraints(AdvertisementAreaConstraints* this);

static void AdvertisementAreaConstraints_initFields(AdvertisementAreaConstraints* this) {
    
    
}


void AdvertisementAreaConstraints_init(AdvertisementAreaConstraints* this, Document* document) {
    AdvertisementAreaConstraints_initFields(this);
        Node* node = DomSearchHelper_getNode(AdvertisementAreaData_getInstance()->NAME, Document_getChildNodes(document));
        this->displayInBrowserContraintsInterface = DisplayInBrowserContraints_new(node);
        this->twoDimensionConstraintsInterface = TwoDimensionalConstraint_new(node);
}

AdvertisementAreaConstraints* AdvertisementAreaConstraints_new(Document* document) {
    AdvertisementAreaConstraints* this = calloc(1, sizeof(AdvertisementAreaConstraints));
    AdvertisementAreaConstraints_init(this, document);
    return this;
}


void AdvertisementAreaConstraints_setDisplayInBrowserContraints(AdvertisementAreaConstraints* this, DisplayInBrowserContraintsInterface* displayInBrowserContraintsInterface) {
        this->displayInBrowserContraintsInterface = displayInBrowserContraintsInterface;
}


void AdvertisementAreaConstraints_getTwoDimensionContraints(AdvertisementAreaConstraints* this, TwoDimensionalConstraintInterface* twoDimensionConstraintsInterface) {
        this->twoDimensionConstraintsInterface = twoDimensionConstraintsInterface;
}


DisplayInBrowserContraintsInterface* AdvertisementAreaConstraints_getDisplayInBrowserContraints(AdvertisementAreaConstraints* this) {
        return this->displayInBrowserContraintsInterface;
}


// Java overloaded method: C needs a different name
TwoDimensionalConstraintInterface* AdvertisementAreaConstraints_getTwoDimensionContraints(AdvertisementAreaConstraints* this) {
        return this->twoDimensionConstraintsInterface;
}

