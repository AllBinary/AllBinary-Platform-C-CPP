
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

public constructor (){

            super();
        this.init();
    
}


                //@Throws(Exception.constructor)
            
    public init(){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    InputAutomationConfigurationModuleChangeListener getInputAutomationConfigurationModuleChangeListener(BundleContext context){

    serviceReference: ServiceReference = context.getServiceReference(InputAutomationConfigurationModuleChangeListener.constructor.toString()!)!;;
    

                        if(serviceReference != 
                                    null
                                )
                        
                                    {
                                    
    inputAutomationConfigurationModuleChangeListener: InputAutomationConfigurationModuleChangeListener = context.getService(serviceReference) as InputAutomationConfigurationModuleChangeListener;;
    

                        if(inputAutomationConfigurationModuleChangeListener == 
                                    null
                                )
                        
                                    throw new Exception("No Service For ServiceReference");
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputAutomationConfigurationModuleChangeListener;
    

                                    }
                                
                        else {
                            this.logUtil!.putF("No ServiceReference: " +InputAutomationConfigurationModuleChangeListener.constructor.toString()!, this, "addModules");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


    addModules(BundleContext context){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, "addModules");
    

    inputAutomationConfigurationModuleChangeListener: InputAutomationConfigurationModuleChangeListener = this.getInputAutomationConfigurationModuleChangeListener(context)!;;
    

                        if(inputAutomationConfigurationModuleChangeListener != 
                                    null
                                )
                        
                                    {
                                    



                        for (
    index: int32_t = 0;index < this.getInputAutomationModuleInterface()!.length; index++)
        {

    inputAutomationConfigurationModuleChangeEvent: InputAutomationConfigurationModuleChangeEvent = InputAutomationConfigurationUtil.getChangeEvent(this.getInputAutomationModuleInterface()[index]!)!;;
    
inputAutomationConfigurationModuleChangeListener!.onAdd(inputAutomationConfigurationModuleChangeEvent);
    
}


                                    }
                                

                //: 
} catch(e) 
            {
this.logUtil!.putF(this.commonStrings!.EXCEPTION, this, "addModules");
    
}

}


                //@Throws(Exception.constructor)
            
    public registerAsService(BundleContext bundleContext){
OSGIActivatorUtil.registerAsService(bundleContext, getServiceFactory(), InputAutomationModuleServiceInterface.constructor.toString()!);
    
}


    removeModules(BundleContext context){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, "removeModules");
    

    inputAutomationConfigurationModuleChangeListener: InputAutomationConfigurationModuleChangeListener = this.getInputAutomationConfigurationModuleChangeListener(context)!;;
    

                        if(inputAutomationConfigurationModuleChangeListener != 
                                    null
                                )
                        
                                    {
                                    



                        for (
    index: int32_t = 0;index < this.getInputAutomationModuleInterface()!.length; index++)
        {

    inputAutomationConfigurationModuleChangeEvent: InputAutomationConfigurationModuleChangeEvent = InputAutomationConfigurationUtil.getChangeEvent(this.getInputAutomationModuleInterface()[index]!)!;;
    
inputAutomationConfigurationModuleChangeListener!.onRemove(inputAutomationConfigurationModuleChangeEvent);
    
}


                                    }
                                

                //: 
} catch(e) 
            {
this.logUtil!.putF(this.commonStrings!.EXCEPTION, this, "removeModules");
    
}

}


                //@Throws(Exception.constructor)
            
    public start(BundleContext context){
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.START);
    
this.addModules(context);
    
this.registerAsService(context);
    
}


                //@Throws(Exception.constructor)
            
    public stop(BundleContext context){
this.logUtil!.putF(this.commonStrings!.START, this, "stop");
    
this.removeModules(context);
    
}


    std::vector<InputAutomationModuleFactoryInterface> getInputAutomationModuleInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.inputAutomationModuleInterface;
    
}


    setInputAutomationModuleInterface(std::vector<InputAutomationModuleFactoryInterface> inputAutomationModuleInterface){
this.inputAutomationModuleInterface= inputAutomationModuleInterface;
    
}


    any getServiceFactory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.serviceFactory;
    
}


    setServiceFactory(ServiceFactory serviceObject){
this.serviceFactory= serviceObject;
    
}


};

            

