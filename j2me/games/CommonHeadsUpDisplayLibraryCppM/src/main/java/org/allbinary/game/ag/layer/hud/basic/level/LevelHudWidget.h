
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

            #include "../../../../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LevelHudWidget: public BasicHud: public PaintableInterface {
        

                //@Throws(Exception.constructor)
            
    public static LevelHudWidget createHud(int32_t maxlevel, int32_t location, int32_t direction);

    private: level: int32_t;

    private: maxlevel: int32_t;

    private: const levelString: std::vector<char>;

    private: levelNumberCharArray: std::vector<char> = NullUtil.getInstance()!.NULL_CHAR_ARRAY;

    private: levelNumberTotalDigits: int32_t= 0;

    private: offset: int32_t= 0;

    private: const primitiveLongUtil: PrimitiveLongUtil;

public constructor (int32_t maxlevel, int32_t location, int32_t direction);

    public updateMeasurement(Graphics graphics);

    update();

    public setLevel(int32_t level);

    public nextLevel();

    public previousLevel();

    public bool isComplete();

    public paint(Graphics graphics);

    public paintThreed(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_LEVEL_LEVELHUDWIDGET_H
