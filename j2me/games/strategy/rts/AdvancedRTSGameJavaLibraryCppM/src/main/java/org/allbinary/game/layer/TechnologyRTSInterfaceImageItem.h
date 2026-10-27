
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Font;
class Graphics;
class Image;
class NullImage;
#include <org/allbinary/graphics/form/item/ABCustomImageItem.h>
class CharArrayFactory;
class BasicColor;
class MyFontProcessor;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class UpdateMyFontProcessor;
class PrimitiveLongUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class RTSInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TechnologyRTSInterfaceImageItem: public ABCustomImageItem, public UpdateMyFontInterface {

    private: RTSInterface* rtsInterface;

    private: PrimitiveLongUtil* primitiveLongUtil;

    private: const std::string LEVEL = "Level";

    private: const std::string COST = "Cost";

    private: const std::string DOLLAR = "$";

    private: MyFontProcessor* myFontProcessor;

    private: std::vector<char> costString;

    private: int32_t costLength= 0;

    private: std::vector<char> levelString;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_TECHNOLOGYRTSINTERFACEIMAGEITEM_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_TECHNOLOGYRTSINTERFACEIMAGEITEM_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullImage.h>)
#include <javax/microedition/lcdui/NullImage.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ABCustomImageItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomImageItem.h>
#endif
#if __has_include(<org/allbinary/logic/java/character/CharArrayFactory.h>)
#include <org/allbinary/logic/java/character/CharArrayFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/font/MyFontProcessor.h>)
#include <org/allbinary/graphics/font/MyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontInterface.h>)
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontProcessor.h>)
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/logic/math/PrimitiveLongUtil.h>)
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>
#endif
#if __has_include("org/allbinary/game/layer/RTSInterface.h")
#include "org/allbinary/game/layer/RTSInterface.h"
#endif

        #endif
    
