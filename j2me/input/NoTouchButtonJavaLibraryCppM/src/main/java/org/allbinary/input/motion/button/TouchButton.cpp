
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationInterface.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/RectangleFactory.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonInput.h"

class TouchButton: public Paintable {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const touchButtonInput: TouchButtonInput;

    private: const animationInterface: Animation;

    const rawRectangle: Rectangle;

    const xBorder: int32_t;

    const yBorder: int32_t;

    rectangle: Rectangle = RectangleFactory.SINGLETON;

    const cellPosition: CellPosition;

    animationX: int32_t= 0;

    animationY: int32_t= 0;

public constructor (TouchButtonInput touchButtonInput, AnimationInterface animationInterface, Rectangle rawRectangle, CellPosition cellPosition, int32_t xBorder, int32_t yBorder){

            super();
        this.touchButtonInput= touchButtonInput;
    
this.animationInterface= animationInterface as Animation;
    
this.rawRectangle= rawRectangle;
    
this.cellPosition= cellPosition;
    
this.xBorder= xBorder;
    
this.yBorder= yBorder;
    
this.updateRectangle();
    
this.logUtil!.putF(new StringMaker().append("Created: ")!.append(this.toString())!.toString(), this, this.commonStrings!.CONSTRUCTOR);
    
}


    public paint(Graphics graphics){
this.animationInterface!.paintXY(graphics, animationX, this.animationY);
    
}


    updateRectangle(){

        try {
            
    x: int32_t = this.rawRectangle!.getWidth() *this.cellPosition!.getColumn();;
    

    y: int32_t = this.rawRectangle!.getHeight() *this.cellPosition!.getRow();;
    

    pointFactory: PointFactory = PointFactory.getInstance()!;;
    
this.rectangle= new Rectangle(pointFactory!.createXY(x +this.xBorder, y +this.yBorder), this.rawRectangle!.getWidth(), this.rawRectangle!.getHeight());
    

    point: GPoint = this.rectangle.getPoint()!;;
    
this.animationX= point.getX();
    
this.animationY= point.getY();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "updateRectangle", e);
    
}

}


    public CellPosition getCellPositionP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.cellPosition;
    
}


    public Rectangle getRectangleP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rectangle;
    
}


    public TouchButtonInput getTouchButtonInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.touchButtonInput;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    
stringBuffer!.append("TouchButton: ");
    
stringBuffer!.append(stringUtil!.toString(this.rectangle));
    
stringBuffer!.append(" CellPosition: ");
    
stringBuffer!.append(stringUtil!.toString(this.cellPosition));
    
stringBuffer!.append(" xBorder: ");
    
stringBuffer!.appendint(this.xBorder);
    
stringBuffer!.append(" yBorder: ");
    
stringBuffer!.appendint(this.yBorder);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

