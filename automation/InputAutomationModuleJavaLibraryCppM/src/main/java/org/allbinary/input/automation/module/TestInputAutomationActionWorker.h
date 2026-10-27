
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
        
#include <java/util/Set.h>
class InputRobotFactory;
class InputRobotInterface;
class LogUtil;
class ImageComparatorConstraintsInterface;
class MotionRectangleConstraintsInterface;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/AbstractInputAutomationWorker.h"
class InputAutomationActionInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TestInputAutomationActionWorker: public AbstractInputAutomationWorker {

    /*protected*/ public: LogUtil* logUtil;

    private: int32_t sleep;

public: TestInputAutomationActionWorker(int32_t sleep, InputAutomationActionInterface* inputAutomationActionInterface, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface);

                //@Throws(Exception.constructor)
            
    public: void processBetweenWorkers();

                //@Throws(Exception.constructor)
            
    public: void process();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_TESTINPUTAUTOMATIONACTIONWORKER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_TESTINPUTAUTOMATIONACTIONWORKER_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_TESTINPUTAUTOMATIONACTIONWORKER_H_COMPLETE
        #if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<org/allbinary/input/automation/robot/InputRobotFactory.h>)
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>
#endif
#if __has_include(<org/allbinary/input/automation/robot/InputRobotInterface.h>)
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h>)
#include <org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h>)
#include <org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/input/automation/module/AbstractInputAutomationWorker.h")
#include "org/allbinary/input/automation/module/AbstractInputAutomationWorker.h"
#endif
#if __has_include("org/allbinary/input/automation/module/InputAutomationActionInterface.h")
#include "org/allbinary/input/automation/module/InputAutomationActionInterface.h"
#endif

        #endif
    
