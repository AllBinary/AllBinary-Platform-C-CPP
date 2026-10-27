
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_LAPWIDGET_CPP
        #define ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_LAPWIDGET_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/hud/basic/LapWidget.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/game/layer/hud/LapInfo.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

LapWidget::LapWidget(int32_t location, int32_t direction, BasicColor* basicColor) : BasicHud(location, direction, 2, basicColor), string(StringUtil::getInstance()->EMPTY_STRING){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->updateMaxHeight= 15;
    
this->updateMaxWidth= 40;
    
}


    auto LapWidget::update(LapInfo* lapInfo) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(this->LAP_STR);
    
stringBuffer->appendint(lapInfo->getCurrentLap());
    
stringBuffer->append(this->OF_STR);
    
stringBuffer->appendint(lapInfo->getTotalLaps());
    
this->string= stringBuffer->toString();
    
}


    auto LapWidget::paint(Graphics* graphics) -> void{
BasicHud::paintString(graphics, this->string);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_LAPWIDGET_CPP
