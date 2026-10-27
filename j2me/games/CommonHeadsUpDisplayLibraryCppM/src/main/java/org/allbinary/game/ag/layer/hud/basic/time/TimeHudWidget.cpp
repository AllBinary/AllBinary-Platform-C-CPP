
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_TIME_TIMEHUDWIDGET_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_TIME_TIMEHUDWIDGET_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/hud/basic/time/TimeHudWidget.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/logic/math/PrimitiveLongSingleton.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/layer/hud/basic/time/Timer.h"


                //@Throws(Exception.constructor)
            
    auto TimeHudWidget::getInstance(int32_t location, int32_t direction, BasicColor* basicColor, Timer* timer) -> TimeHudWidget*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new TimeHudWidget(location, direction, 2, basicColor, timer);
    
}


TimeHudWidget::TimeHudWidget(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor, Timer* timer) : BasicHud(location, direction, bufferZone, basicColor), TIME_CHAR_ARRAY({'T','i','m','e',' '}), string(PrimitiveLongSingleton::getInstance()->ZERO){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->timer= timer;
    
this->set();
    
this->updateMaxHeight= 14;
    
}


    auto TimeHudWidget::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->updateMaxWidth= font->getSize() *5;
    
this->offset= font->stringWidth(this->TIME_STRING) +MyFontProcessor::defaultStringWidth(font, 3);
    
BasicHud::updateMeasurement(graphics);
    
}


    auto TimeHudWidget::update() -> void{
this->timer->update();
    
this->set();
    
}


    auto TimeHudWidget::set() -> void{
this->string= this->timer->getTimeChars();
    
this->totalDigits= this->timer->getCurrentTotalDigits();
    
}


    auto TimeHudWidget::getTimer() -> Timer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timer;
    
}


    auto TimeHudWidget::paint(Graphics* graphics) -> void{
BasicHud::paintDX(graphics, this->TIME_CHAR_ARRAY, 0, this->TIME_CHAR_ARRAY.size(), this->string, 0, this->totalDigits, this->offset);
    
}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_TIME_TIMEHUDWIDGET_CPP
