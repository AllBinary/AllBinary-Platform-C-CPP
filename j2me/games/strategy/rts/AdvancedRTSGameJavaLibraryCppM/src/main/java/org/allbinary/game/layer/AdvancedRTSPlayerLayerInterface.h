
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class GameType;
class BasicColor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"
class AdvancedPlayerOwnedRTSLayers;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdvancedRTSPlayerLayerInterface: public RTSPlayerLayerInterface {

    public: virtual AdvancedPlayerOwnedRTSLayers* getAdvancedPlayerOwnedRTSLayers() = 0;

    public: virtual bool isLocalPlayer() = 0;

    public: virtual GameType* getGameType() = 0;

    public: virtual BasicColor* getDecalBasicColor() = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSPLAYERLAYERINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSPLAYERLAYERINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSPLAYERLAYERINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/game/GameType.h>)
#include <org/allbinary/game/GameType.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include("org/allbinary/game/layer/RTSPlayerLayerInterface.h")
#include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/AdvancedPlayerOwnedRTSLayers.h")
#include "org/allbinary/game/layer/AdvancedPlayerOwnedRTSLayers.h"
#endif

        #endif
    
