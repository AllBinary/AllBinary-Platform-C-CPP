
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_TESTINPUTFORMOTIONRECTANGLESRESULTSWORKER_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_TESTINPUTFORMOTIONRECTANGLESRESULTSWORKER_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <java/awt/Rectangle.h>

      
#include <java/awt/event/InputEvent.h>

      
#include <java/awt/event/KeyEvent.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>

      
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>

      
#include <org/allbinary/input/automation/robot/TempInputRobotNames.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionRectanglesResultsListener.h"
#include "MotionRectanglesResultsEvent.h"
#include "MotionRectangles.h"

class TestInputForMotionRectanglesResultsWorker
            : public Object
        : public MotionRectanglesResultsListener {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: int64_t index= 0;

    private: bool running= false;

    private: BasicArrayList motionRectanglesVector;

public: TestInputForMotionRectanglesResultsWorker();

    public: BasicArrayList getMotionRectanglesVector();

    public: void onMotionRectanglesImageComparisonResultsEvent(MotionRectanglesResultsEvent motionRectanglesImageComparisonResultsEvent);

    public: void onEvent(AllBinaryEventObject allBinaryEventObject);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setRunning(bool running);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_TESTINPUTFORMOTIONRECTANGLESRESULTSWORKER_H
