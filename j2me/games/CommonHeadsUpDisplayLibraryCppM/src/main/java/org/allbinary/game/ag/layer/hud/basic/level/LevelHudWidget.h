
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LEVEL_LEVELHUDWIDGET_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LEVEL_LEVELHUDWIDGET_H

            #include <vector>
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LevelHudWidget: public BasicHud, public PaintableInterface {

                //@Throws(Exception.constructor)
            
    public: static LevelHudWidget createHud(int32_t maxlevel, int32_t location, int32_t direction);

    private: int32_t level;

    private: int32_t maxlevel;

    private: std::vector<char> levelString;

    private: std::vector<char> levelNumberCharArray = NullUtil::getInstance().NULL_CHAR_ARRAY;

    private: int32_t levelNumberTotalDigits= 0;

    private: int32_t offset= 0;

    private: PrimitiveLongUtil primitiveLongUtil;

public: LevelHudWidget(int32_t maxlevel, int32_t location, int32_t direction);

    public: void updateMeasurement(Graphics graphics);

    private: void update();

    public: void setLevel(int32_t level);

    public: void nextLevel();

    public: void previousLevel();

    public: bool isComplete();

    public: void paint(Graphics graphics);

    public: void paintThreed(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LEVEL_LEVELHUDWIDGET_H
