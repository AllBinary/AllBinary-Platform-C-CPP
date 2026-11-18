// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonsMappingPaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/CellPositionFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/input/motion/button/TouchButtonLocationHelper.h"
#include "org/allbinary/input/motion/button/CommonButtons.h"
#include "org/allbinary/input/motion/button/TouchButton.h"
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#include "org/allbinary/input/motion/button/TouchButtonBlankResource.h"




static void TouchButtonsMappingPaintable_initMethod(TouchButtonsMappingPaintable* this);

static Paintable*** TouchButtonsMappingPaintable_createPaintableTable(TouchButtonsMappingPaintable* this);


void TouchButtonsMappingPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TouchButtonsMappingPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonsMappingPaintable", "Paintable");
    java_register_method("TouchButtonsMappingPaintable", "init", (void*) TouchButtonsMappingPaintable_initMethod);
    java_register_method("TouchButtonsMappingPaintable", "createPaintableTable", (void*) TouchButtonsMappingPaintable_createPaintableTable);
    java_register_method("TouchButtonsMappingPaintable", "paint", (void*) TouchButtonsMappingPaintable_paint);
}

static void TouchButtonsMappingPaintable_initFields(TouchButtonsMappingPaintable* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->paintableTable = ((Paintable***) java_array_new2(sizeof(Paintable*), 0, 0));
    this->touchButtonLocationHelper = TouchButtonLocationHelper_new();
}


void TouchButtonsMappingPaintable_init(TouchButtonsMappingPaintable* this, BasicColor* basicColor) {
    TouchButtonsMappingPaintable_register();
    Paintable_init(&this->base);
    TouchButtonsMappingPaintable_initFields(this);
        this->foregroundColor = BasicColor_intValue(basicColor);
        TouchButtonsMappingPaintable_initMethod(this);
}

TouchButtonsMappingPaintable* TouchButtonsMappingPaintable_new(BasicColor* basicColor) {
    TouchButtonsMappingPaintable* this = java_object_alloc(sizeof(TouchButtonsMappingPaintable), "TouchButtonsMappingPaintable");
    TouchButtonsMappingPaintable_init(this, basicColor);
    return this;
}


static void TouchButtonsMappingPaintable_initMethod(TouchButtonsMappingPaintable* this) {
        JAVA_TRY {
            this->paintableTable = TouchButtonsMappingPaintable_createPaintableTable(this);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "updateRectangle", e);
        } JAVA_END_TRY;
}


// throws Exception
static Paintable*** TouchButtonsMappingPaintable_createPaintableTable(TouchButtonsMappingPaintable* this) {
        int32_t totalColumns = TouchButtonLocationHelper_getTotalColumns(this->touchButtonLocationHelper);
        int32_t totalRows = TouchButtonLocationHelper_getTotalRows(this->touchButtonLocationHelper);
        Paintable*** paintableTable = ((Paintable***) java_array_new2(sizeof(Paintable*), totalColumns, totalRows));
        CellPositionFactory* cellPositionFactory = CellPositionFactory_getInstance();
        CommonButtons* commonButtons = CommonButtons_getInstance();
        for (int32_t index = totalColumns - 1; index >= 0; index--) {
            for (int32_t rowIndex = totalRows - 1; rowIndex >= 0; rowIndex--) {
                this->paintableTable[index][rowIndex] = TouchButton_createButton(BasicTouchInputFactory_getInstance()->NONE, TouchButtonBlankResource_getInstance(), commonButtons->NORMAL_BUTTON, CellPositionFactory_getInstanceColRow(cellPositionFactory, index, rowIndex), TouchButtonLocationHelper_getColumnsRemainderHalf(this->touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(this->touchButtonLocationHelper));
            }
        }
        return paintableTable;
}


void TouchButtonsMappingPaintable_paint(TouchButtonsMappingPaintable* this, Graphics* graphics) {
        int32_t totalColumns = TouchButtonLocationHelper_getTotalColumns(this->touchButtonLocationHelper);
        int32_t totalRows = TouchButtonLocationHelper_getTotalRows(this->touchButtonLocationHelper);
        for (int32_t index = totalColumns - 1; index >= 0; index--) {
            for (int32_t rowIndex = totalRows - 1; rowIndex >= 0; rowIndex--) {
                JAVA_CALL(this->paintableTable[index][rowIndex], paint, graphics);
            }
        }
}

