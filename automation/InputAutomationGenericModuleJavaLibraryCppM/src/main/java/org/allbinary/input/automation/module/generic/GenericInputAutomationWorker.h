
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICINPUTAUTOMATIONWORKER_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICINPUTAUTOMATIONWORKER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/HashMap.h>
#include <java/util/Set.h>
class BasicArrayList;

#include <org/allbinary/input/automation/module/AbstractInputAutomationWorker.h>
class InputAutomationActionInterface;
class GenericProfile;
class GenericProfileDataWorkerType;
class GenericProfileAction;
class GenericProfileActionScript;
class CapturedBufferedImagesCacheSingleton;
class LogUtil;
class J2SECacheInterface;
class ImageComparatorConstraintsInterface;
class ImageComparisonWorker;
class MotionRectangleConstraintsInterface;
class MotionRectanglesWorker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GenericProfileCaptureWorkerFactory;
class CaptureWorkerUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GenericInputAutomationWorker: public AbstractInputAutomationWorker {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: const std::string PROCESS_DATA_WORKER_RESULTS = "processDataWorkerResults";

    private: int64_t lastFrame;

    private: int64_t frame;

    private: GenericProfile* genericProfile;

public: GenericInputAutomationWorker(InputAutomationActionInterface* inputAutomationActionInterface, GenericProfile* genericProfile, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface);

                //@Throws(Exception.constructor)
            
    public: void processDataWorkerResults();

                //@Throws(Exception.constructor)
            
    public: void process();

    public: GenericProfile* getGenericProfile();

    public: void setGenericProfile(GenericProfile* genericProfile);

    /*protected*/ public: int64_t getFrame();

    /*protected*/ public: void setFrame(int64_t frame);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICINPUTAUTOMATIONWORKER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICINPUTAUTOMATIONWORKER_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICINPUTAUTOMATIONWORKER_H_COMPLETE
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
#if __has_include(<org/allbinary/input/automation/module/generic/configuration/profile/GenericProfile.h>)
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfile.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h>)
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h>)
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h>
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
#if __has_include(<org/allbinary/media/image/comparison/ImageComparisonWorker.h>)
#include <org/allbinary/media/image/comparison/ImageComparisonWorker.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h>)
#include <org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/motion/MotionRectanglesWorker.h>)
#include <org/allbinary/media/image/comparison/motion/MotionRectanglesWorker.h>
#endif
#if __has_include("org/allbinary/input/automation/module/generic/GenericProfileCaptureWorkerFactory.h")
#include "org/allbinary/input/automation/module/generic/GenericProfileCaptureWorkerFactory.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/CaptureWorkerUtil.h")
#include "org/allbinary/input/automation/module/generic/CaptureWorkerUtil.h"
#endif

        #endif
    
