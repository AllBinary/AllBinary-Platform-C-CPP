
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ITEM_RTSLAYERCOSTANIMATION_H
        #define ORG_ALLBINARY_GAME_LAYER_ITEM_RTSLAYERCOSTANIMATION_H

        
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
class CostLayerInterfaceFactoryInterface;
#include <org/allbinary/game/rts/technology/event/TechEventListenerInterface.h>
class CommonStrings;
class ForcedLogUtil;
class LogUtil;
#include <org/allbinary/animation/Animation.h>
class MyFontProcessor;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class UpdateMyFontProcessor;
class NullUtil;
class AllBinaryEventObject;
class PrimitiveLongUtil;
class EventStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RTSLayerCostAnimation: public Animation, public TechEventListenerInterface, public UpdateMyFontInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: PrimitiveLongUtil* primitiveLongUtil;

    private: const std::string DOLLAR = "$";

    private: Image* image;

    private: CostLayerInterfaceFactoryInterface* layerInterfaceFactoryInterface;

    private: MyFontProcessor* myFontProcessor;

    private: std::vector<char> costString;

    private: int32_t len= 0;

    private: int32_t adjustedCostX= 0;

    private: int32_t fontHeight = 0;

public: RTSLayerCostAnimation(Image* image, CostLayerInterfaceFactoryInterface* layerInterfaceFactoryInterface);

    public: void updateMeasurement(Graphics* graphics);

    public: void onEvent(AllBinaryEventObject* event);

    public: void onTechEvent(AllBinaryEventObject* event);

                //@Throws(Exception.constructor)
            
    public: void update();

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ITEM_RTSLAYERCOSTANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_ITEM_RTSLAYERCOSTANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_ITEM_RTSLAYERCOSTANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/game/layer/CostLayerInterfaceFactoryInterface.h>)
#include <org/allbinary/game/layer/CostLayerInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/game/rts/technology/event/TechEventListenerInterface.h>)
#include <org/allbinary/game/rts/technology/event/TechEventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
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
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/math/PrimitiveLongUtil.h>)
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif

        #endif
    
