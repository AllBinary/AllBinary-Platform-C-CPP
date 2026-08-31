
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTINTERMISSIONPAINTABLE_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTINTERMISSIONPAINTABLE_H

#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/FontDebugFactory.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryGameCanvas.h"

class StartIntermissionPaintable: public InitUpdatePaintable: public UpdateMyFontInterface {
        

    const fontDebugFactory: FontDebugFactory = FontDebugFactory.getInstance()!;

    const basicSetColorUtil: BasicColorSetUtil = BasicColorSetUtil.getInstance()!;

    const gameCanvas: AllBinaryGameCanvas;

    const stringArray: std::vector<string>;

    const fontSize: int32_t;

    const font: Font;

    public const lastWidth: std::vector<int32_t>;

    private: const updateMyFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: myFontProcessor: MyFontProcessor = this.updateMyFontProcessor;

    private: basicColor: BasicColor = BasicColorFactory.getInstance()!.BLACK;

    private: color: int32_t;

    lineYOffsetArray: std::vector<int32_t> = NullUtil.getInstance()!.NULL_INT_ARRAY;

    private: hasChanged: bool = true;

    private: anchor: int32_t = Anchor.TOP_LEFT;

    fontHeightP: int32_t= 0;

public constructor (AllBinaryGameCanvas gameCanvas, std::vector<string> stringArray, BasicColor basicColor, Font font);

    public updateMeasurement(Graphics graphics);

    public paint(Graphics graphics);

    private: const BEGIN_LEVEL: string = "Begin Level ";

    private: const EMPTY_STRING: string = StringUtil.getInstance()!.EMPTY_STRING;

    public update();

    public setBasicColorP(BasicColor basicColor);

    public BasicColor getBasicColorP();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTINTERMISSIONPAINTABLE_H
