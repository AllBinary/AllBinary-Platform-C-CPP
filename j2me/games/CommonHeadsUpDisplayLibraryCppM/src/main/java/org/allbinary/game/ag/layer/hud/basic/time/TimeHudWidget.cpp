
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

class TimeHudWidget: public BasicHud {

                //@Throws(Exception.constructor)
            
    public: static TimeHudWidget* getInstance(int32_t location, int32_t direction, BasicColor* basicColor, Timer* timer){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new TimeHudWidget(location, direction, 2, basicColor, timer);
    
}


    private: const std::string TIME_STRING = "Time ";

    private: const std::vector<char> TIME_CHAR_ARRAY = ['T','i','m','e',' '];

    private: int32_t offset= 0;

    private: std::vector<char> string = PrimitiveLongSingleton::getInstance()->ZERO;

    private: int32_t totalDigits = 1;

    private: Timer* timer;

public: TimeHudWidget(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor, Timer* timer) : BasicHud(location, direction, bufferZone, basicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->timer= timer;
    
this->set();
    
this->updateMaxHeight= 14;
    
}


    public: void updateMeasurement(Graphics* graphics){

    Font* font = graphics->getFont();;
    
this->updateMaxWidth= font->getSize() *5;
    
this->offset= font->stringWidth(this->TIME_STRING) +MyFontProcessor::defaultStringWidth(font, 3);
    
super.updateMeasurement(graphics);
    
}


    public: void update(){
this->timer->update();
    
this->set();
    
}


    private: void set(){
this->string= this->timer->getTimeChars();
    
this->totalDigits= this->timer->getCurrentTotalDigits();
    
}


    public: Timer* getTimer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timer;
    
}


    public: void paint(Graphics* graphics){
super.paintDX(graphics, this->TIME_CHAR_ARRAY, 0, this->TIME_CHAR_ARRAY.size(), this->string, 0, this->totalDigits, this->offset);
    
}


};

            

