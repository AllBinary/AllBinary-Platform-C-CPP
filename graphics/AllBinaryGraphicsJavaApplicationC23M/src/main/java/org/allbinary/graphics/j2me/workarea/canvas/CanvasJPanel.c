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
// package org.allbinary.graphics.j2me.workarea.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "javax/swing/tree/DefaultMutableTreeNode.h"
// #include "javax/swing/tree/MutableTreeNode.h"
#include "org/allbinary/animation/VectorExplosionGenerator.h"
#include "org/allbinary/animation/VectorMirrorGenerator.h"
#include "org/allbinary/animation/vector/VectorCenterGenerator.h"
#include "org/allbinary/game/input/GameInputStrings.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/j2me/GraphicsException.h"
#include "org/allbinary/graphics/j2me/StatusFactory.h"
#include "org/allbinary/graphics/j2me/workarea/WorkAreaJTreeJPanel.h"
#include "org/allbinary/graphics/j2me/workarea/tools/GraphicItemFactory.h"
#include "org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h"
#include "org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h"
#include "org/allbinary/graphics/j2me/workarea/tools/MouseStrings.h"
#include "org/allbinary/graphics/j2me/workarea/tools/Points.h"
#include "org/allbinary/graphics/j2me/workarea/tools/ToolFactory.h"
#include "org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEvent.h"
#include "org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventListener.h"
#include "org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventService.h"
#include "org/allbinary/graphics/pipeline/RandomRotationFactory.h"
#include "org/allbinary/log/LOGGING.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/GuiLog.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/math/PositionStrings.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/JPanel.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/MouseListener.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/MouseMotionListener.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/KeyListener.h"

typedef struct CanvasJPanel CanvasJPanel;
struct CanvasJPanel {
    JPanel base;
    MouseListener MouseListener_interface;
    MouseMotionListener MouseMotionListener_interface;
    KeyListener KeyListener_interface;
    MyGraphicItemEventListener MyGraphicItemEventListener_interface;
    LogUtil* logUtil;
    GuiLog* guiLog;
    GameInputStrings* gameInputStrings;
    GraphicItemInterface* selectedTool;
    HashMap* graphicItemHashMap;
    IntegerDimension* canvasDimension;
    double angle;
    DefaultMutableTreeNode* canvasTreeNode;
    CanvasTreeLabel* frameLabel;
    WorkAreaJTreeJPanel* workAreaJTreeJPanel;
    Grid* grid;
};

static int32_t CanvasJPanel_frame = 0;
static Color* CanvasJPanel_gridColor;
static Color* CanvasJPanel_backgroundColor;

CanvasJPanel* CanvasJPanel_new(WorkAreaJTreeJPanel* workAreaJTreeJPanel, Dimension* dimension, int32_t x, int32_t y);

void CanvasJPanel_init(CanvasJPanel* this, WorkAreaJTreeJPanel* workAreaJTreeJPanel, Dimension* dimension, int32_t x, int32_t y);

CanvasJPanel* CanvasJPanel_new3(WorkAreaJTreeJPanel* workAreaJTreeJPanel, Dimension* dimension, CanvasDom* canvasDom);
void CanvasJPanel_init3(CanvasJPanel* this, WorkAreaJTreeJPanel* workAreaJTreeJPanel, Dimension* dimension, CanvasDom* canvasDom);
static void CanvasJPanel_initMyComponents(CanvasJPanel* this);
MutableTreeNode* CanvasJPanel_getTreeNode(CanvasJPanel* this);
static void CanvasJPanel_initComponents(CanvasJPanel* this);
void CanvasJPanel_setCanvasSize(CanvasJPanel* this, int32_t x, int32_t y);
void CanvasJPanel_setGrid(CanvasJPanel* this, GPoint* point);
void CanvasJPanel_setGrid(CanvasJPanel* this, int32_t xSize, int32_t ySize);
void CanvasJPanel_setDefaultGrid(CanvasJPanel* this);
double CanvasJPanel_getAngle(CanvasJPanel* this);
void CanvasJPanel_setAngle(CanvasJPanel* this, double angle);
void CanvasJPanel_addAngle(CanvasJPanel* this, double angle);
void CanvasJPanel_explodeAll(CanvasJPanel* this);
void CanvasJPanel_explode(CanvasJPanel* this, int32_t howMuch, int32_t explosionType);
void CanvasJPanel_mirror(CanvasJPanel* this);
void CanvasJPanel_center(CanvasJPanel* this);
void CanvasJPanel_setNewTool(CanvasJPanel* this);
void CanvasJPanel_duplicateGraphicItem(CanvasJPanel* this, GraphicItemInterface* graphicItem);
void CanvasJPanel_duplicateGraphicItemHashMap(CanvasJPanel* this, HashMap* hashMap);
HashMap* CanvasJPanel_getGraphicItemHashMap(CanvasJPanel* this);
int32_t CanvasJPanel_getXPixelsPerWorkAreaPixel(CanvasJPanel* this);
int32_t CanvasJPanel_getYPixelsPerWorkAreaPixel(CanvasJPanel* this);
GraphicItemInterface* CanvasJPanel_getSelectedTool(CanvasJPanel* this);
void CanvasJPanel_drawItems(CanvasJPanel* this, Graphics* graphics);
void CanvasJPanel_drawGrid(CanvasJPanel* this, Graphics* graphics);
void CanvasJPanel_paint(CanvasJPanel* this, Graphics* graphics);
void CanvasJPanel_repaint(CanvasJPanel* this);
Node* CanvasJPanel_toDom(CanvasJPanel* this);
void CanvasJPanel_changed(CanvasJPanel* this);
void CanvasJPanel_mouseClicked(CanvasJPanel* this, MouseEvent* mouseEvent);
void CanvasJPanel_mouseEntered(CanvasJPanel* this, MouseEvent* mouseEvent);
void CanvasJPanel_mouseExited(CanvasJPanel* this, MouseEvent* mouseEvent);
void CanvasJPanel_mousePressed(CanvasJPanel* this, MouseEvent* mouseEvent);
void CanvasJPanel_mouseReleased(CanvasJPanel* this, MouseEvent* mouseEvent);
void CanvasJPanel_mouseDragged(CanvasJPanel* this, MouseEvent* mouseEvent);
void CanvasJPanel_mouseMoved(CanvasJPanel* this, MouseEvent* mouseEvent);
static const char* CanvasJPanel_logMouseEvent(CanvasJPanel* this, MouseEvent* mouseEvent);
void CanvasJPanel_keyPressed(CanvasJPanel* this, KeyEvent* keyEvent);
void CanvasJPanel_keyReleased(CanvasJPanel* this, KeyEvent* keyEvent);
void CanvasJPanel_keyTyped(CanvasJPanel* this, KeyEvent* keyEvent);
void CanvasJPanel_delete(CanvasJPanel* this, MyGraphicItemEvent* evt);
void CanvasJPanel_deselect(CanvasJPanel* this, MyGraphicItemEvent* evt);
void CanvasJPanel_highlight(CanvasJPanel* this, MyGraphicItemEvent* evt);
CanvasJPanel* CanvasJPanel_duplicate(CanvasJPanel* this);
void CanvasJPanel_duplicate(CanvasJPanel* this, MyGraphicItemEvent* event);
void CanvasJPanel_rotate(CanvasJPanel* this, MyGraphicItemEvent* event);
IntegerDimension* CanvasJPanel_getCanvasDimension(CanvasJPanel* this);
void CanvasJPanel_setCanvasDimension(CanvasJPanel* this, IntegerDimension* canvasDimension);
Grid* CanvasJPanel_getGrid(CanvasJPanel* this);

// Static fields with runtime initializers: call this once at startup
void CanvasJPanel_staticInit(void) {
    CanvasJPanel_gridColor = Color_new(JAVA_CALL(BasicColorFactory_getInstance()->WHITE, intValue));
    CanvasJPanel_backgroundColor = Color_new(JAVA_CALL(BasicColorFactory_getInstance()->CLEAR_COLOR, intValue));
}

static void CanvasJPanel_initFields(CanvasJPanel* this) {
    this->logUtil = LogUtil_getInstance();
    this->guiLog = GuiLog_getInstance();
    this->gameInputStrings = GameInputStrings_getInstance();
    this->selectedTool = nullptr;
    this->graphicItemHashMap = nullptr;
    this->canvasDimension = nullptr;
    this->angle = 0.0;
    this->canvasTreeNode = nullptr;
    this->frameLabel = nullptr;
    this->workAreaJTreeJPanel = nullptr;
    
}


void CanvasJPanel_init(CanvasJPanel* this, WorkAreaJTreeJPanel* workAreaJTreeJPanel, Dimension* dimension, int32_t x, int32_t y) {
    JPanel_init(&this->base);
    CanvasJPanel_initFields(this);
        this->grid = Grid_new();
        JAVA_TRY {
            this->workAreaJTreeJPanel = workAreaJTreeJPanel;
            CanvasJPanel_initComponents(this);
            CanvasJPanel_initMyComponents(this);
            CanvasJPanel_setSize(this, dimension);
            CanvasJPanel_setCanvasSize(this, x, y);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(JPanel_LOGGING, contains, JPanel_LOGGING->GRAPHICSCREATION)) {
                GuiLog_put(this->guiLog, "Constructor Error", this, "contructor", e);
            }
        } JAVA_END_TRY;
}

CanvasJPanel* CanvasJPanel_new(WorkAreaJTreeJPanel* workAreaJTreeJPanel, Dimension* dimension, int32_t x, int32_t y) {
    CanvasJPanel* this = calloc(1, sizeof(CanvasJPanel));
    CanvasJPanel_init(this, workAreaJTreeJPanel, dimension, x, y);
    return this;
}


void CanvasJPanel_init3(CanvasJPanel* this, WorkAreaJTreeJPanel* workAreaJTreeJPanel, Dimension* dimension, CanvasDom* canvasDom) {
    JPanel_init(&this->base);
    CanvasJPanel_initFields(this);
        this->grid = Grid_new(CanvasDom_getGrid(canvasDom));
        JAVA_TRY {
            this->workAreaJTreeJPanel = workAreaJTreeJPanel;
            CanvasJPanel_initComponents(this);
            CanvasJPanel_initMyComponents(this);
            CanvasJPanel_setSize(this, dimension);
            CanvasJPanel_setCanvasSize(this, JAVA_CALL(CanvasDom_getDimension(canvasDom), getWidth), JAVA_CALL(CanvasDom_getDimension(canvasDom), getHeight));
            this->graphicItemHashMap = CanvasDom_getGraphicItemHashMap(canvasDom);
            Any** graphicItemArray = JAVA_CALL(HashMap_keySet(this->graphicItemHashMap), toArray);
            int32_t size = java_array_length(graphicItemArray);
            for (int32_t index = 0; index < size; index++) {
                MutableTreeNode* graphicItemTreeNode = ((MutableTreeNode*) graphicItemArray[index]);
                DefaultMutableTreeNode_add(this->canvasTreeNode, graphicItemTreeNode);
            }
            CanvasJPanel_repaint(this);
            CanvasJPanel_setAngle(this, CanvasDom_getAngle(canvasDom));
            WorkAreaJTreeJPanel_updateTree(this->workAreaJTreeJPanel);
            WorkAreaJTreeJPanel_expand(this->workAreaJTreeJPanel);
            WorkAreaJTreeJPanel_repaint(this->workAreaJTreeJPanel);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(JPanel_LOGGING, contains, JPanel_LOGGING->GRAPHICSCREATION)) {
                GuiLog_put(this->guiLog, "Constructor Error", this, "contructor", e);
            }
        } JAVA_END_TRY;
}

CanvasJPanel* CanvasJPanel_new3(WorkAreaJTreeJPanel* workAreaJTreeJPanel, Dimension* dimension, CanvasDom* canvasDom) {
    CanvasJPanel* this = calloc(1, sizeof(CanvasJPanel));
    CanvasJPanel_init3(this, workAreaJTreeJPanel, dimension, canvasDom);
    return this;
}


// throws Exception
static void CanvasJPanel_initMyComponents(CanvasJPanel* this) {
        this->frameLabel = CanvasTreeLabel_new(java_concat("FrameLabel", Integer_toString(CanvasJPanel_frame)));
        this->canvasTreeNode = DefaultMutableTreeNode_new(this->frameLabel);
        CanvasJPanel_frame++;
        WorkAreaJTreeJPanel_add(this->workAreaJTreeJPanel, CanvasJPanel_getTreeNode(this));
        this->graphicItemHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        this->grid->grid = PointFactory_createXY(PointFactory_getInstance(), 0, 0);
        CanvasJPanel_setCanvasDimension(this, IntegerDimension_new(0, 0));
        this->selectedTool = nullptr;
        CanvasJPanel_addKeyListener(this, this);
        CanvasJPanel_addMouseListener(this, this);
        CanvasJPanel_addMouseMotionListener(this, this);
        MyGraphicItemEventService_addListener(this);
}


MutableTreeNode* CanvasJPanel_getTreeNode(CanvasJPanel* this) {
        return this->canvasTreeNode;
}


static void CanvasJPanel_initComponents(CanvasJPanel* this) {
        CanvasJPanel_setLayout(this, GridLayout_new(1, 1));
}


// throws Exception
void CanvasJPanel_setCanvasSize(CanvasJPanel* this, int32_t x, int32_t y) {
        this->grid->isGridPossible = true;
        if (x <= 0) {
            this->grid->isGridPossible = false;
            java_throw(java_exception_new("GraphicsException", java_concat("X Size Error: ", java_string_of(x)), this, "setWorkAreaSize"));
        }
        if (y <= 0) {
            this->grid->isGridPossible = false;
            java_throw(java_exception_new("GraphicsException", java_concat("Y Size Error: ", java_string_of(y)), this, "setWorkAreaSize"));
        }
        if (x > CanvasJPanel_getWidth(this)) {
            this->grid->isGridPossible = false;
        }
        if (y > CanvasJPanel_getHeight(this)) {
            this->grid->isGridPossible = false;
        }
        CanvasJPanel_setCanvasDimension(this, IntegerDimension_new(x, y));
        this->grid->isChanged = true;
}


void CanvasJPanel_setGrid(CanvasJPanel* this, GPoint* point) {
        CanvasJPanel_setGrid(this, GPoint_getX(point), GPoint_getY(point));
}


// Java overloaded method: C needs a different name
void CanvasJPanel_setGrid(CanvasJPanel* this, int32_t xSize, int32_t ySize) {
        JAVA_TRY {
            if (xSize >= JAVA_CALL(CanvasJPanel_getCanvasDimension(this), getWidth) / 2 || xSize < 1) {
                java_throw(java_exception_new("GraphicsException", java_concat(java_concat(java_concat("X Size Error: ", java_string_of(xSize)), " WorkArea X: "), java_string_of(JAVA_CALL(CanvasJPanel_getCanvasDimension(this), getWidth))), this, "setGrid"));
            }
            if (ySize >= JAVA_CALL(CanvasJPanel_getCanvasDimension(this), getHeight) / 2 || ySize < 1) {
                java_throw(java_exception_new("GraphicsException", java_concat(java_concat(java_concat("Y Size Error", java_string_of(ySize)), " WorkArea Y: "), java_string_of(JAVA_CALL(CanvasJPanel_getCanvasDimension(this), getHeight))), this, "setGrid"));
            }
            this->grid->grid = PointFactory_createXY(PointFactory_getInstance(), xSize, ySize);
            this->grid->isChanged = true;
        } JAVA_CATCH(Exception, e) {
        } JAVA_END_TRY;
}


// throws Exception
void CanvasJPanel_setDefaultGrid(CanvasJPanel* this) {
        int32_t xPixelsPerWorkAreaPixel = CanvasJPanel_getWidth(this) / JAVA_CALL(CanvasJPanel_getCanvasDimension(this), getWidth);
        int32_t yPixelsPerWorkAreaPixel = CanvasJPanel_getHeight(this) / JAVA_CALL(CanvasJPanel_getCanvasDimension(this), getHeight);
        CanvasJPanel_setGrid(this, 1, 1);
        this->grid->isChanged = true;
}


double CanvasJPanel_getAngle(CanvasJPanel* this) {
        return this->angle;
}


void CanvasJPanel_setAngle(CanvasJPanel* this, double angle) {
        this->angle = angle;
}


void CanvasJPanel_addAngle(CanvasJPanel* this, double angle) {
        CanvasJPanel_setAngle(this, this->angle + angle);
}


void CanvasJPanel_explodeAll(CanvasJPanel* this) {
        BasicArrayList* newPoints = BasicArrayListD_new();
        Any** graphicItemArray = JAVA_CALL(JAVA_CALL(CanvasJPanel_getGraphicItemHashMap(this), keySet), toArray);
        int32_t size = java_array_length(graphicItemArray);
        for (int32_t index = 0; index < size; index++) {
            MutableTreeNode* graphicItemNode = ((MutableTreeNode*) graphicItemArray[index]);
            GraphicItemInterface* graphicItem = ((GraphicItemInterface*) JAVA_CALL(CanvasJPanel_getGraphicItemHashMap(this), get, graphicItemNode));
            if (GraphicItemInterface_getName(graphicItem) == LinesGraphicItem_getStaticName()) {
                while (JAVA_CALL(GraphicItemInterface_getPointsInterface(graphicItem), getSize) > 2) {
                    GraphicItemInterface* newGraphicItem = JAVA_CALL(GraphicItemFactory_getInstance(GraphicItemFactory_getInstance(), GraphicItemInterface_getName(graphicItem)), getInstance, this);
                    GPoint* pointOne = GPoint_getInstance(GraphicItemInterface_removePoint(graphicItem));
                    GPoint* pointTwo = GPoint_getInstance(GraphicItemInterface_removePoint(graphicItem));
                    if (pointOne != nullptr && pointTwo != nullptr) {
                        GraphicItemInterface_addPoint(newGraphicItem, pointOne);
                        GraphicItemInterface_addPoint(newGraphicItem, pointTwo);
                    }
                    BasicArrayList_add(newPoints, newGraphicItem);
                }
            }
        }
        int32_t size2 = BasicArrayList_size(newPoints);
        for (int32_t index = 0; index < size2; index++) {
            GraphicItemInterface* newGraphicItem = ((GraphicItemInterface*) BasicArrayList_get(newPoints, index));
            DefaultMutableTreeNode_add(this->canvasTreeNode, GraphicItemInterface_getTreeNode(newGraphicItem));
            JAVA_CALL(CanvasJPanel_getGraphicItemHashMap(this), put, GraphicItemInterface_getTreeNode(newGraphicItem), newGraphicItem);
        }
        WorkAreaJTreeJPanel_updateTree(this->workAreaJTreeJPanel);
        WorkAreaJTreeJPanel_expand(this->workAreaJTreeJPanel);
        WorkAreaJTreeJPanel_repaint(this->workAreaJTreeJPanel);
}


// throws Exception
void CanvasJPanel_explode(CanvasJPanel* this, int32_t howMuch, int32_t explosionType) {
        Any** graphicItemArray = JAVA_CALL(JAVA_CALL(CanvasJPanel_getGraphicItemHashMap(this), keySet), toArray);
        int32_t size = java_array_length(graphicItemArray);
        for (int32_t index = 0; index < size; index++) {
            GraphicItemInterface* item = ((GraphicItemInterface*) JAVA_CALL(CanvasJPanel_getGraphicItemHashMap(this), get, graphicItemArray[index]));
            BasicArrayList* basicArrayList = VectorExplosionGenerator_createList(VectorExplosionGenerator_getInstance(), JAVA_CALL(GraphicItemInterface_getPointsInterface(item), getPoints), howMuch, VectorExplosionGenerator_getInstance()->RANDOM);
            Points* newPoints = Points_new();
            BasicArrayList_addPoints(newPoints, basicArrayList);
            GraphicItemInterface_setPointsInterface(item, newPoints);
            int32_t angleDelta = RandomRotationFactory_getNextRandomAngle(RandomRotationFactory_getInstance(), howMuch);
            GraphicItemInterface_setAngle(item, angleDelta);
        }
        CanvasJPanel_repaint(this);
}


// throws Exception
void CanvasJPanel_mirror(CanvasJPanel* this) {
        int32_t width = JAVA_CALL(CanvasJPanel_getCanvasDimension(this), getWidth);
        Any** graphicItemArray = JAVA_CALL(JAVA_CALL(CanvasJPanel_getGraphicItemHashMap(this), keySet), toArray);
        int32_t size = java_array_length(graphicItemArray);
        for (int32_t index = 0; index < size; index++) {
            GraphicItemInterface* item = ((GraphicItemInterface*) JAVA_CALL(CanvasJPanel_getGraphicItemHashMap(this), get, graphicItemArray[index]));
            BasicArrayList* basicArrayList = VectorMirrorGenerator_getInstance(VectorMirrorGenerator_getInstance(), JAVA_CALL(GraphicItemInterface_getPointsInterface(item), getPoints), width);
            Points* newPoints = Points_new();
            BasicArrayList_addPoints(newPoints, basicArrayList);
            GraphicItemInterface_setPointsInterface(item, newPoints);
        }
        CanvasJPanel_repaint(this);
}


// throws Exception
void CanvasJPanel_center(CanvasJPanel* this) {
        VectorCenterGenerator_transform(VectorCenterGenerator_new(), CanvasJPanel_getGraphicItemHashMap(this));
        CanvasJPanel_repaint(this);
}


void CanvasJPanel_setNewTool(CanvasJPanel* this) {
        JAVA_TRY {
            StatusFactory_setStatus(StatusFactory_getInstance(), "Tool Selected");
            this->selectedTool = JAVA_CALL(ToolFactory_getSelectedToolFactory(ToolFactory_getInstance()), getInstance, this);
            MutableTreeNode* newNode = GraphicItemInterface_getTreeNode(this->selectedTool);
            JAVA_CALL(CanvasJPanel_getGraphicItemHashMap(this), put, newNode, this->selectedTool);
            DefaultMutableTreeNode_add(this->canvasTreeNode, newNode);
            if (CanvasJPanel_getSelectedTool(this) == nullptr) {
                java_throw(java_exception_new("GraphicsException", "No Tool Selected", this, "setSelectedTool"));
            }
        } JAVA_CATCH(Exception, e) {
        } JAVA_END_TRY;
}


// throws Exception
void CanvasJPanel_duplicateGraphicItem(CanvasJPanel* this, GraphicItemInterface* graphicItem) {
        GraphicItemInterface* graphicItemClone = GraphicItemInterface_duplicate(graphicItem);
        JAVA_CALL(CanvasJPanel_getGraphicItemHashMap(this), put, GraphicItemInterface_getTreeNode(graphicItemClone), graphicItemClone);
        DefaultMutableTreeNode_add(this->canvasTreeNode, GraphicItemInterface_getTreeNode(graphicItemClone));
}


// throws Exception
void CanvasJPanel_duplicateGraphicItemHashMap(CanvasJPanel* this, HashMap* hashMap) {
        Any** mutableTreeNodeArray = JAVA_CALL(HashMap_keySet(hashMap), toArray);
        int32_t size = java_array_length(mutableTreeNodeArray);
        for (int32_t index = 0; index < size; index++) {
            MutableTreeNode* treeNode = ((MutableTreeNode*) mutableTreeNodeArray[index]);
            GraphicItemInterface* graphicItem = ((GraphicItemInterface*) HashMap_get(hashMap, treeNode));
            CanvasJPanel_duplicateGraphicItem(this, graphicItem);
        }
}


HashMap* CanvasJPanel_getGraphicItemHashMap(CanvasJPanel* this) {
        return this->graphicItemHashMap;
}


int32_t CanvasJPanel_getXPixelsPerWorkAreaPixel(CanvasJPanel* this) {
        int32_t x = JAVA_CALL(CanvasJPanel_getGrid(this)->grid, getX) * (CanvasJPanel_getWidth(this) - 10) / JAVA_CALL(CanvasJPanel_getCanvasDimension(this), getWidth);
        if (JAVA_CALL(CanvasJPanel_getGrid(this), getZoom) == 1) {
            return 1;
        } else {
            return x;
        }
}


int32_t CanvasJPanel_getYPixelsPerWorkAreaPixel(CanvasJPanel* this) {
        int32_t y = JAVA_CALL(CanvasJPanel_getGrid(this)->grid, getY) * (CanvasJPanel_getHeight(this) - 10) / JAVA_CALL(CanvasJPanel_getCanvasDimension(this), getHeight);
        if (JAVA_CALL(CanvasJPanel_getGrid(this), getZoom) == 1) {
            return 1;
        } else {
            return y;
        }
}


GraphicItemInterface* CanvasJPanel_getSelectedTool(CanvasJPanel* this) {
        return this->selectedTool;
}


void CanvasJPanel_drawItems(CanvasJPanel* this, Graphics* graphics) {
        double angleDouble = this->angle;
        Any** graphicItemArray = JAVA_CALL(JAVA_CALL(CanvasJPanel_getGraphicItemHashMap(this), keySet), toArray);
        int32_t size = java_array_length(graphicItemArray);
        for (int32_t index = 0; index < size; index++) {
            GraphicItemInterface* item = ((GraphicItemInterface*) JAVA_CALL(CanvasJPanel_getGraphicItemHashMap(this), get, graphicItemArray[index]));
            GraphicItemInterface_paint(item, graphics, angleDouble, CanvasJPanel_getCanvasDimension(this), CanvasJPanel_getXPixelsPerWorkAreaPixel(this), CanvasJPanel_getYPixelsPerWorkAreaPixel(this));
        }
}


void CanvasJPanel_drawGrid(CanvasJPanel* this, Graphics* graphics) {
        int32_t xAdjust = (CanvasJPanel_getWidth(this) % CanvasJPanel_getXPixelsPerWorkAreaPixel(this)) / 2;
        int32_t yAdjust = (CanvasJPanel_getHeight(this) % CanvasJPanel_getYPixelsPerWorkAreaPixel(this)) / 2;
        int32_t xLeft = xAdjust;
        int32_t yUpper = yAdjust;
        int32_t xRight = CanvasJPanel_getWidth(this) - xAdjust;
        int32_t yLower = CanvasJPanel_getHeight(this) - yAdjust;
        Graphics_setColor(graphics, CanvasJPanel_gridColor);
        for (int32_t value = yAdjust; value <= CanvasJPanel_getHeight(this) - yAdjust; value += CanvasJPanel_getYPixelsPerWorkAreaPixel(this)) {
            Graphics_drawLine(graphics, xLeft, value, xRight, value);
        }
        for (int32_t value = xAdjust; value <= CanvasJPanel_getWidth(this) - xAdjust; value += CanvasJPanel_getYPixelsPerWorkAreaPixel(this)) {
            Graphics_drawLine(graphics, value, yUpper, value, yLower);
        }
}


void CanvasJPanel_paint(CanvasJPanel* this, Graphics* graphics) {
        JAVA_TRY {
            if (CanvasJPanel_getGrid(this)->isChanged) {
                Graphics_setColor(graphics, CanvasJPanel_backgroundColor);
                Graphics_fillRect(graphics, 0, 0, CanvasJPanel_getWidth(this), CanvasJPanel_getHeight(this));
                if (JAVA_CALL(CanvasJPanel_getGrid(this), getZoom) > 2 && CanvasJPanel_getGrid(this)->isGridOn && CanvasJPanel_getGrid(this)->isGridPossible) {
                    CanvasJPanel_setDefaultGrid(this);
                    CanvasJPanel_drawGrid(this, graphics);
                }
                CanvasJPanel_drawItems(this, graphics);
                Graphics_drawString(graphics, Double_toString(CanvasJPanel_getAngle(this)), CanvasJPanel_getWidth(this) - 75, CanvasJPanel_getHeight(this) - 15);
                this->grid->isChanged = false;
            }
        } JAVA_CATCH(Exception, e) {
        } JAVA_END_TRY;
}


void CanvasJPanel_repaint(CanvasJPanel* this) {
        if (this->grid != nullptr) {
            this->grid->isChanged = true;
        }
        JPanel_repaint((&this->base));
}


// throws Exception
Node* CanvasJPanel_toDom(CanvasJPanel* this) {
        return CanvasDom_toDom(CanvasDom_new(this));
}


void CanvasJPanel_changed(CanvasJPanel* this) {
        this->grid->isChanged = true;
}


void CanvasJPanel_mouseClicked(CanvasJPanel* this, MouseEvent* mouseEvent) {
        StatusFactory_setStatusNoLog(StatusFactory_getInstance(), MouseStrings_getInstance()->MOUSE_CLICKED_LABEL + CanvasJPanel_logMouseEvent(this, mouseEvent));
        if (CanvasJPanel_getSelectedTool(this) != nullptr && JAVA_CALL(CanvasJPanel_getSelectedTool(this), isActive)) {
            GraphicItemInterface* graphicItem = CanvasJPanel_getSelectedTool(this);
            GraphicItemInterface_mouseClicked(graphicItem, mouseEvent, CanvasJPanel_getXPixelsPerWorkAreaPixel(this), CanvasJPanel_getYPixelsPerWorkAreaPixel(this));
        } else {
            CanvasJPanel_setNewTool(this);
            GraphicItemInterface* graphicItem = CanvasJPanel_getSelectedTool(this);
            if (graphicItem != nullptr) {
                GraphicItemInterface_mouseClicked(graphicItem, mouseEvent, CanvasJPanel_getXPixelsPerWorkAreaPixel(this), CanvasJPanel_getYPixelsPerWorkAreaPixel(this));
            }
        }
        this->grid->isChanged = true;
        CanvasJPanel_repaint(this);
        WorkAreaJTreeJPanel_updateTree(this->workAreaJTreeJPanel);
        WorkAreaJTreeJPanel_expand(this->workAreaJTreeJPanel);
        WorkAreaJTreeJPanel_repaint(this->workAreaJTreeJPanel);
}


void CanvasJPanel_mouseEntered(CanvasJPanel* this, MouseEvent* mouseEvent) {
        StatusFactory_setStatusNoLog(StatusFactory_getInstance(), CanvasJPanel_logMouseEvent(this, mouseEvent));
}


void CanvasJPanel_mouseExited(CanvasJPanel* this, MouseEvent* mouseEvent) {
        StatusFactory_setStatusNoLog(StatusFactory_getInstance(), CanvasJPanel_logMouseEvent(this, mouseEvent));
}


void CanvasJPanel_mousePressed(CanvasJPanel* this, MouseEvent* mouseEvent) {
        StatusFactory_setStatusNoLog(StatusFactory_getInstance(), MouseStrings_getInstance()->MOUSE_PRESSED_LABEL + CanvasJPanel_logMouseEvent(this, mouseEvent));
        if (CanvasJPanel_getSelectedTool(this) != nullptr) {
            GraphicItemInterface* graphicItem = CanvasJPanel_getSelectedTool(this);
            GraphicItemInterface_mousePressed(graphicItem, mouseEvent, CanvasJPanel_getXPixelsPerWorkAreaPixel(this), CanvasJPanel_getYPixelsPerWorkAreaPixel(this));
        }
        CanvasJPanel_requestFocus(this);
        this->grid->isChanged = true;
        CanvasJPanel_repaint(this);
}


void CanvasJPanel_mouseReleased(CanvasJPanel* this, MouseEvent* mouseEvent) {
        StatusFactory_setStatusNoLog(StatusFactory_getInstance(), MouseStrings_getInstance()->MOUSE_RELEASED_LABEL + CanvasJPanel_logMouseEvent(this, mouseEvent));
        GraphicItemInterface* graphicItem = CanvasJPanel_getSelectedTool(this);
        if (graphicItem != nullptr) {
            GraphicItemInterface_mouseReleased(graphicItem, mouseEvent, CanvasJPanel_getXPixelsPerWorkAreaPixel(this), CanvasJPanel_getYPixelsPerWorkAreaPixel(this));
        }
        CanvasJPanel_requestFocus(this);
        this->grid->isChanged = true;
        CanvasJPanel_repaint(this);
}


void CanvasJPanel_mouseDragged(CanvasJPanel* this, MouseEvent* mouseEvent) {
        StatusFactory_setStatusNoLog(StatusFactory_getInstance(), MouseStrings_getInstance()->MOUSE_DRAGGED_LABEL + CanvasJPanel_logMouseEvent(this, mouseEvent));
        GraphicItemInterface* graphicItem = CanvasJPanel_getSelectedTool(this);
        if (graphicItem != nullptr) {
            GraphicItemInterface_mouseDragged(graphicItem, mouseEvent, CanvasJPanel_getXPixelsPerWorkAreaPixel(this), CanvasJPanel_getYPixelsPerWorkAreaPixel(this));
        }
        CanvasJPanel_requestFocus(this);
        this->grid->isChanged = true;
        CanvasJPanel_repaint(this);
}


void CanvasJPanel_mouseMoved(CanvasJPanel* this, MouseEvent* mouseEvent) {
        StatusFactory_setStatusNoLog(StatusFactory_getInstance(), MouseStrings_getInstance()->MOUSE_MOVED_LABEL + CanvasJPanel_logMouseEvent(this, mouseEvent));
        if (CanvasJPanel_getSelectedTool(this) != nullptr && JAVA_CALL(CanvasJPanel_getSelectedTool(this), isActive)) {
            GraphicItemInterface* graphicItem = CanvasJPanel_getSelectedTool(this);
            GraphicItemInterface_mouseMoved(graphicItem, mouseEvent, CanvasJPanel_getXPixelsPerWorkAreaPixel(this), CanvasJPanel_getYPixelsPerWorkAreaPixel(this));
        }
        CanvasJPanel_requestFocus(this);
        this->grid->isChanged = true;
        CanvasJPanel_repaint(this);
}


static const char* CanvasJPanel_logMouseEvent(CanvasJPanel* this, MouseEvent* mouseEvent) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PositionStrings_getInstance()->X_LABEL);
        StringMaker_appendint(stringBuffer, ((int32_t) (MouseEvent_getX(mouseEvent) / CanvasJPanel_getXPixelsPerWorkAreaPixel(this))));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, PositionStrings_getInstance()->Y_LABEL);
        StringMaker_appendint(stringBuffer, ((int32_t) (MouseEvent_getY(mouseEvent) / CanvasJPanel_getYPixelsPerWorkAreaPixel(this))));
        return StringMaker_toString(stringBuffer);
}


void CanvasJPanel_keyPressed(CanvasJPanel* this, KeyEvent* keyEvent) {
        StatusFactory_setStatus(StatusFactory_getInstance(), "Key Pressed");
        JAVA_TRY {
            Any** graphicItemArray = JAVA_CALL(HashMap_keySet(this->graphicItemHashMap), toArray);
            int32_t size = java_array_length(graphicItemArray);
            for (int32_t index = 0; index < size; index++) {
                GraphicItemInterface* graphicItemInterface = ((GraphicItemInterface*) HashMap_get(this->graphicItemHashMap, graphicItemArray[index]));
                int32_t keyCode = KeyEvent_getKeyCode(keyEvent);
                if (GraphicItemInterface_isActive(graphicItemInterface)) {
                    if (keyCode == keyEvent->VK_UP) {
                        GraphicItemInterface_translate(graphicItemInterface, 0, -1);
                    } else if (keyCode == keyEvent->VK_DOWN) {
                        GraphicItemInterface_translate(graphicItemInterface, 0, 1);
                    } else if (keyCode == keyEvent->VK_LEFT) {
                        GraphicItemInterface_translate(graphicItemInterface, -1, 0);
                    } else if (keyCode == keyEvent->VK_RIGHT) {
                        GraphicItemInterface_translate(graphicItemInterface, 1, 0);
                    }
                }
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, this->gameInputStrings->KEY_PRESSED, e);
        } JAVA_END_TRY;
        if (CanvasJPanel_getSelectedTool(this) != nullptr && JAVA_CALL(CanvasJPanel_getSelectedTool(this), isActive)) {
            StatusFactory_setStatus(StatusFactory_getInstance(), "Key Pressed for Tool");
            GraphicItemInterface* graphicItem = CanvasJPanel_getSelectedTool(this);
            GraphicItemInterface_keyPressed(graphicItem, keyEvent);
        } else {
            CanvasJPanel_setNewTool(this);
        }
        this->grid->isChanged = true;
        CanvasJPanel_repaint(this);
}


void CanvasJPanel_keyReleased(CanvasJPanel* this, KeyEvent* keyEvent) {
}


void CanvasJPanel_keyTyped(CanvasJPanel* this, KeyEvent* keyEvent) {
}


void CanvasJPanel_delete(CanvasJPanel* this, MyGraphicItemEvent* evt) {
        JAVA_CALL(CanvasJPanel_getGraphicItemHashMap(this), remove, MyGraphicItemEvent_getTreeNode(evt));
        WorkAreaJTreeJPanel_updateTree(this->workAreaJTreeJPanel);
        WorkAreaJTreeJPanel_expand(this->workAreaJTreeJPanel);
        WorkAreaJTreeJPanel_repaint(this->workAreaJTreeJPanel);
}


void CanvasJPanel_deselect(CanvasJPanel* this, MyGraphicItemEvent* evt) {
        GraphicItemInterface* graphicItemInterface = ((GraphicItemInterface*) JAVA_CALL(CanvasJPanel_getGraphicItemHashMap(this), get, MyGraphicItemEvent_getTreeNode(evt)));
        if (graphicItemInterface != nullptr) {
            GraphicItemInterface_setColor(graphicItemInterface, Color_WHITE);
            GraphicItemInterface_deactivate(graphicItemInterface);
            WorkAreaJTreeJPanel_repaint(this->workAreaJTreeJPanel);
        }
}


void CanvasJPanel_highlight(CanvasJPanel* this, MyGraphicItemEvent* evt) {
        GraphicItemInterface* graphicItemInterface = ((GraphicItemInterface*) JAVA_CALL(CanvasJPanel_getGraphicItemHashMap(this), get, MyGraphicItemEvent_getTreeNode(evt)));
        if (graphicItemInterface != nullptr) {
            GraphicItemInterface_setColor(graphicItemInterface, Color_YELLOW);
            GraphicItemInterface_activate(graphicItemInterface);
            WorkAreaJTreeJPanel_repaint(this->workAreaJTreeJPanel);
        }
}


// throws Exception
CanvasJPanel* CanvasJPanel_duplicate(CanvasJPanel* this) {
        CanvasJPanel* newCanvasJPanel = CanvasJPanel_new(this->workAreaJTreeJPanel, CanvasJPanel_getSize(this), JAVA_CALL(CanvasJPanel_getCanvasDimension(this), getWidth), JAVA_CALL(CanvasJPanel_getCanvasDimension(this), getHeight));
        CanvasJPanel_setGrid(newCanvasJPanel, JAVA_CALL(CanvasJPanel_getGrid(this), getGrid));
        CanvasJPanel_setAngle(newCanvasJPanel, CanvasJPanel_getAngle(this));
        CanvasJPanel_duplicateGraphicItemHashMap(newCanvasJPanel, CanvasJPanel_getGraphicItemHashMap(this));
        WorkAreaJTreeJPanel_updateTree(this->workAreaJTreeJPanel);
        WorkAreaJTreeJPanel_expand(this->workAreaJTreeJPanel);
        WorkAreaJTreeJPanel_repaint(this->workAreaJTreeJPanel);
        return newCanvasJPanel;
}


// throws Exception
// Java overloaded method: C needs a different name
void CanvasJPanel_duplicate(CanvasJPanel* this, MyGraphicItemEvent* event) {
        MutableTreeNode* treeNode = MyGraphicItemEvent_getTreeNode(event);
        GraphicItemInterface* graphicItem = ((GraphicItemInterface*) JAVA_CALL(CanvasJPanel_getGraphicItemHashMap(this), get, treeNode));
        if (graphicItem != nullptr) {
            CanvasJPanel_duplicateGraphicItem(this, graphicItem);
            WorkAreaJTreeJPanel_updateTree(this->workAreaJTreeJPanel);
            WorkAreaJTreeJPanel_expand(this->workAreaJTreeJPanel);
            WorkAreaJTreeJPanel_repaint(this->workAreaJTreeJPanel);
        }
}


void CanvasJPanel_rotate(CanvasJPanel* this, MyGraphicItemEvent* event) {
        MutableTreeNode* treeNode = MyGraphicItemEvent_getTreeNode(event);
        GraphicItemInterface* graphicItem = ((GraphicItemInterface*) JAVA_CALL(CanvasJPanel_getGraphicItemHashMap(this), get, treeNode));
        if (graphicItem != nullptr) {
            GraphicItemInterface_addAngle(graphicItem, MyGraphicItemEvent_getAngle(event));
        }
}


IntegerDimension* CanvasJPanel_getCanvasDimension(CanvasJPanel* this) {
        return this->canvasDimension;
}


void CanvasJPanel_setCanvasDimension(CanvasJPanel* this, IntegerDimension* canvasDimension) {
        this->canvasDimension = canvasDimension;
}


Grid* CanvasJPanel_getGrid(CanvasJPanel* this) {
        return this->grid;
}

