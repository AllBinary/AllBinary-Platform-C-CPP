
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

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/input/automation/module/AbstractInputAutomationWorker.h>

      
#include <org/allbinary/input/automation/module/InputAutomationActionInterface.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfile.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScript.h>

      
#include <org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/cache/J2SECacheInterface.h>

      
#include <org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonWorker.h>

      
#include <org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h>

      
#include <org/allbinary/media/image/comparison/motion/MotionRectanglesWorker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/GenericProfileCaptureWorkerFactory.h"
#include "org/allbinary/input/automation/module/generic/CaptureWorkerUtil.h"

class GenericInputAutomationWorker: public AbstractInputAutomationWorker {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: const std::string PROCESS_DATA_WORKER_RESULTS = "processDataWorkerResults";

    private: int64_t lastFrame = int64_t( -1);

    private: int64_t frame;

    private: GenericProfile* genericProfile;

public: GenericInputAutomationWorker(InputAutomationActionInterface* inputAutomationActionInterface, GenericProfile* genericProfile, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface);

                //@Throws(Exception.constructor)
            
    public: void processDataWorkerResults();

                //@Throws(Exception.constructor)
            
    public: void process();

    public: GenericProfile* getGenericProfile();

    public: void setGenericProfile(GenericProfile* genericProfile);

    protected: int64_t getFrame();

    protected: void setFrame(int64_t frame);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICINPUTAUTOMATIONWORKER_H
