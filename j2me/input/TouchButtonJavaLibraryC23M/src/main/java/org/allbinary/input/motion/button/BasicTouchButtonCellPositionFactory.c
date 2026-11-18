// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/BasicTouchButtonCellPositionFactory.h"
#include "org/allbinary/graphics/CellPosition.h"
#include "org/allbinary/graphics/CellPositionFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/input/motion/button/TouchButtonLocationHelper.h"




void BasicTouchButtonCellPositionFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicTouchButtonCellPositionFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicTouchButtonCellPositionFactory", nullptr);
}

static void BasicTouchButtonCellPositionFactory_initFields(BasicTouchButtonCellPositionFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    this->SECOND_FROM_TOP_LEFT = nullptr;
    this->SECOND_FROM_TOP_RIGHT = nullptr;
    this->TOP_SECOND_FROM_LEFT = nullptr;
    this->TOP_SECOND_FROM_RIGHT = nullptr;
    
    
    
    this->THIRD_FROM_BOTTOM_RIGHT = nullptr;
    this->FOURTH_FROM_BOTTOM_RIGHT = nullptr;
    
    this->SECOND_FROM_BOTTOM_THIRD_FROM_RIGHT = nullptr;
    this->SECOND_FROM_BOTTOM_FOURTH_FROM_RIGHT = nullptr;
    this->BOTTOM_THIRD_FROM_RIGHT = nullptr;
    this->BOTTOM_FOURTH_FROM_RIGHT = nullptr;
    
    
    this->THIRD_FROM_BOTTOM_LEFT = nullptr;
    
    
}


void BasicTouchButtonCellPositionFactory_init(BasicTouchButtonCellPositionFactory* this) {
    BasicTouchButtonCellPositionFactory_register();
    BasicTouchButtonCellPositionFactory_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        TouchButtonLocationHelper* touchButtonLocationHelper = TouchButtonLocationHelper_new();
        CellPositionFactory* cellPositionFactory = CellPositionFactory_getInstance();
        CellPositionFactory_initMethod(cellPositionFactory, TouchButtonLocationHelper_getTotalColumns(touchButtonLocationHelper), TouchButtonLocationHelper_getTotalRows(touchButtonLocationHelper));
        this->TOP_LEFT = CellPositionFactory_getInstanceColRow(cellPositionFactory, 0, 0);
        this->TOP_RIGHT = CellPositionFactory_getInstanceColRow(cellPositionFactory, TouchButtonLocationHelper_getTotalColumns(touchButtonLocationHelper) - 1, 0);
        this->BOTTOM_LEFT = CellPositionFactory_getInstanceColRow(cellPositionFactory, 0, TouchButtonLocationHelper_getTotalRows(touchButtonLocationHelper) - 1);
        this->BOTTOM_RIGHT = CellPositionFactory_getInstanceColRow(cellPositionFactory, TouchButtonLocationHelper_getTotalColumns(touchButtonLocationHelper) - 1, TouchButtonLocationHelper_getTotalRows(touchButtonLocationHelper) - 1);
        this->BOTTOM_SECOND_FROM_RIGHT = CellPositionFactory_getInstanceColRow(cellPositionFactory, TouchButtonLocationHelper_getTotalColumns(touchButtonLocationHelper) - 2, TouchButtonLocationHelper_getTotalRows(touchButtonLocationHelper) - 1);
        this->SECOND_FROM_BOTTOM_RIGHT = CellPositionFactory_getInstanceColRow(cellPositionFactory, TouchButtonLocationHelper_getTotalColumns(touchButtonLocationHelper) - 1, TouchButtonLocationHelper_getTotalRows(touchButtonLocationHelper) - 2);
        this->SECOND_FROM_BOTTOM_SECOND_FROM_RIGHT = CellPositionFactory_getInstanceColRow(cellPositionFactory, TouchButtonLocationHelper_getTotalColumns(touchButtonLocationHelper) - 2, TouchButtonLocationHelper_getTotalRows(touchButtonLocationHelper) - 2);
        this->BOTTOM_SECOND_FROM_LEFT = CellPositionFactory_getInstanceColRow(cellPositionFactory, 1, TouchButtonLocationHelper_getTotalRows(touchButtonLocationHelper) - 1);
        this->SECOND_FROM_BOTTOM_LEFT = CellPositionFactory_getInstanceColRow(cellPositionFactory, 0, TouchButtonLocationHelper_getTotalRows(touchButtonLocationHelper) - 2);
        this->SECOND_FROM_BOTTOM_SECOND_FROM_LEFT = CellPositionFactory_getInstanceColRow(cellPositionFactory, 1, TouchButtonLocationHelper_getTotalRows(touchButtonLocationHelper) - 2);
        if (TouchButtonLocationHelper_getTotalRows(touchButtonLocationHelper) > 2) {
            this->SECOND_FROM_TOP_LEFT = CellPositionFactory_getInstanceColRow(cellPositionFactory, 0, 1);
            this->SECOND_FROM_TOP_RIGHT = CellPositionFactory_getInstanceColRow(cellPositionFactory, TouchButtonLocationHelper_getTotalColumns(touchButtonLocationHelper) - 1, 1);
        } else {
            this->SECOND_FROM_TOP_LEFT = cellPositionFactory->NONE;
            this->SECOND_FROM_TOP_RIGHT = cellPositionFactory->NONE;
        }
        if (TouchButtonLocationHelper_getTotalRows(touchButtonLocationHelper) >= 4) {
            this->THIRD_FROM_BOTTOM_RIGHT = CellPositionFactory_getInstanceColRow(cellPositionFactory, TouchButtonLocationHelper_getTotalColumns(touchButtonLocationHelper) - 1, TouchButtonLocationHelper_getTotalRows(touchButtonLocationHelper) - 3);
            this->FOURTH_FROM_BOTTOM_RIGHT = CellPositionFactory_getInstanceColRow(cellPositionFactory, TouchButtonLocationHelper_getTotalColumns(touchButtonLocationHelper) - 1, TouchButtonLocationHelper_getTotalRows(touchButtonLocationHelper) - 4);
            this->THIRD_FROM_BOTTOM_LEFT = CellPositionFactory_getInstanceColRow(cellPositionFactory, 0, TouchButtonLocationHelper_getTotalRows(touchButtonLocationHelper) - 3);
        } else {
            this->THIRD_FROM_BOTTOM_RIGHT = cellPositionFactory->NONE;
            this->FOURTH_FROM_BOTTOM_RIGHT = cellPositionFactory->NONE;
            this->THIRD_FROM_BOTTOM_LEFT = cellPositionFactory->NONE;
        }
        if (TouchButtonLocationHelper_getTotalColumns(touchButtonLocationHelper) >= 4) {
            this->SECOND_FROM_BOTTOM_THIRD_FROM_RIGHT = CellPositionFactory_getInstanceColRow(cellPositionFactory, TouchButtonLocationHelper_getTotalColumns(touchButtonLocationHelper) - 3, TouchButtonLocationHelper_getTotalRows(touchButtonLocationHelper) - 2);
            this->SECOND_FROM_BOTTOM_FOURTH_FROM_RIGHT = CellPositionFactory_getInstanceColRow(cellPositionFactory, TouchButtonLocationHelper_getTotalColumns(touchButtonLocationHelper) - 4, TouchButtonLocationHelper_getTotalRows(touchButtonLocationHelper) - 2);
            this->BOTTOM_THIRD_FROM_RIGHT = CellPositionFactory_getInstanceColRow(cellPositionFactory, TouchButtonLocationHelper_getTotalColumns(touchButtonLocationHelper) - 3, TouchButtonLocationHelper_getTotalRows(touchButtonLocationHelper) - 1);
            this->BOTTOM_FOURTH_FROM_RIGHT = CellPositionFactory_getInstanceColRow(cellPositionFactory, TouchButtonLocationHelper_getTotalColumns(touchButtonLocationHelper) - 4, TouchButtonLocationHelper_getTotalRows(touchButtonLocationHelper) - 1);
            this->TOP_SECOND_FROM_LEFT = CellPositionFactory_getInstanceColRow(cellPositionFactory, 1, 0);
            this->TOP_SECOND_FROM_RIGHT = CellPositionFactory_getInstanceColRow(cellPositionFactory, TouchButtonLocationHelper_getTotalColumns(touchButtonLocationHelper) - 2, 0);
        } else {
            this->SECOND_FROM_BOTTOM_THIRD_FROM_RIGHT = cellPositionFactory->NONE;
            this->SECOND_FROM_BOTTOM_FOURTH_FROM_RIGHT = cellPositionFactory->NONE;
            this->BOTTOM_THIRD_FROM_RIGHT = cellPositionFactory->NONE;
            this->BOTTOM_FOURTH_FROM_RIGHT = cellPositionFactory->NONE;
            this->TOP_SECOND_FROM_LEFT = cellPositionFactory->NONE;
            this->TOP_SECOND_FROM_RIGHT = cellPositionFactory->NONE;
        }
}

BasicTouchButtonCellPositionFactory* BasicTouchButtonCellPositionFactory_new(void) {
    BasicTouchButtonCellPositionFactory* this = java_object_alloc(sizeof(BasicTouchButtonCellPositionFactory), "BasicTouchButtonCellPositionFactory");
    BasicTouchButtonCellPositionFactory_init(this);
    return this;
}

