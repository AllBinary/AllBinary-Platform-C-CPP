
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_TEST_TESTINPUTAUTOMATIONCAPTUREWORKER_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_TEST_TESTINPUTAUTOMATIONCAPTUREWORKER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
#include <java/util/Set.h>
class BasicArrayList;

#include <org/allbinary/input/automation/module/AbstractInputAutomationWorker.h>
class InputAutomationActionInterface;
class GenericProfileAction;
class GenericProfileActions;
class GenericProfileActionScript;
class CapturedBufferedImagesCacheSingleton;
class LogUtil;
class J2SECacheInterface;
class ImageComparatorConstraintsInterface;
class MotionRectangleConstraintsInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TestInputAutomationCaptureWorker: public AbstractInputAutomationWorker {

    /*protected*/ public: LogUtil* logUtil;

    private: GenericProfileActions* genericProfileActions;

    private: const std::string MESSAGE = "GenericInputAutomationCaptureWorker";

    private: const std::string PROCESS_DATA_WORKER_RESULTS = "processDataWorkerResults";

    private: const std::string IMAGE_AVAILABLE_SO_PROCESSING = "Image Available so processing";

    private: const std::string IMAGE_NOT_AVAILABLE = "Image Not Available";

public: TestInputAutomationCaptureWorker(InputAutomationActionInterface* inputAutomationActionInterface, GenericProfileActions* genericProfileActions, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface);

                //@Throws(Exception.constructor)
            
    public: void processDataWorkerResults();

                //@Throws(Exception.constructor)
            
    public: void process();

    public: GenericProfileActions* getGenericProfileActions();

    public: void setGenericProfileActions(GenericProfileActions* genericProfileActions);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_TEST_TESTINPUTAUTOMATIONCAPTUREWORKER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_TEST_TESTINPUTAUTOMATIONCAPTUREWORKER_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_TEST_TESTINPUTAUTOMATIONCAPTUREWORKER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/input/automation/module/AbstractInputAutomationWorker.h>)
#include <org/allbinary/input/automation/module/AbstractInputAutomationWorker.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/InputAutomationActionInterface.h>)
#include <org/allbinary/input/automation/module/InputAutomationActionInterface.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h>)
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActions.h>)
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActions.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScript.h>)
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScript.h>
#endif
#if __has_include(<org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h>)
#include <org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/J2SECacheInterface.h>)
#include <org/allbinary/logic/util/cache/J2SECacheInterface.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h>)
#include <org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h>)
#include <org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h>
#endif

        #endif
    
