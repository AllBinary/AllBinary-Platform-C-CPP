
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_SVGASJSONSIMPLELOADER_H
        #define ORG_ALLBINARY_ANIMATION_SVGASJSONSIMPLELOADER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/IllegalArgumentException.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Math.h"
        
            #include "java/lang/Double.h"
        
#include <java/util/Enumeration.h>
class GraphicsStrings;
class PrimitiveIntUtil;
class StringMaker;
class PositionStrings;
class CommonSeps;
class BasicArrayList;
class BasicArrayListD;
class JSONArray;
class JSONException;
class JSONObject;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ShapeTypeFactory;
class ShapeType;
class Number;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SVGAsJSONSimpleLoader
            : public virtual Object
         {

    private: static SVGAsJSONSimpleLoader* instance_owner();
    private: static SVGAsJSONSimpleLoader* instance;

    public: static SVGAsJSONSimpleLoader* getInstance();

                //@Throws(Exception.constructor)
            
    public: static void main(std::vector<std::string> args);


            
    public: SVGAsJSONSimpleLoader();
        
    private: GraphicsStrings* graphicsStrings;

    private: ShapeTypeFactory* shapeTypeFactory;

    private: const std::string KEY_SVG = "svg";

    private: const std::string KEY_X1 = "x1";

    private: const std::string KEY_Y1 = "y1";

    private: const std::string KEY_X2 = "x2";

    private: const std::string KEY_Y2 = "y2";

    private: const std::string KEY_CX = "cx";

    private: const std::string KEY_CY = "cy";

    private: const std::string KEY_R = "r";

    private: const std::string KEY_X;

    private: const std::string KEY_Y;

    private: const std::string ERROR_PARSE_SVG_JSON = "Unable to parse SVG JSON";

    private: const std::string ERROR_MISSING_KEY_PREFIX = "Missing key: ";

    private: const std::string ERROR_INVALID_NUMBER_PREFIX = "Invalid number for key: ";

    private: const std::string ERROR_EXPECTED_OBJECT_PREFIX = "Expected object for: ";

    private: std::vector<std::vector<int32_t>> EMPTY_POINTS;

    private: std::vector<int32_t> SHAPE_SEPARATOR;

    private: const int32_t CIRCLE_SEGMENTS = 16;

                //@Throws(Exception.constructor)
            
    public: std::vector<std::vector<int32_t>> load(std::string svgAsJson);

                //@Throws(Exception.constructor)
            
    private: void addShapes(BasicArrayList* pointVector, Object* value, ShapeType* shapeType);
    private: void addShapes(BasicArrayList* pointVector, const std::string& value, ShapeType* shapeType) { return addShapes(pointVector, JavaString::box(value), shapeType); }
    private: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void addShapes(BasicArrayList* pointVector, BoxValue value, ShapeType* shapeType) { return addShapes(pointVector, JavaBoxes::toObject(value), shapeType); }

                //@Throws(Exception.constructor)
            
    private: void addShape(BasicArrayList* pointVector, Object* value, ShapeType* shapeType);
    private: void addShape(BasicArrayList* pointVector, const std::string& value, ShapeType* shapeType) { return addShape(pointVector, JavaString::box(value), shapeType); }
    private: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void addShape(BasicArrayList* pointVector, BoxValue value, ShapeType* shapeType) { return addShape(pointVector, JavaBoxes::toObject(value), shapeType); }

                //@Throws(Exception.constructor)
            
    private: void addLine(BasicArrayList* pointVector, JSONObject* line);

                //@Throws(Exception.constructor)
            
    private: void addCircle(BasicArrayList* pointVector, JSONObject* circle);

                //@Throws(Exception.constructor)
            
    private: void addRectangle(BasicArrayList* pointVector, JSONObject* rectangle);

    private: void addPoint(BasicArrayList* pointVector, int32_t x, int32_t y);

    private: void addSeparator(BasicArrayList* pointVector);

                //@Throws(Exception.constructor)
            
    private: int32_t readInt(JSONObject* anyType, std::string key);

    private: int32_t readInt(JSONObject* anyType, std::string key, int32_t defaultValue);

    private: int32_t toInt(Object* value, std::string key);
    private: int32_t toInt(const std::string& value, std::string key) { return toInt(JavaString::box(value), key); }
    private: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> int32_t toInt(BoxValue value, std::string key) { return toInt(JavaBoxes::toObject(value), key); }

    private: JSONObject* asObject(Object* value, std::string name);
    private: JSONObject* asObject(const std::string& value, std::string name) { return asObject(JavaString::box(value), name); }
    private: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> JSONObject* asObject(BoxValue value, std::string name) { return asObject(JavaBoxes::toObject(value), name); }

    private: std::vector<std::vector<int32_t>> toPoints(BasicArrayList* pointVector);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_SVGASJSONSIMPLELOADER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_SVGASJSONSIMPLELOADER_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_SVGASJSONSIMPLELOADER_H_COMPLETE
        #if __has_include(<java/util/Enumeration.h>)
#include <java/util/Enumeration.h>
#endif
#if __has_include(<org/allbinary/graphics/GraphicsStrings.h>)
#include <org/allbinary/graphics/GraphicsStrings.h>
#endif
#if __has_include(<org/allbinary/logic/math/PrimitiveIntUtil.h>)
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/math/PositionStrings.h>)
#include <org/allbinary/math/PositionStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/json/me/JSONArray.h>)
#include <org/json/me/JSONArray.h>
#endif
#if __has_include(<org/json/me/JSONException.h>)
#include <org/json/me/JSONException.h>
#endif
#if __has_include(<org/json/me/JSONObject.h>)
#include <org/json/me/JSONObject.h>
#endif
#if __has_include("org/allbinary/animation/ShapeTypeFactory.h")
#include "org/allbinary/animation/ShapeTypeFactory.h"
#endif
#if __has_include("org/allbinary/animation/ShapeType.h")
#include "org/allbinary/animation/ShapeType.h"
#endif
#if __has_include("org/allbinary/animation/Number.h")
#include "org/allbinary/animation/Number.h"
#endif

        #endif
    
