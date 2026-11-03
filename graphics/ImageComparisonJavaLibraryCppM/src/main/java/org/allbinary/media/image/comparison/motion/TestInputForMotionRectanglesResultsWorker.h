
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <java/awt/Rectangle.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
class BasicArrayList;
class BasicArrayListD;
class InputRobotFactory;
class InputRobotInterface;
class TempInputRobotNames;
class LogUtil;
class AllBinaryEventObject;
class CommonLabels;
class CommonStrings;
class TimeDelayHelper;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/comparison/motion/MotionRectanglesResultsListener.h"
class MotionRectanglesResultsEvent;
class MotionRectangles;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TestInputForMotionRectanglesResultsWorker
            : public virtual Object
        , public virtual MotionRectanglesResultsListener {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: int64_t index= 0;

    private: bool running= false;

    private: BasicArrayList* motionRectanglesVector;

public: TestInputForMotionRectanglesResultsWorker();

    public: BasicArrayList* getMotionRectanglesVector();

    public: void onMotionRectanglesImageComparisonResultsEvent(MotionRectanglesResultsEvent* motionRectanglesImageComparisonResultsEvent);

    public: void onEvent(AllBinaryEventObject* allBinaryEventObject);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setRunning(bool running);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_TESTINPUTFORMOTIONRECTANGLESRESULTSWORKER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_TESTINPUTFORMOTIONRECTANGLESRESULTSWORKER_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_TESTINPUTFORMOTIONRECTANGLESRESULTSWORKER_H_COMPLETE
        #if __has_include(<java/awt/Rectangle.h>)
#include <java/awt/Rectangle.h>
#endif
#if __has_include(<java/awt/event/InputEvent.h>)
#include <java/awt/event/InputEvent.h>
#endif
#if __has_include(<java/awt/event/KeyEvent.h>)
#include <java/awt/event/KeyEvent.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/input/automation/robot/InputRobotFactory.h>)
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>
#endif
#if __has_include(<org/allbinary/input/automation/robot/InputRobotInterface.h>)
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>
#endif
#if __has_include(<org/allbinary/input/automation/robot/TempInputRobotNames.h>)
#include <org/allbinary/input/automation/robot/TempInputRobotNames.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/MotionRectanglesResultsListener.h")
#include "org/allbinary/media/image/comparison/motion/MotionRectanglesResultsListener.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/MotionRectanglesResultsEvent.h")
#include "org/allbinary/media/image/comparison/motion/MotionRectanglesResultsEvent.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/MotionRectangles.h")
#include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"
#endif

        #endif
    
