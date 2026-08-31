
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
        



#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CircleAnimation: public Animation: public ColorCompositeInterface {
        

    const TOTAL_ANGLE: int32_t = static_cast<int32_t>(AngleFactory.getInstance()!.TOTAL_ANGLE);

    width: int32_t;

    height: int32_t;

public constructor (int32_t width, int32_t height, BasicColor basicColor){

            super();
        this.width= width;
    
this.height= height;
    
this.setBasicColorP(basicColor);
    
}


    public nextFrame(){
}


    public paintXY(Graphics graphics, int32_t x, int32_t y){
this.basicSetColorUtil!.setBasicColorP3(graphics, this.getBasicColorP(), this.getColor());
    
graphics.drawArc(x, y, this.width, this.height, 0, this.TOTAL_ANGLE);
    
}


};

            

