
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_COMPLETEMOTIONGESTUREINPUTTOGAMEMOTIONGESTUREINPUT_H
        #define ORG_ALLBINARY_INPUT_MOTION_COMPLETEMOTIONGESTUREINPUTTOGAMEMOTIONGESTUREINPUT_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h>

      
#include <org/allbinary/input/motion/gesture/configuration/MotionGestureConfigurationFactory.h>

      
#include <org/allbinary/input/motion/touch/action/DiagonalDownLeftTouchInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/touch/action/DiagonalDownRightTouchInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/touch/action/DiagonalUpLeftTouchInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/touch/action/DiagonalUpRightTouchInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/touch/action/DownTouchInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/touch/action/LeftTouchInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/touch/action/ReleaseTouchInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/touch/action/RightTouchInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/touch/action/UpTouchInputToGameKeyEventAction.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CompleteMotionGestureInputToGameMotionGestureInput
            : public Object
         {
        

    private: static const instance: CompleteMotionGestureInputToGameMotionGestureInput = new CompleteMotionGestureInputToGameMotionGestureInput();

    public static CompleteMotionGestureInputToGameMotionGestureInput getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    public init();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_COMPLETEMOTIONGESTUREINPUTTOGAMEMOTIONGESTUREINPUT_H
