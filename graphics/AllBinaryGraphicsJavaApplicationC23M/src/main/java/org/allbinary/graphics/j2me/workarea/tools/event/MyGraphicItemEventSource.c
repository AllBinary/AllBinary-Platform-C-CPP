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
// package org.allbinary.graphics.j2me.workarea.tools.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/swing/tree/MutableTreeNode.h"

typedef struct MyGraphicItemEventSource MyGraphicItemEventSource;
struct MyGraphicItemEventSource {
    const char* command;
    MutableTreeNode* treeNode;
    double angle;
};


MyGraphicItemEventSource* MyGraphicItemEventSource_new(const char* command, MutableTreeNode* treeNode);

void MyGraphicItemEventSource_init(MyGraphicItemEventSource* this, const char* command, MutableTreeNode* treeNode);

MyGraphicItemEventSource* MyGraphicItemEventSource_new3(const char* command, double angle, MutableTreeNode* treeNode);
void MyGraphicItemEventSource_init3(MyGraphicItemEventSource* this, const char* command, double angle, MutableTreeNode* treeNode);
const char* MyGraphicItemEventSource_getCommand(MyGraphicItemEventSource* this);
MutableTreeNode* MyGraphicItemEventSource_getTreeNode(MyGraphicItemEventSource* this);
double MyGraphicItemEventSource_getAngle(MyGraphicItemEventSource* this);
void MyGraphicItemEventSource_setAngle(MyGraphicItemEventSource* this, double angle);

static void MyGraphicItemEventSource_initFields(MyGraphicItemEventSource* this) {
    
    
    this->angle = 0.0;
}


void MyGraphicItemEventSource_init(MyGraphicItemEventSource* this, const char* command, MutableTreeNode* treeNode) {
    MyGraphicItemEventSource_initFields(this);
        this->command = command;
        this->treeNode = treeNode;
}

MyGraphicItemEventSource* MyGraphicItemEventSource_new(const char* command, MutableTreeNode* treeNode) {
    MyGraphicItemEventSource* this = calloc(1, sizeof(MyGraphicItemEventSource));
    MyGraphicItemEventSource_init(this, command, treeNode);
    return this;
}


void MyGraphicItemEventSource_init3(MyGraphicItemEventSource* this, const char* command, double angle, MutableTreeNode* treeNode) {
    MyGraphicItemEventSource_initFields(this);
        this->command = command;
        this->treeNode = treeNode;
        MyGraphicItemEventSource_setAngle(this, angle);
}

MyGraphicItemEventSource* MyGraphicItemEventSource_new3(const char* command, double angle, MutableTreeNode* treeNode) {
    MyGraphicItemEventSource* this = calloc(1, sizeof(MyGraphicItemEventSource));
    MyGraphicItemEventSource_init3(this, command, angle, treeNode);
    return this;
}


const char* MyGraphicItemEventSource_getCommand(MyGraphicItemEventSource* this) {
        return this->command;
}


MutableTreeNode* MyGraphicItemEventSource_getTreeNode(MyGraphicItemEventSource* this) {
        return this->treeNode;
}


double MyGraphicItemEventSource_getAngle(MyGraphicItemEventSource* this) {
        return this->angle;
}


void MyGraphicItemEventSource_setAngle(MyGraphicItemEventSource* this, double angle) {
        this->angle = angle;
}

