
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

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //SWTToJ2ME
class OwnershipPaintable: public Paintable: public UpdateMyFontInterface {
        

    public static OwnershipPaintable getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new OwnershipPaintable();
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: const COPYRIGHT: string = "AllBinary Copyright (c) 2011";

    private: basicColor: BasicColor = BasicColorFactory.getInstance()!.WHITE;

    private: color: int32_t = this.basicColor!.intValue()!;

    private: anchor: int32_t = Anchor.TOP_LEFT;

    private: COPYRIGHT_Y: int32_t= 0;

    private: beginWidth: int32_t= 0;

private constructor (){

            super();
        }


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    
this.COPYRIGHT_Y= 2 *font.getHeight();
    
this.beginWidth= (font.stringWidth(this.COPYRIGHT)>>1);
    
this.myFontProcessor= MyFontProcessor.getInstance();
    
}


    public setBasicColorP(BasicColor basicColor){
this.basicColor= basicColor;
    
this.color= basicColor!.intValue();
    
}


    public BasicColor getBasicColorP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicColor;
    
}


    public paint(Graphics graphics){
this.myFontProcessor!.process(graphics);
    
graphics.setColor(this.color);
    

    halfWidth: int32_t = this.displayInfo!.getLastHalfWidth()!;;
    

    height: int32_t = this.displayInfo!.getLastHeight()!;;
    
graphics.drawString(this.COPYRIGHT, halfWidth -this.beginWidth, height -this.COPYRIGHT_Y, this.anchor);
    
}


};

            

