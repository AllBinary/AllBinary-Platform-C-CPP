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
// package org.allbinary.animation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/GraphicsStrings.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/math/PositionStrings.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/json/me/JSONArray.h"
#include "org/json/me/JSONException.h"
#include "org/json/me/JSONObject.h"

typedef struct SVGAsJSONSimpleLoader SVGAsJSONSimpleLoader;
struct SVGAsJSONSimpleLoader {
    GraphicsStrings* graphicsStrings;
    ShapeTypeFactory* shapeTypeFactory;
    const char* KEY_SVG;
    const char* KEY_X1;
    const char* KEY_Y1;
    const char* KEY_X2;
    const char* KEY_Y2;
    const char* KEY_CX;
    const char* KEY_CY;
    const char* KEY_R;
    const char* KEY_X;
    const char* KEY_Y;
    const char* ERROR_PARSE_SVG_JSON;
    const char* ERROR_MISSING_KEY_PREFIX;
    const char* ERROR_INVALID_NUMBER_PREFIX;
    const char* ERROR_EXPECTED_OBJECT_PREFIX;
    int32_t** EMPTY_POINTS;
    int32_t* SHAPE_SEPARATOR;
    int32_t CIRCLE_SEGMENTS;
};

static SVGAsJSONSimpleLoader* SVGAsJSONSimpleLoader_instance;

SVGAsJSONSimpleLoader* SVGAsJSONSimpleLoader_new(void);
SVGAsJSONSimpleLoader* SVGAsJSONSimpleLoader_getInstance(void);
int32_t** SVGAsJSONSimpleLoader_load(SVGAsJSONSimpleLoader* this, const char* svgAsJson);
static void SVGAsJSONSimpleLoader_addShapes(SVGAsJSONSimpleLoader* this, BasicArrayList* pointVector, Any* value, ShapeType* shapeType);
static void SVGAsJSONSimpleLoader_addShape(SVGAsJSONSimpleLoader* this, BasicArrayList* pointVector, Any* value, ShapeType* shapeType);
static void SVGAsJSONSimpleLoader_addLine(SVGAsJSONSimpleLoader* this, BasicArrayList* pointVector, JSONObject* line);
static void SVGAsJSONSimpleLoader_addCircle(SVGAsJSONSimpleLoader* this, BasicArrayList* pointVector, JSONObject* circle);
static void SVGAsJSONSimpleLoader_addRectangle(SVGAsJSONSimpleLoader* this, BasicArrayList* pointVector, JSONObject* rectangle);
static void SVGAsJSONSimpleLoader_addPoint(SVGAsJSONSimpleLoader* this, BasicArrayList* pointVector, int32_t x, int32_t y);
static void SVGAsJSONSimpleLoader_addSeparator(SVGAsJSONSimpleLoader* this, BasicArrayList* pointVector);
static int32_t SVGAsJSONSimpleLoader_readInt(SVGAsJSONSimpleLoader* this, JSONObject* anyType, const char* key);
static int32_t SVGAsJSONSimpleLoader_readInt(SVGAsJSONSimpleLoader* this, JSONObject* anyType, const char* key, int32_t defaultValue);
static int32_t SVGAsJSONSimpleLoader_toInt(SVGAsJSONSimpleLoader* this, Any* value, const char* key);
static JSONObject* SVGAsJSONSimpleLoader_asObject(SVGAsJSONSimpleLoader* this, Any* value, const char* name);
static int32_t** SVGAsJSONSimpleLoader_toPoints(SVGAsJSONSimpleLoader* this, BasicArrayList* pointVector);
void SVGAsJSONSimpleLoader_main(const char** args);

// Static fields with runtime initializers: call this once at startup
void SVGAsJSONSimpleLoader_staticInit(void) {
    SVGAsJSONSimpleLoader_instance = SVGAsJSONSimpleLoader_new();
}

static void SVGAsJSONSimpleLoader_initFields(SVGAsJSONSimpleLoader* this) {
    this->graphicsStrings = GraphicsStrings_getInstance();
    this->shapeTypeFactory = ShapeTypeFactory_getInstance();
    this->KEY_SVG = "svg";
    this->KEY_X1 = "x1";
    this->KEY_Y1 = "y1";
    this->KEY_X2 = "x2";
    this->KEY_Y2 = "y2";
    this->KEY_CX = "cx";
    this->KEY_CY = "cy";
    this->KEY_R = "r";
    this->KEY_X = PositionStrings_getInstance()->X;
    this->KEY_Y = PositionStrings_getInstance()->Y;
    this->ERROR_PARSE_SVG_JSON = "Unable to parse SVG JSON";
    this->ERROR_MISSING_KEY_PREFIX = "Missing key: ";
    this->ERROR_INVALID_NUMBER_PREFIX = "Invalid number for key: ";
    this->ERROR_EXPECTED_OBJECT_PREFIX = "Expected object for: ";
    this->EMPTY_POINTS = PrimitiveIntUtil_getTwoDimensionalArrayInstance();
    this->SHAPE_SEPARATOR = ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 }));
    this->CIRCLE_SEGMENTS = 16;
}

void SVGAsJSONSimpleLoader_init(SVGAsJSONSimpleLoader* this) {
    SVGAsJSONSimpleLoader_initFields(this);
}

SVGAsJSONSimpleLoader* SVGAsJSONSimpleLoader_new(void) {
    SVGAsJSONSimpleLoader* this = calloc(1, sizeof(SVGAsJSONSimpleLoader));
    SVGAsJSONSimpleLoader_init(this);
    return this;
}


SVGAsJSONSimpleLoader* SVGAsJSONSimpleLoader_getInstance(void) {
        return SVGAsJSONSimpleLoader_instance;
}


// throws Exception
int32_t** SVGAsJSONSimpleLoader_load(SVGAsJSONSimpleLoader* this, const char* svgAsJson) {
        if (svgAsJson == nullptr) {
            return this->EMPTY_POINTS;
        }
        JAVA_TRY {
            JSONObject* root = JSONObject_new(svgAsJson);
            Any* svgValue = JSONObject_opt(root, this->KEY_SVG);
            JSONObject* svg = (svgValue == nullptr ? root : SVGAsJSONSimpleLoader_asObject(this, svgValue, this->KEY_SVG));
            BasicArrayList* pointVector = BasicArrayListD_new();
            Any** objectArray = JSONObject_keysAsArray(svg);
            int32_t size = java_array_length(objectArray);
            for (int32_t index = 0; index < size; index++) {
                const char* key = ((const char*) objectArray[index]);
                Any* value = JSONObject_opt(svg, key);
                if (JAVA_CALL(this->shapeTypeFactory->KEY_LINE, equals, key)) {
                    SVGAsJSONSimpleLoader_addShapes(this, pointVector, value, this->shapeTypeFactory->LINE);
                } else if (ShapeTypeFactory_equals(this->shapeTypeFactory, key)) {
                    SVGAsJSONSimpleLoader_addShapes(this, pointVector, value, this->shapeTypeFactory->CIRCLE);
                } else if (JAVA_CALL(this->shapeTypeFactory->KEY_RECT, equals, key) || JAVA_CALL(this->shapeTypeFactory->KEY_RECTANGLE, equals, key)) {
                    SVGAsJSONSimpleLoader_addShapes(this, pointVector, value, this->shapeTypeFactory->RECTANGLE);
                }
            }
            return SVGAsJSONSimpleLoader_toPoints(this, pointVector);
        } JAVA_CATCH(JSONException, e) {
            java_throw(java_exception_new("IllegalArgumentException", this->ERROR_PARSE_SVG_JSON, e));
        } JAVA_END_TRY;
}


// throws Exception
static void SVGAsJSONSimpleLoader_addShapes(SVGAsJSONSimpleLoader* this, BasicArrayList* pointVector, Any* value, ShapeType* shapeType) {
        if (java_instanceof(value, "JSONArray")) {
            JSONArray* array = ((JSONArray*) value);
            int32_t size = JSONArray_length(array);
            for (int32_t index = 0; index < size; index++) {
                SVGAsJSONSimpleLoader_addShape(this, pointVector, JSONArray_opt(array, index), shapeType);
            }
        } else {
            SVGAsJSONSimpleLoader_addShape(this, pointVector, value, shapeType);
        }
}


// throws Exception
static void SVGAsJSONSimpleLoader_addShape(SVGAsJSONSimpleLoader* this, BasicArrayList* pointVector, Any* value, ShapeType* shapeType) {
        JSONObject* shape = SVGAsJSONSimpleLoader_asObject(this, value, ShapeType_getName(shapeType));
        if (shapeType == this->shapeTypeFactory->LINE) {
            SVGAsJSONSimpleLoader_addLine(this, pointVector, shape);
        } else if (shapeType == this->shapeTypeFactory->CIRCLE) {
            SVGAsJSONSimpleLoader_addCircle(this, pointVector, shape);
        } else {
            SVGAsJSONSimpleLoader_addRectangle(this, pointVector, shape);
        }
}


// throws Exception
static void SVGAsJSONSimpleLoader_addLine(SVGAsJSONSimpleLoader* this, BasicArrayList* pointVector, JSONObject* line) {
        SVGAsJSONSimpleLoader_addPoint(this, pointVector, SVGAsJSONSimpleLoader_readInt(this, line, this->KEY_X1), SVGAsJSONSimpleLoader_readInt(this, line, this->KEY_Y1));
        SVGAsJSONSimpleLoader_addPoint(this, pointVector, SVGAsJSONSimpleLoader_readInt(this, line, this->KEY_X2), SVGAsJSONSimpleLoader_readInt(this, line, this->KEY_Y2));
        SVGAsJSONSimpleLoader_addSeparator(this, pointVector);
}


// throws Exception
static void SVGAsJSONSimpleLoader_addCircle(SVGAsJSONSimpleLoader* this, BasicArrayList* pointVector, JSONObject* circle) {
        int32_t cx = SVGAsJSONSimpleLoader_readInt(this, circle, this->KEY_CX);
        int32_t cy = SVGAsJSONSimpleLoader_readInt(this, circle, this->KEY_CY);
        int32_t radius = SVGAsJSONSimpleLoader_readInt(this, circle, this->KEY_R);
        for (int32_t index = 0; index <= this->CIRCLE_SEGMENTS; index++) {
            double angle = (Math_PI * 2.0 * index) / this->CIRCLE_SEGMENTS;
            int32_t x = ((int32_t) ((int64_t) llround(cx + (cos(angle) * radius))));
            int32_t y = ((int32_t) ((int64_t) llround(cy + (sin(angle) * radius))));
            SVGAsJSONSimpleLoader_addPoint(this, pointVector, x, y);
        }
        SVGAsJSONSimpleLoader_addSeparator(this, pointVector);
}


// throws Exception
static void SVGAsJSONSimpleLoader_addRectangle(SVGAsJSONSimpleLoader* this, BasicArrayList* pointVector, JSONObject* rectangle) {
        int32_t x = SVGAsJSONSimpleLoader_readInt(this, rectangle, this->KEY_X, 0);
        int32_t y = SVGAsJSONSimpleLoader_readInt(this, rectangle, this->KEY_Y, 0);
        int32_t width = SVGAsJSONSimpleLoader_readInt(this, rectangle, this->graphicsStrings->WIDTH);
        int32_t height = SVGAsJSONSimpleLoader_readInt(this, rectangle, this->graphicsStrings->HEIGHT);
        SVGAsJSONSimpleLoader_addPoint(this, pointVector, x, y);
        SVGAsJSONSimpleLoader_addPoint(this, pointVector, x + width, y);
        SVGAsJSONSimpleLoader_addPoint(this, pointVector, x + width, y + height);
        SVGAsJSONSimpleLoader_addPoint(this, pointVector, x, y + height);
        SVGAsJSONSimpleLoader_addPoint(this, pointVector, x, y);
        SVGAsJSONSimpleLoader_addSeparator(this, pointVector);
}


static void SVGAsJSONSimpleLoader_addPoint(SVGAsJSONSimpleLoader* this, BasicArrayList* pointVector, int32_t x, int32_t y) {
        BasicArrayList_add(pointVector, ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ x, y }) / sizeof(int32_t), (int32_t[]){ x, y })));
}


static void SVGAsJSONSimpleLoader_addSeparator(SVGAsJSONSimpleLoader* this, BasicArrayList* pointVector) {
        BasicArrayList_add(pointVector, ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ this->SHAPE_SEPARATOR[0], this->SHAPE_SEPARATOR[1] }) / sizeof(int32_t), (int32_t[]){ this->SHAPE_SEPARATOR[0], this->SHAPE_SEPARATOR[1] })));
}


// throws Exception
static int32_t SVGAsJSONSimpleLoader_readInt(SVGAsJSONSimpleLoader* this, JSONObject* anyType, const char* key) {
        Any* value = JSONObject_get(anyType, key);
        if (value == nullptr) {
            java_throw(java_exception_new("IllegalArgumentException", java_concat(this->ERROR_MISSING_KEY_PREFIX, key)));
        }
        return SVGAsJSONSimpleLoader_toInt(this, value, key);
}


// Java overloaded method: C needs a different name
static int32_t SVGAsJSONSimpleLoader_readInt(SVGAsJSONSimpleLoader* this, JSONObject* anyType, const char* key, int32_t defaultValue) {
        JAVA_TRY {
            if (JSONObject_has(anyType, key)) {
                Any* value = JSONObject_get(anyType, key);
                return SVGAsJSONSimpleLoader_toInt(this, value, key);
            }
        } JAVA_CATCH(Exception, e) {
            java_print_exception(e);
        } JAVA_END_TRY;
        return defaultValue;
}


static int32_t SVGAsJSONSimpleLoader_toInt(SVGAsJSONSimpleLoader* this, Any* value, const char* key) {
        if (java_instanceof(value, "Number")) {
            return ((int32_t) ((int64_t) llround(Number_doubleValue((((Number*) value))))));
        }
        if (java_instanceof(value, "String")) {
            return ((int32_t) ((int64_t) llround(strtod(((const char*) value), nullptr))));
        }
        java_throw(java_exception_new("IllegalArgumentException", java_concat(this->ERROR_INVALID_NUMBER_PREFIX, key)));
}


static JSONObject* SVGAsJSONSimpleLoader_asObject(SVGAsJSONSimpleLoader* this, Any* value, const char* name) {
        if (java_instanceof(value, "JSONObject")) {
            return ((JSONObject*) value);
        }
        java_throw(java_exception_new("IllegalArgumentException", java_concat(this->ERROR_EXPECTED_OBJECT_PREFIX, name)));
}


static int32_t** SVGAsJSONSimpleLoader_toPoints(SVGAsJSONSimpleLoader* this, BasicArrayList* pointVector) {
        if (BasicArrayList_size(pointVector) == 0) {
            return this->EMPTY_POINTS;
        }
        int32_t** points = ((int32_t**) java_array_new2(sizeof(int32_t), BasicArrayList_size(pointVector), 2));
        for (int32_t index = 0; index < BasicArrayList_size(pointVector); index++) {
            int32_t* point = ((int32_t*) BasicArrayList_get(pointVector, index));
            points[index] = point;
        }
        return points;
}


// throws Exception
void SVGAsJSONSimpleLoader_main(const char** args) {
        const char* svgAsJson = java_concat(java_concat(java_concat(java_concat(java_concat(java_concat(java_concat(java_concat(java_concat("{\"svg\": {\n", "    \"rect\": {\n"), "        \"width\": 20,\n"), "        \"fill\": \"#008c00\",\n"), "        \"height\": 20\n"), "    },\n"), "    \"xmlns\": \"http://www.w3.org/2000/svg\",\n"), "    \"width\": 20,\n"), "    \"height\": 20\n"), "}}\n");
        int32_t** points = SVGAsJSONSimpleLoader_load(SVGAsJSONSimpleLoader_getInstance(), svgAsJson);
        StringMaker* stringBuilder = StringMaker_new();
        int32_t size = java_array_length(points);
        for (int32_t index = 0; index < size; index++) {
            int32_t size2 = java_array_length(points[index]);
            for (int32_t index2 = 0; index2 < size2; index2++) {
                StringMaker_appendint(stringBuilder, ((int32_t) points[index][index2]));
                StringMaker_append(stringBuilder, CommonSeps_getInstance()->COMMA);
            }
        }
        puts(java_string_of(StringMaker_toString(stringBuilder)));
}

