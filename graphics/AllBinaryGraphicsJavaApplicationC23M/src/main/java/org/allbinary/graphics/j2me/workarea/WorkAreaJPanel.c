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
// package org.allbinary.graphics.j2me.workarea

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/EventListener.h"
// #include "java/util/HashMap.h"
// #include "java/util/LinkedList.h"
// #include "javax/swing/tree/MutableTreeNode.h"
#include "org/allbinary/dom/DomHelper.h"
#include "org/allbinary/graphics/j2me/StatusFactory.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/CanvasJPanel.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEvent.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventListener.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventService.h"
#include "org/allbinary/graphics/j2me/workarea/properties/PropertiesJPanel.h"
#include "org/allbinary/graphics/j2me/workarea/tools/ToolJPanel.h"
#include "org/allbinary/log/LOGGING.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/graphics/j2me/workarea/JPanel.h"
#include "org/allbinary/graphics/j2me/workarea/WorkAreaJPanelInterface.h"
#include "org/allbinary/graphics/j2me/workarea/Runnable.h"

typedef struct WorkAreaJPanel WorkAreaJPanel;
struct WorkAreaJPanel {
    JPanel base;
    WorkAreaJPanelInterface WorkAreaJPanelInterface_interface;
    MyCanvasEventListener MyCanvasEventListener_interface;
    EventListener EventListener_interface;
    Runnable Runnable_interface;
    LogUtil* logUtil;
    LinkedList* canvasJPanelList;
    JPanel* canvasHolderJPanel;
    const char* name;
    int32_t selectedFrame;
    PropertiesJPanel* propertiesJPanel;
    WorkAreaJTreeJPanel* workAreaJTreeJPanel;
    bool isPlaying;
    JPanel* innerJPanel;
};

static Document* WorkAreaJPanel_document = nullptr;

WorkAreaJPanel* WorkAreaJPanel_new(const char* name, Dimension* dimension, int32_t x, int32_t y);

void WorkAreaJPanel_init(WorkAreaJPanel* this, const char* name, Dimension* dimension, int32_t x, int32_t y);

WorkAreaJPanel* WorkAreaJPanel_new2(WorkAreaDom* workAreaDom, Dimension* dimension);
void WorkAreaJPanel_init2(WorkAreaJPanel* this, WorkAreaDom* workAreaDom, Dimension* dimension);
static void WorkAreaJPanel_initMyComponents(WorkAreaJPanel* this, Dimension* dimension);
static HashMap* WorkAreaJPanel_getCanvasHashMap(WorkAreaJPanel* this);
void WorkAreaJPanel_play(WorkAreaJPanel* this);
void WorkAreaJPanel_stop(WorkAreaJPanel* this);
bool WorkAreaJPanel_isPlaying(WorkAreaJPanel* this);
const char* WorkAreaJPanel_getName(WorkAreaJPanel* this);
void WorkAreaJPanel_setName(WorkAreaJPanel* this, const char* value);
void WorkAreaJPanel_disableCanvas(WorkAreaJPanel* this);
void WorkAreaJPanel_enableCanvas(WorkAreaJPanel* this);
void WorkAreaJPanel_deselect(WorkAreaJPanel* this);
void WorkAreaJPanel_select(WorkAreaJPanel* this);
void WorkAreaJPanel_changeZoom(WorkAreaJPanel* this, int32_t factor);
CanvasJPanel* WorkAreaJPanel_getCurrentFrame(WorkAreaJPanel* this);
static void WorkAreaJPanel_initDuplicate(WorkAreaJPanel* this, CanvasJPanel* newCanvasJPanel);
static void WorkAreaJPanel_duplicate(WorkAreaJPanel* this, MutableTreeNode* treeNode);
void WorkAreaJPanel_autoRotate(WorkAreaJPanel* this, int32_t increments, int32_t totalAngle);
void WorkAreaJPanel_explodeAll(WorkAreaJPanel* this);
void WorkAreaJPanel_autoExplode(WorkAreaJPanel* this, int32_t numberOfFrames, int32_t explodeType);
void WorkAreaJPanel_autoMirror(WorkAreaJPanel* this);
static void WorkAreaJPanel_select(WorkAreaJPanel* this, int32_t index);
static void WorkAreaJPanel_select(WorkAreaJPanel* this, MutableTreeNode* treeNode);
Document* WorkAreaJPanel_getDocument(void);
Document* WorkAreaJPanel_toDocument(WorkAreaJPanel* this);
static void WorkAreaJPanel_initComponents(WorkAreaJPanel* this);
static void WorkAreaJPanel_innerJPanelKeyReleased(WorkAreaJPanel* this, KeyEvent* evt);
static void WorkAreaJPanel_innerJPanelKeyPressed(WorkAreaJPanel* this, KeyEvent* evt);
static void WorkAreaJPanel_innerJPanelKeyTyped(WorkAreaJPanel* this, KeyEvent* evt);
void WorkAreaJPanel_keyPressed(WorkAreaJPanel* this, KeyEvent* keyEvent);
void WorkAreaJPanel_keyReleased(WorkAreaJPanel* this, KeyEvent* keyEvent);
void WorkAreaJPanel_keyTyped(WorkAreaJPanel* this, KeyEvent* keyEvent);
void WorkAreaJPanel_delete(WorkAreaJPanel* this, MyCanvasEvent* evt);
void WorkAreaJPanel_duplicate(WorkAreaJPanel* this, MyCanvasEvent* evt);
void WorkAreaJPanel_select(WorkAreaJPanel* this, MyCanvasEvent* evt);
void WorkAreaJPanel_rotate(WorkAreaJPanel* this, MyCanvasEvent* evt);
void WorkAreaJPanel_explode(WorkAreaJPanel* this, MyCanvasEvent* evt);
void WorkAreaJPanel_autoExplode(WorkAreaJPanel* this, MyCanvasEvent* evt);
void WorkAreaJPanel_center(WorkAreaJPanel* this);
void WorkAreaJPanel_center(WorkAreaJPanel* this, MyCanvasEvent* evt);
void WorkAreaJPanel_run(WorkAreaJPanel* this);

static void WorkAreaJPanel_initFields(WorkAreaJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    this->canvasJPanelList = nullptr;
    this->canvasHolderJPanel = nullptr;
    this->name = nullptr;
    this->selectedFrame = 0;
    this->propertiesJPanel = nullptr;
    this->workAreaJTreeJPanel = nullptr;
    this->isPlaying = false;
    this->innerJPanel = nullptr;
}


void WorkAreaJPanel_init(WorkAreaJPanel* this, const char* name, Dimension* dimension, int32_t x, int32_t y) {
    JPanel_init(&this->base);
    WorkAreaJPanel_initFields(this);
        JAVA_TRY {
            WorkAreaJPanel_initComponents(this);
            this->name = name;
            WorkAreaJPanel_initMyComponents(this, dimension);
            this->workAreaJTreeJPanel = WorkAreaJTreeJPanel_new(this->name);
            CanvasJPanel* canvasJPanel = CanvasJPanel_new(this->workAreaJTreeJPanel, WorkAreaJPanel_getSize(this), x, y);
            LinkedList_add(this->canvasJPanelList, canvasJPanel);
            this->selectedFrame = 0;
            PropertiesJPanel_set(this->propertiesJPanel, this->workAreaJTreeJPanel);
            JPanel_add(this->canvasHolderJPanel, ((Component*) canvasJPanel));
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}

WorkAreaJPanel* WorkAreaJPanel_new(const char* name, Dimension* dimension, int32_t x, int32_t y) {
    WorkAreaJPanel* this = calloc(1, sizeof(WorkAreaJPanel));
    WorkAreaJPanel_init(this, name, dimension, x, y);
    return this;
}


void WorkAreaJPanel_init2(WorkAreaJPanel* this, WorkAreaDom* workAreaDom, Dimension* dimension) {
    JPanel_init(&this->base);
    WorkAreaJPanel_initFields(this);
        JAVA_TRY {
            WorkAreaJPanel_initComponents(this);
            this->name = WorkAreaDom_getName(workAreaDom);
            WorkAreaJPanel_initMyComponents(this, dimension);
            BasicArrayList* canvasNodeList = WorkAreaDom_getCanvasNodes(workAreaDom);
            int32_t numberOfFrames = BasicArrayList_size(canvasNodeList);
            for (int32_t index = 0; index < numberOfFrames; index++) {
                Node* node = ((Node*) BasicArrayList_get(canvasNodeList, index));
                CanvasJPanel* canvasJPanel = CanvasJPanel_new(this->workAreaJTreeJPanel, WorkAreaJPanel_getSize(this), CanvasDom_new(node));
                LinkedList_add(this->canvasJPanelList, canvasJPanel);
            }
            this->selectedFrame = 0;
            JPanel_add(this->canvasHolderJPanel, ((Component*) WorkAreaJPanel_getCurrentFrame(this)));
            PropertiesJPanel_set(this->propertiesJPanel, this->workAreaJTreeJPanel);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(JPanel_LOGGING, contains, JPanel_LOGGING->LOADINGERROR)) {
                LogUtil_put(this->logUtil, "Constructor Error", this, "WorkAreaJPanel", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

WorkAreaJPanel* WorkAreaJPanel_new2(WorkAreaDom* workAreaDom, Dimension* dimension) {
    WorkAreaJPanel* this = calloc(1, sizeof(WorkAreaJPanel));
    WorkAreaJPanel_init2(this, workAreaDom, dimension);
    return this;
}


static void WorkAreaJPanel_initMyComponents(WorkAreaJPanel* this, Dimension* dimension) {
        this->workAreaJTreeJPanel = WorkAreaJTreeJPanel_new(this->name);
        this->canvasHolderJPanel = JPanel_new();
        JPanel_setSize(this->canvasHolderJPanel, dimension);
        JPanel_setLayout(this->canvasHolderJPanel, GridLayout_new(1, 1));
        WorkAreaJPanel_setSize(this, dimension);
        this->canvasJPanelList = LinkedList_new();
        GridBagLayout* gridBagLayout = GridBagLayout_new();
        GridBagConstraints* gridBagConstraints = GridBagConstraints_new();
        JPanel_setLayout(this->innerJPanel, gridBagLayout);
        gridBagConstraints->gridx = 0;
        gridBagConstraints->gridy = 0;
        gridBagConstraints->gridwidth = 1;
        gridBagConstraints->fill = java_awt->GridBagConstraints->BOTH;
        gridBagConstraints->weightx = .05;
        gridBagConstraints->weighty = .05;
        ToolJPanel* toolJPanel = ToolJPanel_new();
        GridBagLayout_setConstraints(gridBagLayout, toolJPanel, gridBagConstraints);
        JPanel_add(this->innerJPanel, toolJPanel);
        gridBagConstraints = GridBagConstraints_new();
        gridBagConstraints->gridx = 1;
        gridBagConstraints->gridy = 0;
        gridBagConstraints->gridwidth = 6;
        gridBagConstraints->fill = java_awt->GridBagConstraints->BOTH;
        gridBagConstraints->weightx = 1;
        gridBagConstraints->weighty = 1;
        GridBagLayout_setConstraints(gridBagLayout, this->canvasHolderJPanel, gridBagConstraints);
        JPanel_add(this->innerJPanel, this->canvasHolderJPanel);
        gridBagConstraints = GridBagConstraints_new();
        gridBagConstraints->gridx = 8;
        gridBagConstraints->gridy = 0;
        gridBagConstraints->gridwidth = java_awt->GridBagConstraints->REMAINDER;
        gridBagConstraints->fill = java_awt->GridBagConstraints->BOTH;
        gridBagConstraints->weightx = .1;
        gridBagConstraints->weighty = .1;
        this->propertiesJPanel = PropertiesJPanel_new();
        GridBagLayout_setConstraints(gridBagLayout, this->propertiesJPanel, gridBagConstraints);
        JPanel_add(this->innerJPanel, this->propertiesJPanel);
        MyCanvasEventService_addListener(((MyCanvasEventListener*) this));
}


static HashMap* WorkAreaJPanel_getCanvasHashMap(WorkAreaJPanel* this) {
        HashMap* canvasJPanelHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        int32_t size = LinkedList_size(this->canvasJPanelList);
        for (int32_t index = 0; index < size; index++) {
            CanvasJPanel* canvasJPanel = ((CanvasJPanel*) LinkedList_get(this->canvasJPanelList, index));
            HashMap_put(canvasJPanelHashMap, CanvasJPanel_getTreeNode(canvasJPanel), index);
        }
        return canvasJPanelHashMap;
}


// synchronized
void WorkAreaJPanel_play(WorkAreaJPanel* this) {
        this->isPlaying = true;
}


// synchronized
void WorkAreaJPanel_stop(WorkAreaJPanel* this) {
        this->isPlaying = false;
}


// synchronized
bool WorkAreaJPanel_isPlaying(WorkAreaJPanel* this) {
        return this->isPlaying;
}


const char* WorkAreaJPanel_getName(WorkAreaJPanel* this) {
        return this->name;
}


void WorkAreaJPanel_setName(WorkAreaJPanel* this, const char* value) {
        this->name = value;
}


void WorkAreaJPanel_disableCanvas(WorkAreaJPanel* this) {
        JPanel_removeAll(this->canvasHolderJPanel);
}


void WorkAreaJPanel_enableCanvas(WorkAreaJPanel* this) {
        JPanel_add(this->canvasHolderJPanel, ((Component*) WorkAreaJPanel_getCurrentFrame(this)));
}


void WorkAreaJPanel_deselect(WorkAreaJPanel* this) {
        JPanel_setVisible((&this->base), false);
}


void WorkAreaJPanel_select(WorkAreaJPanel* this) {
        JPanel_setVisible((&this->base), true);
        if (JPanel_getComponentCount(this->canvasHolderJPanel) == 1) {
            Component* component = JPanel_getComponent(this->canvasHolderJPanel, 0);
            if (component != nullptr) {
                Component_repaint(component);
            }
        }
}


void WorkAreaJPanel_changeZoom(WorkAreaJPanel* this, int32_t factor) {
        int32_t size = LinkedList_size(this->canvasJPanelList);
        for (int32_t index = 0; index < size; index++) {
            CanvasJPanel* canvasJPanel = ((CanvasJPanel*) LinkedList_get(this->canvasJPanelList, index));
            JAVA_CALL(CanvasJPanel_getGrid(canvasJPanel), setZoom, JAVA_CALL(CanvasJPanel_getGrid(canvasJPanel), getZoom) + factor);
        }
}


CanvasJPanel* WorkAreaJPanel_getCurrentFrame(WorkAreaJPanel* this) {
        return ((CanvasJPanel*) LinkedList_get(this->canvasJPanelList, this->selectedFrame));
}


static void WorkAreaJPanel_initDuplicate(WorkAreaJPanel* this, CanvasJPanel* newCanvasJPanel) {
        if (newCanvasJPanel != nullptr) {
            LinkedList_add(this->canvasJPanelList, newCanvasJPanel);
            WorkAreaJPanel_select(this, LinkedList_size(this->canvasJPanelList) - 1);
        }
}


// throws Exception
static void WorkAreaJPanel_duplicate(WorkAreaJPanel* this, MutableTreeNode* treeNode) {
        HashMap* canvasJPanelHashMap = WorkAreaJPanel_getCanvasHashMap(this);
        if (HashMap_containsKey(canvasJPanelHashMap, treeNode)) {
            int32_t frameInteger = ((int32_t) HashMap_get(canvasJPanelHashMap, treeNode));
            CanvasJPanel* canvasJPanel = ((CanvasJPanel*) LinkedList_get(this->canvasJPanelList, Integer_intValue(frameInteger)));
            WorkAreaJPanel_initDuplicate(this, CanvasJPanel_duplicate(canvasJPanel));
        }
}


// throws Exception
void WorkAreaJPanel_autoRotate(WorkAreaJPanel* this, int32_t increments, int32_t totalAngle) {
        int32_t incrementAngle = (totalAngle / increments);
        for (int32_t index = 1; index < increments; index++) {
            CanvasJPanel* canvasJPanel = ((CanvasJPanel*) WorkAreaJPanel_getCurrentFrame(this));
            CanvasJPanel* newCanvasJPanel = CanvasJPanel_duplicate(canvasJPanel);
            CanvasJPanel_setAngle(newCanvasJPanel, incrementAngle * index);
            WorkAreaJPanel_initDuplicate(this, newCanvasJPanel);
        }
}


void WorkAreaJPanel_explodeAll(WorkAreaJPanel* this) {
        CanvasJPanel* canvasJPanel = ((CanvasJPanel*) WorkAreaJPanel_getCurrentFrame(this));
        CanvasJPanel_explodeAll(canvasJPanel);
}


// throws Exception
void WorkAreaJPanel_autoExplode(WorkAreaJPanel* this, int32_t numberOfFrames, int32_t explodeType) {
        for (int32_t index = 1; index < numberOfFrames; index++) {
            CanvasJPanel* canvasJPanel = ((CanvasJPanel*) WorkAreaJPanel_getCurrentFrame(this));
            CanvasJPanel* newCanvasJPanel = CanvasJPanel_duplicate(canvasJPanel);
            CanvasJPanel_explode(newCanvasJPanel, index + 1, explodeType);
            WorkAreaJPanel_initDuplicate(this, newCanvasJPanel);
        }
}


// throws Exception
void WorkAreaJPanel_autoMirror(WorkAreaJPanel* this) {
        CanvasJPanel* canvasJPanel = ((CanvasJPanel*) WorkAreaJPanel_getCurrentFrame(this));
        CanvasJPanel* newCanvasJPanel = CanvasJPanel_duplicate(canvasJPanel);
        CanvasJPanel_mirror(newCanvasJPanel);
        WorkAreaJPanel_initDuplicate(this, newCanvasJPanel);
}


// Java overloaded method: C needs a different name
// synchronized
static void WorkAreaJPanel_select(WorkAreaJPanel* this, int32_t index) {
        if (index < LinkedList_size(this->canvasJPanelList)) {
            CanvasJPanel* canvasJPanel = ((CanvasJPanel*) LinkedList_get(this->canvasJPanelList, index));
            if (canvasJPanel != nullptr) {
                JPanel_removeAll(this->canvasHolderJPanel);
                JPanel_add(this->canvasHolderJPanel, canvasJPanel);
                this->selectedFrame = index;
                CanvasJPanel_changed(canvasJPanel);
                JPanel_repaint(this->canvasHolderJPanel);
                CanvasJPanel_repaint(canvasJPanel);
            }
        }
}


// Java overloaded method: C needs a different name
static void WorkAreaJPanel_select(WorkAreaJPanel* this, MutableTreeNode* treeNode) {
        HashMap* canvasJPanelHashMap = WorkAreaJPanel_getCanvasHashMap(this);
        int32_t frameInteger = ((int32_t) HashMap_get(canvasJPanelHashMap, treeNode));
        if (frameInteger != nullptr) {
            WorkAreaJPanel_select(this, Integer_intValue(frameInteger));
        }
}


Document* WorkAreaJPanel_getDocument(void) {
        return WorkAreaJPanel_document;
}


// throws Exception
Document* WorkAreaJPanel_toDocument(WorkAreaJPanel* this) {
        WorkAreaJPanel_document = DomHelper_createDocument(DomHelper_getInstance());
        Node* workAreaNode = JAVA_CALL(WorkAreaJPanel_document, createElement, WorkAreaDom_WORKAREA);
        Node* nameNode = JAVA_CALL(WorkAreaJPanel_document, createElement, WorkAreaDom_NAME);
        Node* nameTextNode = JAVA_CALL(WorkAreaJPanel_document, createTextNode, this->name);
        Node_appendChild(nameNode, nameTextNode);
        Node* framesNode = JAVA_CALL(WorkAreaJPanel_document, createElement, WorkAreaDom_FRAMES);
        int32_t size = LinkedList_size(this->canvasJPanelList);
        for (int32_t index = 0; index < size; index++) {
            CanvasJPanel* canvasJPanel = ((CanvasJPanel*) LinkedList_get(this->canvasJPanelList, index));
            Node_appendChild(framesNode, CanvasJPanel_toDom(canvasJPanel));
        }
        Node_appendChild(workAreaNode, nameNode);
        Node_appendChild(workAreaNode, framesNode);
        JAVA_CALL(WorkAreaJPanel_document, appendChild, workAreaNode);
        return WorkAreaJPanel_document;
}


static void WorkAreaJPanel_initComponents(WorkAreaJPanel* this) {
        this->innerJPanel = JPanel_new();
        WorkAreaJPanel_setLayout(this, GridLayout_new(1, 1));
        JPanel_addKeyListener(this->innerJPanel, KeyAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void WorkAreaJPanel_keyTyped(WorkAreaJPanel* this, KeyEvent* evt) {
                WorkAreaJPanel_innerJPanelKeyTyped(this, evt);
        }
            

        void WorkAreaJPanel_keyPressed(WorkAreaJPanel* this, KeyEvent* evt) {
                WorkAreaJPanel_innerJPanelKeyPressed(this, evt);
        }
            

        void WorkAreaJPanel_keyReleased(WorkAreaJPanel* this, KeyEvent* evt) {
                WorkAreaJPanel_innerJPanelKeyReleased(this, evt);
        }
#endif
);
        WorkAreaJPanel_add(this, this->innerJPanel);
}


static void WorkAreaJPanel_innerJPanelKeyReleased(WorkAreaJPanel* this, KeyEvent* evt) {
        StatusFactory_setStatus(StatusFactory_getInstance(), "Key Pressed1");
}


static void WorkAreaJPanel_innerJPanelKeyPressed(WorkAreaJPanel* this, KeyEvent* evt) {
        StatusFactory_setStatus(StatusFactory_getInstance(), "Key Pressed2");
}


static void WorkAreaJPanel_innerJPanelKeyTyped(WorkAreaJPanel* this, KeyEvent* evt) {
        StatusFactory_setStatus(StatusFactory_getInstance(), "Key Pressed3");
}


void WorkAreaJPanel_keyPressed(WorkAreaJPanel* this, KeyEvent* keyEvent) {
        JAVA_CALL(WorkAreaJPanel_getCurrentFrame(this), keyPressed, keyEvent);
}


void WorkAreaJPanel_keyReleased(WorkAreaJPanel* this, KeyEvent* keyEvent) {
}


void WorkAreaJPanel_keyTyped(WorkAreaJPanel* this, KeyEvent* keyEvent) {
}


void WorkAreaJPanel_delete(WorkAreaJPanel* this, MyCanvasEvent* evt) {
        HashMap* canvasJPanelHashMap = WorkAreaJPanel_getCanvasHashMap(this);
        if (HashMap_containsKey(canvasJPanelHashMap, KeyEvent_getTreeNode(evt))) {
            JPanel_removeAll(this->canvasHolderJPanel);
            int32_t frameInt = ((int32_t) HashMap_get(canvasJPanelHashMap, KeyEvent_getTreeNode(evt)));
            LinkedList_remove(this->canvasJPanelList, Integer_intValue(frameInt));
            WorkAreaJPanel_select(this, Integer_intValue(frameInt));
        }
}


// throws Exception
// Java overloaded method: C needs a different name
void WorkAreaJPanel_duplicate(WorkAreaJPanel* this, MyCanvasEvent* evt) {
        WorkAreaJPanel_duplicate(this, KeyEvent_getTreeNode(evt));
}


// Java overloaded method: C needs a different name
void WorkAreaJPanel_select(WorkAreaJPanel* this, MyCanvasEvent* evt) {
        WorkAreaJPanel_select(this, KeyEvent_getTreeNode(evt));
        StatusFactory_setStatus(StatusFactory_getInstance(), "Frame Selected");
}


void WorkAreaJPanel_rotate(WorkAreaJPanel* this, MyCanvasEvent* evt) {
        HashMap* canvasJPanelHashMap = WorkAreaJPanel_getCanvasHashMap(this);
        MutableTreeNode* treeNode = KeyEvent_getTreeNode(evt);
        int32_t frameInt = ((int32_t) HashMap_get(canvasJPanelHashMap, KeyEvent_getTreeNode(evt)));
        CanvasJPanel* canvasJPanel = ((CanvasJPanel*) LinkedList_get(this->canvasJPanelList, Integer_intValue(frameInt)));
        if (canvasJPanel != nullptr) {
            CanvasJPanel_addAngle(canvasJPanel, KeyEvent_getAngle(evt));
            WorkAreaJPanel_select(this, Integer_intValue(frameInt));
        }
        StatusFactory_setStatus(StatusFactory_getInstance(), "Canvas Rotated");
}


void WorkAreaJPanel_explode(WorkAreaJPanel* this, MyCanvasEvent* evt) {
        WorkAreaJPanel_explodeAll(this);
}


// throws Exception
// Java overloaded method: C needs a different name
void WorkAreaJPanel_autoExplode(WorkAreaJPanel* this, MyCanvasEvent* evt) {
        WorkAreaJPanel_autoExplode(this, 10, 0);
}


// throws Exception
void WorkAreaJPanel_center(WorkAreaJPanel* this) {
        CanvasJPanel* canvasJPanel = ((CanvasJPanel*) WorkAreaJPanel_getCurrentFrame(this));
        CanvasJPanel_center(canvasJPanel);
}


// throws Exception
// Java overloaded method: C needs a different name
void WorkAreaJPanel_center(WorkAreaJPanel* this, MyCanvasEvent* evt) {
        WorkAreaJPanel_center(this);
}


void WorkAreaJPanel_run(WorkAreaJPanel* this) {
        JAVA_TRY {
            while (true) {
                if (WorkAreaJPanel_isPlaying(this)) {
                    int32_t size = LinkedList_size(this->canvasJPanelList);
                    for (int32_t index = 0; index < size; index++) {
                        if (!WorkAreaJPanel_isPlaying(this)) {
                            break;
                        }
                        WorkAreaJPanel_select(this, index);
                        java_sleep(100);
                    }
                } else {
                    java_sleep(500);
                }
                java_sleep(250);
            }
        } JAVA_CATCH(Exception, e) {
        } JAVA_END_TRY;
}

