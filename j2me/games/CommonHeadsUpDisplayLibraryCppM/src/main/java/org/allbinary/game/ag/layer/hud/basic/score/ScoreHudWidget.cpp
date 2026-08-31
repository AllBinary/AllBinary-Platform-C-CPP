
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
        



            #include "../../../../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/ag/layer/hud/basic/NumberStringHud.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ScoreHudWidget: public NumberStringHud {
        

                //@Throws(Exception.constructor)
            
    public static ScoreHudWidget getInstance(int32_t maxscore, int32_t location, int32_t direction){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ScoreHudWidget(maxscore, location, direction, 2, BasicColorFactory.getInstance()!.GREY);
    
}


public constructor (int32_t maxscore, int32_t location, int32_t direction, int32_t bufferZone, BasicColor basicColor){
            super("Pts ", maxscore, location, direction, bufferZone, basicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.updateMaxHeight= 14;
    
}


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    
this.updateMaxWidth= font.getSize() *5;
    
super.updateMeasurement(graphics);
    
}


};

            

