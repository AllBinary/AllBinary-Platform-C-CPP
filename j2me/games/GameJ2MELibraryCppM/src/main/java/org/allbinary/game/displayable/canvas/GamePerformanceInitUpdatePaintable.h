
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEPERFORMANCEINITUPDATEPAINTABLE_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEPERFORMANCEINITUPDATEPAINTABLE_H

            #include <vector>
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/canvas/GameStatisticsFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GamePerformanceInitUpdatePaintable: public InitUpdatePaintable, public UpdateMyFontInterface {

    private: const int32_t halfHeight = DisplayInfoSingleton::getInstance().getLastHalfHeight();

    private: const std::vector<int32_t> yArray = {this->halfHeight +30,this->halfHeight +30,this->halfHeight +30 +15,this->halfHeight +30 +15,this->halfHeight +30 +30,this->halfHeight +30 +30,this->halfHeight +30 +45,this->halfHeight +30 +45};

    private: MyFontProcessor myFontProcessor = UpdateMyFontProcessor(this);

    private: std::vector<std::vector<char>> baseRefreshHelperCharArray = new Array(0).fill(null).map(() => new Array(0).fill(0));

    private: int32_t defaultStringWidth= 0;

    public: void updateMeasurement(Graphics graphics);

    public: void init();

    public: void update();

    private: const int32_t RED = BasicColorFactory::getInstance().RED.intValue();

    public: void paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEPERFORMANCEINITUPDATEPAINTABLE_H
