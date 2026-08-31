
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

#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UpgradableRTSLayerHudPaintable.h"
#include "RTSLayer.h"

class RTSLayerCompositePaintable: public Paintable {
        

    private: upgradeCost: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: downGradeCost: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: const UPGRADE: string = "Up: $";

    private: const DOWNGRADE: string = "Down: $-";

    const upgradableRTSLayerHudPaintable: UpgradableRTSLayerHudPaintable;

public constructor (UpgradableRTSLayerHudPaintable upgradableRTSLayerHudPaintable);

    public update(RTSLayer rtsLayer);

    public paint(Graphics graphics);

    setUpgradeCost(string upgradeCost);

    string getUpgradeCost();

    setDownGradeCost(string downGradeCost);

    string getDownGradeCost();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYERCOMPOSITEPAINTABLE_H
