
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_OVERSCANCOLORFILLPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_PAINT_OVERSCANCOLORFILLPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/paint/OverScanColorFillPaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/paint/ColorFillPaintable.h"


OverScanColorFillPaintable::OverScanColorFillPaintable(BasicColor* basicColor) : ColorFillPaintable(basicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto OverScanColorFillPaintable::paint(Graphics* graphics) -> void{
graphics->setColor(this->colorP);
    
graphics->fillRect( -graphics->getClipX(),  -graphics->getClipY(), this->displayInfoSingleton->getLastWidth() +(graphics->getClipX() *2), this->displayInfoSingleton->getLastHeight() +(graphics->getClipY() *2));
    
}




        #endif //ORG_ALLBINARY_GAME_PAINT_OVERSCANCOLORFILLPAINTABLE_CPP
