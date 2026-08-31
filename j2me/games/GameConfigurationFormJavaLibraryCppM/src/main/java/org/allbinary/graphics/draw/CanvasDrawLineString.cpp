
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
        



            #include "../../../../java/lang/Object.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DrawStringUtil.h"

class CanvasDrawLineString
            : public Object
        : public UpdateMyFontInterface {
        

    public static const NULL_CANVAS_DRAW_LINE_STRING: CanvasDrawLineString = new CanvasDrawLineString(0, 0);

    private: const drawStringUtil: DrawStringUtil = DrawStringUtil.getInstance()!;

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: x: int32_t;

    private: y: int32_t;

    private: fontHeight: int32_t = 0;

public constructor (int32_t x, int32_t y){

            super();
        this.x= x;
    
this.y= y;
    
}


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    
this.fontHeight= font.getHeight();
    
this.myFontProcessor= MyFontProcessor.getInstance();
    
}


    public paint(Graphics graphics, string string, int32_t line){
this.myFontProcessor!.process(graphics);
    
this.drawStringUtil!.drawCenterString(graphics, string, 0, string.length, this.x, this.y +(line *this.fontHeight));
    
}


};

            

