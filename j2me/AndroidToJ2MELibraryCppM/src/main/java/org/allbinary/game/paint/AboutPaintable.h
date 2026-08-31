
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_ABOUTPAINTABLE_H
        #define ORG_ALLBINARY_GAME_PAINT_ABOUTPAINTABLE_H

#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //AndroidToJ2ME
class AboutPaintable: public Paintable: public UpdateMyFontInterface {
        

    public static AboutPaintable getInstance(std::vector<string> info, std::vector<string> developers);

    private: const displayInfoSingleton: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: const ABOUT: string = CanvasStrings.getInstance()!.ABOUT;

    private: const info: std::vector<string>;

    private: const developers: std::vector<string>;

    private: const paintableArray: std::vector<Paintable> = 
                                                        [
                                                            this
                                                        ];

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: charHeight: int32_t= 0;

    private: aboutBeginWidth: int32_t= 0;

    private: infoBeginWidth: std::vector<int32_t>;

    private: developersBeginWidth: std::vector<int32_t>;

    private: anchor: int32_t = Anchor.TOP_LEFT;

private constructor (std::vector<string> info, std::vector<string> developers);

    public updateMeasurement(Graphics graphics);

    public std::vector<Paintable> getPaintableArrayInstance();

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_ABOUTPAINTABLE_H
