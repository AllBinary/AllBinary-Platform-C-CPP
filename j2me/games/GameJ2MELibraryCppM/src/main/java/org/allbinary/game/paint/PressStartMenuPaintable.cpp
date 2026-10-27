
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_PRESSSTARTMENUPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_PAINT_PRESSSTARTMENUPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/paint/PressStartMenuPaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        

PressStartMenuPaintable::PressStartMenuPaintable() : displayInfo(DisplayInfoSingleton::getInstance()), myFontProcessor(new UpdateMyFontProcessor(this)), startString(StringUtil::getInstance()->EMPTY_STRING), timeDelayHelper(new TimeDelayHelper(1100)), anchor(Anchor::TOP_LEFT){

                        if(TouchScreenFactory::getInstance()->isTouch())
                        
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


    auto PressStartMenuPaintable::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->beginWidth= (graphics->getFont()->stringWidth(this->startString)>>1);
    
this->line= (4 *MyFontProcessor::defaultCharWidth(font)) +(font->getHeight()>>1);
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto PressStartMenuPaintable::paint(Graphics* graphics) -> void{

                        if(this->timeDelayHelper->isTimeTNT())
                        
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
                                    this->myFontProcessor->process(graphics);
    
graphics->drawString(this->startString, displayInfo->getLastHalfWidth() -beginWidth, displayInfo->getLastHeight() -line, this->anchor);
    

                                    }
                                
}


    auto PressStartMenuPaintable::setFlash(bool flash) -> void{
this->flash= flash;
    
}


    auto PressStartMenuPaintable::isFlash() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->flash;
    
}




        #endif //ORG_ALLBINARY_GAME_PAINT_PRESSSTARTMENUPAINTABLE_CPP
