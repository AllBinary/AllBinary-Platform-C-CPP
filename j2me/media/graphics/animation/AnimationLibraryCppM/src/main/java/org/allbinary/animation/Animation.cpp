
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
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>

      
#include <org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnimationInterface.h"

class Animation
            : public Object
        : public AnimationInterface, public OpenGLSurfaceChangedInterface {
        

    const basicSetColorUtil: BasicColorSetUtil = BasicColorSetUtil.getInstance()!;

    basicColor: BasicColor = BasicColorFactory.getInstance()!.WHITE;

    colorP: int32_t= 0;

    changeBasicColorP: BasicColor = BasicColorFactory.getInstance()!.NULL_COLOR;

    changeColorP: int32_t= 0;

    public alphaP: int32_t= 0;

public constructor (){

            super();
        }


    public setAlpha(int32_t alpha){
this.alphaP= alpha;
    
}


                //@Throws(Exception.constructor)
            
    public nextFrame(){
}


    public paintXY(Graphics graphics, int32_t x, int32_t y){
this.basicSetColorUtil!.setBasicColorP3(graphics, this.getBasicColorP(), this.getColor());
    
}


    public paintThreedXYZ(Graphics graphics, int32_t x, int32_t y, int32_t z){
}


    public bool isThreed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public BasicColor getBasicColorP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicColor;
    
}


    public setBasicColorP(BasicColor basicColor){
this.basicColor= basicColor;
    
this.colorP= this.basicColor!.intValue();
    
}


    public setBackgroundBasicColorP(BasicColor basicColor){
}


    public BasicColor getChangeBasicColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.changeBasicColorP;
    
}


    public changeBasicColor(BasicColor basicColor){
this.changeBasicColorP= basicColor;
    
this.changeColorP= this.changeBasicColorP!.intValue();
    
}


    public int32_t getChangeColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.changeColorP;
    
}


    public int32_t getColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.colorP;
    
}


    public setScale(float scaleX, float scaleY){
}


    public setMaxScale(float maxScaleX, float maxScaleY){
}


                //@Throws(Exception.constructor)
            
    public set(GL gl){
}


    public setDx(int32_t dx){
}


    public int32_t getDx(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public setDy(int32_t dy){
}


    public int32_t getDy(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


};

            

