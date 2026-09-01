
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_OVERSCANCOLORFILLPAINTABLE_H
        #define ORG_ALLBINARY_GAME_PAINT_OVERSCANCOLORFILLPAINTABLE_H

#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ColorFillPaintable.h"

class OverScanColorFillPaintable: public ColorFillPaintable {

public: OverScanColorFillPaintable(BasicColor basicColor);

    public: void paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_OVERSCANCOLORFILLPAINTABLE_H
