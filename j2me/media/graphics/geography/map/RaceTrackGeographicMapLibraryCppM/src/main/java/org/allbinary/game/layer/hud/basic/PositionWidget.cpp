
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
class PositionWidget: public BasicHud {

    public: static std::string toString(int32_t position){

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


    private: int32_t position= 0;

    private: std::string positionString = StringUtil::getInstance()->EMPTY_STRING;

public: PositionWidget(int32_t position, int32_t location, int32_t direction, BasicColor* basicColor) : BasicHud(location, direction, 2, basicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->updateMaxHeight= 10;
    
this->updateMaxWidth= 40;
    
}


    public: int32_t get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->position;
    
}


    public: void set(int32_t position){
this->position= position;
    
this->positionString= PositionWidget::toString(this->get());
    
}


    public: void paint(Graphics* graphics){
super.paintString(graphics, this->positionString);
    
}


};

            

