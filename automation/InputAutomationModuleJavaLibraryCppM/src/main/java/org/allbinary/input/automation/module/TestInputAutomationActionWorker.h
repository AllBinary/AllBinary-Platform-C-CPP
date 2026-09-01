
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_TESTINPUTAUTOMATIONACTIONWORKER_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_TESTINPUTAUTOMATIONACTIONWORKER_H

            #include <vector>
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Thread.h"
        
#include <java/util/Hashtable.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>

      
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h>

      
#include <org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbstractInputAutomationWorker.h"
#include "InputAutomationActionInterface.h"

class TestInputAutomationActionWorker: public AbstractInputAutomationWorker {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: int32_t sleep;

public: TestInputAutomationActionWorker(int32_t sleep, InputAutomationActionInterface inputAutomationActionInterface, ImageComparatorConstraintsInterface imageComparatorConstraintsInterface, MotionRectangleConstraintsInterface motionRectangleConstraintsInterface);

                //@Throws(Exception.constructor)
            
    public: void processBetweenWorkers();

                //@Throws(Exception.constructor)
            
    public: void process();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_TESTINPUTAUTOMATIONACTIONWORKER_H
