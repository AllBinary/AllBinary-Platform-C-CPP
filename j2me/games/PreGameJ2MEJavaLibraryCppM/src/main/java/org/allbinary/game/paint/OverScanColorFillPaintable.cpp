
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
        



#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ColorFillPaintable.h"

class OverScanColorFillPaintable: public ColorFillPaintable {
        

public constructor (BasicColor basicColor){
            super(basicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public paint(Graphics graphics){
graphics.setColor(this.colorP);
    
graphics.fillRect( -graphics.getClipX(),  -graphics.getClipY(), this.displayInfoSingleton!.getLastWidth() +(graphics.getClipX() *2), this.displayInfoSingleton!.getLastHeight() +(graphics.getClipY() *2));
    
}


};

            

