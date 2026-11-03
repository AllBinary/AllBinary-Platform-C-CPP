
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_OSGI_INPUTAUTOMATIONROBOTBUNDLEACTIVATOR_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_OSGI_INPUTAUTOMATIONROBOTBUNDLEACTIVATOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/osgi/framework/BundleActivator.h>
class BundleContext;
class ServiceFactory;
class ServiceReference;
class InputAutomationRobotChangeListener;
class InputAutomationRobotServiceInterface;
class InputRobotInterface;
class LogUtil;
class OSGIActivatorUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class InputAutomationRobotUtil;
class InputAutomationRobotChangeEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputAutomationRobotBundleActivator
            : public virtual Object
        , public virtual BundleActivator {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: std::vector<InputRobotInterface*> inputRobotInterface;

    private: ServiceFactory* serviceFactory;

public: InputAutomationRobotBundleActivator();

                //@Throws(Exception.constructor)
            
    public: void init();

                //@Throws(Exception.constructor)
            
    public: void registerAsService(BundleContext* bundleContext);

                //@Throws(Exception.constructor)
            
    private: InputAutomationRobotChangeListener* getInputAutomationRobotChangeListener(BundleContext* context);

    private: void addRobots(BundleContext* context);

    private: void removeRobots(BundleContext* context);

                //@Throws(Exception.constructor)
            
    public: void start(BundleContext* context);

                //@Throws(Exception.constructor)
            
    public: void stop(BundleContext* context);

    /*protected*/ public: Object* getServiceFactory();

    /*protected*/ public: void setServiceFactory(ServiceFactory* serviceObject);

    public: std::vector<InputRobotInterface*> getInputRobotInterface();

    public: void setInputRobotInterface(std::vector<InputRobotInterface*> inputRobotInterface);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_OSGI_INPUTAUTOMATIONROBOTBUNDLEACTIVATOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_OSGI_INPUTAUTOMATIONROBOTBUNDLEACTIVATOR_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_OSGI_INPUTAUTOMATIONROBOTBUNDLEACTIVATOR_H_COMPLETE
        #if __has_include(<org/osgi/framework/BundleActivator.h>)
#include <org/osgi/framework/BundleActivator.h>
#endif
#if __has_include(<org/osgi/framework/BundleContext.h>)
#include <org/osgi/framework/BundleContext.h>
#endif
#if __has_include(<org/osgi/framework/ServiceFactory.h>)
#include <org/osgi/framework/ServiceFactory.h>
#endif
#if __has_include(<org/osgi/framework/ServiceReference.h>)
#include <org/osgi/framework/ServiceReference.h>
#endif
#if __has_include(<bundle/input/automation/robot/InputAutomationRobotChangeListener.h>)
#include <bundle/input/automation/robot/InputAutomationRobotChangeListener.h>
#endif
#if __has_include(<bundle/input/automation/robot/InputAutomationRobotServiceInterface.h>)
#include <bundle/input/automation/robot/InputAutomationRobotServiceInterface.h>
#endif
#if __has_include(<org/allbinary/input/automation/robot/InputRobotInterface.h>)
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>
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
#if __has_include("org/allbinary/input/automation/robot/osgi/InputAutomationRobotUtil.h")
#include "org/allbinary/input/automation/robot/osgi/InputAutomationRobotUtil.h"
#endif
#if __has_include("org/allbinary/input/automation/robot/osgi/InputAutomationRobotChangeEvent.h")
#include "org/allbinary/input/automation/robot/osgi/InputAutomationRobotChangeEvent.h"
#endif

        #endif
    
