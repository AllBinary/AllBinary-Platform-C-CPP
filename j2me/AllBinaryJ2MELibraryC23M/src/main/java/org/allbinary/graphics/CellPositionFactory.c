// Generated Code Do Not Modify
#include "org/allbinary/graphics/CellPositionFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/graphics/CellPosition.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif


static CellPositionFactory* CellPositionFactory_SINGLETON;








void CellPositionFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CellPositionFactory_SINGLETON = CellPositionFactory_new();
}

void CellPositionFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CellPositionFactory", nullptr);
    java_register_method("CellPositionFactory", "init", (void*) CellPositionFactory_initMethod);
    java_register_method("CellPositionFactory", "getInstanceColRow", (void*) CellPositionFactory_getInstanceColRow);
    java_register_method("CellPositionFactory", "createInstance", (void*) CellPositionFactory_createInstance);
    java_register_method("CellPositionFactory", "getColumns", (void*) CellPositionFactory_getColumns);
    java_register_method("CellPositionFactory", "getRows", (void*) CellPositionFactory_getRows);
}

static void CellPositionFactory_initFields(CellPositionFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->NONE = CellPosition_new(-1, -1, -1, -1);
    this->cellPositionArray = ((CellPosition***) java_array_new2(sizeof(CellPosition*), 0, 0));
    this->columns = 0;
    this->rows = 0;
}


CellPositionFactory* CellPositionFactory_getInstance(void) {
        return (CellPositionFactory_staticInit(), CellPositionFactory_SINGLETON);
}


void CellPositionFactory_init(CellPositionFactory* this) {
    CellPositionFactory_register();
    CellPositionFactory_initFields(this);
}

CellPositionFactory* CellPositionFactory_new(void) {
    CellPositionFactory* this = java_object_alloc(sizeof(CellPositionFactory), "CellPositionFactory");
    CellPositionFactory_init(this);
    return this;
}


void CellPositionFactory_initMethod(CellPositionFactory* this, int32_t columns, int32_t rows) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Init: columns: ");
        StringMaker_appendint(stringBuffer, columns);
        StringMaker_append(stringBuffer, " rows: ");
        StringMaker_appendint(stringBuffer, rows);
        LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, commonStrings->INIT);
        this->cellPositionArray = ((CellPosition***) java_array_new2(sizeof(CellPosition*), columns, rows));
        this->columns = columns;
        this->rows = rows;
        for (int32_t column = 0; column < columns; column++) {
            for (int32_t row = 0; row < rows; row++) {
                CellPositionFactory_createInstance(this, column, row);
            }
        }
}


CellPosition* CellPositionFactory_getInstanceColRow(CellPositionFactory* this, int32_t i_column, int32_t i_row) {
        JAVA_TRY {
            return this->cellPositionArray[i_column][i_row];
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_new(), "columns: "), CellPositionFactory_getColumns(this)), " rows: "), CellPositionFactory_getRows(this)), " col: "), i_column), " row: "), i_row)), this, commonStrings->GET_INSTANCE, e);
            return this->NONE;
        } JAVA_END_TRY;
}


CellPosition* CellPositionFactory_createInstance(CellPositionFactory* this, int32_t i_column, int32_t i_row) {
        CellPosition* cellPositionCanBeNull = this->cellPositionArray[i_column][i_row];
        if (cellPositionCanBeNull == nullptr) {
            cellPositionCanBeNull = CellPosition_new(i_column, i_row, this->columns, this->rows);
            this->cellPositionArray[i_column][i_row] = cellPositionCanBeNull;
        }
        return cellPositionCanBeNull;
}


int32_t CellPositionFactory_getColumns(CellPositionFactory* this) {
        return this->columns;
}


int32_t CellPositionFactory_getRows(CellPositionFactory* this) {
        return this->rows;
}

