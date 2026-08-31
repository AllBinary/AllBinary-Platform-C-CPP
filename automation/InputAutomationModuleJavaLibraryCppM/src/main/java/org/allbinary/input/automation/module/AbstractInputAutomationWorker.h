
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/RuntimeException.h"
        
            #include "../../../../../java/lang/Thread.h"
        
#include <org/allbinary/input/media/image/capture/CaptureWorkerInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonWorker.h>

      
#include <org/allbinary/media/image/comparison/motion/MotionRectanglesWorker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/RunnableInterface.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputAutomationActionInterface.h"

class AbstractInputAutomationWorker
            : public Object
        : public RunnableInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: index: int64_t= 0;

    private: running: bool= false;

    private: inputAutomationActionInterface: InputAutomationActionInterface;

    private: captureWorkerInterface: CaptureWorkerInterface;

    private: imageComparisonWorker: ImageComparisonWorker;

    private: motionRectanglesWorker: MotionRectanglesWorker;

    private: captureThread: Thread;

public constructor (InputAutomationActionInterface inputAutomationActionInterface);

                //@Throws(Exception.constructor)
            
    public setThread(Thread thread);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public setRunning(bool running);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    bool isAnyDataWorkerRunning();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    startDataWorkers();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    waitForDataWorkers();

                //@Throws(Exception.constructor)
            
    stopDataWorkers();

                //@Throws(Exception.constructor)
            
    public process();

    public run();

    public InputAutomationActionInterface getInputAutomationActionInterface();

    public setInputAutomationActionInterface(InputAutomationActionInterface inputAutomationActionInterface);

    CaptureWorkerInterface getCaptureWorker();

    setCaptureWorker(CaptureWorkerInterface captureWorkerInterface);

    ImageComparisonWorker getImageComparisonWorker();

    setImageComparisonWorker(ImageComparisonWorker imageComparisonWorker);

    MotionRectanglesWorker getMotionRectanglesWorker();

    setMotionRectanglesWorker(MotionRectanglesWorker motionRectanglesWorker);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ABSTRACTINPUTAUTOMATIONWORKER_H
