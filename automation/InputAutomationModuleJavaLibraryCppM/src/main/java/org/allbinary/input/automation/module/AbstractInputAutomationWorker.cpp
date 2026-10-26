
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
        #include "InputAutomationActionInterface.h"

class AbstractInputAutomationWorker
            : public Object
        : public RunnableInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: int64_t index= 0;

    private: bool running= false;

    private: InputAutomationActionInterface inputAutomationActionInterface;

    private: CaptureWorkerInterface captureWorkerInterface;

    private: ImageComparisonWorker imageComparisonWorker;

    private: MotionRectanglesWorker motionRectanglesWorker;

    private: Thread captureThread;

public: AbstractInputAutomationWorker(InputAutomationActionInterface inputAutomationActionInterface){
}


                //@Throws(Exception.constructor)
            
    public: void setThread(Thread thread){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->running;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setRunning(bool running){
this->running= running;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    protected: bool isAnyDataWorkerRunning(){

                        if(this->captureThread != 
                                    nullptr
                                 && (this->captureThread.isAlive() || this->getCaptureWorker().isRunning() || this->getMotionRectanglesWorker().isRunning() || this->getImageComparisonWorker().isRunning()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    protected: void startDataWorkers(){

                        if(!isAnyDataWorkerRunning())
                        
                                    {
                                    this->captureThread= Thread(this->getCaptureWorker());
    
this->logUtil.putF("Starting CaptureWorkers - Need more images - Thread State: " +this->captureThread.getState().toString(), this, "startCaptureWorkers");
    
this->captureThread.start();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    protected: void waitForDataWorkers(){

        while(isAnyDataWorkerRunning())
        {
this->logUtil.putF("Waiting", this, this->commonStrings.RUN);
    
Thread::sleep(250);
    
}

}


                //@Throws(Exception.constructor)
            
    protected: void stopDataWorkers(){
this->getCaptureWorker().setRunning(false);
    
}


                //@Throws(Exception.constructor)
            
    public: void process(){



                            throw RuntimeException();
                    
}


    public: void run(){

        try {
            this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.RUN);
    
this->setRunning(true);
    

    TimeDelayHelper timeHelper = TimeDelayHelper(1000);;
    

        while(this->isRunning())
        {
timeHelper.setStartTimeTNT();
    
this->process();
    
this->index++;
    
this->logUtil.putF(CommonLabels::getInstance().ELAPSED +timeHelper.getElapsedTNT() +" Index: " +this->index, this, this->commonStrings.RUN);
    
}

this->stopDataWorkers();
    
this->waitForDataWorkers();
    
this->logUtil.putF(this->commonStrings.END, this, this->commonStrings.RUN);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.RUN, e);
    
}

}


    public: InputAutomationActionInterface getInputAutomationActionInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->inputAutomationActionInterface;
    
}


    public: void setInputAutomationActionInterface(InputAutomationActionInterface inputAutomationActionInterface){
this->inputAutomationActionInterface= inputAutomationActionInterface;
    
}


    protected: CaptureWorkerInterface getCaptureWorker(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->captureWorkerInterface;
    
}


    protected: void setCaptureWorker(CaptureWorkerInterface captureWorkerInterface){
this->captureWorkerInterface= captureWorkerInterface;
    
}


    protected: ImageComparisonWorker getImageComparisonWorker(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageComparisonWorker;
    
}


    protected: void setImageComparisonWorker(ImageComparisonWorker imageComparisonWorker){
this->imageComparisonWorker= imageComparisonWorker;
    
}


    protected: MotionRectanglesWorker getMotionRectanglesWorker(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->motionRectanglesWorker;
    
}


    protected: void setMotionRectanglesWorker(MotionRectanglesWorker motionRectanglesWorker){
this->motionRectanglesWorker= motionRectanglesWorker;
    
}


};

            

