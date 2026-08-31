
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
        
class GamePerformanceInitUpdatePaintable: public InitUpdatePaintable: public UpdateMyFontInterface {
        

    private: const halfHeight: int32_t = DisplayInfoSingleton.getInstance()!.getLastHalfHeight()!;

    private: const yArray: std::vector<int32_t> = [this.halfHeight +30,this.halfHeight +30,this.halfHeight +30 +15,this.halfHeight +30 +15,this.halfHeight +30 +30,this.halfHeight +30 +30,this.halfHeight +30 +45,this.halfHeight +30 +45];

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: baseRefreshHelperCharArray: std::vector<std::vector<char>> = new Array(0).fill(null).map(() => new Array(0).fill(0));

    private: defaultStringWidth: int32_t= 0;

    public updateMeasurement(Graphics graphics);

    public init();

    public update();

    private: const RED: int32_t = BasicColorFactory.getInstance()!.RED.intValue()!;

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEPERFORMANCEINITUPDATEPAINTABLE_H
