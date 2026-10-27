
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
        



        #ifndef BUNDLE_INPUT_AUTOMATION_INPUTAUTOMATIONBUNDLEACTIVATOR_H
        #define BUNDLE_INPUT_AUTOMATION_INPUTAUTOMATIONBUNDLEACTIVATOR_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <org/osgi/framework/BundleActivator.h>

      
#include <org/osgi/framework/BundleContext.h>

      
#include <bundle/input/automation/module/configuration/InputAutomationConfigurationModuleChangeListener.h>

      
#include <bundle/input/automation/robot/InputAutomationRobotChangeListener.h>

      
#include <org/allbinary/input/automation/InputAutomationJFrame.h>

      
#include <org/allbinary/input/automation/module/osgi/InputAutomationModuleServiceConsumer.h>

      
#include <org/allbinary/input/automation/module/osgi/InputAutomationNewBundleRunnable.h>

      
#include <org/allbinary/input/automation/osgi/InputAutomationServiceFactory.h>

      
#include <org/allbinary/input/automation/robot/osgi/InputAutomationRobotServiceConsumer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/osgi/OSGIActivatorUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "bundle/input/automation/InputAutomationBundleActivatorListenerInterface.h"

class InputAutomationBundleActivator
            : public Object
        , public BundleActivator, public InputAutomationBundleActivatorListenerInterface {

    private: static inline Thread* moduleManagementThread;

    private: static inline BundleContext* bundleContext;

    public: static BundleContext* getBundleContext();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

                //@Throws(Exception.constructor)
            
    public: void start(BundleContext* bundleContext);

                //@Throws(Exception.constructor)
            
    public: void registerAsService();

                //@Throws(Exception.constructor)
            
    public: void useServices();

                //@Throws(Exception.constructor)
            
    public: void stop(BundleContext* context);

};

            


        #endif //BUNDLE_INPUT_AUTOMATION_INPUTAUTOMATIONBUNDLEACTIVATOR_H
