
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

#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ColorFillBasePaintable: public Paintable, public ColorCompositeInterface {

    protected: BasicColor basicColor = BasicColorFactory::getInstance().WHITE;

    protected: int32_t colorP= 0;

public: ColorFillBasePaintable(BasicColor basicColor);

    public: void setBasicColorP(BasicColor basicColor);

    public: BasicColor getBasicColorP();

    protected: int32_t getColor();

    protected: void setColor(int32_t color);

    public: void paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_COLORFILLBASEPAINTABLE_H
