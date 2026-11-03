
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LEVEL_LEVELHUDWIDGET_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LEVEL_LEVELHUDWIDGET_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/hud/basic/level/LevelHudWidget.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

                //@Throws(Exception.constructor)
            
    auto LevelHudWidget::createHud(int32_t maxlevel, int32_t location, int32_t direction) -> LevelHudWidget*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new LevelHudWidget(maxlevel, location, direction);
    
}


LevelHudWidget::LevelHudWidget(int32_t maxlevel, int32_t location, int32_t direction) : BasicHud(location, direction, 2, BasicColorFactory::getInstance()->GREY), levelNumberCharArray(NullUtil::getInstance()->NULL_CHAR_ARRAY){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->primitiveLongUtil= PrimitiveLongUtil::createPowerOfTen(1000);
    

    std::string LEVEL = "Lv ";;
    
this->levelString= JavaString::toCharArray(LEVEL);
    
this->maxlevel= maxlevel;
    
this->level= maxlevel;
    
this->update();
    
this->updateMaxHeight= 14;
    
}


    auto LevelHudWidget::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->updateMaxWidth= font->getSize() *4;
    
this->offset= font->charsWidth(this->levelString, 0, this->levelString.size()) +font->getSize();
    
BasicHud::updateMeasurement(graphics);
    
}


    auto LevelHudWidget::update() -> void{
this->levelNumberCharArray= this->primitiveLongUtil->getCharArray(this->level);
    
this->levelNumberTotalDigits= this->primitiveLongUtil->getCurrentTotalDigits();
    
}


    auto LevelHudWidget::setLevel(int32_t level) -> void{
this->level= level;
    
this->update();
    
}


    auto LevelHudWidget::nextLevel() -> void{
this->level++;
    
this->update();
    
}


    auto LevelHudWidget::previousLevel() -> void{
this->level--;
    

                        if(this->level < 0)
                        
                                    {
                                    this->level= 0;
    

                                    }
                                
this->update();
    
}


    auto LevelHudWidget::isComplete() -> bool{

                        if(this->level <= this->maxlevel)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                        }
                            
}


    auto LevelHudWidget::paint(Graphics* graphics) -> void{
BasicHud::paintDX(graphics, this->levelString, 0, this->levelString.size(), this->levelNumberCharArray, 0, this->levelNumberTotalDigits, this->offset);
    
}


    auto LevelHudWidget::paintThreed(Graphics* graphics) -> void{
}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LEVEL_LEVELHUDWIDGET_CPP
