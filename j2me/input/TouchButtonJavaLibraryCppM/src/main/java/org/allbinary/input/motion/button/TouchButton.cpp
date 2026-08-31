
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
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonInput.h"
#include "TouchButtonResource.h"

class TouchButton: public Paintable {
        

                //@Throws(Exception.constructor)
            
    public static TouchButton createButton(TouchButtonInput touchButtonInput, TouchButtonResource touchButtonResource, Rectangle rawRectangle, CellPosition cellPosition, int32_t xBorder, int32_t yBorder){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new TouchButton(touchButtonInput, FeaturedAnimationInterfaceFactoryInterfaceFactory.getInstance()!.get(touchButtonResource!.RESOURCE)!.getInstance(0), FeaturedAnimationInterfaceFactoryInterfaceFactory.getInstance()!.get(touchButtonResource!.HINT)!.getInstance(0), rawRectangle, cellPosition, xBorder, yBorder);
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const touchButtonInput: TouchButtonInput;

    private: const animationInterface: Animation;

    private: const hintAnimationInterface: Animation;

    const rawRectangle: Rectangle;

    const xBorder: int32_t;

    const yBorder: int32_t;

    rectangleP: Rectangle = RectangleFactory.SINGLETON;

    const cellPositionP: CellPosition;

    animationX: int32_t= 0;

    animationY: int32_t= 0;

    hintAnimationY: int32_t= 0;

public constructor (TouchButtonInput touchButtonInput, Animation animationInterface, Animation hintAnimationInterface, Rectangle rawRectangle, CellPosition cellPosition, int32_t xBorder, int32_t yBorder){

            super();
        this.touchButtonInput= touchButtonInput;
    
this.animationInterface= animationInterface;
    
this.hintAnimationInterface= hintAnimationInterface;
    
this.rawRectangle= rawRectangle;
    
this.cellPositionP= cellPosition;
    
this.xBorder= xBorder;
    
this.yBorder= yBorder;
    
this.updateRectangle();
    
this.logUtil!.putF(new StringMaker().append("Created: ")!.append(this.toString())!.toString(), this, this.commonStrings!.CONSTRUCTOR);
    
}


    public paintHint(Graphics graphics){
this.hintAnimationInterface!.paintXY(graphics, this.animationX, this.hintAnimationY);
    
}


    public paint(Graphics graphics){
this.animationInterface!.paintXY(graphics, this.animationX, this.animationY);
    
}


    updateRectangle(){

        try {
            
    pointFactory: PointFactory = PointFactory.getInstance()!;;
    

    x: int32_t = this.rawRectangle!.getWidth() *this.cellPositionP!.getColumn();;
    

    y: int32_t = this.rawRectangle!.getHeight() *this.cellPositionP!.getRow();;
    
this.rectangleP= new Rectangle(pointFactory!.createXY(x +this.xBorder, y +this.yBorder), this.rawRectangle!.getWidth(), this.rawRectangle!.getHeight());
    

    point: GPoint = this.rectangleP!.getPoint()!;;
    
this.animationX= point.getX();
    
this.animationY= point.getY();
    
this.hintAnimationY= this.animationY -32;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "updateRectangle", e);
    
}

}


    public CellPosition getCellPosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.cellPositionP;
    
}


    public Rectangle getRectangle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rectangleP;
    
}


    public TouchButtonInput getTouchButtonInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.touchButtonInput;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    
stringBuffer!.append("TouchButton: ");
    
stringBuffer!.append(stringUtil!.toString(this.getRectangle()));
    
stringBuffer!.append(" CellPosition: ");
    
stringBuffer!.append(stringUtil!.toString(this.cellPositionP));
    
stringBuffer!.append(" xBorder: ");
    
stringBuffer!.appendint(this.xBorder);
    
stringBuffer!.append(" yBorder: ");
    
stringBuffer!.appendint(this.yBorder);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

