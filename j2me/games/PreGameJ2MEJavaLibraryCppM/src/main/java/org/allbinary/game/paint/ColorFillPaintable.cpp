
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_COLORFILLPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_PAINT_COLORFILLPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/paint/ColorFillPaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/paint/ColorFillBasePaintable.h"


ColorFillPaintable::ColorFillPaintable(BasicColor* basicColor) : ColorFillBasePaintable(basicColor), displayInfoSingleton(DisplayInfoSingleton::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto ColorFillPaintable::paint(Graphics* graphics) -> void{
graphics->setColor(this->colorP);
    
graphics->fillRect(0, 0, this->displayInfoSingleton->getLastWidth(), this->displayInfoSingleton->getLastHeight());
    
}




        #endif //ORG_ALLBINARY_GAME_PAINT_COLORFILLPAINTABLE_CPP
