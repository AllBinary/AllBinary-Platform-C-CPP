
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_SVGASJSONSIMPLELOADER_CPP
        #define ORG_ALLBINARY_ANIMATION_SVGASJSONSIMPLELOADER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/SVGAsJSONSimpleLoader.h"
        

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
        #include "org/allbinary/animation/ShapeTypeFactory.h"
#include "org/allbinary/animation/ShapeType.h"
#include "org/allbinary/animation/Number.h"


SVGAsJSONSimpleLoader::SVGAsJSONSimpleLoader() : graphicsStrings(GraphicsStrings::getInstance()), shapeTypeFactory(ShapeTypeFactory::getInstance()), KEY_X(PositionStrings::getInstance()->X), KEY_Y(PositionStrings::getInstance()->Y), EMPTY_POINTS(PrimitiveIntUtil::getTwoDimensionalArrayInstance()), SHAPE_SEPARATOR({1000,1000}) {
        }
        auto SVGAsJSONSimpleLoader::instance_owner() -> SVGAsJSONSimpleLoader* { static std::unique_ptr<SVGAsJSONSimpleLoader> value(new SVGAsJSONSimpleLoader()); return value.get(); }
SVGAsJSONSimpleLoader* SVGAsJSONSimpleLoader::instance = SVGAsJSONSimpleLoader::instance_owner();

    auto SVGAsJSONSimpleLoader::getInstance() -> SVGAsJSONSimpleLoader*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SVGAsJSONSimpleLoader::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto SVGAsJSONSimpleLoader::load(std::string svgAsJson) -> std::vector<std::vector<int32_t>>{

                        if(false)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return EMPTY_POINTS;
    

                                    }
                                

        try {
            
    JSONObject* root = new JSONObject(svgAsJson);;
    

    Object* svgValue = JavaBoxes::toObject(root->opt(KEY_SVG));;
    

    JSONObject* svg = svgValue == 
                                    nullptr
                                
                        ?       
                                root
                                :

                            this->asObject(svgValue, KEY_SVG);;;
    

    BasicArrayList* pointVector = new BasicArrayListD();;
    

    Enumeration<Object*>* keys = svg->keys();;
    

        while(keys->hasMoreElements())
        {

    std::string key = JavaBoxes::unbox<std::string>(keys->nextElement());;
    

    Object* value = JavaBoxes::toObject(svg->opt(key));;
    

                        if(JavaObjects::equals(this->shapeTypeFactory->KEY_LINE, key))
                        
                                    {
                                    this->addShapes(pointVector, value, this->shapeTypeFactory->LINE);
    

                                    }
                                
                             else 
                        if(JavaObjects::equals(this->shapeTypeFactory, key))
                        
                                    {
                                    this->addShapes(pointVector, value, this->shapeTypeFactory->CIRCLE);
    

                                    }
                                
                             else 
                        if(JavaObjects::equals(this->shapeTypeFactory->KEY_RECT, key) || JavaObjects::equals(this->shapeTypeFactory->KEY_RECTANGLE, key))
                        
                                    {
                                    this->addShapes(pointVector, value, this->shapeTypeFactory->RECTANGLE);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->toPoints(pointVector);;
    

                //: 
} catch(JSONException& e) 
            {



                            throw IllegalArgumentException(ERROR_PARSE_SVG_JSON, &e);
                    
}

}


                //@Throws(Exception.constructor)
            
    auto SVGAsJSONSimpleLoader::addShapes(BasicArrayList* pointVector, Object* value, ShapeType* shapeType) -> void{

                        if(
                                        (dynamic_cast<const JSONArray*>(value) != nullptr)
                                    )
                        
                                    {
                                    
    JSONArray* array = dynamic_cast<JSONArray*>(value);;
    

    int32_t size = array->length();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->addShape(pointVector, array->opt(index), shapeType);
    
}


                                    }
                                
                        else {
                            this->addShape(pointVector, value, shapeType);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto SVGAsJSONSimpleLoader::addShape(BasicArrayList* pointVector, Object* value, ShapeType* shapeType) -> void{

    JSONObject* shape = this->asObject(value, shapeType->getName());;
    

                        if(shapeType == this->shapeTypeFactory->LINE)
                        
                                    {
                                    this->addLine(pointVector, shape);
    

                                    }
                                
                             else 
                        if(shapeType == this->shapeTypeFactory->CIRCLE)
                        
                                    {
                                    this->addCircle(pointVector, shape);
    

                                    }
                                
                        else {
                            this->addRectangle(pointVector, shape);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto SVGAsJSONSimpleLoader::addLine(BasicArrayList* pointVector, JSONObject* line) -> void{
this->addPoint(pointVector, this->readInt(line, KEY_X1), this->readInt(line, KEY_Y1));
    
this->addPoint(pointVector, this->readInt(line, KEY_X2), this->readInt(line, KEY_Y2));
    
this->addSeparator(pointVector);
    
}


                //@Throws(Exception.constructor)
            
    auto SVGAsJSONSimpleLoader::addCircle(BasicArrayList* pointVector, JSONObject* circle) -> void{

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
            
    auto SVGAsJSONSimpleLoader::addRectangle(BasicArrayList* pointVector, JSONObject* rectangle) -> void{

    int32_t x = this->readInt(rectangle, KEY_X, 0);;
    

    int32_t y = this->readInt(rectangle, KEY_Y, 0);;
    

    int32_t width = this->readInt(rectangle, graphicsStrings->WIDTH);;
    

    int32_t height = this->readInt(rectangle, graphicsStrings->HEIGHT);;
    
this->addPoint(pointVector, x, y);
    
this->addPoint(pointVector, x +width, y);
    
this->addPoint(pointVector, x +width, y +height);
    
this->addPoint(pointVector, x, y +height);
    
this->addPoint(pointVector, x, y);
    
this->addSeparator(pointVector);
    
}


    auto SVGAsJSONSimpleLoader::addPoint(BasicArrayList* pointVector, int32_t x, int32_t y) -> void{
pointVector->add(std::vector<int32_t>{x,y});
    
}


    auto SVGAsJSONSimpleLoader::addSeparator(BasicArrayList* pointVector) -> void{
pointVector->add(std::vector<int32_t>{SHAPE_SEPARATOR[0],SHAPE_SEPARATOR[1]});
    
}


                //@Throws(Exception.constructor)
            
    auto SVGAsJSONSimpleLoader::readInt(JSONObject* anyType, std::string key) -> int32_t{

    Object* value = JavaBoxes::toObject(anyType->get(key));;
    

                        if(value == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw IllegalArgumentException(JavaString::valueOf(ERROR_MISSING_KEY_PREFIX) +JavaString::valueOf(key));
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->toInt(value, key);;
    
}


    auto SVGAsJSONSimpleLoader::readInt(JSONObject* anyType, std::string key, int32_t defaultValue) -> int32_t{

        try {
            
                        if(anyType->has(key))
                        
                                    {
                                    
    Object* value = JavaBoxes::toObject(anyType->get(key));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->toInt(value, key);;
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
e.printStackTrace();
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return defaultValue;
    
}


    auto SVGAsJSONSimpleLoader::toInt(Object* value, std::string key) -> int32_t{

                        if(
                                        (dynamic_cast<const Number*>(value) != nullptr)
                                    )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return static_cast<int32_t>(Math::round(value = valuevalue
value.
                    ));
    

                                    }
                                

                        if(
                                        (dynamic_cast<const String*>(value) != nullptr)
                                    )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return static_cast<int32_t>(Math::round(Double.parseDouble(JavaBoxes::unbox<std::string>(value))));
    

                                    }
                                



                            throw IllegalArgumentException(JavaString::valueOf(ERROR_INVALID_NUMBER_PREFIX) +JavaString::valueOf(key));
                    
}


    auto SVGAsJSONSimpleLoader::asObject(Object* value, std::string name) -> JSONObject*{

                        if(
                                        (dynamic_cast<const JSONObject*>(value) != nullptr)
                                    )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<JSONObject*>(value);
    

                                    }
                                



                            throw IllegalArgumentException(JavaString::valueOf(ERROR_EXPECTED_OBJECT_PREFIX) +JavaString::valueOf(name));
                    
}


    auto SVGAsJSONSimpleLoader::toPoints(BasicArrayList* pointVector) -> std::vector<std::vector<int32_t>>{

                        if(pointVector->size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return EMPTY_POINTS;
    

                                    }
                                

    std::vector<std::vector<int32_t>> points = std::vector<std::vector<int32_t>>(pointVector->size(), std::vector<int32_t>(2));;
    




                        for (
    int32_t index = 0;index < pointVector->size(); index++)
        {

    std::vector<int32_t> point = JavaBoxes::unbox<std::vector<int32_t>>(
                        //Otherwise - castExpression - ArrayType - INT
pointVector->get(index)
                        //Otherwise - castExpression - ArrayType - INT
);;
    
points[index]= point;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return points;
    
}


                //@Throws(Exception.constructor)
            
    auto SVGAsJSONSimpleLoader::main(std::vector<std::string> args) -> void{

    std::string svgAsJson = JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("{\"svg\": {\n") +JavaString::valueOf("    \"rect\": {\n")) +JavaString::valueOf("        \"width\": 20,\n")) +JavaString::valueOf("        \"fill\": \"#008c00\",\n")) +JavaString::valueOf("        \"height\": 20\n")) +JavaString::valueOf("    },\n")) +JavaString::valueOf("    \"xmlns\": \"http://www.w3.org/2000/svg\",\n")) +JavaString::valueOf("    \"width\": 20,\n")) +JavaString::valueOf("    \"height\": 20\n")) +JavaString::valueOf("}}\n");;
    

    std::vector<std::vector<int32_t>> points = SVGAsJSONSimpleLoader::getInstance()->load(svgAsJson);;
    

    StringMaker* stringBuilder = new StringMaker();;
    

    int32_t size = points.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    int32_t size2 = points[index].size();;
    




                        for (
    int32_t index2 = 0;index2 < size2; index2++)
        {
stringBuilder->appendint(points[index][index2]);
    
stringBuilder->append(CommonSeps::getInstance()->COMMA);
    
}

}

System.out.println(stringBuilder->toString());
    
}




        #endif //ORG_ALLBINARY_ANIMATION_SVGASJSONSIMPLELOADER_CPP
