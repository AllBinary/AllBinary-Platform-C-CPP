
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_NULLRTSLAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_NULLRTSLAYER_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/game/ag/layer/hud/basic/notification/GameNotificationHud.h>

      
#include <org/allbinary/game/combat/destroy/event/DestroyedEvent.h>

      
#include <org/allbinary/game/input/PlayerGameInput.h>

      
#include <org/allbinary/game/input/form/NullRTSFormInputFactory.h>

      
#include <org/allbinary/game/input/form/RTSFormInput.h>

      
#include <org/allbinary/game/layer/capital/Capital.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/NullPathFindingLayer.h"
#include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"
#include "org/allbinary/game/layer/PlayerOwnedRTSLayers.h"

class NullRTSLayer: public NullPathFindingLayer, public RTSPlayerLayerInterface {

    public: static NullRTSLayer* NULL_RTS_LAYER() { static std::unique_ptr<NullRTSLayer> value(new NullRTSLayer()); return value.get(); }

    public: std::string getName();

                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager* layerManager);

    public: void initInputProcessors();

    public: GameNotificationHud* getGameNotificationHud();

    public: ScrollSelectionForm* getCurrentScrollSelectionForm();

    public: void setCurrentScrollSelectionForm(ScrollSelectionForm* currentScrollSelectionForm);

    public: ScrollSelectionForm* getBuildingScrollSelectionForm();

    public: PlayerGameInput* getPlayerGameInput();

    public: void onEvent(AllBinaryEventObject* eventObject);

                //@Throws(Exception.constructor)
            
    public: void onDestroyed(DestroyedEvent* destroyedEvent);

                //@Throws(Exception.constructor)
            
    public: void processTick(AllBinaryLayerManager* allBinaryLayerManager);

    public: Capital* getCapital();

    public: RTSFormInput* getRTSFormInput();

    public: void add(Sound* sound);

    public: PlayerOwnedRTSLayers* getPlayerOwnedRTSLayers();

    public: bool implmentsArtificialIntelligenceCompositeInterface();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_NULLRTSLAYER_H
