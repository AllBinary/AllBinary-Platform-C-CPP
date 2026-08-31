
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

#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RTSLayerCompositePaintable.h"
#include "UpgradableRTSLayerHudPaintable.h"
#include "RTSLayer.h"

class UpgradableWideRTSLayerPaintable: public RTSLayerCompositePaintable {
        

    private: cost: string = StringUtil.getInstance()!.EMPTY_STRING;

public constructor (UpgradableRTSLayerHudPaintable upgradableRTSLayerHudPaintable);

    public update(RTSLayer rtsLayer);

    public paint(Graphics graphics);

    setCost(string cost);

    string getCost();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UPGRADABLEWIDERTSLAYERPAINTABLE_H
