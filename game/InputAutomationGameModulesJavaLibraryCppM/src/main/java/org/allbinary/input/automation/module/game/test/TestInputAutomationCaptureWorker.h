
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

            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/input/automation/module/AbstractInputAutomationWorker.h>

      
#include <org/allbinary/input/automation/module/InputAutomationActionInterface.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActions.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScript.h>

      
#include <org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/cache/J2SECacheInterface.h>

      
#include <org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h>

      
#include <org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TestInputAutomationCaptureWorker: public AbstractInputAutomationWorker {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: genericProfileActions: GenericProfileActions;

    private: const MESSAGE: string = "GenericInputAutomationCaptureWorker";

    private: const PROCESS_DATA_WORKER_RESULTS: string = "processDataWorkerResults";

    private: const IMAGE_AVAILABLE_SO_PROCESSING: string = "Image Available so processing";

    private: const IMAGE_NOT_AVAILABLE: string = "Image Not Available";

public constructor (InputAutomationActionInterface inputAutomationActionInterface, GenericProfileActions genericProfileActions, ImageComparatorConstraintsInterface imageComparatorConstraintsInterface, MotionRectangleConstraintsInterface motionRectangleConstraintsInterface);

                //@Throws(Exception.constructor)
            
    public processDataWorkerResults();

                //@Throws(Exception.constructor)
            
    public process();

    public GenericProfileActions getGenericProfileActions();

    public setGenericProfileActions(GenericProfileActions genericProfileActions);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_TEST_TESTINPUTAUTOMATIONCAPTUREWORKER_H
