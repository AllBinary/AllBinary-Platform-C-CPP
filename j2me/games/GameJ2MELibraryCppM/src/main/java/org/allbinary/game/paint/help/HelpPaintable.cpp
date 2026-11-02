
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_HELP_HELPPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_PAINT_HELP_HELPPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/paint/help/HelpPaintable.h"
        

            #include <vector>
        
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

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

HelpPaintable::HelpPaintable(std::string title, BasicColor* backgroundBasicColor, BasicColor* basicColor) : displayInfo(DisplayInfoSingleton::getInstance()), updateMyFontProcessor(new UpdateMyFontProcessor(this)), myFontProcessor(this->updateMyFontProcessor), anchor(Anchor::TOP_LEFT), inputInfo(StringUtil::getInstance()->getArrayInstance()), beginWidthArray(NullUtil::getInstance()->NULL_INT_ARRAY){
this->title= title;
    
this->basicColor= basicColor;
    
}


    auto HelpPaintable::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->titleBeginWidth= (font->stringWidth(this->title)>>1);
    
this->charHeight= font->getHeight();
    

    int32_t size = this->inputInfo.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->beginWidthArray[index]= (font->stringWidth(this->inputInfo[index])>>1);
    
}

this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto HelpPaintable::setInputInfoP(std::vector<std::string> inputInfo) -> void{
this->inputInfo= inputInfo;
    
this->beginWidthArray= std::vector<int32_t>(this->inputInfo.size());
    
this->myFontProcessor= this->updateMyFontProcessor;
    
}


    auto HelpPaintable::paint(Graphics* graphics) -> void{
this->myFontProcessor->process(graphics);
    

    int32_t halfWidth = this->displayInfo->getLastHalfWidth();;
    
graphics->setColor(this->basicColor->intValue());
    
graphics->drawString(this->title, halfWidth -this->titleBeginWidth, this->charHeight, this->anchor);
    

    int32_t size = this->inputInfo.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
graphics->drawString(this->inputInfo[index], halfWidth -this->beginWidthArray[index], (index +3) *this->charHeight, this->anchor);
    
}

}




        #endif //ORG_ALLBINARY_GAME_PAINT_HELP_HELPPAINTABLE_CPP
