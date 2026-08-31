
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_SCORE_SCOREHUDWIDGET_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_SCORE_SCOREHUDWIDGET_H

            #include "../../../../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/ag/layer/hud/basic/NumberStringHud.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ScoreHudWidget: public NumberStringHud {
        

                //@Throws(Exception.constructor)
            
    public static ScoreHudWidget getInstance(int32_t maxscore, int32_t location, int32_t direction);

public constructor (int32_t maxscore, int32_t location, int32_t direction, int32_t bufferZone, BasicColor basicColor);

    public updateMeasurement(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_SCORE_SCOREHUDWIDGET_H
