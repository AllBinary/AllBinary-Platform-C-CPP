
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_ABOUTPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_PAINT_ABOUTPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/paint/AboutPaintable.h"
        

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

    auto AboutPaintable::getInstance(std::vector<std::string> info, std::vector<std::string> developers) -> AboutPaintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AboutPaintable(info, developers);
    
}


AboutPaintable::AboutPaintable(std::vector<std::string> info, std::vector<std::string> developers) : displayInfoSingleton(DisplayInfoSingleton::getInstance()), ABOUT(CanvasStrings::getInstance()->ABOUT), paintableArray(
                                                        {
                                                            this
                                                        }), myFontProcessor(new UpdateMyFontProcessor(this)), anchor(Anchor::TOP_LEFT){
this->info= info;
    
this->infoBeginWidth= std::vector<int32_t>(this->info.length);
    
this->developers= developers;
    
this->developersBeginWidth= std::vector<int32_t>(this->developers.length);
    
}


    auto AboutPaintable::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->charHeight= font->getHeight();
    
this->aboutBeginWidth= (font->stringWidth(this->ABOUT)>>1);
    

    int32_t infoSize = this->info.size();;
    




                        for (
    int32_t index = 0;index < infoSize; index++)
        {
this->infoBeginWidth[index]= (font->stringWidth(this->info[index])>>1);
    
}


    int32_t size = this->developers.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->developersBeginWidth[index]= (font->stringWidth(this->developers[index])>>1);
    
}

this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto AboutPaintable::getPaintableArrayInstance() -> std::vector<Paintable*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paintableArray;
    
}


    auto AboutPaintable::paint(Graphics* graphics) -> void{
this->myFontProcessor->process(graphics);
    

    int32_t halfWidth = this->displayInfoSingleton->getLastHalfWidth();;
    
graphics->drawString(this->ABOUT, halfWidth -this->aboutBeginWidth, 2 *this->charHeight, this->anchor);
    

    int32_t infoSize = this->info.size();;
    




                        for (
    int32_t index = 0;index < infoSize; index++)
        {
graphics->drawString(this->info[index], halfWidth -this->infoBeginWidth[index], (4 +index) *this->charHeight, this->anchor);
    
}


    int32_t size = this->developers.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
graphics->drawString(this->developers[index], halfWidth -this->developersBeginWidth[index], (5 +infoSize +index) *this->charHeight, this->anchor);
    
}

}




        #endif //ORG_ALLBINARY_GAME_PAINT_ABOUTPAINTABLE_CPP
