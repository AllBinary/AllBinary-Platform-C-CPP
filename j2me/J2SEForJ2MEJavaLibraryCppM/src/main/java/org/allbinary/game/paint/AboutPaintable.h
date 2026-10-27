
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        //J2SEForJ2ME
class AboutPaintable: public Paintable, public UpdateMyFontInterface {

    public: static AboutPaintable* getInstance(std::vector<std::string> info, std::vector<std::string> developers);

    private: DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton::getInstance();

    private: const std::string ABOUT = CanvasStrings::getInstance()->ABOUT;

    private: std::vector<std::string> info;

    private: std::vector<std::string> developers;

    private: const std::vector<Paintable*> paintableArray = 
                                                        {
                                                            this
                                                        };

    private: MyFontProcessor* myFontProcessor = new UpdateMyFontProcessor(this);

    private: int32_t charHeight= 0;

    private: int32_t aboutBeginWidth= 0;

    private: std::vector<int32_t> infoBeginWidth;

    private: std::vector<int32_t> developersBeginWidth;

    private: int32_t anchor = Anchor::TOP_LEFT;

private: AboutPaintable(std::vector<std::string> info, std::vector<std::string> developers);

    public: void updateMeasurement(Graphics* graphics);

    public: std::vector<Paintable*> getPaintableArrayInstance();

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_ABOUTPAINTABLE_H
