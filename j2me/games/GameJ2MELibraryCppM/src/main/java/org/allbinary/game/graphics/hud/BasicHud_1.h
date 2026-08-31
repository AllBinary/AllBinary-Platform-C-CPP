
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
        



        #ifndef ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUD_1_H
        #define ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUD_1_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HudGraphicsPosition.h"
#include "BasicHudFactory.h"

class BasicHud_1
            : public Object
        : public UpdateMyFontInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const canvasStrings: CanvasStrings = CanvasStrings.getInstance()!;

    const basicSetColorUtil: BasicColorSetUtil = BasicColorSetUtil.getInstance()!;

    private: const displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: const updateMyFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: myFontProcessor: MyFontProcessor = this.updateMyFontProcessor;

    private: location: int32_t= 0;

    private: direction: int32_t= 0;

    private: bufferZone: int32_t= 0;

    private: hudGraphicsPosition: HudGraphicsPosition = HudGraphicsPosition.NULL_HUD_GRAPHICS_POSITION;

    private: x: int32_t= 0;

    private: y: int32_t= 0;

    private: basicColor: BasicColor = BasicColorFactory.getInstance()!.BLACK;

    private: color: int32_t;

    updateMaxWidth: int32_t= 0;

    updateMaxHeight: int32_t= 0;

public constructor (int32_t location, int32_t direction, int32_t bufferZone, BasicColor basicColor);

    public updateMeasurement(Graphics graphics);

    public int32_t getLocation();

    public int32_t getDirection();

                //@Throws(Exception.constructor)
            
    HudGraphicsPosition getHudGraphicsPositionWH(int32_t width, int32_t height, int32_t maxWidth, int32_t maxHeight);

    public onEvent(AllBinaryEventObject eventObject);

    public onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent);

    GPoint getPoint(int32_t x, int32_t y);

    public int32_t getBufferZone();

    public setBufferZone(int32_t bufferZone);

    public setLocation(int32_t location);

    public setDirection(int32_t direction);

    HudGraphicsPosition getHudGraphicsPosition();

    public int32_t getColor();

    public int32_t getX();

    public setX(int32_t x);

    public setBasicColorP(BasicColor basicColor);

    public BasicColor getBasicColorP();

    setY(int32_t y);

    int32_t getY();

    public paintSSO(Graphics graphics, string string, string string2, int32_t offset);

    public paintSSOO(Graphics graphics, string string, string string2, int32_t offset, int32_t offset2);

    public paintDXY(Graphics graphics, std::vector<char> charArray, int32_t offset, int32_t len, std::vector<char> charArray2, int32_t offset2, int32_t len2, int32_t xOffset, int32_t xOffset2);

    public paintDX(Graphics graphics, std::vector<char> charArray, int32_t offset, int32_t len, std::vector<char> charArray2, int32_t offset2, int32_t len2, int32_t xOffset);

    public paintOffsetAndLength(Graphics graphics, std::vector<char> charArray, int32_t offset, int32_t len);

    offsetY: int32_t= 0;

    public paintString(Graphics graphics, string string);

};

            


        #endif //ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUD_1_H
