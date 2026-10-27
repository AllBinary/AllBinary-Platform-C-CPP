
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
class OwnershipPaintable: public Paintable, public UpdateMyFontInterface {

    public: static OwnershipPaintable* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();

    private: MyFontProcessor* myFontProcessor = new UpdateMyFontProcessor(this);

    private: const std::string COPYRIGHT = "AllBinary Copyright (c) 2011";

    private: BasicColor* basicColor = BasicColorFactory::getInstance()->WHITE;

    private: int32_t color = this->basicColor->intValue();

    private: int32_t anchor = Anchor::TOP_LEFT;

    private: int32_t COPYRIGHT_Y= 0;

    private: int32_t beginWidth= 0;

private: OwnershipPaintable();

    public: void updateMeasurement(Graphics* graphics);

    public: void setBasicColorP(BasicColor* basicColor);

    public: BasicColor* getBasicColorP();

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_OWNERSHIPPAINTABLE_H
