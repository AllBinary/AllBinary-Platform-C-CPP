
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_SCORE_SCOREHUDWIDGET_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_SCORE_SCOREHUDWIDGET_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/hud/basic/score/ScoreHudWidget.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/ag/layer/hud/basic/NumberStringHud.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

                //@Throws(Exception.constructor)
            
    auto ScoreHudWidget::getInstance(int32_t maxscore, int32_t location, int32_t direction) -> ScoreHudWidget*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ScoreHudWidget(maxscore, location, direction, 2, BasicColorFactory::getInstance()->GREY);
    
}


ScoreHudWidget::ScoreHudWidget(int32_t maxscore, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) : NumberStringHud("Pts ", maxscore, location, direction, bufferZone, basicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->updateMaxHeight= 14;
    
}


    auto ScoreHudWidget::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->updateMaxWidth= font->getSize() *5;
    
NumberStringHud::updateMeasurement(graphics);
    
}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_SCORE_SCOREHUDWIDGET_CPP
