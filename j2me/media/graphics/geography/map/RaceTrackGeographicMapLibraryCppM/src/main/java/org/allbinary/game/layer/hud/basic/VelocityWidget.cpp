
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_VELOCITYWIDGET_CPP
        #define ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_VELOCITYWIDGET_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/hud/basic/VelocityWidget.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveLongSingleton.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

VelocityWidget::VelocityWidget(int32_t powerOfTenVelocity, int32_t location, int32_t direction, BasicColor* basicColor) : BasicHud(location, direction, 2, basicColor), KILOMETERS_PER_HOUR_STR({' ','k','m','/','h'}), totalChars(this->KILOMETERS_PER_HOUR_STR.size()), string(PrimitiveLongSingleton::getInstance()->ZERO){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->powerOfTenVelocity= powerOfTenVelocity;
    
this->maxVelocity= powerOfTenVelocity;
    
this->velocity= 0;
    
this->primitiveLongUtil= PrimitiveLongUtil::createPowerOfTen(powerOfTenVelocity);
    
this->updateMaxHeight= 14;
    
}


    auto VelocityWidget::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->updateMaxWidth= font->getSize() *(5 +MathUtil::getInstance()->getTotalDigits(this->powerOfTenVelocity) +1);
    
BasicHud::updateMeasurement(graphics);
    
this->offset= MyFontProcessor::defaultStringWidth(font, this->primitiveLongUtil->getMaxDigits()) +MyFontProcessor::defaultStringWidth(font, 2);
    
this->offset2= this->offset -MyFontProcessor::defaultStringWidth(font, this->totalDigits) -MyFontProcessor::defaultStringWidth(font, 2);
    
}


    auto VelocityWidget::get() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->velocity;
    
}


    auto VelocityWidget::add(int32_t value) -> void{
this->set(this->velocity +value);
    
}


    auto VelocityWidget::set(int32_t value) -> void{

    int32_t lastVelocity = this->velocity;;
    
this->velocity= value;
    

                        if(this->velocity > this->maxVelocity)
                        
                                    {
                                    this->velocity= 0;
    

                                    }
                                

                        if(lastVelocity != this->velocity)
                        
                                    {
                                    this->string= this->primitiveLongUtil->getCharArray(this->velocity *18);
    

                        if(OpenGLFeatureUtil::getInstance()->isAnyThreed())
                        
                                    {
                                    this->totalDigits= this->primitiveLongUtil->getCurrentTotalDigits() +1;
    

                                    }
                                
                        else {
                            this->totalDigits= this->primitiveLongUtil->getCurrentTotalDigits();
    

                        }
                            
this->myFontProcessor= this->updateMyFontProcessor;
    

                                    }
                                
}


    auto VelocityWidget::reduce(int32_t value) -> void{
this->set(this->velocity -value);
    
}


    auto VelocityWidget::paint(Graphics* graphics) -> void{
BasicHud::paintDXY(graphics, this->string, 0, this->totalDigits, this->KILOMETERS_PER_HOUR_STR, 0, this->totalChars, this->offset2, this->offset);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_VELOCITYWIDGET_CPP
