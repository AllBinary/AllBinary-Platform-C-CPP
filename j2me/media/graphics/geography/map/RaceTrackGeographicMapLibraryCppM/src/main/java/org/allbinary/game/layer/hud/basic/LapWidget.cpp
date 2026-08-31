
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/game/layer/hud/LapInfo.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LapWidget: public BasicHud {
        

    private: const LAP_STR: string = "Lap ";

    private: const OF_STR: string = " of ";

    private: string: string = StringUtil.getInstance()!.EMPTY_STRING;

public constructor (int32_t location, int32_t direction, BasicColor basicColor){
            super(location, direction, 2, basicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.updateMaxHeight= 15;
    
this.updateMaxWidth= 40;
    
}


    public update(LapInfo lapInfo){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(this.LAP_STR);
    
stringBuffer!.appendint(lapInfo!.getCurrentLap());
    
stringBuffer!.append(this.OF_STR);
    
stringBuffer!.appendint(lapInfo!.getTotalLaps());
    
this.string= stringBuffer!.toString();
    
}


    public paint(Graphics graphics){
super.paintString(graphics, this.string);
    
}


};

            

