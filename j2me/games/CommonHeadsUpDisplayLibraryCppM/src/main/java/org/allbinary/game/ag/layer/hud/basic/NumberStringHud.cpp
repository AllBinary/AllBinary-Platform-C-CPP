
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NUMBERSTRINGHUD_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NUMBERSTRINGHUD_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/hud/basic/NumberStringHud.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/game/graphics/hud/BasicHudFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/logic/math/PrimitiveLongSingleton.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

NumberStringHud::NumberStringHud(std::string prependString, int32_t max, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) : BasicHud(location, direction, bufferZone, basicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->prependString= prependString;
    
this->PREPEND_STRING= JavaString::toCharArray(prependString);
    
this->valueString= PrimitiveLongSingleton::getInstance()->NUMBER_CHAR_ARRAYS[0];
    
this->primitiveLongUtil= PrimitiveLongUtil::createPowerOfTen(max +1);
    
this->max= max;
    
this->value= 0;
    

                        if(direction == 0)
                        
                                    {
                                    


                            throw RuntimeException(BasicHudFactory::getInstance()->DIRECTION_EXCEPTION);
                    

                                    }
                                
}


    auto NumberStringHud::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->offset= font->stringWidth(this->prependString) +MyFontProcessor::defaultCharWidth(font);
    
BasicHud::updateMeasurement(graphics);
    
}


    auto NumberStringHud::get() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->value;
    
}


    auto NumberStringHud::add(int32_t value) -> void{
this->set(this->value +value);
    
}


    auto NumberStringHud::set(int32_t value) -> void{
this->value= value;
    

                        if(this->value > this->max)
                        
                                    {
                                    this->value= 0;
    

                                    }
                                
this->valueString= this->primitiveLongUtil->getCharArray(this->value);
    
this->valueTotalDigits= this->primitiveLongUtil->getCurrentTotalDigits();
    
}


    auto NumberStringHud::reduce(int32_t value) -> void{
this->set(this->value -value);
    
}


    auto NumberStringHud::paint(Graphics* graphics) -> void{
BasicHud::paintDX(graphics, this->PREPEND_STRING, 0, this->PREPEND_STRING.size(), this->valueString, 0, this->valueTotalDigits, this->offset);
    
}


    auto NumberStringHud::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->myFontProcessor->process(graphics);
    

    std::vector<char> charArray = this->PREPEND_STRING;;
    

    int32_t len = this->PREPEND_STRING.size();;
    

    std::vector<char> charArray2 = this->valueString;;
    

    int32_t len2 = this->valueTotalDigits;;
    
this->basicSetColorUtil->setBasicColorP(graphics, this->getBasicColorP());
    
graphics->drawChars(charArray, 0, len, x, y, 0);
    
graphics->drawChars(charArray2, 0, len2, x -this->offset, y, 0);
    
}


    auto NumberStringHud::paintThreed(Graphics* graphics) -> void{
}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NUMBERSTRINGHUD_CPP
