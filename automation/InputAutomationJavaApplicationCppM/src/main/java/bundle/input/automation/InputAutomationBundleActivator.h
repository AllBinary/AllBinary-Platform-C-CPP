
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <org/osgi/framework/BundleActivator.h>
class BundleContext;
class InputAutomationConfigurationModuleChangeListener;
class InputAutomationRobotChangeListener;
class InputAutomationJFrame;
class InputAutomationModuleServiceConsumer;
class InputAutomationNewBundleRunnable;
class InputAutomationServiceFactory;
class InputAutomationRobotServiceConsumer;
class LogUtil;
class OSGIActivatorUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "bundle/input/automation/InputAutomationBundleActivatorListenerInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputAutomationBundleActivator
            : public virtual Object
        , public BundleActivator, public InputAutomationBundleActivatorListenerInterface {

    private: static inline Thread* moduleManagementThread;

    private: static inline BundleContext* bundleContext;

    public: static BundleContext* getBundleContext();


            
    public: InputAutomationBundleActivator();
        
    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(BUNDLE_INPUT_AUTOMATION_INPUTAUTOMATIONBUNDLEACTIVATOR_H_COMPLETE)
        #define BUNDLE_INPUT_AUTOMATION_INPUTAUTOMATIONBUNDLEACTIVATOR_H_COMPLETE
        #if __has_include(<org/osgi/framework/BundleActivator.h>)
#include <org/osgi/framework/BundleActivator.h>
#endif
#if __has_include(<org/osgi/framework/BundleContext.h>)
#include <org/osgi/framework/BundleContext.h>
#endif
#if __has_include(<bundle/input/automation/module/configuration/InputAutomationConfigurationModuleChangeListener.h>)
#include <bundle/input/automation/module/configuration/InputAutomationConfigurationModuleChangeListener.h>
#endif
#if __has_include(<bundle/input/automation/robot/InputAutomationRobotChangeListener.h>)
#include <bundle/input/automation/robot/InputAutomationRobotChangeListener.h>
#endif
#if __has_include(<org/allbinary/input/automation/InputAutomationJFrame.h>)
#include <org/allbinary/input/automation/InputAutomationJFrame.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/osgi/InputAutomationModuleServiceConsumer.h>)
#include <org/allbinary/input/automation/module/osgi/InputAutomationModuleServiceConsumer.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/osgi/InputAutomationNewBundleRunnable.h>)
#include <org/allbinary/input/automation/module/osgi/InputAutomationNewBundleRunnable.h>
#endif
#if __has_include(<org/allbinary/input/automation/osgi/InputAutomationServiceFactory.h>)
#include <org/allbinary/input/automation/osgi/InputAutomationServiceFactory.h>
#endif
#if __has_include(<org/allbinary/input/automation/robot/osgi/InputAutomationRobotServiceConsumer.h>)
#include <org/allbinary/input/automation/robot/osgi/InputAutomationRobotServiceConsumer.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/osgi/OSGIActivatorUtil.h>)
#include <org/allbinary/osgi/OSGIActivatorUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("bundle/input/automation/InputAutomationBundleActivatorListenerInterface.h")
#include "bundle/input/automation/InputAutomationBundleActivatorListenerInterface.h"
#endif

        #endif
    
