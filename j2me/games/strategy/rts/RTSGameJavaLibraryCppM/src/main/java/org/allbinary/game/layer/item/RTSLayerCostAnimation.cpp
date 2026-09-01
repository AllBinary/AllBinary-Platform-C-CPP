
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
        



            #include <vector>
        
            #include "../../../../../java/lang/Exception.h"
        
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
        
class RTSLayerCostAnimation: public Animation, public TechEventListenerInterface, public UpdateMyFontInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const PrimitiveLongUtil primitiveLongUtil = PrimitiveLongUtil::createPowerOfTen(10000);

    private: const std::string DOLLAR = "$";

    private: Image image;

    private: CostLayerInterfaceFactoryInterface layerInterfaceFactoryInterface;

    private: MyFontProcessor myFontProcessor = UpdateMyFontProcessor(this);

    private: std::vector<char> costString = NullUtil::getInstance().NULL_CHAR_ARRAY;

    private: int32_t len= 0;

    private: int32_t adjustedCostX= 0;

    private: int32_t fontHeight = 0;

public: RTSLayerCostAnimation(Image image, CostLayerInterfaceFactoryInterface layerInterfaceFactoryInterface){
this->image= image;
    
this->layerInterfaceFactoryInterface= layerInterfaceFactoryInterface;
    
this->update();
    
}


    public: void updateMeasurement(Graphics graphics){

    Font font = graphics.getFont();;
    
this->fontHeight= font.getHeight();
    
this->adjustedCostX= font.stringWidth(this->DOLLAR);
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    public: void onEvent(AllBinaryEventObject event){
ForcedLogUtil::log(EventStrings::getInstance().PERFORMANCE_MESSAGE, this);
    
}


    public: void onTechEvent(AllBinaryEventObject event){

        try {
            this->update();
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, "onTechEvent", e);
    
}

}


                //@Throws(Exception.constructor)
            
    public: void update(){
this->len= 0;
    
this->costString= this->primitiveLongUtil.getCharArray(this->layerInterfaceFactoryInterface.getCost());
    
this->len= this->primitiveLongUtil.getCurrentTotalDigits();
    
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
this->myFontProcessor.process(graphics);
    
super.paintXY(graphics, x, y);
    

    int32_t adjustedCostY = this->image.getHeight() -this->fontHeight;;
    

    int32_t xa = x +2;;
    
graphics.drawString(this->DOLLAR, xa, y +adjustedCostY, 0);
    
graphics.drawChars(this->costString, 0, this->len, x +this->adjustedCostX, y +adjustedCostY, 0);
    
}


};

            

