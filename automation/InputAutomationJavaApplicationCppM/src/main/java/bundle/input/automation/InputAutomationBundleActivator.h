
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

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/Thread.h"
        
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
        #include "InputAutomationBundleActivatorListenerInterface.h"

class InputAutomationBundleActivator
            : public Object
        : public BundleActivator, public InputAutomationBundleActivatorListenerInterface {
        

    private: static moduleManagementThread: Thread;

    private: static bundleContext: BundleContext;

    public static BundleContext getBundleContext();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

                //@Throws(Exception.constructor)
            
    public start(BundleContext bundleContext);

                //@Throws(Exception.constructor)
            
    public registerAsService();

                //@Throws(Exception.constructor)
            
    public useServices();

                //@Throws(Exception.constructor)
            
    public stop(BundleContext context);

};

            


        #endif //BUNDLE_INPUT_AUTOMATION_INPUTAUTOMATIONBUNDLEACTIVATOR_H
