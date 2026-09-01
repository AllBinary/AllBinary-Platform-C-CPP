
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

    private: std::string upgradeCost = StringUtil::getInstance().EMPTY_STRING;

    private: std::string downGradeCost = StringUtil::getInstance().EMPTY_STRING;

    private: const std::string UPGRADE = "Up: $";

    private: const std::string DOWNGRADE = "Down: $-";

    protected: UpgradableRTSLayerHudPaintable upgradableRTSLayerHudPaintable;

public: RTSLayerCompositePaintable(UpgradableRTSLayerHudPaintable upgradableRTSLayerHudPaintable);

    public: void update(RTSLayer rtsLayer);

    public: void paint(Graphics graphics);

    protected: void setUpgradeCost(std::string upgradeCost);

    protected: std::string getUpgradeCost();

    protected: void setDownGradeCost(std::string downGradeCost);

    protected: std::string getDownGradeCost();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYERCOMPOSITEPAINTABLE_H
