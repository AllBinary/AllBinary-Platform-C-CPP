
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYERMANAGER_H
        #define ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYERMANAGER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
class GameInfo;
class NullPlayerGameInputComposite;
class PlayerGameInputCompositeInterface;
class ItemColorFactory;
class BasicColor;
class BasicColorFactory;
#include <org/allbinary/layer/AllBinaryLayerManager.h>
class LayerProcessor;
class NullUtil;
class SmallIntegerSingletonFactory;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryGameLayerManager: public AllBinaryLayerManager {

    private: static Object* NULL_ALLBINARY_LAYER_MANAGER;

    public: static AllBinaryGameLayerManager* getNullInstance();

    public: static int32_t ID;

    private: BasicColor* backgroundBasicColor;

    private: BasicColor* foregroundBasicColor;

    private: GameInfo* gameInfo;

    private: PlayerGameInputCompositeInterface* playerGameInputCompositeInterface;

public: AllBinaryGameLayerManager(BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor, GameInfo* gameInfo);

    public: AllBinaryLayerManager* getLayerManager();

    public: void init();

    public: BasicColor* getBackgroundBasicColor();

    public: void setBackgroundBasicColor(BasicColor* backgroundBasicColor);

    public: BasicColor* getForegroundBasicColor();

    public: void setForegroundBasicColor(BasicColor* foregroundBasicColor);

    public: GameInfo* getGameInfo();

    public: void setGameInfo(GameInfo* gameInfo);

    public: void setLayerProcessorList(BasicArrayList* list);

    public: void setPlayerGameInputCompositeInterface(PlayerGameInputCompositeInterface* playerGameInputCompositeInterface);

    public: PlayerGameInputCompositeInterface* getPlayerGameInputCompositeInterface();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYERMANAGER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYERMANAGER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYERMANAGER_H_COMPLETE
        #if __has_include(<org/allbinary/game/GameInfo.h>)
#include <org/allbinary/game/GameInfo.h>
#endif
#if __has_include(<org/allbinary/game/input/NullPlayerGameInputComposite.h>)
#include <org/allbinary/game/input/NullPlayerGameInputComposite.h>
#endif
#if __has_include(<org/allbinary/game/input/PlayerGameInputCompositeInterface.h>)
#include <org/allbinary/game/input/PlayerGameInputCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/ItemColorFactory.h>)
#include <org/allbinary/graphics/ItemColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/layer/LayerProcessor.h>)
#include <org/allbinary/layer/LayerProcessor.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

        #endif
    
