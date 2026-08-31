
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_COLORFILLBASEPAINTABLE_H
        #define ORG_ALLBINARY_GAME_PAINT_COLORFILLBASEPAINTABLE_H

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

public constructor (BasicColor basicColor);

    public setBasicColorP(BasicColor basicColor);

    public BasicColor getBasicColorP();

    int32_t getColor();

    setColor(int32_t color);

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_COLORFILLBASEPAINTABLE_H
