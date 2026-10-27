
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_FULLSCREENPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_PAINT_FULLSCREENPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/paint/FullScreenPaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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

    auto FullScreenPaintable::getInstance() -> FullScreenPaintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new FullScreenPaintable();
    
}


FullScreenPaintable::FullScreenPaintable() : displayInfo(DisplayInfoSingleton::getInstance()), myFontProcessor(new UpdateMyFontProcessor(this)), anchor(Anchor::TOP_LEFT){
}


    auto FullScreenPaintable::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->Y= 4 *font->getHeight();
    
this->beginWidth= (font->stringWidth(this->FULLSCREEN_TEXT)>>1);
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto FullScreenPaintable::paint(Graphics* graphics) -> void{
this->myFontProcessor->process(graphics);
    

    int32_t halfWidth = this->displayInfo->getLastHalfWidth();;
    

    int32_t height = this->displayInfo->getLastHeight();;
    
graphics->drawString(this->FULLSCREEN_TEXT, halfWidth -this->beginWidth, height -this->Y, this->anchor);
    
}




        #endif //ORG_ALLBINARY_GAME_PAINT_FULLSCREENPAINTABLE_CPP
