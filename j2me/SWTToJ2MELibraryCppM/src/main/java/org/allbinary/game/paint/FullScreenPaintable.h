
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_FULLSCREENPAINTABLE_H
        #define ORG_ALLBINARY_GAME_PAINT_FULLSCREENPAINTABLE_H

#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //SwtToJ2ME
class FullScreenPaintable: public Paintable: public UpdateMyFontInterface {
        

    public static FullScreenPaintable getInstance();

    private: const displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: const FULLSCREEN_TEXT: string = "F11 - Toggle Fullscreen";

    private: anchor: int32_t = Anchor.TOP_LEFT;

    private: Y: int32_t= 0;

    private: beginWidth: int32_t= 0;

private constructor ();

    public updateMeasurement(Graphics graphics);

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_FULLSCREENPAINTABLE_H
