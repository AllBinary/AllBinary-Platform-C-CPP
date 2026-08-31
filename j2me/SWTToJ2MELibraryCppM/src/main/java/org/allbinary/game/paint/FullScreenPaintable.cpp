
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
        



#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //SwtToJ2ME
class FullScreenPaintable: public Paintable: public UpdateMyFontInterface {
        

    public static FullScreenPaintable getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new FullScreenPaintable();
    
}


    private: const displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: const FULLSCREEN_TEXT: string = "F11 - Toggle Fullscreen";

    private: anchor: int32_t = Anchor.TOP_LEFT;

    private: Y: int32_t= 0;

    private: beginWidth: int32_t= 0;

private constructor (){

            super();
        }


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    
this.Y= 4 *font.getHeight();
    
this.beginWidth= (font.stringWidth(this.FULLSCREEN_TEXT)>>1);
    
this.myFontProcessor= MyFontProcessor.getInstance();
    
}


    public paint(Graphics graphics){
this.myFontProcessor!.process(graphics);
    

    halfWidth: int32_t = this.displayInfo!.getLastHalfWidth()!;;
    

    height: int32_t = this.displayInfo!.getLastHeight()!;;
    
graphics.drawString(this.FULLSCREEN_TEXT, halfWidth -this.beginWidth, height -this.Y, this.anchor);
    
}


};

            

