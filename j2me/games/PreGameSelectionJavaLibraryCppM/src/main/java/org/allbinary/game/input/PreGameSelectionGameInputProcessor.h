
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Canvas;
class BasicArrayList;
class LockedFeatureNotificationUtil;
class LockedUtil;
#include <org/allbinary/canvas/Processor.h>
class AllBinaryGameCanvas;
class PreGameSelectorPaintable;
class GameKeyEventHandler;
class GameKeyEventUtil;
class GameState;
class AllBinaryLayerManager;
class LogUtil;
class CommonStrings;
class SecondaryPlayerQueueFactory;
class SelectSound;
class ABRunnable;
class ThreadObjectUtil;
class TimeDelayHelper;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/GameInputProcessorInterface.h"
#include "org/allbinary/game/input/PlayerGameInputCompositeInterface.h"
class PlayerGameInput;
class GameInputProcessorComposite;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PreGameSelectionGameInputProcessor: public Processor, public virtual GameInputProcessorInterface, public virtual PlayerGameInputCompositeInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: AllBinaryGameCanvas* gameCanvas;

    private: PreGameSelectorPaintable* preGameSelectorPaintable;

    private: TimeDelayHelper* inputTimeHelper;

    private: GameState* nextGameState;

    private: PlayerGameInput* playerGameInput;

    private: int32_t lockedIndex;

    private: ABRunnable* abRunnable;

public: PreGameSelectionGameInputProcessor(AllBinaryGameCanvas* gameCanvas, PreGameSelectorPaintable* preGameSelectorPaintable, GameState* nextGameState, int32_t lockedIndex);

                //@Throws(Exception.constructor)
            
    public: void process();

                //@Throws(Exception.constructor)
            
    public: void onInput(BasicArrayList* list);

    public: PreGameSelectorPaintable* getPreGameSelectorPaintable();

                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager* layerManager);

    public: void initInputProcessors();

    public: std::string getName();

    public: PlayerGameInput* getPlayerGameInput();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_PREGAMESELECTIONGAMEINPUTPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_PREGAMESELECTIONGAMEINPUTPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_PREGAMESELECTIONGAMEINPUTPROCESSOR_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LockedFeatureNotificationUtil.h>)
#include <org/allbinary/logic/system/security/licensing/LockedFeatureNotificationUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LockedUtil.h>)
#include <org/allbinary/logic/system/security/licensing/LockedUtil.h>
#endif
#if __has_include(<org/allbinary/canvas/Processor.h>)
#include <org/allbinary/canvas/Processor.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>)
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/PreGameSelectorPaintable.h>)
#include <org/allbinary/game/displayable/canvas/PreGameSelectorPaintable.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEventHandler.h>)
#include <org/allbinary/game/input/event/GameKeyEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEventUtil.h>)
#include <org/allbinary/game/input/event/GameKeyEventUtil.h>
#endif
#if __has_include(<org/allbinary/game/state/GameState.h>)
#include <org/allbinary/game/state/GameState.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>)
#include <org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>
#endif
#if __has_include(<org/allbinary/media/audio/SelectSound.h>)
#include <org/allbinary/media/audio/SelectSound.h>
#endif
#if __has_include(<org/allbinary/thread/ABRunnable.h>)
#include <org/allbinary/thread/ABRunnable.h>
#endif
#if __has_include(<org/allbinary/thread/ThreadObjectUtil.h>)
#include <org/allbinary/thread/ThreadObjectUtil.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include("org/allbinary/game/input/GameInputProcessorInterface.h")
#include "org/allbinary/game/input/GameInputProcessorInterface.h"
#endif
#if __has_include("org/allbinary/game/input/PlayerGameInputCompositeInterface.h")
#include "org/allbinary/game/input/PlayerGameInputCompositeInterface.h"
#endif
#if __has_include("org/allbinary/game/input/PlayerGameInput.h")
#include "org/allbinary/game/input/PlayerGameInput.h"
#endif
#if __has_include("org/allbinary/game/input/GameInputProcessorComposite.h")
#include "org/allbinary/game/input/GameInputProcessorComposite.h"
#endif

        #endif
    
