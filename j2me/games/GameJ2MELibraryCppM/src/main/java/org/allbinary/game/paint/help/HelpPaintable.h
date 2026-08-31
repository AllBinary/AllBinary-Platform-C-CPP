
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
        
class HelpPaintable: public Paintable: public UpdateMyFontInterface {
        

    const displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    const updateMyFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    myFontProcessor: MyFontProcessor = this.updateMyFontProcessor;

    anchor: int32_t = Anchor.TOP_LEFT;

    const title: string;

    inputInfo: std::vector<string> = StringUtil.getInstance()!.getArrayInstance()!;

    basicColor: BasicColor;

    titleBeginWidth: int32_t= 0;

    private: beginWidthArray: std::vector<int32_t> = NullUtil.getInstance()!.NULL_INT_ARRAY;

    private: charHeight: int32_t= 0;

public constructor (string title, BasicColor backgroundBasicColor, BasicColor basicColor);

    public updateMeasurement(Graphics graphics);

    public setInputInfoP(std::vector<string> inputInfo);

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_HELP_HELPPAINTABLE_H
