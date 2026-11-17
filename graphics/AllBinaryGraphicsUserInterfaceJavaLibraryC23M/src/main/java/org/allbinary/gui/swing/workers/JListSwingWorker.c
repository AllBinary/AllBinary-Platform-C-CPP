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
// package org.allbinary.gui.swing.workers

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/gui/swing/workers/SwingWorker.h"

typedef struct JListSwingWorker JListSwingWorker;
struct JListSwingWorker {
    SwingWorker base;
    JList* jList;
    ListModel* listModel;
};


JListSwingWorker* JListSwingWorker_new(JList* jList, ListModel* listModel);

void JListSwingWorker_init(JListSwingWorker* this, JList* jList, ListModel* listModel);
Any* JListSwingWorker_doInBackground(JListSwingWorker* this);
void JListSwingWorker_done(JListSwingWorker* this);
static JList* JListSwingWorker_getJList(JListSwingWorker* this);
static void JListSwingWorker_setJList(JListSwingWorker* this, JList* jList);
static ListModel* JListSwingWorker_getListModel(JListSwingWorker* this);
static void JListSwingWorker_setListModel(JListSwingWorker* this, ListModel* listModel);

static void JListSwingWorker_initFields(JListSwingWorker* this) {
    this->jList = nullptr;
    this->listModel = nullptr;
}


void JListSwingWorker_init(JListSwingWorker* this, JList* jList, ListModel* listModel) {
    SwingWorker_init(&this->base);
    JListSwingWorker_initFields(this);
        JListSwingWorker_setJList(this, jList);
        JListSwingWorker_setListModel(this, listModel);
}

JListSwingWorker* JListSwingWorker_new(JList* jList, ListModel* listModel) {
    JListSwingWorker* this = calloc(1, sizeof(JListSwingWorker));
    JListSwingWorker_init(this, jList, listModel);
    return this;
}


Any* JListSwingWorker_doInBackground(JListSwingWorker* this) {
        return nullptr;
}


void JListSwingWorker_done(JListSwingWorker* this) {
        JAVA_CALL(JListSwingWorker_getJList(this), setModel, JListSwingWorker_getListModel(this));
}


static JList* JListSwingWorker_getJList(JListSwingWorker* this) {
        return this->jList;
}


static void JListSwingWorker_setJList(JListSwingWorker* this, JList* jList) {
        this->jList = jList;
}


static ListModel* JListSwingWorker_getListModel(JListSwingWorker* this) {
        return this->listModel;
}


static void JListSwingWorker_setListModel(JListSwingWorker* this, ListModel* listModel) {
        this->listModel = listModel;
}

