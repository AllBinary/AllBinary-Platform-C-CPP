
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_UPGRADABLERTSLAYERHUDPAINTABLE_H
        #define ORG_ALLBINARY_GAME_LAYER_UPGRADABLERTSLAYERHUDPAINTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Font;
class Graphics;
class CollidableDestroyableDamageableLayer;
class CharArrayFactory;
class DisplayInfoSingleton;
class MyFontProcessor;
class CommonButtons;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/SelectionHudPaintable.h"
class RTSLayerCompositePaintable;
class UpgradableWideRTSLayerPaintable;
class RTSLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UpgradableRTSLayerHudPaintable: public SelectionHudPaintable {

    private: static UpgradableRTSLayerHudPaintable* instance_owner();
    private: static UpgradableRTSLayerHudPaintable* instance;

    public: static UpgradableRTSLayerHudPaintable* getInstance();

    private: const std::string PERCENT = "%";

    private: CollidableDestroyableDamageableLayer* rtsLayer;

    /*protected*/ public: int32_t costY= 0;

    /*protected*/ public: int32_t costY1= 0;

    private: int32_t percentCompleteX2= 0;

    private: RTSLayerCompositePaintable* rtsLayerCompositePaintableLateInit;

    private: int32_t charHeight= 0;

    private: int32_t charWidth= 0;

private: UpgradableRTSLayerHudPaintable();

    public: void updateMeasurement(Graphics* graphics);

    public: void update();

    public: void updateSelectionInfo();

    private: int32_t percentComplete= 0;

    private: int32_t percentCompleteX= 0;

    private: std::vector<char> percentCompleteArray;

    private: int32_t currentTotalDigits= 0;

    public: void updateInfo();

    public: void paint(Graphics* graphics);

    public: void setRtsLayer(RTSLayer* rtsLayer);

    /*protected*/ public: CollidableDestroyableDamageableLayer* getRtsLayer();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UPGRADABLERTSLAYERHUDPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_UPGRADABLERTSLAYERHUDPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_UPGRADABLERTSLAYERHUDPAINTABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>)
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>
#endif
#if __has_include(<org/allbinary/logic/java/character/CharArrayFactory.h>)
#include <org/allbinary/logic/java/character/CharArrayFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/graphics/font/MyFontProcessor.h>)
#include <org/allbinary/graphics/font/MyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/input/motion/button/CommonButtons.h>)
#include <org/allbinary/input/motion/button/CommonButtons.h>
#endif
#if __has_include("org/allbinary/game/layer/SelectionHudPaintable.h")
#include "org/allbinary/game/layer/SelectionHudPaintable.h"
#endif
#if __has_include("org/allbinary/game/layer/RTSLayerCompositePaintable.h")
#include "org/allbinary/game/layer/RTSLayerCompositePaintable.h"
#endif
#if __has_include("org/allbinary/game/layer/UpgradableWideRTSLayerPaintable.h")
#include "org/allbinary/game/layer/UpgradableWideRTSLayerPaintable.h"
#endif
#if __has_include("org/allbinary/game/layer/RTSLayer.h")
#include "org/allbinary/game/layer/RTSLayer.h"
#endif

        #endif
    
