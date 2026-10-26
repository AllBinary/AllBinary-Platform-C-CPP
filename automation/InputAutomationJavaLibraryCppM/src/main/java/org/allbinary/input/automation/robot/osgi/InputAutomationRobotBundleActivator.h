
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/osgi/framework/BundleActivator.h>

      
#include <org/osgi/framework/BundleContext.h>

      
#include <org/osgi/framework/ServiceFactory.h>

      
#include <org/osgi/framework/ServiceReference.h>

      
#include <bundle/input/automation/robot/InputAutomationRobotChangeListener.h>

      
#include <bundle/input/automation/robot/InputAutomationRobotServiceInterface.h>

      
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/osgi/OSGIActivatorUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputAutomationRobotUtil.h"
#include "InputAutomationRobotChangeEvent.h"

class InputAutomationRobotBundleActivator
            : public Object
        : public BundleActivator {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: std::vector<InputRobotInterface> inputRobotInterface;

    private: ServiceFactory serviceFactory;

public: InputAutomationRobotBundleActivator();

                //@Throws(Exception.constructor)
            
    public: void init();

                //@Throws(Exception.constructor)
            
    public: void registerAsService(BundleContext bundleContext);

                //@Throws(Exception.constructor)
            
    private: InputAutomationRobotChangeListener getInputAutomationRobotChangeListener(BundleContext context);

    private: void addRobots(BundleContext context);

    private: void removeRobots(BundleContext context);

                //@Throws(Exception.constructor)
            
    public: void start(BundleContext context);

                //@Throws(Exception.constructor)
            
    public: void stop(BundleContext context);

    protected: Object* getServiceFactory();

    protected: void setServiceFactory(ServiceFactory serviceObject);

    public: std::vector<InputRobotInterface> getInputRobotInterface();

    public: void setInputRobotInterface(std::vector<InputRobotInterface> inputRobotInterface);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_OSGI_INPUTAUTOMATIONROBOTBUNDLEACTIVATOR_H
