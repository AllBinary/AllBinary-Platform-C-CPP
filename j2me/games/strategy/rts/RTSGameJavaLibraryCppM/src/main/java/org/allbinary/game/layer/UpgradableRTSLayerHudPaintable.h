
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
        

    private: static const instance: UpgradableRTSLayerHudPaintable = new UpgradableRTSLayerHudPaintable();

    public static UpgradableRTSLayerHudPaintable getInstance();

    private: const PERCENT: string = "%";

    private: rtsLayer: CollidableDestroyableDamageableLayer = CollidableDestroyableDamageableLayer.getNullInstance()!;

    costY: int32_t= 0;

    costY1: int32_t= 0;

    private: percentCompleteX2: int32_t= 0;

    private: rtsLayerCompositePaintableLateInit: RTSLayerCompositePaintable;

    private: charHeight: int32_t= 0;

    private: charWidth: int32_t= 0;

private constructor ();

    public updateMeasurement(Graphics graphics);

    public update();

    public updateSelectionInfo();

    private: percentComplete: int32_t= 0;

    private: percentCompleteX: int32_t= 0;

    private: percentCompleteArray: std::vector<char> = CharArrayFactory.getInstance()!.getZeroCharArray()!;

    private: currentTotalDigits: int32_t= 0;

    public updateInfo();

    public paint(Graphics graphics);

    public setRtsLayer(RTSLayer rtsLayer);

    CollidableDestroyableDamageableLayer getRtsLayer();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UPGRADABLERTSLAYERHUDPAINTABLE_H
