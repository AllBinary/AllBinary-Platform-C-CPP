
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MAPSELECTIONGAMEINPUTPROCESSOR_H
        #define ORG_ALLBINARY_GAME_INPUT_MAPSELECTIONGAMEINPUTPROCESSOR_H

            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedFeatureNotificationUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedUtil.h>

      
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/PreGameSelectorPaintable.h>

      
#include <org/allbinary/game/input/event/GameKeyEventHandler.h>

      
#include <org/allbinary/game/input/event/GameKeyEventUtil.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>

      
#include <org/allbinary/media/audio/SelectSound.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/MultiLevelRaceTrackGeographicMapInterfaceFactoryInterface.h>

      
#include <org/allbinary/thread/ABRunnable.h>

      
#include <org/allbinary/thread/ThreadObjectUtil.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameInputProcessorInterface.h"
#include "PlayerGameInputCompositeInterface.h"
#include "PlayerGameInput.h"
#include "GameInputProcessorComposite.h"

class MapSelectionGameInputProcessor: public Processor: public GameInputProcessorInterface, public PlayerGameInputCompositeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const gameCanvas: AllBinaryGameCanvas;

    private: const raceTrackGeographicMapInterfaceFactoryInterface: MultiLevelRaceTrackGeographicMapInterfaceFactoryInterface;

    private: const preGameSelectorPaintable: PreGameSelectorPaintable;

    private: const inputTimeHelper: TimeDelayHelper = new TimeDelayHelper(650);

    private: const playerGameInput: PlayerGameInput;

    private: const lockedIndex: int32_t;

    private: const abRunnable: ABRunnable = new class extends ABRunnable
                                {
                                
    public run();
                                }
                            ;

public constructor (AllBinaryGameCanvas gameCanvas, MultiLevelRaceTrackGeographicMapInterfaceFactoryInterface raceTrackGeographicMapInterfaceFactoryInterface, PreGameSelectorPaintable mapSelectorPaintable, int32_t lockedIndex);

                //@Throws(Exception.constructor)
            
    public process();

                //@Throws(Exception.constructor)
            
    public onInput(BasicArrayList list);

                //@Throws(Exception.constructor)
            
    public processInput(AllBinaryLayerManager layerManager);

    public initInputProcessors();

    public string getName();

    public PlayerGameInput getPlayerGameInput();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MAPSELECTIONGAMEINPUTPROCESSOR_H
