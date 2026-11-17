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
// #include "javax/swing/tree/DefaultMutableTreeNode.h"
// #include "javax/swing/tree/MutableTreeNode.h"
// #include "javax/swing/tree/TreePath.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/CanvasTreeLabel.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEvent.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventService.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventSource.h"
#include "org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEvent.h"
#include "org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventService.h"
#include "org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventSource.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/graphics/j2me/workarea/JPanel.h"

typedef struct WorkAreaJTreeJPanel WorkAreaJTreeJPanel;
struct WorkAreaJTreeJPanel {
    JPanel base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    DefaultMutableTreeNode* rootTreeNode;
    JTree* workAreaJTree;
    BasicArrayList* highlightedBasicArrayList;
    JMenuItem* copyJMenuItem;
    JMenuItem* deleteJMenuItem;
    JPopupMenu* itemJPopupMenu;
    JScrollPane* itemJScrollPane1;
    JMenuItem* rotateJMenuItem;
    JPanel* workAreaPropertiesJPanel;
};


WorkAreaJTreeJPanel* WorkAreaJTreeJPanel_new(const char* workAreaName);

void WorkAreaJTreeJPanel_init(WorkAreaJTreeJPanel* this, const char* workAreaName);
void WorkAreaJTreeJPanel_add(WorkAreaJTreeJPanel* this, MutableTreeNode* treeNode);
void WorkAreaJTreeJPanel_updateTree(WorkAreaJTreeJPanel* this);
BasicArrayList* WorkAreaJTreeJPanel_getNode(WorkAreaJTreeJPanel* this, TreePath** treePathArray);
DefaultMutableTreeNode* WorkAreaJTreeJPanel_getNode(WorkAreaJTreeJPanel* this, TreePath* treePath);
void WorkAreaJTreeJPanel_deselectAll(WorkAreaJTreeJPanel* this);
void WorkAreaJTreeJPanel_selectGraphicItem(WorkAreaJTreeJPanel* this, DefaultMutableTreeNode* node);
void WorkAreaJTreeJPanel_removeGraphicItem(WorkAreaJTreeJPanel* this, DefaultMutableTreeNode* node);
void WorkAreaJTreeJPanel_removeCanvas(WorkAreaJTreeJPanel* this, DefaultMutableTreeNode* node);
void WorkAreaJTreeJPanel_remove(WorkAreaJTreeJPanel* this, TreePath* treePath);
static void WorkAreaJTreeJPanel_copy(WorkAreaJTreeJPanel* this);
static void WorkAreaJTreeJPanel_copy(WorkAreaJTreeJPanel* this, TreePath* treePath);
void WorkAreaJTreeJPanel_rotate(WorkAreaJTreeJPanel* this, TreePath* treePath, double angle);
MutableTreeNode* WorkAreaJTreeJPanel_getRootTreeNode(WorkAreaJTreeJPanel* this);
void WorkAreaJTreeJPanel_expand(WorkAreaJTreeJPanel* this);
void WorkAreaJTreeJPanel_expand(WorkAreaJTreeJPanel* this, TreePath* treePath);
static void WorkAreaJTreeJPanel_initComponents(WorkAreaJTreeJPanel* this);
static void WorkAreaJTreeJPanel_rotateJMenuItemMousePressed(WorkAreaJTreeJPanel* this, MouseEvent* evt);
static void WorkAreaJTreeJPanel_workAreaJTreeMousePressed(WorkAreaJTreeJPanel* this, MouseEvent* evt);
static void WorkAreaJTreeJPanel_itemJPopupMenuPopupMenuWillBecomeInvisible(WorkAreaJTreeJPanel* this, PopupMenuEvent* evt);
static void WorkAreaJTreeJPanel_itemJPopupMenuPopupMenuWillBecomeVisible(WorkAreaJTreeJPanel* this, PopupMenuEvent* evt);
static void WorkAreaJTreeJPanel_copyJMenuItemMousePressed(WorkAreaJTreeJPanel* this, MouseEvent* evt);
static void WorkAreaJTreeJPanel_deleteJMenuItemMousePressed(WorkAreaJTreeJPanel* this, MouseEvent* evt);
static void WorkAreaJTreeJPanel_workAreaPropertiesJPanelMousePressed(WorkAreaJTreeJPanel* this, MouseEvent* evt);

static void WorkAreaJTreeJPanel_initFields(WorkAreaJTreeJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->workAreaJTree = nullptr;
    
    this->copyJMenuItem = nullptr;
    this->deleteJMenuItem = nullptr;
    this->itemJPopupMenu = nullptr;
    this->itemJScrollPane1 = nullptr;
    this->rotateJMenuItem = nullptr;
    this->workAreaPropertiesJPanel = nullptr;
}


void WorkAreaJTreeJPanel_init(WorkAreaJTreeJPanel* this, const char* workAreaName) {
    JPanel_init(&this->base);
    WorkAreaJTreeJPanel_initFields(this);
        WorkAreaJTreeJPanel_initComponents(this);
        this->rootTreeNode = DefaultMutableTreeNode_new(workAreaName);
        JPanel_removeAll(this->workAreaPropertiesJPanel);
        WorkAreaJTreeJPanel_updateTree(this);
        this->highlightedBasicArrayList = BasicArrayListD_new();
}

WorkAreaJTreeJPanel* WorkAreaJTreeJPanel_new(const char* workAreaName) {
    WorkAreaJTreeJPanel* this = calloc(1, sizeof(WorkAreaJTreeJPanel));
    WorkAreaJTreeJPanel_init(this, workAreaName);
    return this;
}


void WorkAreaJTreeJPanel_add(WorkAreaJTreeJPanel* this, MutableTreeNode* treeNode) {
        DefaultMutableTreeNode_add(this->rootTreeNode, treeNode);
}


void WorkAreaJTreeJPanel_updateTree(WorkAreaJTreeJPanel* this) {
        this->workAreaJTree = JTree_new(this->rootTreeNode);
        JTree_addMouseListener(this->workAreaJTree, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void WorkAreaJTreeJPanel_mousePressed(WorkAreaJTreeJPanel* this, MouseEvent* evt) {
                WorkAreaJTreeJPanel_workAreaJTreeMousePressed(this, evt);
        }
#endif
);
        JPanel_removeAll(this->workAreaPropertiesJPanel);
        JPanel_add(this->workAreaPropertiesJPanel, this->workAreaJTree);
}


BasicArrayList* WorkAreaJTreeJPanel_getNode(WorkAreaJTreeJPanel* this, TreePath** treePathArray) {
        BasicArrayList* basicArrayList = BasicArrayListD_new();
        if (treePathArray != nullptr) {
            for (int32_t index = 0; index < java_array_length(treePathArray); index++) {
                BasicArrayList_add(basicArrayList, WorkAreaJTreeJPanel_getNode(this, treePathArray[index]));
            }
        }
        return basicArrayList;
}


// Java overloaded method: C needs a different name
DefaultMutableTreeNode* WorkAreaJTreeJPanel_getNode(WorkAreaJTreeJPanel* this, TreePath* treePath) {
        if (treePath != nullptr) {
            Any** obj = TreePath_getPath(treePath);
            if (obj != nullptr) {
                DefaultMutableTreeNode* node = ((DefaultMutableTreeNode*) obj[java_array_length(obj) - 1]);
                return node;
            }
        }
        return nullptr;
}


// throws Exception
void WorkAreaJTreeJPanel_deselectAll(WorkAreaJTreeJPanel* this) {
        int32_t size = BasicArrayList_size(this->highlightedBasicArrayList);
        LogUtil_putF(this->logUtil, java_concat("size: ", java_string_of(size)), this, "deselectAll");
        for (int32_t index = 0; index < size; index++) {
            DefaultMutableTreeNode* node = ((DefaultMutableTreeNode*) BasicArrayList_get(this->highlightedBasicArrayList, index));
            MyGraphicItemEventService_fire(MyGraphicItemEvent_new(((Any*) MyGraphicItemEventSource_new(MyGraphicItemEventService_DESELECT, node))));
        }
        BasicArrayList_clear(this->highlightedBasicArrayList);
}


// throws Exception
void WorkAreaJTreeJPanel_selectGraphicItem(WorkAreaJTreeJPanel* this, DefaultMutableTreeNode* node) {
        BasicArrayList_add(this->highlightedBasicArrayList, node);
        MyGraphicItemEventService_fire(MyGraphicItemEvent_new(((Any*) MyGraphicItemEventSource_new(MyGraphicItemEventService_SELECT, node))));
}


// throws Exception
void WorkAreaJTreeJPanel_removeGraphicItem(WorkAreaJTreeJPanel* this, DefaultMutableTreeNode* node) {
        MyGraphicItemEventService_fire(MyGraphicItemEvent_new(((Any*) MyGraphicItemEventSource_new(MyGraphicItemEventService_DELETE, node))));
}


// throws Exception
void WorkAreaJTreeJPanel_removeCanvas(WorkAreaJTreeJPanel* this, DefaultMutableTreeNode* node) {
        MyCanvasEventService_fire(MyCanvasEvent_new(((Any*) MyCanvasEventSource_new(MyCanvasEventService_DELETE, node))));
}


// throws Exception
void WorkAreaJTreeJPanel_remove(WorkAreaJTreeJPanel* this, TreePath* treePath) {
        DefaultMutableTreeNode* node = WorkAreaJTreeJPanel_getNode(this, treePath);
        if (node != nullptr) {
            if (java_instanceof(DefaultMutableTreeNode_getUserObject(node), "CanvasTreeLabel")) {
                WorkAreaJTreeJPanel_removeCanvas(this, node);
            } else {
                WorkAreaJTreeJPanel_removeGraphicItem(this, node);
            }
        }
        DefaultMutableTreeNode* parent = ((DefaultMutableTreeNode*) DefaultMutableTreeNode_getParent(node));
        DefaultMutableTreeNode_remove(parent, node);
}


// throws Exception
static void WorkAreaJTreeJPanel_copy(WorkAreaJTreeJPanel* this) {
        TreePath* treePath = JTree_getSelectionPath(this->workAreaJTree);
        WorkAreaJTreeJPanel_copy(this, treePath);
        WorkAreaJTreeJPanel_updateTree(this);
        WorkAreaJTreeJPanel_expand(this);
        WorkAreaJTreeJPanel_repaint(this);
}


// throws Exception
// Java overloaded method: C needs a different name
static void WorkAreaJTreeJPanel_copy(WorkAreaJTreeJPanel* this, TreePath* treePath) {
        DefaultMutableTreeNode* node = WorkAreaJTreeJPanel_getNode(this, treePath);
        if (node != nullptr) {
            if (java_instanceof(DefaultMutableTreeNode_getUserObject(node), "CanvasTreeLabel")) {
                MyCanvasEventService_fire(MyCanvasEvent_new(((Any*) MyCanvasEventSource_new(MyCanvasEventService_DUPLICATE, node))));
            } else {
                MyGraphicItemEventService_fire(MyGraphicItemEvent_new(((Any*) MyGraphicItemEventSource_new(MyGraphicItemEventService_DUPLICATE, node))));
            }
        }
}


// throws Exception
void WorkAreaJTreeJPanel_rotate(WorkAreaJTreeJPanel* this, TreePath* treePath, double angle) {
        DefaultMutableTreeNode* node = WorkAreaJTreeJPanel_getNode(this, treePath);
        if (node != nullptr) {
            if (java_instanceof(DefaultMutableTreeNode_getUserObject(node), "CanvasTreeLabel")) {
                MyCanvasEventService_fire(MyCanvasEvent_new(((Any*) MyCanvasEventSource_new(MyCanvasEventService_ROTATE, angle, node))));
            } else {
                MyGraphicItemEventService_fire(MyGraphicItemEvent_new(((Any*) MyGraphicItemEventSource_new(MyGraphicItemEventService_ROTATE, angle, node))));
            }
        }
}


MutableTreeNode* WorkAreaJTreeJPanel_getRootTreeNode(WorkAreaJTreeJPanel* this) {
        return this->rootTreeNode;
}


void WorkAreaJTreeJPanel_expand(WorkAreaJTreeJPanel* this) {
        JTree_expandRow(this->workAreaJTree, 0);
        JTree_expandRow(this->workAreaJTree, 1);
}


// Java overloaded method: C needs a different name
void WorkAreaJTreeJPanel_expand(WorkAreaJTreeJPanel* this, TreePath* treePath) {
        JTree_expandPath(this->workAreaJTree, treePath);
}


static void WorkAreaJTreeJPanel_initComponents(WorkAreaJTreeJPanel* this) {
        this->itemJPopupMenu = JPopupMenu_new();
        this->deleteJMenuItem = JMenuItem_new();
        this->copyJMenuItem = JMenuItem_new();
        this->rotateJMenuItem = JMenuItem_new();
        this->itemJScrollPane1 = JScrollPane_new();
        this->workAreaPropertiesJPanel = JPanel_new();
        JPopupMenu_addPopupMenuListener(this->itemJPopupMenu, PopupMenuListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void WorkAreaJTreeJPanel_popupMenuCanceled(WorkAreaJTreeJPanel* this, PopupMenuEvent* evt) {
        }
            

        void WorkAreaJTreeJPanel_popupMenuWillBecomeInvisible(WorkAreaJTreeJPanel* this, PopupMenuEvent* evt) {
                WorkAreaJTreeJPanel_itemJPopupMenuPopupMenuWillBecomeInvisible(this, evt);
        }
            

        void WorkAreaJTreeJPanel_popupMenuWillBecomeVisible(WorkAreaJTreeJPanel* this, PopupMenuEvent* evt) {
                WorkAreaJTreeJPanel_itemJPopupMenuPopupMenuWillBecomeVisible(this, evt);
        }
#endif
);
        JMenuItem_setText(this->deleteJMenuItem, "Delete");
        JMenuItem_addMouseListener(this->deleteJMenuItem, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void WorkAreaJTreeJPanel_mousePressed(WorkAreaJTreeJPanel* this, MouseEvent* evt) {
                WorkAreaJTreeJPanel_deleteJMenuItemMousePressed(this, evt);
        }
#endif
);
        JPopupMenu_add(this->itemJPopupMenu, this->deleteJMenuItem);
        JMenuItem_setText(this->copyJMenuItem, "Copy");
        JMenuItem_addMouseListener(this->copyJMenuItem, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void WorkAreaJTreeJPanel_mousePressed(WorkAreaJTreeJPanel* this, MouseEvent* evt) {
                WorkAreaJTreeJPanel_copyJMenuItemMousePressed(this, evt);
        }
#endif
);
        JPopupMenu_add(this->itemJPopupMenu, this->copyJMenuItem);
        JMenuItem_setText(this->rotateJMenuItem, "Rotate 45*");
        JMenuItem_addMouseListener(this->rotateJMenuItem, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void WorkAreaJTreeJPanel_mousePressed(WorkAreaJTreeJPanel* this, MouseEvent* evt) {
                WorkAreaJTreeJPanel_rotateJMenuItemMousePressed(this, evt);
        }
#endif
);
        JPopupMenu_add(this->itemJPopupMenu, this->rotateJMenuItem);
        WorkAreaJTreeJPanel_setLayout(this, GridLayout_new(1, 1));
        JPanel_addMouseListener(this->workAreaPropertiesJPanel, MouseAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void WorkAreaJTreeJPanel_mousePressed(WorkAreaJTreeJPanel* this, MouseEvent* evt) {
                WorkAreaJTreeJPanel_workAreaPropertiesJPanelMousePressed(this, evt);
        }
#endif
);
        JPanel_setLayout(this->workAreaPropertiesJPanel, GridLayout_new(1, 0));
        JScrollPane_setViewportView(this->itemJScrollPane1, this->workAreaPropertiesJPanel);
        WorkAreaJTreeJPanel_add(this, this->itemJScrollPane1);
}


static void WorkAreaJTreeJPanel_rotateJMenuItemMousePressed(WorkAreaJTreeJPanel* this, MouseEvent* evt) {
        JAVA_TRY {
            TreePath* treePath = JTree_getSelectionPath(this->workAreaJTree);
            WorkAreaJTreeJPanel_rotate(this, treePath, 45);
            WorkAreaJTreeJPanel_updateTree(this);
            WorkAreaJTreeJPanel_expand(this);
            WorkAreaJTreeJPanel_repaint(this);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "rotateJMenuItemMousePressed", e);
        } JAVA_END_TRY;
}


static void WorkAreaJTreeJPanel_workAreaJTreeMousePressed(WorkAreaJTreeJPanel* this, MouseEvent* evt) {
        JAVA_TRY {
            TreePath** selectedTreePathArray = JTree_getSelectionPaths(this->workAreaJTree);
            BasicArrayList* list = WorkAreaJTreeJPanel_getNode(this, selectedTreePathArray);
            if (BasicArrayList_size(list) > 0) {
                if ((MouseEvent_getModifiers(evt) & evt->BUTTON3_MASK) == evt->BUTTON3_MASK) {
                    for (int32_t index = 0; index < java_array_length(selectedTreePathArray); index++) {
                        DefaultMutableTreeNode* defaultMutableTreeNode = ((DefaultMutableTreeNode*) BasicArrayList_get(list, index));
                        if (java_instanceof(DefaultMutableTreeNode_getUserObject(defaultMutableTreeNode), "CanvasTreeLabel")) {
                            JPopupMenu_show(this->itemJPopupMenu, this, MouseEvent_getX(evt), MouseEvent_getY(evt));
                        } else {
                            JPopupMenu_show(this->itemJPopupMenu, this, MouseEvent_getX(evt), MouseEvent_getY(evt));
                        }
                    }
                }
                if ((MouseEvent_getModifiers(evt) & evt->BUTTON1_MASK) == evt->BUTTON1_MASK) {
                    WorkAreaJTreeJPanel_deselectAll(this);
                    for (int32_t index = 0; index < java_array_length(selectedTreePathArray); index++) {
                        DefaultMutableTreeNode* defaultMutableTreeNode = ((DefaultMutableTreeNode*) BasicArrayList_get(list, index));
                        if (java_instanceof(DefaultMutableTreeNode_getUserObject(defaultMutableTreeNode), "CanvasTreeLabel")) {
                            MyCanvasEventService_fire(MyCanvasEvent_new(((Any*) MyCanvasEventSource_new(MyCanvasEventService_SELECT, defaultMutableTreeNode))));
                        } else {
                            WorkAreaJTreeJPanel_selectGraphicItem(this, defaultMutableTreeNode);
                        }
                    }
                }
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "workAreaJTreeMousePressed", e);
        } JAVA_END_TRY;
}


static void WorkAreaJTreeJPanel_itemJPopupMenuPopupMenuWillBecomeInvisible(WorkAreaJTreeJPanel* this, PopupMenuEvent* evt) {
}


static void WorkAreaJTreeJPanel_itemJPopupMenuPopupMenuWillBecomeVisible(WorkAreaJTreeJPanel* this, PopupMenuEvent* evt) {
}


static void WorkAreaJTreeJPanel_copyJMenuItemMousePressed(WorkAreaJTreeJPanel* this, MouseEvent* evt) {
        JAVA_TRY {
            WorkAreaJTreeJPanel_copy(this);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "copyJMenuItemMousePressed", e);
        } JAVA_END_TRY;
}


static void WorkAreaJTreeJPanel_deleteJMenuItemMousePressed(WorkAreaJTreeJPanel* this, MouseEvent* evt) {
        JAVA_TRY {
            TreePath** selectedTreePathArray = JTree_getSelectionPaths(this->workAreaJTree);
            for (int32_t index = 0; index < java_array_length(selectedTreePathArray); index++) {
                TreePath* treePath = selectedTreePathArray[index];
                WorkAreaJTreeJPanel_remove(this, treePath);
                WorkAreaJTreeJPanel_updateTree(this);
                WorkAreaJTreeJPanel_expand(this);
                WorkAreaJTreeJPanel_repaint(this);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "deleteJMenuItemMousePressed", e);
        } JAVA_END_TRY;
}


static void WorkAreaJTreeJPanel_workAreaPropertiesJPanelMousePressed(WorkAreaJTreeJPanel* this, MouseEvent* evt) {
}

