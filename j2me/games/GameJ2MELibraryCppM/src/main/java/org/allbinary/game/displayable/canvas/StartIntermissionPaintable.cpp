
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTINTERMISSIONPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTINTERMISSIONPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/StartIntermissionPaintable.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/FontDebugFactory.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"


StartIntermissionPaintable::StartIntermissionPaintable(AllBinaryGameCanvas* gameCanvas, std::vector<std::string> stringArray, BasicColor* basicColor, Font* font) : fontDebugFactory(FontDebugFactory::getInstance()), basicSetColorUtil(BasicColorSetUtil::getInstance()), updateMyFontProcessor(new UpdateMyFontProcessor(this)), myFontProcessor(this->updateMyFontProcessor), basicColor(BasicColorFactory::getInstance()->BLACK), lineYOffsetArray(NullUtil::getInstance()->NULL_INT_ARRAY), anchor(Anchor::TOP_LEFT), EMPTY_STRING(StringUtil::getInstance()->EMPTY_STRING){
this->gameCanvas= gameCanvas;
    
this->stringArray= stringArray;
    
this->lastWidth= std::vector<int32_t>(this->stringArray.size());
    
this->setBasicColorP(basicColor);
    
this->color= basicColor->intValue();
    
this->fontSize= font->getSize();
    
this->font= font;
    
}


    auto StartIntermissionPaintable::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->fontHeightP= font->getHeight();
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto StartIntermissionPaintable::paint(Graphics* graphics) -> void{
this->myFontProcessor->process(graphics);
    

    Font* existingFont = graphics->getFont();;
    
this->fontDebugFactory->setFont(this->font, graphics);
    

    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    
this->basicSetColorUtil->setBasicColorP3(graphics, this->basicColor, this->color);
    

    int32_t beginWidth= 0;;
    




                        for (
    int32_t index = this->lineYOffsetArray.size() -1;index >= 0; index--)
        {

                        if(this->hasChanged)
                        
                                    {
                                    this->lastWidth[index]= (graphics->getFont()->stringWidth(this->stringArray[index])>>1);
    

                                    }
                                
beginWidth= this->lastWidth[index];
    
graphics->drawString(this->stringArray[index], displayInfo->getLastHalfWidth() -beginWidth, displayInfo->getLastHalfHeight() -this->lineYOffsetArray[index], this->anchor);
    
}

this->hasChanged= false;
    
this->fontDebugFactory->setFont(existingFont, graphics);
    
}


    auto StartIntermissionPaintable::update() -> void{

    int32_t level = this->gameCanvas->getLayerManager()->getGameInfo()->getCurrentLevel();;
    
this->stringArray[0]= JavaString::valueOf((new StringMaker())->append(this->BEGIN_LEVEL)->appendint(level));
    




                        for (
    int32_t index = this->stringArray.size() -1;index >= 1; index--)
        {
this->stringArray[index]= this->EMPTY_STRING;
    
}

}


    auto StartIntermissionPaintable::setBasicColorP(BasicColor* basicColor) -> void{
this->basicColor= basicColor;
    
}


    auto StartIntermissionPaintable::getBasicColorP() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->basicColor;
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTINTERMISSIONPAINTABLE_CPP
