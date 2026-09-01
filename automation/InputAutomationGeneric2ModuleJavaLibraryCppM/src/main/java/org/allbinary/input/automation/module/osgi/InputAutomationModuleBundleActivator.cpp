
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
        



            #include <vector>
        
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: std::vector<InputAutomationModuleFactoryInterface> inputAutomationModuleInterface;

    private: ServiceFactory serviceFactory;

public: InputAutomationModuleBundleActivator(){
this->init();
    
}


                //@Throws(Exception.constructor)
            
    public: void init(){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    private: InputAutomationConfigurationModuleChangeListener getInputAutomationConfigurationModuleChangeListener(BundleContext context){

    ServiceReference serviceReference = context.getServiceReference(InputAutomationConfigurationModuleChangeListener.constructor.toString()!);;
    

                        if(serviceReference != 
                                    nullptr
                                )
                        
                                    {
                                    
    InputAutomationConfigurationModuleChangeListener inputAutomationConfigurationModuleChangeListener = context.getService(serviceReference) as InputAutomationConfigurationModuleChangeListener;;
    

                        if(inputAutomationConfigurationModuleChangeListener == 
                                    nullptr
                                )
                        
                                    throw Exception("No Service For ServiceReference");
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputAutomationConfigurationModuleChangeListener;
    

                                    }
                                
                        else {
                            this->logUtil.putF("No ServiceReference: " +InputAutomationConfigurationModuleChangeListener.constructor.toString()!, this, "addModules");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


    private: void addModules(BundleContext context){

        try {
            this->logUtil.putF(this->commonStrings.START, this, "addModules");
    

    InputAutomationConfigurationModuleChangeListener inputAutomationConfigurationModuleChangeListener = this->getInputAutomationConfigurationModuleChangeListener(context);;
    

                        if(inputAutomationConfigurationModuleChangeListener != 
                                    nullptr
                                )
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < this->getInputAutomationModuleInterface().length; index++)
        {

    InputAutomationConfigurationModuleChangeEvent inputAutomationConfigurationModuleChangeEvent = InputAutomationConfigurationUtil::getChangeEvent(this->getInputAutomationModuleInterface()[index]!);;
    
inputAutomationConfigurationModuleChangeListener.onAdd(inputAutomationConfigurationModuleChangeEvent);
    
}


                                    }
                                

                //: 
} catch(e) 
            {
this->logUtil.putF(this->commonStrings.EXCEPTION, this, "addModules");
    
}

}


                //@Throws(Exception.constructor)
            
    public: void registerAsService(BundleContext bundleContext){
OSGIActivatorUtil::registerAsService(bundleContext, getServiceFactory(), InputAutomationModuleServiceInterface.constructor.toString()!);
    
}


    private: void removeModules(BundleContext context){

        try {
            this->logUtil.putF(this->commonStrings.START, this, "removeModules");
    

    InputAutomationConfigurationModuleChangeListener inputAutomationConfigurationModuleChangeListener = this->getInputAutomationConfigurationModuleChangeListener(context);;
    

                        if(inputAutomationConfigurationModuleChangeListener != 
                                    nullptr
                                )
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < this->getInputAutomationModuleInterface().length; index++)
        {

    InputAutomationConfigurationModuleChangeEvent inputAutomationConfigurationModuleChangeEvent = InputAutomationConfigurationUtil::getChangeEvent(this->getInputAutomationModuleInterface()[index]!);;
    
inputAutomationConfigurationModuleChangeListener.onRemove(inputAutomationConfigurationModuleChangeEvent);
    
}


                                    }
                                

                //: 
} catch(e) 
            {
this->logUtil.putF(this->commonStrings.EXCEPTION, this, "removeModules");
    
}

}


                //@Throws(Exception.constructor)
            
    public: void start(BundleContext context){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.START);
    
this->addModules(context);
    
this->registerAsService(context);
    
}


                //@Throws(Exception.constructor)
            
    public: void stop(BundleContext context){
this->logUtil.putF(this->commonStrings.START, this, "stop");
    
this->removeModules(context);
    
}


    protected: std::vector<InputAutomationModuleFactoryInterface> getInputAutomationModuleInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->inputAutomationModuleInterface;
    
}


    protected: void setInputAutomationModuleInterface(std::vector<InputAutomationModuleFactoryInterface> inputAutomationModuleInterface){
this->inputAutomationModuleInterface= inputAutomationModuleInterface;
    
}


    protected: Object* getServiceFactory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->serviceFactory;
    
}


    protected: void setServiceFactory(ServiceFactory serviceObject){
this->serviceFactory= serviceObject;
    
}


};

            

