
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
        



            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/game/layer/hud/LapInfo.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LapWidget: public BasicHud {

    private: const std::string LAP_STR = "Lap ";

    private: const std::string OF_STR = " of ";

    private: std::string string = StringUtil::getInstance().EMPTY_STRING;

public: LapWidget(int32_t location, int32_t direction, BasicColor basicColor) : BasicHud(location, direction, 2, basicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->updateMaxHeight= 15;
    
this->updateMaxWidth= 40;
    
}


    public: void update(LapInfo lapInfo){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(this->LAP_STR);
    
stringBuffer.appendint(lapInfo.getCurrentLap());
    
stringBuffer.append(this->OF_STR);
    
stringBuffer.appendint(lapInfo.getTotalLaps());
    
this->string= stringBuffer.toString();
    
}


    public: void paint(Graphics graphics){
super.paintString(graphics, this->string);
    
}


};

            

