
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_LAPWIDGET_H
        #define ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_LAPWIDGET_H

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

public constructor (int32_t location, int32_t direction, BasicColor basicColor);

    public update(LapInfo lapInfo);

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_LAPWIDGET_H
