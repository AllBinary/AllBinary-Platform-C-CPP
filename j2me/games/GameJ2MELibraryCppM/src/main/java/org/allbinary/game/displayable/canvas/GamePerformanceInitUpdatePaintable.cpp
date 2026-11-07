
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEPERFORMANCEINITUPDATEPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEPERFORMANCEINITUPDATEPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/GamePerformanceInitUpdatePaintable.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/canvas/GameStatisticsFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GamePerformanceInitUpdatePaintable::GamePerformanceInitUpdatePaintable() : halfHeight(DisplayInfoSingleton::getInstance()->getLastHalfHeight()), yArray({this->halfHeight +30,this->halfHeight +30,this->halfHeight +30 +15,this->halfHeight +30 +15,this->halfHeight +30 +30,this->halfHeight +30 +30,this->halfHeight +30 +45,this->halfHeight +30 +45}), myFontProcessor(new UpdateMyFontProcessor(this)), baseRefreshHelperCharArray(std::vector<std::vector<char>>(0, std::vector<char>(0))), RED(BasicColorFactory::getInstance()->RED->intValue()) {
        }
        
    auto GamePerformanceInitUpdatePaintable::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->defaultStringWidth= MyFontProcessor::defaultStringWidth(font, 2);
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto GamePerformanceInitUpdatePaintable::init() -> void{
}


    auto GamePerformanceInitUpdatePaintable::update() -> void{
this->baseRefreshHelperCharArray= GameStatisticsFactory::getInstance()->to2DCharArray();
    
}


    auto GamePerformanceInitUpdatePaintable::paint(Graphics* graphics) -> void{
this->myFontProcessor->process(graphics);
    
graphics->setColor(this->RED);
    

    std::vector<char> charArray;;
    

    std::vector<char> charArray2;;
    

    int32_t size2= 0;;
    

    int32_t size3= 0;;
    

    int32_t size = this->baseRefreshHelperCharArray.size() -2;;
    




                        for (
    int32_t index = size;index >= 0; )
        {
charArray= this->baseRefreshHelperCharArray[index];
    
charArray2= this->baseRefreshHelperCharArray[index +1];
    
size2= charArray.size();
    
size3= charArray2.size();
    
graphics->drawChars(charArray, 0, size2, 0, this->yArray[index], 0);
    
graphics->drawChars(charArray2, 0, size3, size2 *this->defaultStringWidth, this->yArray[index +1], 0);
    
}

}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEPERFORMANCEINITUPDATEPAINTABLE_CPP
