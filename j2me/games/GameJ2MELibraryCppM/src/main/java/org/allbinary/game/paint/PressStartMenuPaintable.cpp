
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
        
class PressStartMenuPaintable: public Paintable, public UpdateMyFontInterface {

    private: const DisplayInfoSingleton displayInfo = DisplayInfoSingleton::getInstance();

    private: const std::string PRESS_START = "Press Screen To Start";

    private: const std::string KEY_START = "Press or Click F2 To Begin";

    private: const std::string MENU_START = "Press Start From The Menu To Begin";

    private: MyFontProcessor myFontProcessor = UpdateMyFontProcessor(this);

    private: std::string startString = StringUtil::getInstance().EMPTY_STRING;

    private: TimeDelayHelper timeDelayHelper = TimeDelayHelper(1100);

    private: bool flash= false;

public: PressStartMenuPaintable(){

                        if(TouchScreenFactory::getInstance().isTouch())
                        
                                    {
                                    this->startString= this->PRESS_START;
    

                                    }
                                
                             else 
                        if(AppletUtil::isAppletLoader(this))
                        
                                    {
                                    this->startString= this->KEY_START;
    

                                    }
                                
                        else {
                            this->startString= this->MENU_START;
    

                        }
                            
}


    private: int32_t anchor = Anchor::TOP_LEFT;

    private: int32_t beginWidth= 0;

    private: int32_t line= 0;

    public: void updateMeasurement(Graphics graphics){

    Font font = graphics.getFont();;
    
this->beginWidth= (graphics.getFont().stringWidth(this->startString)>>1);
    
this->line= (4 *MyFontProcessor::defaultCharWidth(font)) +(font.getHeight()>>1);
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    public: void paint(Graphics graphics){

                        if(this->timeDelayHelper.isTimeTNT())
                        
                                    {
                                    
                        if(this->isFlash())
                        
                                    {
                                    this->setFlash(false);
    

                                    }
                                
                        else {
                            this->setFlash(true);
    

                        }
                            

                                    }
                                

                        if(this->isFlash())
                        
                                    {
                                    this->myFontProcessor.process(graphics);
    
graphics.drawString(this->startString, displayInfo.getLastHalfWidth() -beginWidth, displayInfo.getLastHeight() -line, this->anchor);
    

                                    }
                                
}


    private: void setFlash(bool flash){
this->flash= flash;
    
}


    private: bool isFlash(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->flash;
    
}


};

            

