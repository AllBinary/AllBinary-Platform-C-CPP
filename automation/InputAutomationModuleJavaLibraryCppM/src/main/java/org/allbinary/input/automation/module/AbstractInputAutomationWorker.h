
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Thread.h"
        
#include <org/allbinary/input/media/image/capture/CaptureWorkerInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonWorker.h>

      
#include <org/allbinary/media/image/comparison/motion/MotionRectanglesWorker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/RunnableInterface.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/InputAutomationActionInterface.h"

class AbstractInputAutomationWorker
            : public Object
        , public RunnableInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

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

    protected: bool isAnyDataWorkerRunning();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    protected: void startDataWorkers();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    protected: void waitForDataWorkers();

                //@Throws(Exception.constructor)
            
    protected: void stopDataWorkers();

                //@Throws(Exception.constructor)
            
    public: void process();

    public: void run();

    public: InputAutomationActionInterface* getInputAutomationActionInterface();

    public: void setInputAutomationActionInterface(InputAutomationActionInterface* inputAutomationActionInterface);

    protected: CaptureWorkerInterface* getCaptureWorker();

    protected: void setCaptureWorker(CaptureWorkerInterface* captureWorkerInterface);

    protected: ImageComparisonWorker* getImageComparisonWorker();

    protected: void setImageComparisonWorker(ImageComparisonWorker* imageComparisonWorker);

    protected: MotionRectanglesWorker* getMotionRectanglesWorker();

    protected: void setMotionRectanglesWorker(MotionRectanglesWorker* motionRectanglesWorker);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ABSTRACTINPUTAUTOMATIONWORKER_H
