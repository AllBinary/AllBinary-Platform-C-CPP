
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SELECTIONHUDPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_LAYER_SELECTIONHUDPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/SelectionHudPaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>

      
#include <org/allbinary/input/motion/button/CommonButtons.h>

      
#include <org/allbinary/input/motion/button/TouchButtonLocationHelper.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

SelectionHudPaintable::SelectionHudPaintable() : y(CommonButtons::getInstance()->STANDARD_BUTTON_SIZE +17), updateMyFontProcessor(new UpdateMyFontProcessor(this)), myFontProcessor(updateMyFontProcessor), basicColor(BasicColorFactory::getInstance()->BLACK), name(StringUtil::getInstance()->EMPTY_STRING), animationInterface(NullAnimationFactory::getFactoryInstance()->getInstance(0)), backgroundColor(BasicColorFactory::getInstance()->GREY->intValue()){
this->update();
    
this->primitiveLongUtil= PrimitiveLongUtil::createPowerOfTen(10000);
    
}


    auto SelectionHudPaintable::updateMeasurement(Graphics* graphics) -> void{

    CommonButtons* commonButtons = CommonButtons::getInstance();;
    

    Font* font = graphics->getFont();;
    
this->setHeight(commonButtons->STANDARD_BUTTON_SIZE +font->getHeight());
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto SelectionHudPaintable::update() -> void{

    CommonButtons* commonButtons = CommonButtons::getInstance();;
    

    TouchButtonLocationHelper* touchButtonLocationHelper = new TouchButtonLocationHelper();;
    

    DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton::getInstance();;
    
this->x= commonButtons->STANDARD_BUTTON_SIZE +touchButtonLocationHelper->getColumnsRemainderHalf();
    
this->textX= this->getX() +4;
    
this->width= displayInfoSingleton->getLastWidth() -this->getX() *2;
    
this->imageX= this->getWidth() +touchButtonLocationHelper->getColumnsRemainderHalf() -10;
    
this->myFontProcessor= this->updateMyFontProcessor;
    
}


    auto SelectionHudPaintable::updateSelectionInfo() -> void{
}


    auto SelectionHudPaintable::updateInfo() -> void{
}


    auto SelectionHudPaintable::getPrimitiveLongUtil() -> PrimitiveLongUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->primitiveLongUtil;
    
}


    auto SelectionHudPaintable::setAnimationInterface(Animation* animationInterface) -> void{
this->animationInterface= animationInterface;
    
}


    auto SelectionHudPaintable::getAnimationInterface() -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterface;
    
}


    auto SelectionHudPaintable::setName(std::string name) -> void{
this->name= name;
    
}


    auto SelectionHudPaintable::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    auto SelectionHudPaintable::setBasicColorP(BasicColor* basicColor) -> void{
this->basicColor= basicColor;
    
this->setColor(basicColor->intValue());
    
}


    auto SelectionHudPaintable::getBasicColorP() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicColor;
    
}


    auto SelectionHudPaintable::setColor(int32_t color) -> void{
this->color= color;
    
}


    auto SelectionHudPaintable::getColor() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->color;
    
}


    auto SelectionHudPaintable::getWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->width;
    
}


    auto SelectionHudPaintable::setHeight(int32_t height) -> void{
this->height= height;
    
}


    auto SelectionHudPaintable::getHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->height;
    
}


    auto SelectionHudPaintable::getX() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->x;
    
}


    auto SelectionHudPaintable::paint(Graphics* graphics) -> void{
this->myFontProcessor->process(graphics);
    
graphics->setColor(this->backgroundColor);
    
graphics->drawRect(this->getX(), this->y, this->getWidth(), this->getHeight());
    
graphics->setColor(this->getColor());
    
graphics->drawString(this->getName(), this->textX, this->y, 0);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_SELECTIONHUDPAINTABLE_CPP
