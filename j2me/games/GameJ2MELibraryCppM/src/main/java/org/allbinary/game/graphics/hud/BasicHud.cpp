
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
        



        #ifndef ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUD_CPP
        #define ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUD_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/graphics/hud/BasicHud.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/graphics/hud/HudGraphicsPosition.h"
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"


BasicHud::BasicHud(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), canvasStrings(CanvasStrings::getInstance()), basicSetColorUtil(BasicColorSetUtil::getInstance()), displayInfo(DisplayInfoSingleton::getInstance()), updateMyFontProcessor(new UpdateMyFontProcessor(this)), myFontProcessor(this->updateMyFontProcessor), hudGraphicsPosition(HudGraphicsPosition::NULL_HUD_GRAPHICS_POSITION), basicColor(BasicColorFactory::getInstance()->BLACK){
this->setLocation(location);
    
this->setDirection(direction);
    
this->setBufferZone(bufferZone);
    
this->onDisplayChangeEvent(DisplayInfoSingleton::getInstance()->displayChangeEvent);
    
this->setBasicColorP(basicColor);
    
this->color= basicColor->intValue();
    
}


    auto BasicHud::updateMeasurement(Graphics* graphics) -> void{

        try {
            this->hudGraphicsPosition= this->getHudGraphicsPositionWH(this->displayInfo->getLastWidth(), this->displayInfo->getLastHeight(), this->updateMaxWidth, this->updateMaxHeight);
    
this->x= this->hudGraphicsPosition->getPoint()->getX();
    
this->setY(this->hudGraphicsPosition->getPoint()->getY());
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, this->canvasStrings->ON_DISPLAY_CHANGE_EVENT, &e);
    
}

this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto BasicHud::getLocation() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->location;
    
}


    auto BasicHud::getDirection() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->direction;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicHud::getHudGraphicsPositionWH(int32_t width, int32_t height, int32_t maxWidth, int32_t maxHeight) -> HudGraphicsPosition*{

    int32_t x = 0;;
    

    int32_t y = 0;;
    

    int32_t anchor = 0;;
    

    BasicHudFactory* basicHudFactory = BasicHudFactory::getInstance();;
    

                        if(basicHudFactory->BOTTOMLEFT == this->getLocation())
                        
                                    {
                                    x= this->bufferZone +2;
    
y= height -maxHeight -this->bufferZone;
    
anchor= Graphics::BOTTOM&Graphics::LEFT;
    

                                    }
                                
                             else 
                        if(basicHudFactory->BOTTOMRIGHT == this->getLocation())
                        
                                    {
                                    x= width -maxWidth;
    
y= height -maxHeight -this->bufferZone;
    
anchor= Graphics::BOTTOM&Graphics::RIGHT;
    

                                    }
                                
                             else 
                        if(basicHudFactory->TOPLEFT == this->getLocation())
                        
                                    {
                                    x= this->bufferZone +2;
    
y= this->bufferZoneY;
    
anchor= Anchor::TOP_LEFT;
    

                                    }
                                
                             else 
                        if(basicHudFactory->TOPRIGHT == this->getLocation())
                        
                                    {
                                    x= width -maxWidth;
    
y= this->bufferZoneY;
    
anchor= Graphics::TOP&Graphics::RIGHT;
    

                                    }
                                
                             else 
                        if(basicHudFactory->TOPCENTER == this->getLocation())
                        
                                    {
                                    x= ((width -maxWidth) /2);
    
y= this->bufferZoneY;
    
anchor= Graphics::TOP&Graphics::HCENTER;
    

                                    }
                                
                             else 
                        if(basicHudFactory->BOTTOMCENTER == this->getLocation())
                        
                                    {
                                    x= ((width -maxWidth) /2);
    
y= height -maxHeight -this->bufferZone;
    
anchor= Graphics::BOTTOM&Graphics::HCENTER;
    

                                    }
                                
                             else 
                        if(basicHudFactory->ABSOLUTE == this->getLocation())
                        
                                    {
                                    x= maxHeight;
    
y= maxWidth;
    
anchor= 0;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new HudGraphicsPosition(this->getPoint(x, y), anchor);
    
}


    auto BasicHud::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


    auto BasicHud::onDisplayChangeEvent(DisplayChangeEvent* displayChangeEvent) -> void{
this->myFontProcessor= this->updateMyFontProcessor;
    
}


    auto BasicHud::getPoint(int32_t x, int32_t y) -> GPoint*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PointFactory::getInstance()->createXY(x, y);;
    
}


    auto BasicHud::getBufferZone() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->bufferZone;
    
}


    auto BasicHud::setBufferZone(int32_t bufferZone) -> void{
this->bufferZone= bufferZone;
    

                        if(J2MEUtil::isHTML())
                        
                                    {
                                    this->bufferZoneY= this->bufferZone;
    

                                    }
                                
                        else {
                            this->bufferZoneY= this->bufferZone +5;
    

                        }
                            
}


    auto BasicHud::setLocation(int32_t location) -> void{
this->location= location;
    
}


    auto BasicHud::setDirection(int32_t direction) -> void{
this->direction= direction;
    
}


    auto BasicHud::getHudGraphicsPosition() -> HudGraphicsPosition*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->hudGraphicsPosition;
    
}


    auto BasicHud::getColor() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->color;
    
}


    auto BasicHud::getX() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->x;
    
}


    auto BasicHud::setX(int32_t x) -> void{
this->x= x;
    
}


    auto BasicHud::setBasicColorP(BasicColor* basicColor) -> void{
this->basicColor= basicColor;
    
}


    auto BasicHud::getBasicColorP() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->basicColor;
    
}


    auto BasicHud::setY(int32_t y) -> void{
this->y= y;
    
}


    auto BasicHud::getY() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->y;
    
}


    auto BasicHud::paintSSO(Graphics* graphics, std::string string, std::string string2, int32_t offset) -> void{
this->myFontProcessor->process(graphics);
    
this->basicSetColorUtil->setBasicColorP(graphics, this->getBasicColorP());
    
graphics->drawString(string, this->x, this->getY(), this->hudGraphicsPosition->getAnchor());
    
graphics->drawString(string2, this->x +offset, this->getY(), this->hudGraphicsPosition->getAnchor());
    
}


    auto BasicHud::paintSSOO(Graphics* graphics, std::string string, std::string string2, int32_t offset, int32_t offset2) -> void{
this->myFontProcessor->process(graphics);
    
graphics->setColor(this->getColor());
    
graphics->drawString(string, this->x +offset, this->getY(), this->hudGraphicsPosition->getAnchor());
    
graphics->drawString(string2, this->x +offset2, this->getY(), this->hudGraphicsPosition->getAnchor());
    
}


    auto BasicHud::paintDXY(Graphics* graphics, std::vector<char> charArray, int32_t offset, int32_t len, std::vector<char> charArray2, int32_t offset2, int32_t len2, int32_t xOffset, int32_t xOffset2) -> void{
this->myFontProcessor->process(graphics);
    
this->basicSetColorUtil->setBasicColorP(graphics, this->getBasicColorP());
    

    int32_t y = this->getY();;
    
graphics->drawChars(charArray, offset, len, this->x +xOffset, y, this->hudGraphicsPosition->getAnchor());
    
graphics->drawChars(charArray2, offset2, len2, this->x +xOffset2, y, this->hudGraphicsPosition->getAnchor());
    
}


    auto BasicHud::paintDX(Graphics* graphics, std::vector<char> charArray, int32_t offset, int32_t len, std::vector<char> charArray2, int32_t offset2, int32_t len2, int32_t xOffset) -> void{
this->myFontProcessor->process(graphics);
    
this->basicSetColorUtil->setBasicColorP(graphics, this->getBasicColorP());
    

    int32_t y = this->getY();;
    
graphics->drawChars(charArray, offset, len, this->x, y, this->hudGraphicsPosition->getAnchor());
    
graphics->drawChars(charArray2, offset2, len2, this->x +xOffset, y, this->hudGraphicsPosition->getAnchor());
    
}


    auto BasicHud::paintOffsetAndLength(Graphics* graphics, std::vector<char> charArray, int32_t offset, int32_t len) -> void{
this->myFontProcessor->process(graphics);
    
this->basicSetColorUtil->setBasicColorP(graphics, this->getBasicColorP());
    

    int32_t y = this->getY();;
    
graphics->drawChars(charArray, offset, len, this->x, y, this->hudGraphicsPosition->getAnchor());
    
}


    auto BasicHud::paintString(Graphics* graphics, std::string string) -> void{
this->myFontProcessor->process(graphics);
    
this->basicSetColorUtil->setBasicColorP(graphics, this->getBasicColorP());
    

    int32_t y = this->getY() +this->offsetY;;
    
graphics->drawString(string, this->x, y, this->hudGraphicsPosition->getAnchor());
    
}




        #endif //ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUD_CPP
