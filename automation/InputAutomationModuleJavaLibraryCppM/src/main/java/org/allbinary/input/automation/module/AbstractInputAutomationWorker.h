
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ABSTRACTINPUTAUTOMATIONWORKER_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ABSTRACTINPUTAUTOMATIONWORKER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Thread.h"
        
class CaptureWorkerInterface;
class LogUtil;
class ImageComparisonWorker;
class MotionRectanglesWorker;
class CommonLabels;
class CommonStrings;
#include <org/allbinary/thread/RunnableInterface.h>
class TimeDelayHelper;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class InputAutomationActionInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbstractInputAutomationWorker
            : public virtual Object
        , public virtual RunnableInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: int64_t index= 0;

    private: bool running= false;

    private: InputAutomationActionInterface* inputAutomationActionInterface;

    private: CaptureWorkerInterface* captureWorkerInterface;

    private: ImageComparisonWorker* imageComparisonWorker;

    private: MotionRectanglesWorker* motionRectanglesWorker;

    private: Thread* captureThread;

public: AbstractInputAutomationWorker(InputAutomationActionInterface* inputAutomationActionInterface);

                //@Throws(Exception.constructor)
            
    public: void setThread(Thread* thread);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setRunning(bool running);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    /*protected*/ public: bool isAnyDataWorkerRunning();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    /*protected*/ public: void startDataWorkers();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    /*protected*/ public: void waitForDataWorkers();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void stopDataWorkers();

                //@Throws(Exception.constructor)
            
    public: void process();

    public: void run();

    public: InputAutomationActionInterface* getInputAutomationActionInterface();

    public: void setInputAutomationActionInterface(InputAutomationActionInterface* inputAutomationActionInterface);

    /*protected*/ public: CaptureWorkerInterface* getCaptureWorker();

    /*protected*/ public: void setCaptureWorker(CaptureWorkerInterface* captureWorkerInterface);

    /*protected*/ public: ImageComparisonWorker* getImageComparisonWorker();

    /*protected*/ public: void setImageComparisonWorker(ImageComparisonWorker* imageComparisonWorker);

    /*protected*/ public: MotionRectanglesWorker* getMotionRectanglesWorker();

    /*protected*/ public: void setMotionRectanglesWorker(MotionRectanglesWorker* motionRectanglesWorker);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ABSTRACTINPUTAUTOMATIONWORKER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ABSTRACTINPUTAUTOMATIONWORKER_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ABSTRACTINPUTAUTOMATIONWORKER_H_COMPLETE
        #if __has_include(<org/allbinary/input/media/image/capture/CaptureWorkerInterface.h>)
#include <org/allbinary/input/media/image/capture/CaptureWorkerInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/ImageComparisonWorker.h>)
#include <org/allbinary/media/image/comparison/ImageComparisonWorker.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/motion/MotionRectanglesWorker.h>)
#include <org/allbinary/media/image/comparison/motion/MotionRectanglesWorker.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/thread/RunnableInterface.h>)
#include <org/allbinary/thread/RunnableInterface.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include("org/allbinary/input/automation/module/InputAutomationActionInterface.h")
#include "org/allbinary/input/automation/module/InputAutomationActionInterface.h"
#endif

        #endif
    
