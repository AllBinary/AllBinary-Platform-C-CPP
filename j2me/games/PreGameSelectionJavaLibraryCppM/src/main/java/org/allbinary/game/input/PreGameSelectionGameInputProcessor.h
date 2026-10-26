
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_PREGAMESELECTIONGAMEINPUTPROCESSOR_H
        #define ORG_ALLBINARY_GAME_INPUT_PREGAMESELECTIONGAMEINPUTPROCESSOR_H

            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedFeatureNotificationUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedUtil.h>

      
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/PreGameSelectorPaintable.h>

      
#include <org/allbinary/game/input/event/GameKeyEventHandler.h>

      
#include <org/allbinary/game/input/event/GameKeyEventUtil.h>

      
#include <org/allbinary/game/state/GameState.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>

      
#include <org/allbinary/media/audio/SelectSound.h>

      
#include <org/allbinary/thread/ABRunnable.h>

      
#include <org/allbinary/thread/ThreadObjectUtil.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameInputProcessorInterface.h"
#include "PlayerGameInputCompositeInterface.h"
#include "PlayerGameInput.h"
#include "GameInputProcessorComposite.h"

class PreGameSelectionGameInputProcessor: public Processor, public GameInputProcessorInterface, public PlayerGameInputCompositeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: AllBinaryGameCanvas gameCanvas;

    private: PreGameSelectorPaintable preGameSelectorPaintable;

    private: const TimeDelayHelper inputTimeHelper = TimeDelayHelper(650);

    private: GameState nextGameState;

    private: PlayerGameInput playerGameInput;

    private: int32_t lockedIndex;

    private: const ABRunnable abRunnable = class extends ABRunnable
                                {
                                
    public: void run();
                                }
                            ;

public: PreGameSelectionGameInputProcessor(AllBinaryGameCanvas gameCanvas, PreGameSelectorPaintable preGameSelectorPaintable, GameState nextGameState, int32_t lockedIndex);

                //@Throws(Exception.constructor)
            
    public: void process();

                //@Throws(Exception.constructor)
            
    public: void onInput(BasicArrayList list);

    public: PreGameSelectorPaintable getPreGameSelectorPaintable();

                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager layerManager);

    public: void initInputProcessors();

    public: std::string getName();

    public: PlayerGameInput getPlayerGameInput();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_PREGAMESELECTIONGAMEINPUTPROCESSOR_H
