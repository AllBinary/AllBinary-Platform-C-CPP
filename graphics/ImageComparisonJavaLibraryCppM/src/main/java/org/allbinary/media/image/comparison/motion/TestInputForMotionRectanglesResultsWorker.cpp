
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
        



            #include <vector>
        
            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Thread.h"
        
#include <java/awt.h>

      
#include <java/awt/event/InputEvent.h>

      
#include <java/awt/event/KeyEvent.h>

      
#include <java/util/Hashtable.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>

      
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>

      
#include <org/allbinary/input/automation/robot/TempInputRobotNames.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionRectanglesResultsListener.h"
#include "MotionRectanglesResultsEvent.h"
#include "MotionRectangles.h"
#include "Rectangle.h"

class TestInputForMotionRectanglesResultsWorker
            : public Object
        : public MotionRectanglesResultsListener {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: int64_t index= 0;

    private: bool running= false;

    private: Vector motionRectanglesVector;

public: TestInputForMotionRectanglesResultsWorker(){
this->motionRectanglesVector= Vector();
    
}


    public: Vector getMotionRectanglesVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->motionRectanglesVector;
    
}


    public: void onMotionRectanglesImageComparisonResultsEvent(MotionRectanglesResultsEvent motionRectanglesImageComparisonResultsEvent){
this->getMotionRectanglesVector().add(motionRectanglesImageComparisonResultsEvent.getMotionRectangles());
    
this->run();
    
}


    public: void onEvent(AllBinaryEventObject allBinaryEventObject){
this->onMotionRectanglesImageComparisonResultsEvent(allBinaryEventObject as MotionRectanglesResultsEvent);
    
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


    public: void run(){

        try {
            this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.RUN);
    
this->setRunning(true);
    

    TimeDelayHelper timeHelper = TimeDelayHelper(1000);;
    
timeHelper.setStartTimeTNT();
    

    MotionRectangles motionRectangles = this->getMotionRectanglesVector().get(0) as MotionRectangles;;
    

    Vector motionRectangleVector = motionRectangles.getVector();;
    

                        if(motionRectangleVector.length > 0)
                        
                                    {
                                    
    Rectangle rectangle = motionRectangleVector.get(0) as Rectangle;;
    

    Hashtable<any, any> robotHashtable = InputRobotFactory::getInstance().get();;
    

    std::vector<Object*> inputTypeNameArray = robotHashtable.keys().();;
    

    int32_t size = inputTypeNameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string inputTypeNameString = inputTypeNameArray[index]! as string;;
    

    InputRobotInterface inputRobotInterface = robotHashtable.get(inputTypeNameString) as InputRobotInterface;;
    
inputRobotInterface.mouseMoveToTarget(rectangle);
    

                        if(inputRobotInterface.getName().compareTo(TempInputRobotNames::DX_NAME) == 0)
                        
                                    {
                                    inputRobotInterface.mousePress(InputEvent::BUTTON1_MASK);
    
Thread::sleep(300);
    
inputRobotInterface.mouseRelease(InputEvent::BUTTON1_MASK);
    
inputRobotInterface.mousePress(InputEvent::BUTTON2_MASK);
    
Thread::sleep(300);
    
inputRobotInterface.mouseRelease(InputEvent::BUTTON2_MASK);
    
inputRobotInterface.mousePress(InputEvent::BUTTON3_MASK);
    
Thread::sleep(300);
    
inputRobotInterface.mouseRelease(InputEvent::BUTTON3_MASK);
    
inputRobotInterface.keyPress(KeyEvent::VK_1);
    
Thread::sleep(300);
    
inputRobotInterface.keyRelease(KeyEvent::VK_1);
    
inputRobotInterface.keyPress(KeyEvent::VK_2);
    
Thread::sleep(300);
    
inputRobotInterface.keyRelease(KeyEvent::VK_2);
    
inputRobotInterface.keyPress(KeyEvent::VK_3);
    
Thread::sleep(300);
    
inputRobotInterface.keyRelease(KeyEvent::VK_3);
    
inputRobotInterface.keyPress(KeyEvent::VK_4);
    
Thread::sleep(300);
    
inputRobotInterface.keyRelease(KeyEvent::VK_4);
    
inputRobotInterface.keyPress(KeyEvent::VK_F1);
    
Thread::sleep(300);
    
inputRobotInterface.keyRelease(KeyEvent::VK_F1);
    

                                    }
                                
}


                                    }
                                
this->index++;
    
this->getMotionRectanglesVector().remove(motionRectangles);
    
this->logUtil.putF(CommonLabels::getInstance().ELAPSED +timeHelper.getElapsedTNT(), this, this->commonStrings.RUN);
    
this->logUtil.putF(this->commonStrings.END, this, this->commonStrings.RUN);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.RUN, e);
    
}

}


};

            

