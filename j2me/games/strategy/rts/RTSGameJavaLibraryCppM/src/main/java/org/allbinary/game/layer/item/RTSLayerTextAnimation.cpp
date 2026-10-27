
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ITEM_RTSLAYERTEXTANIMATION_CPP
        #define ORG_ALLBINARY_GAME_LAYER_ITEM_RTSLAYERTEXTANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/item/RTSLayerTextAnimation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

RTSLayerTextAnimation::RTSLayerTextAnimation(std::string text, Image* image) : myFontProcessor(new UpdateMyFontProcessor(this)){
this->text= text;
    
this->image= image;
    
}


    auto RTSLayerTextAnimation::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->fontHeight= font->getHeight();
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto RTSLayerTextAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->myFontProcessor->process(graphics);
    
Animation::paintXY(graphics, x, y);
    

    int32_t adjustedCostY = this->image->getHeight() -this->fontHeight;;
    
graphics->drawString(this->text, x, y +adjustedCostY, 0);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_ITEM_RTSLAYERTEXTANIMATION_CPP
