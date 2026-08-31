
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

    public static SVGAsJSONSimpleLoader getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return instance;
    
}


                //@Throws(Exception.constructor)
            
    public static main(std::vector<string> args){

    svgAsJson: string = "{\"svg\": {\n" +"    \"rect\": {\n" +"        \"width\": 20,\n" +"        \"fill\": \"#008c00\",\n" +"        \"height\": 20\n" +"    },\n" +"    \"xmlns\": \"http://www.w3.org/2000/svg\",\n" +"    \"width\": 20,\n" +"    \"height\": 20\n" +"}}\n";;
    

    points: std::vector<std::vector<int32_t>> = SVGAsJSONSimpleLoader.getInstance()!.load(svgAsJson)!;;
    

    stringBuilder: StringMaker = new StringMaker();;
    

    size: int32_t = points.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    size2: int32_t = points[index]!.length
                ;;
    




                        for (
    index2: int32_t = 0;index2 < size2; index2++)
        {
stringBuilder!.appendint(points[index]![index2]!);
    
stringBuilder!.append(CommonSeps.getInstance()!.COMMA);
    
}

}

console.log(stringBuilder!.toString());
    
}


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
            
    public std::vector<std::vector<int32_t>> load(string svgAsJson){

                        if(svgAsJson == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EMPTY_POINTS;
    

                                    }
                                

        try {
            
    root: JSONObject = new JSONObject(svgAsJson);;
    

    svgValue: any = root.opt(KEY_SVG)!;;
    

    svg: JSONObject = svgValue == 
                                    null
                                
                        ?       
                                root
                                :

                            this.asObject(svgValue, KEY_SVG);

    ;;
    

    pointVector: BasicArrayList = new BasicArrayListD();;
    

    keys: Enumeration<any> = svg.keys()!;;
    

        while(keys.hasMoreElements())
        {

    key: string = keys.nextElement()! as string;;
    

    value: any = svg.opt(key)!;;
    

                        if(this.shapeTypeFactory!.KEY_LINE. === key)
                        
                                    {
                                    this.addShapes(pointVector, value, this.shapeTypeFactory!.LINE);
    

                                    }
                                
                             else 
                        if(this.shapeTypeFactory!. === key)
                        
                                    {
                                    this.addShapes(pointVector, value, this.shapeTypeFactory!.CIRCLE);
    

                                    }
                                
                             else 
                        if(this.shapeTypeFactory!.KEY_RECT. === key || this.shapeTypeFactory!.KEY_RECTANGLE. === key)
                        
                                    {
                                    this.addShapes(pointVector, value, this.shapeTypeFactory!.RECTANGLE);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.toPoints(pointVector);;
    

                //: 
} catch(e) 
            {



                            throw new IllegalArgumentException(ERROR_PARSE_SVG_JSON, e);
                    
}

}


                //@Throws(Exception.constructor)
            
    addShapes(BasicArrayList pointVector, any = {} value, ShapeType shapeType){

                        if(value instanceof JSONArray)
                        
                                    {
                                    
    array: JSONArray = value as JSONArray;;
    

    size: int32_t = array.length()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
this.addShape(pointVector, array.opt(index), shapeType);
    
}


                                    }
                                
                        else {
                            this.addShape(pointVector, value, shapeType);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    addShape(BasicArrayList pointVector, any = {} value, ShapeType shapeType){

    shape: JSONObject = this.asObject(value, shapeType!.getName())!;;
    

                        if(shapeType == this.shapeTypeFactory!.LINE)
                        
                                    {
                                    this.addLine(pointVector, shape);
    

                                    }
                                
                             else 
                        if(shapeType == this.shapeTypeFactory!.CIRCLE)
                        
                                    {
                                    this.addCircle(pointVector, shape);
    

                                    }
                                
                        else {
                            this.addRectangle(pointVector, shape);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    addLine(BasicArrayList pointVector, JSONObject line){
this.addPoint(pointVector, this.readInt(line, KEY_X1), this.readInt(line, KEY_Y1));
    
this.addPoint(pointVector, this.readInt(line, KEY_X2), this.readInt(line, KEY_Y2));
    
this.addSeparator(pointVector);
    
}


                //@Throws(Exception.constructor)
            
    addCircle(BasicArrayList pointVector, JSONObject circle){

    cx: int32_t = this.readInt(circle, KEY_CX)!;;
    

    cy: int32_t = this.readInt(circle, KEY_CY)!;;
    

    radius: int32_t = this.readInt(circle, KEY_R)!;;
    




                        for (
    index: int32_t = 0;index <= CIRCLE_SEGMENTS; index++)
        {

    angle: double = (Math.PI *2.0d *index) /CIRCLE_SEGMENTS;;
    

    x: int32_t = static_cast<int32_t>(Math.round(cx +(Math.cos(angle) *radius)));;
    

    y: int32_t = static_cast<int32_t>(Math.round(cy +(Math.sin(angle) *radius)));;
    
this.addPoint(pointVector, x, y);
    
}

this.addSeparator(pointVector);
    
}


                //@Throws(Exception.constructor)
            
    addRectangle(BasicArrayList pointVector, JSONObject rectangle){

    x: int32_t = this.readInt(rectangle, KEY_X, 0)!;;
    

    y: int32_t = this.readInt(rectangle, KEY_Y, 0)!;;
    

    width: int32_t = this.readInt(rectangle, KEY_WIDTH)!;;
    

    height: int32_t = this.readInt(rectangle, KEY_HEIGHT)!;;
    
this.addPoint(pointVector, x, y);
    
this.addPoint(pointVector, x +width, y);
    
this.addPoint(pointVector, x +width, y +height);
    
this.addPoint(pointVector, x, y +height);
    
this.addPoint(pointVector, x, y);
    
this.addSeparator(pointVector);
    
}


    addPoint(BasicArrayList pointVector, int32_t x, int32_t y){
pointVector!.add([x,y]);
    
}


    addSeparator(BasicArrayList pointVector){
pointVector!.add([SHAPE_SEPARATOR[0],SHAPE_SEPARATOR[1]]);
    
}


                //@Throws(Exception.constructor)
            
    int32_t readInt(JSONObject anyType, string key){

    value: any = anyType!.get(key)!;;
    

                        if(value == 
                                    null
                                )
                        
                                    {
                                    


                            throw new IllegalArgumentException(ERROR_MISSING_KEY_PREFIX +key);
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.toInt(value, key);;
    
}


    int32_t readInt(JSONObject anyType, string key, int32_t defaultValue){

        try {
            
                        if(anyType!.has(key))
                        
                                    {
                                    
    value: any = anyType!.get(key)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.toInt(value, key);;
    

                                    }
                                

                //: 
} catch(e) 
            {
e.printStackTrace();
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return defaultValue;
    
}


    int32_t toInt(any = {} value, string key){

                        if(value instanceof Number)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(Math.round((value as Number).doubleValue()));
    

                                    }
                                

                        if(value instanceof String)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(Math.round(Double.parseDouble(value as string)));
    

                                    }
                                



                            throw new IllegalArgumentException(ERROR_INVALID_NUMBER_PREFIX +key);
                    
}


    JSONObject asObject(Object value, string name){

                        if(value instanceof JSONObject)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return value as JSONObject;
    

                                    }
                                



                            throw new IllegalArgumentException(ERROR_EXPECTED_OBJECT_PREFIX +name);
                    
}


    std::vector<std::vector<int32_t>> toPoints(BasicArrayList pointVector){

                        if(pointVector!.size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EMPTY_POINTS;
    

                                    }
                                

    points: std::vector<std::vector<int32_t>> = new Array(pointVector!.size()).fill(null).map(() => new Array(2).fill(0));;
    




                        for (
    index: int32_t = 0;index < pointVector!.size(); index++)
        {

    point: std::vector<int32_t> = 
                        //Otherwise - castExpression - ArrayType - INT
pointVector!.get(index)
                        //Otherwise - castExpression - ArrayType - INT
;;
    
points[index]= point;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return points;
    
}


};

            

