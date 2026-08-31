
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

#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/game/part/weapon/BasicWeaponPart.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SelectionHudPaintable.h"
#include "RTSLayer.h"

class RTSLayerHudPaintable: public SelectionHudPaintable: public UpdateMyFontInterface {
        

    private: static const instance: RTSLayerHudPaintable = new RTSLayerHudPaintable();

    public static RTSLayerHudPaintable getInstance();

    private: weaponProperties: std::vector<string> = StringUtil.getInstance()!.getArrayInstance()!;

    private: rtsLayer: CollidableDestroyableDamageableLayer = CollidableDestroyableDamageableLayer.getNullInstance()!;

    costY: int32_t= 0;

    costY1: int32_t= 0;

    private: fontHeight: int32_t= 0;

private constructor ();

    public updateMeasurement(Graphics graphics);

    public updateSelectionInfo();

    public paint(Graphics graphics);

    public setRtsLayer(RTSLayer rtsLayer);

    CollidableDestroyableDamageableLayer getRtsLayer();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYERHUDPAINTABLE_H
