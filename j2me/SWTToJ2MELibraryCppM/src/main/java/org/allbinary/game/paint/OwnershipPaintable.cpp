
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_OWNERSHIPPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_PAINT_OWNERSHIPPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/paint/OwnershipPaintable.h"
        

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

    auto OwnershipPaintable::getInstance() -> OwnershipPaintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new OwnershipPaintable();
    
}


OwnershipPaintable::OwnershipPaintable() : logUtil(LogUtil::getInstance()), displayInfo(DisplayInfoSingleton::getInstance()), myFontProcessor(new UpdateMyFontProcessor(this)), basicColor(BasicColorFactory::getInstance()->WHITE), color(this->basicColor->intValue()), anchor(Anchor::TOP_LEFT){
}


    auto OwnershipPaintable::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->COPYRIGHT_Y= 2 *font->getHeight();
    
this->beginWidth= (font->stringWidth(this->COPYRIGHT)>>1);
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto OwnershipPaintable::setBasicColorP(BasicColor* basicColor) -> void{
this->basicColor= basicColor;
    
this->color= basicColor->intValue();
    
}


    auto OwnershipPaintable::getBasicColorP() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicColor;
    
}


    auto OwnershipPaintable::paint(Graphics* graphics) -> void{
this->myFontProcessor->process(graphics);
    
graphics->setColor(this->color);
    

    int32_t halfWidth = this->displayInfo->getLastHalfWidth();;
    

    int32_t height = this->displayInfo->getLastHeight();;
    
graphics->drawString(this->COPYRIGHT, halfWidth -this->beginWidth, height -this->COPYRIGHT_Y, this->anchor);
    
}




        #endif //ORG_ALLBINARY_GAME_PAINT_OWNERSHIPPAINTABLE_CPP
