
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

      
#include <org/allbinary/AppletUtil.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/input/motion/button/TouchScreenFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PressStartMenuPaintable: public Paintable: public UpdateMyFontInterface {
        

    private: const displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: const PRESS_START: string = "Press Screen To Start";

    private: const KEY_START: string = "Press or Click F2 To Begin";

    private: const MENU_START: string = "Press Start From The Menu To Begin";

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: startString: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: timeDelayHelper: TimeDelayHelper = new TimeDelayHelper(1100);

    private: flash: bool= false;

public constructor (){

            super();
        
                        if(TouchScreenFactory.getInstance()!.isTouch())
                        
                                    {
                                    this.startString= this.PRESS_START;
    

                                    }
                                
                             else 
                        if(AppletUtil.isAppletLoader(this))
                        
                                    {
                                    this.startString= this.KEY_START;
    

                                    }
                                
                        else {
                            this.startString= this.MENU_START;
    

                        }
                            
}


    private: anchor: int32_t = Anchor.TOP_LEFT;

    private: beginWidth: int32_t= 0;

    private: line: int32_t= 0;

    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    
this.beginWidth= (graphics.getFont()!.stringWidth(this.startString)>>1);
    
this.line= (4 *MyFontProcessor.defaultCharWidth(font)) +(font.getHeight()>>1);
    
this.myFontProcessor= MyFontProcessor.getInstance();
    
}


    public paint(Graphics graphics){

                        if(this.timeDelayHelper!.isTimeTNT())
                        
                                    {
                                    
                        if(this.isFlash())
                        
                                    {
                                    this.setFlash(false);
    

                                    }
                                
                        else {
                            this.setFlash(true);
    

                        }
                            

                                    }
                                

                        if(this.isFlash())
                        
                                    {
                                    this.myFontProcessor!.process(graphics);
    
graphics.drawString(this.startString, displayInfo!.getLastHalfWidth() -beginWidth, displayInfo!.getLastHeight() -line, this.anchor);
    

                                    }
                                
}


    setFlash(bool flash){
this.flash= flash;
    
}


    bool isFlash(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.flash;
    
}


};

            

