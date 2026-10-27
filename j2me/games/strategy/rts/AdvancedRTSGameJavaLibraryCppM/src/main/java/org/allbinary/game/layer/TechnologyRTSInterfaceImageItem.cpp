
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_TECHNOLOGYRTSINTERFACEIMAGEITEM_CPP
        #define ORG_ALLBINARY_GAME_LAYER_TECHNOLOGYRTSINTERFACEIMAGEITEM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/TechnologyRTSInterfaceImageItem.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/graphics/form/item/ABCustomImageItem.h>

      
#include <org/allbinary/logic/java/character/CharArrayFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/RTSInterface.h"


TechnologyRTSInterfaceImageItem::TechnologyRTSInterfaceImageItem(std::string label, Image* img, int32_t layout, std::string altText, BasicColor* basicColor, RTSInterface* rtsInterface) : ABCustomImageItem(label, img, layout, altText, basicColor, 0), primitiveLongUtil(PrimitiveLongUtil::createPowerOfTen(10000)), myFontProcessor(new UpdateMyFontProcessor(this)), costString(CharArrayFactory::getInstance()->getZeroCharArray()), levelString(CharArrayFactory::getInstance()->getZeroCharArray()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->rtsInterface= rtsInterface;
    
this->update();
    
}


    auto TechnologyRTSInterfaceImageItem::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    

    int32_t fontHeight = font->getHeight();;
    

    int32_t imageHeight = 0;;
    

    Image* image = this->getImage();;
    

                        if(image != NullImage::NULL_IMAGE)
                        
                                    {
                                    imageHeight= image->getHeight();
    

                                    }
                                
this->adjustedCostLabelY=  -this->yOffset +imageHeight -(3 *fontHeight);
    
this->adjustedCostY=  -this->yOffset +imageHeight -(2 *fontHeight);
    
this->adjustedCostX= 2 +(DOLLAR.size() *(fontHeight -1));
    
this->adjustedLevelY=  -this->yOffset +imageHeight -fontHeight;
    
this->adjustedLevelX= 2 +(LEVEL.size() *(fontHeight -1));
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto TechnologyRTSInterfaceImageItem::getRtsInterface() -> RTSInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rtsInterface;
    
}


    auto TechnologyRTSInterfaceImageItem::update() -> void{
this->costString= this->primitiveLongUtil->getCharArray(this->getRtsInterface()->getUpgradeCost());
    
this->levelString= this->primitiveLongUtil->getCharArray(this->getRtsInterface()->getLevel());
    
}


    auto TechnologyRTSInterfaceImageItem::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->myFontProcessor->process(graphics);
    
ABCustomImageItem::paintXY(graphics, x, y);
    

    int32_t xa = x +2;;
    
graphics->drawString(this->COST, xa, y +this->adjustedCostLabelY, 0);
    
graphics->drawString(this->DOLLAR, xa, y +this->adjustedCostY, 0);
    
graphics->drawChars(this->costString, 0, this->costLength, x +this->adjustedCostX, y +this->adjustedCostY, 0);
    
graphics->drawString(this->LEVEL, xa, y +this->adjustedLevelY, 0);
    
graphics->drawChars(this->levelString, 0, this->levelLength, x +this->adjustedLevelX, y +this->adjustedLevelY, 0);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_TECHNOLOGYRTSINTERFACEIMAGEITEM_CPP
