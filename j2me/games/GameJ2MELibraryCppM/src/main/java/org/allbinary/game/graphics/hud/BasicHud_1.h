
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/game/graphics/hud/HudGraphicsPosition.h"
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"

class BasicHud_1
            : public Object
        , public UpdateMyFontInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    protected: CanvasStrings* canvasStrings = CanvasStrings::getInstance();

    protected: BasicColorSetUtil* basicSetColorUtil = BasicColorSetUtil::getInstance();

    private: DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();

    private: MyFontProcessor* updateMyFontProcessor = new UpdateMyFontProcessor(this);

    private: MyFontProcessor* myFontProcessor = this->updateMyFontProcessor;

    private: int32_t location= 0;

    private: int32_t direction= 0;

    private: int32_t bufferZone= 0;

    private: HudGraphicsPosition* hudGraphicsPosition = HudGraphicsPosition::NULL_HUD_GRAPHICS_POSITION;

    private: int32_t x= 0;

    private: int32_t y= 0;

    private: BasicColor* basicColor = BasicColorFactory::getInstance()->BLACK;

    private: int32_t color;

    protected: int32_t updateMaxWidth= 0;

    protected: int32_t updateMaxHeight= 0;

public: BasicHud_1(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);

    public: void updateMeasurement(Graphics* graphics);

    public: int32_t getLocation();

    public: int32_t getDirection();

                //@Throws(Exception.constructor)
            
    protected: HudGraphicsPosition* getHudGraphicsPositionWH(int32_t width, int32_t height, int32_t maxWidth, int32_t maxHeight);

    public: void onEvent(AllBinaryEventObject* eventObject);

    public: void onDisplayChangeEvent(DisplayChangeEvent* displayChangeEvent);

    protected: GPoint* getPoint(int32_t x, int32_t y);

    public: int32_t getBufferZone();

    public: void setBufferZone(int32_t bufferZone);

    public: void setLocation(int32_t location);

    public: void setDirection(int32_t direction);

    protected: HudGraphicsPosition* getHudGraphicsPosition();

    public: int32_t getColor();

    public: int32_t getX();

    public: void setX(int32_t x);

    public: void setBasicColorP(BasicColor* basicColor);

    public: BasicColor* getBasicColorP();

    protected: void setY(int32_t y);

    protected: int32_t getY();

    public: void paintSSO(Graphics* graphics, std::string string, std::string string2, int32_t offset);

    public: void paintSSOO(Graphics* graphics, std::string string, std::string string2, int32_t offset, int32_t offset2);

    public: void paintDXY(Graphics* graphics, std::vector<char> charArray, int32_t offset, int32_t len, std::vector<char> charArray2, int32_t offset2, int32_t len2, int32_t xOffset, int32_t xOffset2);

    public: void paintDX(Graphics* graphics, std::vector<char> charArray, int32_t offset, int32_t len, std::vector<char> charArray2, int32_t offset2, int32_t len2, int32_t xOffset);

    public: void paintOffsetAndLength(Graphics* graphics, std::vector<char> charArray, int32_t offset, int32_t len);

    protected: int32_t offsetY= 0;

    public: void paintString(Graphics* graphics, std::string string);

};

            


        #endif //ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUD_1_H
