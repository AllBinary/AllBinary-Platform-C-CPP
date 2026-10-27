
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ITEM_RTSLAYERCOSTANIMATION_CPP
        #define ORG_ALLBINARY_GAME_LAYER_ITEM_RTSLAYERCOSTANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/item/RTSLayerCostAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/game/layer/CostLayerInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/rts/technology/event/TechEventListenerInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

RTSLayerCostAnimation::RTSLayerCostAnimation(Image* image, CostLayerInterfaceFactoryInterface* layerInterfaceFactoryInterface) : logUtil(LogUtil::getInstance()), primitiveLongUtil(PrimitiveLongUtil::createPowerOfTen(10000)), myFontProcessor(new UpdateMyFontProcessor(this)), costString(NullUtil::getInstance()->NULL_CHAR_ARRAY){
this->image= image;
    
this->layerInterfaceFactoryInterface= layerInterfaceFactoryInterface;
    
this->update();
    
}


    auto RTSLayerCostAnimation::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->fontHeight= font->getHeight();
    
this->adjustedCostX= font->stringWidth(this->DOLLAR);
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto RTSLayerCostAnimation::onEvent(AllBinaryEventObject* event) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


    auto RTSLayerCostAnimation::onTechEvent(AllBinaryEventObject* event) -> void{

        try {
            this->update();
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "onTechEvent", &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto RTSLayerCostAnimation::update() -> void{
this->len= 0;
    
this->costString= this->primitiveLongUtil->getCharArray(this->layerInterfaceFactoryInterface->getCost());
    
this->len= this->primitiveLongUtil->getCurrentTotalDigits();
    
}


    auto RTSLayerCostAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->myFontProcessor->process(graphics);
    
Animation::paintXY(graphics, x, y);
    

    int32_t adjustedCostY = this->image->getHeight() -this->fontHeight;;
    

    int32_t xa = x +2;;
    
graphics->drawString(this->DOLLAR, xa, y +adjustedCostY, 0);
    
graphics->drawChars(this->costString, 0, this->len, x +this->adjustedCostX, y +adjustedCostY, 0);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_ITEM_RTSLAYERCOSTANIMATION_CPP
