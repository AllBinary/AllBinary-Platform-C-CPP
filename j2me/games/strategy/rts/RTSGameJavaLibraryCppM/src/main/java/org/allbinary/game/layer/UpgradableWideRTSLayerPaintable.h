
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_UPGRADABLEWIDERTSLAYERPAINTABLE_H
        #define ORG_ALLBINARY_GAME_LAYER_UPGRADABLEWIDERTSLAYERPAINTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
class CommonSeps;
class StringMaker;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/RTSLayerCompositePaintable.h"
class UpgradableRTSLayerHudPaintable;
class RTSLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UpgradableWideRTSLayerPaintable: public RTSLayerCompositePaintable {

    private: std::string cost;

public: UpgradableWideRTSLayerPaintable(UpgradableRTSLayerHudPaintable* upgradableRTSLayerHudPaintable);

    public: void update(RTSLayer* rtsLayer);

    public: void paint(Graphics* graphics);

    /*protected*/ public: void setCost(std::string cost);

    /*protected*/ public: std::string getCost();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UPGRADABLEWIDERTSLAYERPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_UPGRADABLEWIDERTSLAYERPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_UPGRADABLEWIDERTSLAYERPAINTABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/game/layer/RTSLayerCompositePaintable.h")
#include "org/allbinary/game/layer/RTSLayerCompositePaintable.h"
#endif
#if __has_include("org/allbinary/game/layer/UpgradableRTSLayerHudPaintable.h")
#include "org/allbinary/game/layer/UpgradableRTSLayerHudPaintable.h"
#endif
#if __has_include("org/allbinary/game/layer/RTSLayer.h")
#include "org/allbinary/game/layer/RTSLayer.h"
#endif

        #endif
    
