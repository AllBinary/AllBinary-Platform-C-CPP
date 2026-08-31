
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_PRESSSTARTMENUPAINTABLE_H
        #define ORG_ALLBINARY_GAME_PAINT_PRESSSTARTMENUPAINTABLE_H

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

public constructor ();

    private: anchor: int32_t = Anchor.TOP_LEFT;

    private: beginWidth: int32_t= 0;

    private: line: int32_t= 0;

    public updateMeasurement(Graphics graphics);

    public paint(Graphics graphics);

    setFlash(bool flash);

    bool isFlash();

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_PRESSSTARTMENUPAINTABLE_H
