
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSLAYERHUDPAINTABLE_H
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYERHUDPAINTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Font;
class Graphics;
class StringUtil;
class AndroidUtil;
class CollidableDestroyableDamageableLayer;
class BasicWeaponPart;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/SelectionHudPaintable.h"
class RTSLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RTSLayerHudPaintable: public SelectionHudPaintable, public UpdateMyFontInterface {

    private: static RTSLayerHudPaintable* instance_owner();
    private: static RTSLayerHudPaintable* instance;

    public: static RTSLayerHudPaintable* getInstance();

    private: std::vector<std::string> weaponProperties;

    private: CollidableDestroyableDamageableLayer* rtsLayer;

    /*protected*/ public: int32_t costY= 0;

    /*protected*/ public: int32_t costY1= 0;

    private: int32_t fontHeight= 0;

private: RTSLayerHudPaintable();

    public: void updateMeasurement(Graphics* graphics);

    public: void updateSelectionInfo();

    public: void paint(Graphics* graphics);

    public: void setRtsLayer(RTSLayer* rtsLayer);

    private: CollidableDestroyableDamageableLayer* getRtsLayer();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYERHUDPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_RTSLAYERHUDPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYERHUDPAINTABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/AndroidUtil.h>)
#include <org/allbinary/AndroidUtil.h>
#endif
#if __has_include(<org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>)
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>
#endif
#if __has_include(<org/allbinary/game/part/weapon/BasicWeaponPart.h>)
#include <org/allbinary/game/part/weapon/BasicWeaponPart.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontInterface.h>)
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
#endif
#if __has_include("org/allbinary/game/layer/SelectionHudPaintable.h")
#include "org/allbinary/game/layer/SelectionHudPaintable.h"
#endif
#if __has_include("org/allbinary/game/layer/RTSLayer.h")
#include "org/allbinary/game/layer/RTSLayer.h"
#endif

        #endif
    
