
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

            #include <vector>
        
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryGameCanvas.h"

class StartIntermissionPaintable: public InitUpdatePaintable, public UpdateMyFontInterface {

    protected: const FontDebugFactory fontDebugFactory = FontDebugFactory::getInstance();

    protected: const BasicColorSetUtil basicSetColorUtil = BasicColorSetUtil::getInstance();

    protected: AllBinaryGameCanvas gameCanvas;

    protected: std::vector<std::string> stringArray;

    protected: int32_t fontSize;

    protected: Font font;

    public: std::vector<int32_t> lastWidth;

    private: const MyFontProcessor updateMyFontProcessor = UpdateMyFontProcessor(this);

    private: MyFontProcessor myFontProcessor = this->updateMyFontProcessor;

    private: BasicColor basicColor = BasicColorFactory::getInstance().BLACK;

    private: int32_t color;

    protected: std::vector<int32_t> lineYOffsetArray = NullUtil::getInstance().NULL_INT_ARRAY;

    private: bool hasChanged = true;

    private: int32_t anchor = Anchor::TOP_LEFT;

    protected: int32_t fontHeightP= 0;

public: StartIntermissionPaintable(AllBinaryGameCanvas gameCanvas, std::vector<std::string> stringArray, BasicColor basicColor, Font font);

    public: void updateMeasurement(Graphics graphics);

    public: void paint(Graphics graphics);

    private: const std::string BEGIN_LEVEL = "Begin Level ";

    private: const std::string EMPTY_STRING = StringUtil::getInstance().EMPTY_STRING;

    public: void update();

    public: void setBasicColorP(BasicColor basicColor);

    public: BasicColor getBasicColorP();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTINTERMISSIONPAINTABLE_H
