
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLECOMPOSITE_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLECOMPOSITE_H

            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/input/CompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/game/input/CompleteMotionGestureInputEventHandler.h>

      
#include <org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h>

      
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/mapping/InputMappingInterface.h>

      
#include <org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/paint/ProcessPaintable.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonsMappingPaintable.h"

class TouchButtonsPaintableComposite: public ProcessPaintable: public CompleteMotionGestureInputEventListenerInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: inputMappingInterface: InputMappingInterface;

    touchButtonsPaintable: TouchButtonsMappingPaintable;

    private: timeHelper: TimeDelayHelper = new TimeDelayHelper(250);

    private: released: bool = true;

public constructor (InputMappingInterface inputMappingInterface, BasicColor basicColor);

    public onEvent(AllBinaryEventObject eventObject);

    private: const METHOD_NAME: string = "onCompleteMotionGestureInputEvent";

    private: const RELEASE: string = "Ignoring: MotionGestureInput Release";

    private: const FAST_REPEAT: string = "Ignoring: MotionGestureInput Repeated To Quickly";

    private: const IGNORE: string = "Ignoring: Until Released";

    public onCompleteMotionGestureInputEvent(CompleteMotionGestureInputEvent completeMotionGestureInputEvent);

    public process();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLECOMPOSITE_H
