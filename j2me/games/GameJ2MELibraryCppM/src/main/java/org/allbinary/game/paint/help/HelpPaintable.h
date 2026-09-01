
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_HELP_HELPPAINTABLE_H
        #define ORG_ALLBINARY_GAME_PAINT_HELP_HELPPAINTABLE_H

            #include <vector>
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HelpPaintable: public Paintable, public UpdateMyFontInterface {

    protected: const DisplayInfoSingleton displayInfo = DisplayInfoSingleton::getInstance();

    protected: const MyFontProcessor updateMyFontProcessor = UpdateMyFontProcessor(this);

    protected: MyFontProcessor myFontProcessor = this->updateMyFontProcessor;

    protected: int32_t anchor = Anchor::TOP_LEFT;

    protected: std::string title;

    protected: std::vector<std::string> inputInfo = StringUtil::getInstance().getArrayInstance();

    protected: BasicColor basicColor;

    protected: int32_t titleBeginWidth= 0;

    private: std::vector<int32_t> beginWidthArray = NullUtil::getInstance().NULL_INT_ARRAY;

    private: int32_t charHeight= 0;

public: HelpPaintable(std::string title, BasicColor backgroundBasicColor, BasicColor basicColor);

    public: void updateMeasurement(Graphics graphics);

    public: void setInputInfoP(std::vector<std::string> inputInfo);

    public: void paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_HELP_HELPPAINTABLE_H
