
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
        



        #ifndef ORG_ALLBINARY_LAYER_LAYER_H
        #define ORG_ALLBINARY_LAYER_LAYER_H

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

public constructor (int32_t width, int32_t height);

    public setPosition(int32_t x, int32_t y, int32_t z);

    public moveDXY(int32_t dx, int32_t dy);

    public moveDXYZ(int32_t dx, int32_t dy, int32_t dz);

    public int32_t getXP();

    public int32_t getYP();

    public int32_t getZP();

    public int32_t getWidth();

    public int32_t getHeight();

    public int64_t getDepth();

    public setVisible(bool visible);

    public bool isVisible();

    public paint(Graphics graphics);

    setLayerWidth(int32_t width);

    setLayerHeight(int32_t height);

    public toStringAppend(StringMaker stringBuffer);

};

            


        #endif //ORG_ALLBINARY_LAYER_LAYER_H
