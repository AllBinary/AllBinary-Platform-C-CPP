
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSLAYERCOMPOSITEPAINTABLE_H
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYERCOMPOSITEPAINTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
class StringUtil;
#include <org/allbinary/graphics/paint/Paintable.h>
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class UpgradableRTSLayerHudPaintable;
class RTSLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RTSLayerCompositePaintable: public Paintable {

    private: std::string upgradeCost;

    private: std::string downGradeCost;

    private: const std::string UPGRADE = "Up: $";

    private: const std::string DOWNGRADE = "Down: $-";

    /*protected*/ public: UpgradableRTSLayerHudPaintable* upgradableRTSLayerHudPaintable;

public: RTSLayerCompositePaintable(UpgradableRTSLayerHudPaintable* upgradableRTSLayerHudPaintable);

    public: void update(RTSLayer* rtsLayer);

    public: void paint(Graphics* graphics);

    /*protected*/ public: void setUpgradeCost(std::string upgradeCost);

    /*protected*/ public: std::string getUpgradeCost();

    /*protected*/ public: void setDownGradeCost(std::string downGradeCost);

    /*protected*/ public: std::string getDownGradeCost();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYERCOMPOSITEPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_RTSLAYERCOMPOSITEPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYERCOMPOSITEPAINTABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include("org/allbinary/game/layer/UpgradableRTSLayerHudPaintable.h")
#include "org/allbinary/game/layer/UpgradableRTSLayerHudPaintable.h"
#endif
#if __has_include("org/allbinary/game/layer/RTSLayer.h")
#include "org/allbinary/game/layer/RTSLayer.h"
#endif

        #endif
    
