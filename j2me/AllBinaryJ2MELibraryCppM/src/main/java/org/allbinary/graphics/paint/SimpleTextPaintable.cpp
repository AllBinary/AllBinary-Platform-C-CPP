
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

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Paintable.h"

class SimpleTextPaintable: public Paintable: public UpdateMyFontInterface {
        

    private: const displayInfoSingleton: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: const updateMyFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: myFontProcessor: MyFontProcessor = this.updateMyFontProcessor;

    private: text: string;

    private: basicColor: BasicColor;

    private: topScoresWidth: int32_t = 0;

    private: fontHeight: int32_t = 0;

    private: anchor: int32_t = Anchor.TOP_LEFT;

public constructor (string text, BasicColor basicColor){

            super();
        this.text= text;
    
this.basicColor= basicColor;
    
}


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    
this.topScoresWidth= (font.stringWidth(this.text)>>1);
    
this.fontHeight= font.getHeight();
    
this.myFontProcessor= MyFontProcessor.getInstance();
    
}


    public paint(Graphics graphics){
this.myFontProcessor!.process(graphics);
    

    width: int32_t = this.displayInfoSingleton!.getLast()[this.displayInfoSingleton!.WIDTH]!;;
    
graphics.setColor(this.getBasicColorP()!.intValue());
    
graphics.drawString(this.text, (width>>1) -this.topScoresWidth, this.fontHeight, this.anchor);
    
}


    public setBasicColorP(BasicColor basicColor){
this.basicColor= basicColor;
    
}


    BasicColor getBasicColorP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicColor;
    
}


    public setText(string text){
this.text= text;
    
this.myFontProcessor= this.updateMyFontProcessor;
    
}


    public string getText(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.text;
    
}


};

            

