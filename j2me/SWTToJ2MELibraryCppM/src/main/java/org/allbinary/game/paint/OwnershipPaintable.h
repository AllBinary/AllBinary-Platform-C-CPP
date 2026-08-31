
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_OWNERSHIPPAINTABLE_H
        #define ORG_ALLBINARY_GAME_PAINT_OWNERSHIPPAINTABLE_H

#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //SWTToJ2ME
class OwnershipPaintable: public Paintable: public UpdateMyFontInterface {
        

    public static OwnershipPaintable getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: const COPYRIGHT: string = "AllBinary Copyright (c) 2011";

    private: basicColor: BasicColor = BasicColorFactory.getInstance()!.WHITE;

    private: color: int32_t = this.basicColor!.intValue()!;

    private: anchor: int32_t = Anchor.TOP_LEFT;

    private: COPYRIGHT_Y: int32_t= 0;

    private: beginWidth: int32_t= 0;

private constructor ();

    public updateMeasurement(Graphics graphics);

    public setBasicColorP(BasicColor basicColor);

    public BasicColor getBasicColorP();

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_OWNERSHIPPAINTABLE_H
