
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

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ColorFillBasePaintable: public Paintable: public ColorCompositeInterface {
        

    basicColor: BasicColor = BasicColorFactory.getInstance()!.WHITE;

    colorP: int32_t= 0;

public constructor (BasicColor basicColor){

            super();
        this.setBasicColorP(basicColor);
    
}


    public setBasicColorP(BasicColor basicColor){
this.basicColor= basicColor;
    
this.setColor(this.getBasicColorP()!.intValue());
    
}


    public BasicColor getBasicColorP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicColor;
    
}


    int32_t getColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.colorP;
    
}


    setColor(int32_t color){
this.colorP= color;
    
}


    public paint(Graphics graphics){
}


};

            

