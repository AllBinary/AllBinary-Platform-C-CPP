
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

            #include <vector>
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/logic/java/character/CharArrayFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/input/motion/button/CommonButtons.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SelectionHudPaintable.h"
#include "RTSLayerCompositePaintable.h"
#include "UpgradableWideRTSLayerPaintable.h"
#include "RTSLayer.h"

class UpgradableRTSLayerHudPaintable: public SelectionHudPaintable {

    private: static UpgradableRTSLayerHudPaintable instance() { return UpgradableRTSLayerHudPaintable(); }

    public: static UpgradableRTSLayerHudPaintable getInstance();

    private: const std::string PERCENT = "%";

    private: CollidableDestroyableDamageableLayer rtsLayer = CollidableDestroyableDamageableLayer::getNullInstance();

    protected: int32_t costY= 0;

    protected: int32_t costY1= 0;

    private: int32_t percentCompleteX2= 0;

    private: RTSLayerCompositePaintable rtsLayerCompositePaintableLateInit;

    private: int32_t charHeight= 0;

    private: int32_t charWidth= 0;

private: UpgradableRTSLayerHudPaintable();

    public: void updateMeasurement(Graphics graphics);

    public: void update();

    public: void updateSelectionInfo();

    private: int32_t percentComplete= 0;

    private: int32_t percentCompleteX= 0;

    private: std::vector<char> percentCompleteArray = CharArrayFactory::getInstance().getZeroCharArray();

    private: int32_t currentTotalDigits= 0;

    public: void updateInfo();

    public: void paint(Graphics graphics);

    public: void setRtsLayer(RTSLayer rtsLayer);

    protected: CollidableDestroyableDamageableLayer getRtsLayer();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UPGRADABLERTSLAYERHUDPAINTABLE_H
