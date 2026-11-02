
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_COLORFILLBASEPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_PAINT_COLORFILLBASEPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/paint/ColorFillBasePaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ColorFillBasePaintable::ColorFillBasePaintable(BasicColor* basicColor) : basicColor(BasicColorFactory::getInstance()->WHITE){
this->setBasicColorP(basicColor);
    
}


    auto ColorFillBasePaintable::setBasicColorP(BasicColor* basicColor) -> void{
this->basicColor= basicColor;
    
this->setColor(JavaBoxes::value<int32_t>(this->getBasicColorP()));
    
}


    auto ColorFillBasePaintable::getBasicColorP() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicColor;
    
}


    auto ColorFillBasePaintable::getColor() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->colorP;
    
}


    auto ColorFillBasePaintable::setColor(int32_t color) -> void{
this->colorP= color;
    
}


    auto ColorFillBasePaintable::paint(Graphics* graphics) -> void{
}




        #endif //ORG_ALLBINARY_GAME_PAINT_COLORFILLBASEPAINTABLE_CPP
