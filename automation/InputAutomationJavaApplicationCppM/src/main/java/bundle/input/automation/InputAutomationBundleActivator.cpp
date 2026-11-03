
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
        



        #ifndef BUNDLE_INPUT_AUTOMATION_INPUTAUTOMATIONBUNDLEACTIVATOR_CPP
        #define BUNDLE_INPUT_AUTOMATION_INPUTAUTOMATIONBUNDLEACTIVATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "bundle/input/automation/InputAutomationBundleActivator.h"
        

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


InputAutomationBundleActivator::InputAutomationBundleActivator() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()) {
        }
        
    auto InputAutomationBundleActivator::getBundleContext() -> BundleContext*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InputAutomationBundleActivator::bundleContext;
    
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationBundleActivator::start(BundleContext* bundleContext) -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->START);
    
this->bundleContext= bundleContext;
    
InputAutomationBundleActivator::moduleManagementThread= new Thread(new InputAutomationNewBundleRunnable(this));
    
InputAutomationBundleActivator::moduleManagementThread->start();
    
InputAutomationJFrame::create(this);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->START, &e);
    



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto InputAutomationBundleActivator::registerAsService() -> void{
OSGIActivatorUtil::registerAsService(this->getBundleContext(), InputAutomationServiceFactory::getInstance(), Class::forType(typeid(InputAutomationConfigurationModuleChangeListener))->getName());
    
OSGIActivatorUtil::registerAsService(this->getBundleContext(), InputAutomationServiceFactory::getInstance(), Class::forType(typeid(InputAutomationRobotChangeListener))->getName());
    
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationBundleActivator::useServices() -> void{
(new InputAutomationRobotServiceConsumer(this->getBundleContext()))->process();
    
(new InputAutomationModuleServiceConsumer(this->getBundleContext()))->process();
    
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationBundleActivator::stop(BundleContext* context) -> void{
this->logUtil->putF(this->commonStrings->START, this, "stop");
    

                        if(InputAutomationJFrame::getInstance() != 
                                    nullptr
                                )
                        
                                    {
                                    InputAutomationJFrame::destroy();
    

                                    }
                                
                        else {
                            this->logUtil->putF("Nothing to stop", this, "stop");
    

                        }
                            
}




        #endif //BUNDLE_INPUT_AUTOMATION_INPUTAUTOMATIONBUNDLEACTIVATOR_CPP
