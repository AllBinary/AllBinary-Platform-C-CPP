
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_POSITIONWIDGET_H
        #define ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_POSITIONWIDGET_H

            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //super.paint(graphics, positionString, currentPostString, offset2, offset);
class PositionWidget: public BasicHud {

    public: static std::string toString(int32_t position);

    private: int32_t position= 0;

    private: std::string positionString = StringUtil::getInstance().EMPTY_STRING;

public: PositionWidget(int32_t position, int32_t location, int32_t direction, BasicColor basicColor);

    public: int32_t get();

    public: void set(int32_t position);

    public: void paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_POSITIONWIDGET_H
