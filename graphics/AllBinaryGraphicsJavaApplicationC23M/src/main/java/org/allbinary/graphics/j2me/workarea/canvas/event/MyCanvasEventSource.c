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
// package org.allbinary.graphics.j2me.workarea.canvas.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/swing/tree/MutableTreeNode.h"

typedef struct MyCanvasEventSource MyCanvasEventSource;
struct MyCanvasEventSource {
    const char* command;
    MutableTreeNode* treeNode;
    double angle;
};


MyCanvasEventSource* MyCanvasEventSource_new(const char* command, MutableTreeNode* treeNode);

void MyCanvasEventSource_init(MyCanvasEventSource* this, const char* command, MutableTreeNode* treeNode);

MyCanvasEventSource* MyCanvasEventSource_new3(const char* command, double angle, MutableTreeNode* treeNode);
void MyCanvasEventSource_init3(MyCanvasEventSource* this, const char* command, double angle, MutableTreeNode* treeNode);
const char* MyCanvasEventSource_getCommand(MyCanvasEventSource* this);
MutableTreeNode* MyCanvasEventSource_getTreeNode(MyCanvasEventSource* this);
double MyCanvasEventSource_getAngle(MyCanvasEventSource* this);
void MyCanvasEventSource_setAngle(MyCanvasEventSource* this, double angle);

static void MyCanvasEventSource_initFields(MyCanvasEventSource* this) {
    
    
    this->angle = 0.0;
}


void MyCanvasEventSource_init(MyCanvasEventSource* this, const char* command, MutableTreeNode* treeNode) {
    MyCanvasEventSource_initFields(this);
        this->command = command;
        this->treeNode = treeNode;
}

MyCanvasEventSource* MyCanvasEventSource_new(const char* command, MutableTreeNode* treeNode) {
    MyCanvasEventSource* this = calloc(1, sizeof(MyCanvasEventSource));
    MyCanvasEventSource_init(this, command, treeNode);
    return this;
}


void MyCanvasEventSource_init3(MyCanvasEventSource* this, const char* command, double angle, MutableTreeNode* treeNode) {
    MyCanvasEventSource_initFields(this);
        this->command = command;
        this->treeNode = treeNode;
        MyCanvasEventSource_setAngle(this, angle);
}

MyCanvasEventSource* MyCanvasEventSource_new3(const char* command, double angle, MutableTreeNode* treeNode) {
    MyCanvasEventSource* this = calloc(1, sizeof(MyCanvasEventSource));
    MyCanvasEventSource_init3(this, command, angle, treeNode);
    return this;
}


const char* MyCanvasEventSource_getCommand(MyCanvasEventSource* this) {
        return this->command;
}


MutableTreeNode* MyCanvasEventSource_getTreeNode(MyCanvasEventSource* this) {
        return this->treeNode;
}


double MyCanvasEventSource_getAngle(MyCanvasEventSource* this) {
        return this->angle;
}


void MyCanvasEventSource_setAngle(MyCanvasEventSource* this, double angle) {
        this->angle = angle;
}

