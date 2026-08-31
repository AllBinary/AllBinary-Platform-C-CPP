
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

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/RuntimeException.h"
        
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: inputAutomationModuleInterface: std::vector<InputAutomationModuleFactoryInterface>;

    private: serviceFactory: ServiceFactory;

public constructor ();

                //@Throws(Exception.constructor)
            
    public init();

                //@Throws(Exception.constructor)
            
    InputAutomationConfigurationModuleChangeListener getInputAutomationConfigurationModuleChangeListener(BundleContext context);

    addModules(BundleContext context);

                //@Throws(Exception.constructor)
            
    public registerAsService(BundleContext bundleContext);

    removeModules(BundleContext context);

                //@Throws(Exception.constructor)
            
    public start(BundleContext context);

                //@Throws(Exception.constructor)
            
    public stop(BundleContext context);

    std::vector<InputAutomationModuleFactoryInterface> getInputAutomationModuleInterface();

    setInputAutomationModuleInterface(std::vector<InputAutomationModuleFactoryInterface> inputAutomationModuleInterface);

    any getServiceFactory();

    setServiceFactory(ServiceFactory serviceObject);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULEBUNDLEACTIVATOR_H
