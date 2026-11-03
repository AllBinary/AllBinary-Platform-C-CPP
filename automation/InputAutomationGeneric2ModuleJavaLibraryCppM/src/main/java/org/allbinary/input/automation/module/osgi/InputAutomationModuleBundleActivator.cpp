
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULEBUNDLEACTIVATOR_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULEBUNDLEACTIVATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/osgi/InputAutomationModuleBundleActivator.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        

InputAutomationModuleBundleActivator::InputAutomationModuleBundleActivator() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->init();
    
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationModuleBundleActivator::init() -> void{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationModuleBundleActivator::getInputAutomationConfigurationModuleChangeListener(BundleContext* context) -> InputAutomationConfigurationModuleChangeListener*{

    ServiceReference* serviceReference = context->getServiceReference(Class::forType(typeid(InputAutomationConfigurationModuleChangeListener))->getName());;
    

                        if(serviceReference != 
                                    nullptr
                                )
                        
                                    {
                                    
    InputAutomationConfigurationModuleChangeListener* inputAutomationConfigurationModuleChangeListener = dynamic_cast<InputAutomationConfigurationModuleChangeListener*>(context->getService(serviceReference));;
    

                        if(inputAutomationConfigurationModuleChangeListener == 
                                    nullptr
                                )
                        
                                    throw Exception("No Service For ServiceReference");
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return inputAutomationConfigurationModuleChangeListener;
    

                                    }
                                
                        else {
                            this->logUtil->putF(JavaString::valueOf("No ServiceReference: ") +JavaString::valueOf(Class::forType(typeid(InputAutomationConfigurationModuleChangeListener))->getName()), this, "addModules");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    

                        }
                            
}


    auto InputAutomationModuleBundleActivator::addModules(BundleContext* context) -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, "addModules");
    

    InputAutomationConfigurationModuleChangeListener* inputAutomationConfigurationModuleChangeListener = this->getInputAutomationConfigurationModuleChangeListener(context);;
    

                        if(inputAutomationConfigurationModuleChangeListener != 
                                    nullptr
                                )
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < this->getInputAutomationModuleInterface().length; index++)
        {

    InputAutomationConfigurationModuleChangeEvent* inputAutomationConfigurationModuleChangeEvent = InputAutomationConfigurationUtil::getChangeEvent(this->getInputAutomationModuleInterface()[index]);;
    
inputAutomationConfigurationModuleChangeListener->onAdd(inputAutomationConfigurationModuleChangeEvent);
    
}


                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->putF(this->commonStrings->EXCEPTION, this, "addModules");
    
}

}


                //@Throws(Exception.constructor)
            
    auto InputAutomationModuleBundleActivator::registerAsService(BundleContext* bundleContext) -> void{
OSGIActivatorUtil::registerAsService(bundleContext, getServiceFactory(), Class::forType(typeid(InputAutomationModuleServiceInterface))->getName());
    
}


    auto InputAutomationModuleBundleActivator::removeModules(BundleContext* context) -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, "removeModules");
    

    InputAutomationConfigurationModuleChangeListener* inputAutomationConfigurationModuleChangeListener = this->getInputAutomationConfigurationModuleChangeListener(context);;
    

                        if(inputAutomationConfigurationModuleChangeListener != 
                                    nullptr
                                )
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < this->getInputAutomationModuleInterface().length; index++)
        {

    InputAutomationConfigurationModuleChangeEvent* inputAutomationConfigurationModuleChangeEvent = InputAutomationConfigurationUtil::getChangeEvent(this->getInputAutomationModuleInterface()[index]);;
    
inputAutomationConfigurationModuleChangeListener->onRemove(inputAutomationConfigurationModuleChangeEvent);
    
}


                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->putF(this->commonStrings->EXCEPTION, this, "removeModules");
    
}

}


                //@Throws(Exception.constructor)
            
    auto InputAutomationModuleBundleActivator::start(BundleContext* context) -> void{
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->START);
    
this->addModules(context);
    
this->registerAsService(context);
    
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationModuleBundleActivator::stop(BundleContext* context) -> void{
this->logUtil->putF(this->commonStrings->START, this, "stop");
    
this->removeModules(context);
    
}


    auto InputAutomationModuleBundleActivator::getInputAutomationModuleInterface() -> std::vector<InputAutomationModuleFactoryInterface*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->inputAutomationModuleInterface;
    
}


    auto InputAutomationModuleBundleActivator::setInputAutomationModuleInterface(std::vector<InputAutomationModuleFactoryInterface*> inputAutomationModuleInterface) -> void{
this->inputAutomationModuleInterface= inputAutomationModuleInterface;
    
}


    auto InputAutomationModuleBundleActivator::getServiceFactory() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(this->serviceFactory);
    
}


    auto InputAutomationModuleBundleActivator::setServiceFactory(ServiceFactory* serviceObject) -> void{
this->serviceFactory= serviceObject;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULEBUNDLEACTIVATOR_CPP
