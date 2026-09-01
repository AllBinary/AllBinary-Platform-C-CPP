
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
        
class PressStartMenuPaintable: public Paintable, public UpdateMyFontInterface {

    private: const DisplayInfoSingleton displayInfo = DisplayInfoSingleton::getInstance();

    private: const std::string PRESS_START = "Press Screen To Start";

    private: const std::string KEY_START = "Press or Click F2 To Begin";

    private: const std::string MENU_START = "Press Start From The Menu To Begin";

    private: MyFontProcessor myFontProcessor = UpdateMyFontProcessor(this);

    private: std::string startString = StringUtil::getInstance().EMPTY_STRING;

    private: TimeDelayHelper timeDelayHelper = TimeDelayHelper(1100);

    private: bool flash= false;

public: PressStartMenuPaintable();

    private: int32_t anchor = Anchor::TOP_LEFT;

    private: int32_t beginWidth= 0;

    private: int32_t line= 0;

    public: void updateMeasurement(Graphics graphics);

    public: void paint(Graphics graphics);

    private: void setFlash(bool flash);

    private: bool isFlash();

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_PRESSSTARTMENUPAINTABLE_H
