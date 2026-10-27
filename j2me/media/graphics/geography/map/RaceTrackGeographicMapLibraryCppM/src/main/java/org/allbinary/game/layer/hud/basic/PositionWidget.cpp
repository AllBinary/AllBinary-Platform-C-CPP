
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_POSITIONWIDGET_CPP
        #define ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_POSITIONWIDGET_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/hud/basic/PositionWidget.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //super.paint(graphics, positionString, currentPostString, offset2, offset);

PositionWidget::PositionWidget(int32_t position, int32_t location, int32_t direction, BasicColor* basicColor) : BasicHud(location, direction, 2, basicColor), positionString(StringUtil::getInstance()->EMPTY_STRING){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->updateMaxHeight= 10;
    
this->updateMaxWidth= 40;
    
}


    auto PositionWidget::get() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->position;
    
}


    auto PositionWidget::set(int32_t position) -> void{
this->position= position;
    
this->positionString= PositionWidget::toString(this->get());
    
}


    auto PositionWidget::paint(Graphics* graphics) -> void{
BasicHud::paintString(graphics, this->positionString);
    
}


    auto PositionWidget::toString(int32_t position) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(std::to_string(position));
    

                        if(position == 1)
                        
                                    {
                                    stringBuffer->append("st");
    

                                    }
                                
                             else 
                        if(position == 2)
                        
                                    {
                                    stringBuffer->append("nd");
    

                                    }
                                
                             else 
                        if(position == 3)
                        
                                    {
                                    stringBuffer->append("rd");
    

                                    }
                                
                        else {
                            stringBuffer->append("th");
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_POSITIONWIDGET_CPP
