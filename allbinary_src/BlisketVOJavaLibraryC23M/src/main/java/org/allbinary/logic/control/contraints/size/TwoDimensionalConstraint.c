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
// package org.allbinary.logic.control.contraints.size

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h"

typedef struct TwoDimensionalConstraint TwoDimensionalConstraint;
struct TwoDimensionalConstraint {
    TwoDimensionalConstraintInterface TwoDimensionalConstraintInterface_interface;
    SizeConstraintInterface* widthSizeConstraintInterface;
    SizeConstraintInterface* heightSizeConstraintInterface;
};


TwoDimensionalConstraint* TwoDimensionalConstraint_new(Node* node);

void TwoDimensionalConstraint_init(TwoDimensionalConstraint* this, Node* node);
SizeConstraintInterface* TwoDimensionalConstraint_getHeight(TwoDimensionalConstraint* this);
SizeConstraintInterface* TwoDimensionalConstraint_getWidth(TwoDimensionalConstraint* this);
void TwoDimensionalConstraint_setHeight(TwoDimensionalConstraint* this, SizeConstraintInterface* heightSizeConstraintInterface);
void TwoDimensionalConstraint_setWidth(TwoDimensionalConstraint* this, SizeConstraintInterface* widthSizeConstraintInterface);

static void TwoDimensionalConstraint_initFields(TwoDimensionalConstraint* this) {
    this->widthSizeConstraintInterface = nullptr;
    this->heightSizeConstraintInterface = nullptr;
}


void TwoDimensionalConstraint_init(TwoDimensionalConstraint* this, Node* node) {
    TwoDimensionalConstraint_initFields(this);
}

TwoDimensionalConstraint* TwoDimensionalConstraint_new(Node* node) {
    TwoDimensionalConstraint* this = calloc(1, sizeof(TwoDimensionalConstraint));
    TwoDimensionalConstraint_init(this, node);
    return this;
}


SizeConstraintInterface* TwoDimensionalConstraint_getHeight(TwoDimensionalConstraint* this) {
        return this->heightSizeConstraintInterface;
}


SizeConstraintInterface* TwoDimensionalConstraint_getWidth(TwoDimensionalConstraint* this) {
        return this->widthSizeConstraintInterface;
}


void TwoDimensionalConstraint_setHeight(TwoDimensionalConstraint* this, SizeConstraintInterface* heightSizeConstraintInterface) {
        this->heightSizeConstraintInterface = heightSizeConstraintInterface;
}


void TwoDimensionalConstraint_setWidth(TwoDimensionalConstraint* this, SizeConstraintInterface* widthSizeConstraintInterface) {
        this->widthSizeConstraintInterface = widthSizeConstraintInterface;
}

