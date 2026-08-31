
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
        
            #include "../../../java/lang/IllegalArgumentException.h"
        
            #include "../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Layer
            : public Object
         {
        

    public static const ID: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(0)!;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    x: int32_t= 0;

    y: int32_t= 0;

    z: int32_t = 3;

    private: width: int32_t= 0;

    private: height: int32_t= 0;

    private: visible: bool = true;

public constructor (int32_t width, int32_t height){

            super();
        this.setLayerWidth(width);
    
this.setLayerHeight(height);
    
}


    public setPosition(int32_t x, int32_t y, int32_t z){
this.x= x;
    
this.y= y;
    
this.z= z;
    
}


    public moveDXY(int32_t dx, int32_t dy){
this.x += dx;
    
this.y += dy;
    
}


    public moveDXYZ(int32_t dx, int32_t dy, int32_t dz){
this.x += dx;
    
this.y += dy;
    
this.z += dz;
    
}


    public int32_t getXP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.x;
    
}


    public int32_t getYP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.y;
    
}


    public int32_t getZP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.z;
    
}


    public int32_t getWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.width;
    
}


    public int32_t getHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.height;
    
}


    public int64_t getDepth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public setVisible(bool visible){
this.visible= visible;
    
}


    public bool isVisible(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.visible;
    
}


    public paint(Graphics graphics){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

    canvasStrings: CanvasStrings = CanvasStrings.getInstance()!;;
    
this.logUtil!.putF(commonStrings!.NOT_IMPLEMENTED, this, canvasStrings!.PAINT);
    
}


    setLayerWidth(int32_t width){

                        if(width < 0)
                        
                                    {
                                    


                            throw new IllegalArgumentException();
                    

                                    }
                                
this.width= width;
    
}


    setLayerHeight(int32_t height){

                        if(height < 0)
                        
                                    {
                                    


                            throw new IllegalArgumentException();
                    

                                    }
                                
this.height= height;
    
}


    public toStringAppend(StringMaker stringBuffer){
}


};

            

