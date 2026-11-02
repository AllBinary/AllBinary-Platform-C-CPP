
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_PAINT_SIMPLETEXTPAINTABLE_CPP
        #define ORG_ALLBINARY_GRAPHICS_PAINT_SIMPLETEXTPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/paint/SimpleTextPaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/paint/Paintable.h"


SimpleTextPaintable::SimpleTextPaintable(std::string text, BasicColor* basicColor) : displayInfoSingleton(DisplayInfoSingleton::getInstance()), updateMyFontProcessor(new UpdateMyFontProcessor(this)), myFontProcessor(this->updateMyFontProcessor), anchor(Anchor::TOP_LEFT){
this->text= text;
    
this->basicColor= basicColor;
    
}


    auto SimpleTextPaintable::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->topScoresWidth= (font->stringWidth(this->text)>>1);
    
this->fontHeight= font->getHeight();
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto SimpleTextPaintable::paint(Graphics* graphics) -> void{
this->myFontProcessor->process(graphics);
    

    int32_t width = this->displayInfoSingleton->getLast()[this->displayInfoSingleton->WIDTH];;
    
graphics->setColor(JavaBoxes::value<int32_t>(this->getBasicColorP()));
    
graphics->drawString(this->text, (width>>1) -this->topScoresWidth, this->fontHeight, this->anchor);
    
}


    auto SimpleTextPaintable::setBasicColorP(BasicColor* basicColor) -> void{
this->basicColor= basicColor;
    
}


    auto SimpleTextPaintable::getBasicColorP() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicColor;
    
}


    auto SimpleTextPaintable::setText(std::string text) -> void{
this->text= text;
    
this->myFontProcessor= this->updateMyFontProcessor;
    
}


    auto SimpleTextPaintable::getText() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->text;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_PAINT_SIMPLETEXTPAINTABLE_CPP
