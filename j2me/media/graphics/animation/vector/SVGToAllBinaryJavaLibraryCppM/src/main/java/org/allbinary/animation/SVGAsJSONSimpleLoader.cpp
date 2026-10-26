
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/IllegalArgumentException.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Math.h"
        
            #include "java/lang/Double.h"
        
#include <java/util/Enumeration.h>

      
#include <org/allbinary/graphics/GraphicsStrings.h>

      
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

    public: static SVGAsJSONSimpleLoader getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SVGAsJSONSimpleLoader::instance();
    
}


                //@Throws(Exception.constructor)
            
    public: static void main(std::vector<std::string> args){

    std::string svgAsJson = "{\"svg\": {\n" +"    \"rect\": {\n" +"        \"width\": 20,\n" +"        \"fill\": \"#008c00\",\n" +"        \"height\": 20\n" +"    },\n" +"    \"xmlns\": \"http://www.w3.org/2000/svg\",\n" +"    \"width\": 20,\n" +"    \"height\": 20\n" +"}}\n";;
    

    std::vector<std::vector<int32_t>> points = SVGAsJSONSimpleLoader::getInstance().load(svgAsJson);;
    

    StringMaker stringBuilder = StringMaker();;
    

    int32_t size = points.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    int32_t size2 = points[index].size();;
    




                        for (
    int32_t index2 = 0;index2 < size2; index2++)
        {
stringBuilder.appendint(points[index][index2]);
    
stringBuilder.append(CommonSeps::getInstance().COMMA);
    
}

}

console.log(stringBuilder.toString());
    
}


    private: const GraphicsStrings graphicsStrings = GraphicsStrings::getInstance();

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

    private: const std::string ERROR_PARSE_SVG_JSON = "Unable to parse SVG JSON";

    private: const std::string ERROR_MISSING_KEY_PREFIX = "Missing key: ";

    private: const std::string ERROR_INVALID_NUMBER_PREFIX = "Invalid number for key: ";

    private: const std::string ERROR_EXPECTED_OBJECT_PREFIX = "Expected object for: ";

    private: const std::vector<std::vector<int32_t>> EMPTY_POINTS = PrimitiveIntUtil::getTwoDimensionalArrayInstance();

    private: const std::vector<int32_t> SHAPE_SEPARATOR = {1000,1000};

    private: const int32_t CIRCLE_SEGMENTS = 16;

                //@Throws(Exception.constructor)
            
    public: std::vector<std::vector<int32_t>> load(std::string svgAsJson){

                        if(false)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EMPTY_POINTS;
    

                                    }
                                

        try {
            
    JSONObject root = JSONObject(svgAsJson);;
    

    Object* svgValue = root.opt(KEY_SVG);;
    

    JSONObject svg = svgValue == 
                                    nullptr
                                
                        ?       
                                root
                                :

                            this->asObject(svgValue, KEY_SVG);

    ;;
    

    BasicArrayList pointVector = BasicArrayListD();;
    

    Enumeration<Object*> keys = svg.keys();;
    

        while(keys.hasMoreElements())
        {

    std::string key = keys.nextElement();;
    

    Object* value = svg.opt(key);;
    

                        if(this->shapeTypeFactory.KEY_LINE. === key)
                        
                                    {
                                    this->addShapes(pointVector, value, this->shapeTypeFactory.LINE);
    

                                    }
                                
                             else 
                        if(this->shapeTypeFactory. === key)
                        
                                    {
                                    this->addShapes(pointVector, value, this->shapeTypeFactory.CIRCLE);
    

                                    }
                                
                             else 
                        if(this->shapeTypeFactory.KEY_RECT. === key || this->shapeTypeFactory.KEY_RECTANGLE. === key)
                        
                                    {
                                    this->addShapes(pointVector, value, this->shapeTypeFactory.RECTANGLE);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->toPoints(pointVector);;
    

                //: 
} catch(e) 
            {



                            throw IllegalArgumentException(ERROR_PARSE_SVG_JSON, e);
                    
}

}


                //@Throws(Exception.constructor)
            
    private: void addShapes(BasicArrayList pointVector, Object* value, ShapeType shapeType){

                        if(value instanceof JSONArray)
                        
                                    {
                                    
    JSONArray array = *dynamic_cast<JSONArray*>(value);;
    

    int32_t size = array.length();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->addShape(pointVector, array.opt(index), shapeType);
    
}


                                    }
                                
                        else {
                            this->addShape(pointVector, value, shapeType);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    private: void addShape(BasicArrayList pointVector, Object* value, ShapeType shapeType){

    JSONObject shape = this->asObject(value, shapeType.getName());;
    

                        if(shapeType == this->shapeTypeFactory.LINE)
                        
                                    {
                                    this->addLine(pointVector, shape);
    

                                    }
                                
                             else 
                        if(shapeType == this->shapeTypeFactory.CIRCLE)
                        
                                    {
                                    this->addCircle(pointVector, shape);
    

                                    }
                                
                        else {
                            this->addRectangle(pointVector, shape);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    private: void addLine(BasicArrayList pointVector, JSONObject line){
this->addPoint(pointVector, this->readInt(line, KEY_X1), this->readInt(line, KEY_Y1));
    
this->addPoint(pointVector, this->readInt(line, KEY_X2), this->readInt(line, KEY_Y2));
    
this->addSeparator(pointVector);
    
}


                //@Throws(Exception.constructor)
            
    private: void addCircle(BasicArrayList pointVector, JSONObject circle){

    int32_t cx = this->readInt(circle, KEY_CX);;
    

    int32_t cy = this->readInt(circle, KEY_CY);;
    

    int32_t radius = this->readInt(circle, KEY_R);;
    




                        for (
    int32_t index = 0;index <= CIRCLE_SEGMENTS; index++)
        {

    double angle = (Math::PI *2.0d *index) /CIRCLE_SEGMENTS;;
    

    int32_t x = static_cast<int32_t>(Math::round(cx +(Math::cos(angle) *radius)));;
    

    int32_t y = static_cast<int32_t>(Math::round(cy +(Math::sin(angle) *radius)));;
    
this->addPoint(pointVector, x, y);
    
}

this->addSeparator(pointVector);
    
}


                //@Throws(Exception.constructor)
            
    private: void addRectangle(BasicArrayList pointVector, JSONObject rectangle){

    int32_t x = this->readInt(rectangle, KEY_X, 0);;
    

    int32_t y = this->readInt(rectangle, KEY_Y, 0);;
    

    int32_t width = this->readInt(rectangle, graphicsStrings.WIDTH);;
    

    int32_t height = this->readInt(rectangle, graphicsStrings.HEIGHT);;
    
this->addPoint(pointVector, x, y);
    
this->addPoint(pointVector, x +width, y);
    
this->addPoint(pointVector, x +width, y +height);
    
this->addPoint(pointVector, x, y +height);
    
this->addPoint(pointVector, x, y);
    
this->addSeparator(pointVector);
    
}


    private: void addPoint(BasicArrayList pointVector, int32_t x, int32_t y){
pointVector.add({x,y});
    
}


    private: void addSeparator(BasicArrayList pointVector){
pointVector.add({SHAPE_SEPARATOR[0],SHAPE_SEPARATOR[1]});
    
}


                //@Throws(Exception.constructor)
            
    private: int32_t readInt(JSONObject anyType, std::string key){

    Object* value = anyType.get(key);;
    

                        if(value == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw IllegalArgumentException(ERROR_MISSING_KEY_PREFIX +key);
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->toInt(value, key);;
    
}


    private: int32_t readInt(JSONObject anyType, std::string key, int32_t defaultValue){

        try {
            
                        if(anyType.has(key))
                        
                                    {
                                    
    Object* value = anyType.get(key);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->toInt(value, key);;
    

                                    }
                                

                //: 
} catch(e) 
            {
e.printStackTrace();
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return defaultValue;
    
}


    private: int32_t toInt(Object* value, std::string key){

                        if(value instanceof Number)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(Math::round((value)).doubleValue()));
    

                                    }
                                

                        if(value instanceof String)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(Math::round(Double::parseDouble(value)));
    

                                    }
                                



                            throw IllegalArgumentException(ERROR_INVALID_NUMBER_PREFIX +key);
                    
}


    private: JSONObject asObject(Object value, std::string name){

                        if(value instanceof JSONObject)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return *dynamic_cast<JSONObject*>(value);
    

                                    }
                                



                            throw IllegalArgumentException(ERROR_EXPECTED_OBJECT_PREFIX +name);
                    
}


    private: std::vector<std::vector<int32_t>> toPoints(BasicArrayList pointVector){

                        if(pointVector.size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EMPTY_POINTS;
    

                                    }
                                

    std::vector<std::vector<int32_t>> points = std::vector<std::vector<int32_t>>(pointVector.size(), std::vector<int32_t>(2));;
    




                        for (
    int32_t index = 0;index < pointVector.size(); index++)
        {

    std::vector<int32_t> point = 
                        //Otherwise - castExpression - ArrayType - INT
pointVector.get(index)
                        //Otherwise - castExpression - ArrayType - INT
;;
    
points[index]= point;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return points;
    
}


};

            

