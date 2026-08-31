
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
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButton.h"
#include "TouchButtonInput.h"
#include "TouchButtonResource.h"

class FullTouchButton: public TouchButton {
        

                //@Throws(Exception.constructor)
            
    public static FullTouchButton createButton(TouchButtonInput touchButtonInput, TouchButtonResource touchButtonResource, Rectangle rawRectangle, CellPosition cellPosition, int32_t xBorder, int32_t yBorder){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new FullTouchButton(touchButtonInput, FeaturedAnimationInterfaceFactoryInterfaceFactory.getInstance()!.get(touchButtonResource!.RESOURCE)!.getInstance(0), FeaturedAnimationInterfaceFactoryInterfaceFactory.getInstance()!.get(touchButtonResource!.HINT)!.getInstance(0), rawRectangle, cellPosition, xBorder, yBorder);
    
}


public constructor (TouchButtonInput touchButtonInput, Animation animationInterface, Animation hintAnimationInterface, Rectangle rawRectangle, CellPosition cellPosition, int32_t xBorder, int32_t yBorder){
            super(touchButtonInput, animationInterface, hintAnimationInterface, rawRectangle, cellPosition, xBorder, yBorder);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    updateRectangle(){

        try {
            
    pointFactory: PointFactory = PointFactory.getInstance()!;;
    

    x: int32_t = this.rawRectangle!.getWidth() *this.cellPositionP!.getColumn();;
    

    y: int32_t = this.rawRectangle!.getHeight() *this.cellPositionP!.getRow();;
    
this.rectangleP= new Rectangle(pointFactory!.createXY(x, y), this.rawRectangle!.getWidth() +(2 *this.xBorder), this.rawRectangle!.getHeight() +(2 *this.yBorder));
    

    point: GPoint = this.rectangleP!.getPoint()!;;
    
this.animationX= point.getX() +this.xBorder;
    
this.animationY= point.getY() +this.yBorder;
    
this.hintAnimationY= this.animationY -this.rectangleP!.getHeight()>>1;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "updateRectangle", e);
    
}

}


};

            

