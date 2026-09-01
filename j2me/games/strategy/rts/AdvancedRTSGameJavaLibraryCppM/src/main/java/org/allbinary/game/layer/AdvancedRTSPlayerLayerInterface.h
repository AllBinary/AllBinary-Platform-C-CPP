
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSPLAYERLAYERINTERFACE_H
        #define ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSPLAYERLAYERINTERFACE_H

#include <org/allbinary/game/GameType.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RTSPlayerLayerInterface.h"
#include "AdvancedPlayerOwnedRTSLayers.h"

class AdvancedRTSPlayerLayerInterface: public RTSPlayerLayerInterface {

    AdvancedPlayerOwnedRTSLayers getAdvancedPlayerOwnedRTSLayers();

    bool isLocalPlayer();

    GameType getGameType();

    BasicColor getDecalBasicColor();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSPLAYERLAYERINTERFACE_H
