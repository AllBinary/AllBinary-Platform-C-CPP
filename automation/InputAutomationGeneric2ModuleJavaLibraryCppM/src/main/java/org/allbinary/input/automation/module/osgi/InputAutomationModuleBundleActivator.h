
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULEBUNDLEACTIVATOR_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULEBUNDLEACTIVATOR_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/osgi/framework/BundleActivator.h>

      
#include <org/osgi/framework/BundleContext.h>

      
#include <org/osgi/framework/ServiceFactory.h>

      
#include <org/osgi/framework/ServiceReference.h>

      
#include <bundle/input/automation/module/InputAutomationModuleServiceInterface.h>

      
#include <bundle/input/automation/module/configuration/InputAutomationConfigurationModuleChangeListener.h>

      
#include <org/allbinary/input/automation/configuration/InputAutomationConfigurationModuleChangeEvent.h>

      
#include <org/allbinary/input/automation/configuration/InputAutomationConfigurationUtil.h>

      
#include <org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/osgi/OSGIActivatorUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InputAutomationModuleBundleActivator
            : public Object
        : public BundleActivator {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: std::vector<InputAutomationModuleFactoryInterface> inputAutomationModuleInterface;

    private: ServiceFactory serviceFactory;

public: InputAutomationModuleBundleActivator();

                //@Throws(Exception.constructor)
            
    public: void init();

                //@Throws(Exception.constructor)
            
    private: InputAutomationConfigurationModuleChangeListener getInputAutomationConfigurationModuleChangeListener(BundleContext context);

    private: void addModules(BundleContext context);

                //@Throws(Exception.constructor)
            
    public: void registerAsService(BundleContext bundleContext);

    private: void removeModules(BundleContext context);

                //@Throws(Exception.constructor)
            
    public: void start(BundleContext context);

                //@Throws(Exception.constructor)
            
    public: void stop(BundleContext context);

    protected: std::vector<InputAutomationModuleFactoryInterface> getInputAutomationModuleInterface();

    protected: void setInputAutomationModuleInterface(std::vector<InputAutomationModuleFactoryInterface> inputAutomationModuleInterface);

    protected: Object* getServiceFactory();

    protected: void setServiceFactory(ServiceFactory serviceObject);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULEBUNDLEACTIVATOR_H
