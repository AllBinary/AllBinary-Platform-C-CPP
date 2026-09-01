
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

            #include <vector>
        
            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/IllegalArgumentException.h"
        
            #include "../../../java/lang/System.h"
        
            #include "../../../java/lang/Math.h"
        
            #include "../../../java/lang/Double.h"
        
#include <java/util/Enumeration.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/json/me/JSONArray.h>

      
#include <org/json/me/JSONException.h>

      
#include <org/json/me/JSONObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ShapeTypeFactory.h"
#include "ShapeType.h"
#include "Number.h"

class SVGAsJSONSimpleLoader
            : public Object
         {

    private: static SVGAsJSONSimpleLoader instance() { return SVGAsJSONSimpleLoader(); }

    public: static SVGAsJSONSimpleLoader getInstance();

                //@Throws(Exception.constructor)
            
    public: static void main(std::vector<std::string> args);

    private: const ShapeTypeFactory shapeTypeFactory = ShapeTypeFactory::getInstance();

    private: const std::string KEY_SVG = "svg";

    private: const std::string KEY_X1 = "x1";

    private: const std::string KEY_Y1 = "y1";

    private: const std::string KEY_X2 = "x2";

    private: const std::string KEY_Y2 = "y2";

    private: const std::string KEY_CX = "cx";

    private: const std::string KEY_CY = "cy";

    private: const std::string KEY_R = "r";

    private: const std::string KEY_X = PositionStrings::getInstance().X;

    private: const std::string KEY_Y = PositionStrings::getInstance().Y;

    private: const std::string KEY_WIDTH = "width";

    private: const std::string KEY_HEIGHT = "height";

    private: const std::string ERROR_PARSE_SVG_JSON = "Unable to parse SVG JSON";

    private: const std::string ERROR_MISSING_KEY_PREFIX = "Missing key: ";

    private: const std::string ERROR_INVALID_NUMBER_PREFIX = "Invalid number for key: ";

    private: const std::string ERROR_EXPECTED_OBJECT_PREFIX = "Expected object for: ";

    private: const std::vector<std::vector<int32_t>> EMPTY_POINTS = PrimitiveIntUtil::getTwoDimensionalArrayInstance();

    private: const std::vector<int32_t> SHAPE_SEPARATOR = {1000,1000};

    private: const int32_t CIRCLE_SEGMENTS = 16;

                //@Throws(Exception.constructor)
            
    public: std::vector<std::vector<int32_t>> load(std::string svgAsJson);

                //@Throws(Exception.constructor)
            
    private: void addShapes(BasicArrayList pointVector, Object* value, ShapeType shapeType);

                //@Throws(Exception.constructor)
            
    private: void addShape(BasicArrayList pointVector, Object* value, ShapeType shapeType);

                //@Throws(Exception.constructor)
            
    private: void addLine(BasicArrayList pointVector, JSONObject line);

                //@Throws(Exception.constructor)
            
    private: void addCircle(BasicArrayList pointVector, JSONObject circle);

                //@Throws(Exception.constructor)
            
    private: void addRectangle(BasicArrayList pointVector, JSONObject rectangle);

    private: void addPoint(BasicArrayList pointVector, int32_t x, int32_t y);

    private: void addSeparator(BasicArrayList pointVector);

                //@Throws(Exception.constructor)
            
    private: int32_t readInt(JSONObject anyType, std::string key);

    private: int32_t readInt(JSONObject anyType, std::string key, int32_t defaultValue);

    private: int32_t toInt(Object* value, std::string key);

    private: JSONObject asObject(Object value, std::string name);

    private: std::vector<std::vector<int32_t>> toPoints(BasicArrayList pointVector);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_SVGASJSONSIMPLELOADER_H
