
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
        

    private: static const instance: SVGAsJSONSimpleLoader = new SVGAsJSONSimpleLoader();

    public static SVGAsJSONSimpleLoader getInstance();

                //@Throws(Exception.constructor)
            
    public static main(std::vector<string> args);

    private: const shapeTypeFactory: ShapeTypeFactory = ShapeTypeFactory.getInstance()!;

    private: const KEY_SVG: string = "svg";

    private: const KEY_X1: string = "x1";

    private: const KEY_Y1: string = "y1";

    private: const KEY_X2: string = "x2";

    private: const KEY_Y2: string = "y2";

    private: const KEY_CX: string = "cx";

    private: const KEY_CY: string = "cy";

    private: const KEY_R: string = "r";

    private: const KEY_X: string = PositionStrings.getInstance()!.X;

    private: const KEY_Y: string = PositionStrings.getInstance()!.Y;

    private: const KEY_WIDTH: string = "width";

    private: const KEY_HEIGHT: string = "height";

    private: const ERROR_PARSE_SVG_JSON: string = "Unable to parse SVG JSON";

    private: const ERROR_MISSING_KEY_PREFIX: string = "Missing key: ";

    private: const ERROR_INVALID_NUMBER_PREFIX: string = "Invalid number for key: ";

    private: const ERROR_EXPECTED_OBJECT_PREFIX: string = "Expected object for: ";

    private: const EMPTY_POINTS: std::vector<std::vector<int32_t>> = PrimitiveIntUtil.getTwoDimensionalArrayInstance()!;

    private: const SHAPE_SEPARATOR: std::vector<int32_t> = [1000,1000];

    private: const CIRCLE_SEGMENTS: int32_t = 16;

                //@Throws(Exception.constructor)
            
    public std::vector<std::vector<int32_t>> load(string svgAsJson);

                //@Throws(Exception.constructor)
            
    addShapes(BasicArrayList pointVector, any = {} value, ShapeType shapeType);

                //@Throws(Exception.constructor)
            
    addShape(BasicArrayList pointVector, any = {} value, ShapeType shapeType);

                //@Throws(Exception.constructor)
            
    addLine(BasicArrayList pointVector, JSONObject line);

                //@Throws(Exception.constructor)
            
    addCircle(BasicArrayList pointVector, JSONObject circle);

                //@Throws(Exception.constructor)
            
    addRectangle(BasicArrayList pointVector, JSONObject rectangle);

    addPoint(BasicArrayList pointVector, int32_t x, int32_t y);

    addSeparator(BasicArrayList pointVector);

                //@Throws(Exception.constructor)
            
    int32_t readInt(JSONObject anyType, string key);

    int32_t readInt(JSONObject anyType, string key, int32_t defaultValue);

    int32_t toInt(any = {} value, string key);

    JSONObject asObject(Object value, string name);

    std::vector<std::vector<int32_t>> toPoints(BasicArrayList pointVector);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_SVGASJSONSIMPLELOADER_H
