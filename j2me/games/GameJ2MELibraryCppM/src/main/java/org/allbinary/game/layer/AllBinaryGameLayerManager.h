
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

            #include <vector>
        
            #include "../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/input/NullPlayerGameInputComposite.h>

      
#include <org/allbinary/game/input/PlayerGameInputCompositeInterface.h>

      
#include <org/allbinary/graphics/ItemColorFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/LayerProcessor.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AllBinaryGameLayerManager: public AllBinaryLayerManager {

    private: static Object* NULL_ALLBINARY_LAYER_MANAGER = NullUtil::getInstance().NULL_OBJECT;

    public: static AllBinaryGameLayerManager getNullInstance();

    public: static const Integer ID = SmallIntegerSingletonFactory::getInstance().getAt(22);

    private: BasicColor backgroundBasicColor;

    private: BasicColor foregroundBasicColor;

    private: GameInfo gameInfo;

    private: PlayerGameInputCompositeInterface playerGameInputCompositeInterface = NullPlayerGameInputComposite::NULL_PLAYER_GAME_INPUT_COMPOSITE;

public: AllBinaryGameLayerManager(BasicColor backgroundBasicColor, BasicColor foregroundBasicColor, GameInfo gameInfo);

    public: AllBinaryLayerManager getLayerManager();

    public: void init();

    public: BasicColor getBackgroundBasicColor();

    public: void setBackgroundBasicColor(BasicColor backgroundBasicColor);

    public: BasicColor getForegroundBasicColor();

    public: void setForegroundBasicColor(BasicColor foregroundBasicColor);

    public: GameInfo getGameInfo();

    public: void setGameInfo(GameInfo gameInfo);

    public: void setLayerProcessorList(BasicArrayList list);

    public: void setPlayerGameInputCompositeInterface(PlayerGameInputCompositeInterface playerGameInputCompositeInterface);

    public: PlayerGameInputCompositeInterface getPlayerGameInputCompositeInterface();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYERMANAGER_H
