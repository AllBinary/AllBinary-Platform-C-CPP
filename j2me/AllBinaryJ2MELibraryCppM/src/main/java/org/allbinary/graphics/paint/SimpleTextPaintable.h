
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

class SimpleTextPaintable: public Paintable: public UpdateMyFontInterface {
        

    private: const displayInfoSingleton: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: const updateMyFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: myFontProcessor: MyFontProcessor = this.updateMyFontProcessor;

    private: text: string;

    private: basicColor: BasicColor;

    private: topScoresWidth: int32_t = 0;

    private: fontHeight: int32_t = 0;

    private: anchor: int32_t = Anchor.TOP_LEFT;

public constructor (string text, BasicColor basicColor);

    public updateMeasurement(Graphics graphics);

    public paint(Graphics graphics);

    public setBasicColorP(BasicColor basicColor);

    BasicColor getBasicColorP();

    public setText(string text);

    public string getText();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_PAINT_SIMPLETEXTPAINTABLE_H
