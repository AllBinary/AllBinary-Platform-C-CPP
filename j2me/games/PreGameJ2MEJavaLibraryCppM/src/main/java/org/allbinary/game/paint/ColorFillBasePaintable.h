
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
class BasicColor;
class BasicColorFactory;
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>
#include <org/allbinary/graphics/paint/Paintable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ColorFillBasePaintable: public Paintable, public ColorCompositeInterface {

    /*protected*/ public: BasicColor* basicColor;

    /*protected*/ public: int32_t colorP= 0;

public: ColorFillBasePaintable(BasicColor* basicColor);

    public: void setBasicColorP(BasicColor* basicColor);

    public: BasicColor* getBasicColorP();

    /*protected*/ public: int32_t getColor();

    /*protected*/ public: void setColor(int32_t color);

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_COLORFILLBASEPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_PAINT_COLORFILLBASEPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_PAINT_COLORFILLBASEPAINTABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/ColorCompositeInterface.h>)
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif

        #endif
    
