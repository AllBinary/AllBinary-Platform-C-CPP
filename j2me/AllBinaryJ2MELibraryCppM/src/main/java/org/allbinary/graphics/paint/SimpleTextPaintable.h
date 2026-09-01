
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_PAINT_SIMPLETEXTPAINTABLE_H
        #define ORG_ALLBINARY_GRAPHICS_PAINT_SIMPLETEXTPAINTABLE_H

#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Paintable.h"

class SimpleTextPaintable: public Paintable, public UpdateMyFontInterface {

    private: const DisplayInfoSingleton displayInfoSingleton = DisplayInfoSingleton::getInstance();

    private: const MyFontProcessor updateMyFontProcessor = UpdateMyFontProcessor(this);

    private: MyFontProcessor myFontProcessor = this->updateMyFontProcessor;

    private: std::string text;

    private: BasicColor basicColor;

    private: int32_t topScoresWidth = 0;

    private: int32_t fontHeight = 0;

    private: int32_t anchor = Anchor::TOP_LEFT;

public: SimpleTextPaintable(std::string text, BasicColor basicColor);

    public: void updateMeasurement(Graphics graphics);

    public: void paint(Graphics graphics);

    public: void setBasicColorP(BasicColor basicColor);

    private: BasicColor getBasicColorP();

    public: void setText(std::string text);

    public: std::string getText();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_PAINT_SIMPLETEXTPAINTABLE_H
