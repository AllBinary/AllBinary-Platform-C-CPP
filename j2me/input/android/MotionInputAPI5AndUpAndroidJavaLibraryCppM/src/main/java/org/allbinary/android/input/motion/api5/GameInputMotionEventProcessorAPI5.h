
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2009 AllBinary
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_API5_GAMEINPUTMOTIONEVENTPROCESSORAPI5_H
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_API5_GAMEINPUTMOTIONEVENTPROCESSORAPI5_H

            #include "../../../../../../java/lang/Exception.h"
        
#include <android/view/MotionEvent.h>

      
#include <org/allbinary/android/input/motion/BaseGameInputMotionEventProcessor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/displayable/ScalableListener.h>

      
#include <org/allbinary/input/motion/AllMotionRecognizer.h>

      
#include <org/allbinary/input/motion/MotionRecognizer.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameInputMotionInfoAPI5.h"

class GameInputMotionEventProcessorAPI5: public BaseGameInputMotionEventProcessor {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static GameInputMotionEventProcessorAPI5 getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: const motionRecognizerArray: std::vector<MotionRecognizer>;

    private: const TOTAL_MINUS_ONE: int32_t;

private constructor ();

    bool isValid(int32_t pointerId);

    public process(MotionEvent motionEvent);

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_API5_GAMEINPUTMOTIONEVENTPROCESSORAPI5_H
