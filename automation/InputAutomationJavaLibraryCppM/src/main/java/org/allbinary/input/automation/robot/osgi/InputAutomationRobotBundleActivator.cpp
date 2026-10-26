
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

public: InputAutomationRobotBundleActivator(){
this->init();
    
}


                //@Throws(Exception.constructor)
            
    public: void init(){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void registerAsService(BundleContext bundleContext){
OSGIActivatorUtil::registerAsService(bundleContext, getServiceFactory(), InputAutomationRobotServiceInterface.constructor.toString());
    
}


                //@Throws(Exception.constructor)
            
    private: InputAutomationRobotChangeListener getInputAutomationRobotChangeListener(BundleContext context){

    ServiceReference serviceReference = context.getServiceReference(InputAutomationRobotChangeListener.constructor.toString());;
    

                        if(serviceReference != 
                                    nullptr
                                )
                        
                                    {
                                    
    InputAutomationRobotChangeListener inputAutomationRobotChangeListener = context.getService(serviceReference);;
    

                        if(inputAutomationRobotChangeListener == 
                                    nullptr
                                )
                        
                                    throw Exception("No Service For ServiceReference");
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputAutomationRobotChangeListener;
    

                                    }
                                
                        else {
                            this->logUtil.putF("No ServiceReference: " +InputAutomationRobotChangeListener.constructor.toString(), this, "getInputAutomationRobotChangeListener");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


    private: void addRobots(BundleContext context){

        try {
            this->logUtil.putF(this->commonStrings.START, this, "addRobots");
    

    InputAutomationRobotChangeListener inputAutomationRobotChangeListener = this->getInputAutomationRobotChangeListener(context);;
    

                        if(inputAutomationRobotChangeListener != 
                                    nullptr
                                )
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < this->getInputRobotInterface().length; index++)
        {

    InputAutomationRobotChangeEvent inputAutomationRobotChangeEvent = InputAutomationRobotUtil::getChangeEvent(this->getInputRobotInterface()[index]);;
    
inputAutomationRobotChangeListener.onAdd(inputAutomationRobotChangeEvent);
    
}


                                    }
                                

                //: 
} catch(e) 
            {
this->logUtil.putF(this->commonStrings.EXCEPTION, this, "addModules");
    
}

}


    private: void removeRobots(BundleContext context){

        try {
            this->logUtil.putF(this->commonStrings.START, this, "removeRobots");
    

    InputAutomationRobotChangeListener inputAutomationRobotChangeListener = this->getInputAutomationRobotChangeListener(context);;
    

                        if(inputAutomationRobotChangeListener != 
                                    nullptr
                                )
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < this->getInputRobotInterface().length; index++)
        {

    InputAutomationRobotChangeEvent inputAutomationRobotChangeEvent = InputAutomationRobotUtil::getChangeEvent(this->getInputRobotInterface()[index]);;
    
inputAutomationRobotChangeListener.onRemove(inputAutomationRobotChangeEvent);
    
}


                                    }
                                

                //: 
} catch(e) 
            {
this->logUtil.putF(this->commonStrings.EXCEPTION, this, "removeRobots");
    
}

}


                //@Throws(Exception.constructor)
            
    public: void start(BundleContext context){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.START);
    
this->addRobots(context);
    
this->registerAsService(context);
    
}


                //@Throws(Exception.constructor)
            
    public: void stop(BundleContext context){
this->logUtil.putF("Stop", this, this->commonStrings.START);
    
this->removeRobots(context);
    
}


    protected: Object* getServiceFactory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->serviceFactory;
    
}


    protected: void setServiceFactory(ServiceFactory serviceObject){
this->serviceFactory= serviceObject;
    
}


    public: std::vector<InputRobotInterface> getInputRobotInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->inputRobotInterface;
    
}


    public: void setInputRobotInterface(std::vector<InputRobotInterface> inputRobotInterface){
this->inputRobotInterface= inputRobotInterface;
    
}


};

            

