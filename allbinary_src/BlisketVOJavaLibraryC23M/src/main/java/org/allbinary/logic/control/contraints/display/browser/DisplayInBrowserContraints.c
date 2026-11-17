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
// package org.allbinary.logic.control.contraints.display.browser

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraintsInterface.h"

typedef struct DisplayInBrowserContraints DisplayInBrowserContraints;
struct DisplayInBrowserContraints {
    DisplayInBrowserContraintsInterface DisplayInBrowserContraintsInterface_interface;
    bool frameable;
    bool mountable;
    bool quickFrameable;
    const char* mountedLink;
};


DisplayInBrowserContraints* DisplayInBrowserContraints_new(Node* node);

void DisplayInBrowserContraints_init(DisplayInBrowserContraints* this, Node* node);
bool DisplayInBrowserContraints_isMountable(DisplayInBrowserContraints* this);
void DisplayInBrowserContraints_setMountable(DisplayInBrowserContraints* this, bool mountable);
bool DisplayInBrowserContraints_isFrameable(DisplayInBrowserContraints* this);
void DisplayInBrowserContraints_setFrameable(DisplayInBrowserContraints* this, bool frameable);
bool DisplayInBrowserContraints_isQuickFrameable(DisplayInBrowserContraints* this);
void DisplayInBrowserContraints_setQuickFrameable(DisplayInBrowserContraints* this, bool quickFrameable);
const char* DisplayInBrowserContraints_getMountedLink(DisplayInBrowserContraints* this);
void DisplayInBrowserContraints_setMountedLink(DisplayInBrowserContraints* this, const char* mountedLink);

static void DisplayInBrowserContraints_initFields(DisplayInBrowserContraints* this) {
    this->frameable = false;
    this->mountable = false;
    this->quickFrameable = false;
    this->mountedLink = nullptr;
}


void DisplayInBrowserContraints_init(DisplayInBrowserContraints* this, Node* node) {
    DisplayInBrowserContraints_initFields(this);
}

DisplayInBrowserContraints* DisplayInBrowserContraints_new(Node* node) {
    DisplayInBrowserContraints* this = calloc(1, sizeof(DisplayInBrowserContraints));
    DisplayInBrowserContraints_init(this, node);
    return this;
}


bool DisplayInBrowserContraints_isMountable(DisplayInBrowserContraints* this) {
        return this->mountable;
}


void DisplayInBrowserContraints_setMountable(DisplayInBrowserContraints* this, bool mountable) {
        this->mountable = mountable;
}


bool DisplayInBrowserContraints_isFrameable(DisplayInBrowserContraints* this) {
        return this->frameable;
}


void DisplayInBrowserContraints_setFrameable(DisplayInBrowserContraints* this, bool frameable) {
        this->frameable = frameable;
}


bool DisplayInBrowserContraints_isQuickFrameable(DisplayInBrowserContraints* this) {
        return this->quickFrameable;
}


void DisplayInBrowserContraints_setQuickFrameable(DisplayInBrowserContraints* this, bool quickFrameable) {
        this->quickFrameable = quickFrameable;
}


const char* DisplayInBrowserContraints_getMountedLink(DisplayInBrowserContraints* this) {
        return this->mountedLink;
}


void DisplayInBrowserContraints_setMountedLink(DisplayInBrowserContraints* this, const char* mountedLink) {
        this->mountedLink = mountedLink;
}

