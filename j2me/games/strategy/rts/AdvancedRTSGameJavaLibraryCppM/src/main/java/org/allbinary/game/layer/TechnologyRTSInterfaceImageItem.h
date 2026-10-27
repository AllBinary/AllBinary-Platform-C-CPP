
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_TECHNOLOGYRTSINTERFACEIMAGEITEM_H
        #define ORG_ALLBINARY_GAME_LAYER_TECHNOLOGYRTSINTERFACEIMAGEITEM_H

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

class TechnologyRTSInterfaceImageItem: public ABCustomImageItem, public UpdateMyFontInterface {

    private: RTSInterface* rtsInterface;

    private: PrimitiveLongUtil* primitiveLongUtil = PrimitiveLongUtil::createPowerOfTen(10000);

    private: const std::string LEVEL = "Level";

    private: const std::string COST = "Cost";

    private: const std::string DOLLAR = "$";

    private: MyFontProcessor* myFontProcessor = new UpdateMyFontProcessor(this);

    private: std::vector<char> costString = CharArrayFactory::getInstance()->getZeroCharArray();

    private: int32_t costLength= 0;

    private: std::vector<char> levelString = CharArrayFactory::getInstance()->getZeroCharArray();

    private: int32_t levelLength= 0;

    private: int32_t adjustedCostLabelY= 0;

    private: int32_t adjustedCostX= 0;

    private: int32_t adjustedCostY= 0;

    private: int32_t adjustedLevelX= 0;

    private: int32_t adjustedLevelY= 0;

public: TechnologyRTSInterfaceImageItem(std::string label, Image* img, int32_t layout, std::string altText, BasicColor* basicColor, RTSInterface* rtsInterface);

    public: void updateMeasurement(Graphics* graphics);

    public: RTSInterface* getRtsInterface();

    public: void update();

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_TECHNOLOGYRTSINTERFACEIMAGEITEM_H
