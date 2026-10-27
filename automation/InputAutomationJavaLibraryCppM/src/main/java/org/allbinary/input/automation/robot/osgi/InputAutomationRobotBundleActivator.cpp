
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_OSGI_INPUTAUTOMATIONROBOTBUNDLEACTIVATOR_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_OSGI_INPUTAUTOMATIONROBOTBUNDLEACTIVATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/robot/osgi/InputAutomationRobotBundleActivator.h"
        

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

      
#include <bundle/input/automation/robot/InputAutomationRobotChangeListener.h>

      
#include <bundle/input/automation/robot/InputAutomationRobotServiceInterface.h>

      
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/osgi/OSGIActivatorUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/robot/osgi/InputAutomationRobotUtil.h"
#include "org/allbinary/input/automation/robot/osgi/InputAutomationRobotChangeEvent.h"


InputAutomationRobotBundleActivator::InputAutomationRobotBundleActivator() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->init();
    
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationRobotBundleActivator::init() -> void{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationRobotBundleActivator::registerAsService(BundleContext* bundleContext) -> void{
OSGIActivatorUtil::registerAsService(bundleContext, getServiceFactory(), Class::forType(typeid(InputAutomationRobotServiceInterface))->getName());
    
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationRobotBundleActivator::getInputAutomationRobotChangeListener(BundleContext* context) -> InputAutomationRobotChangeListener*{

    ServiceReference* serviceReference = context->getServiceReference(Class::forType(typeid(InputAutomationRobotChangeListener))->getName());;
    

                        if(serviceReference != 
                                    nullptr
                                )
                        
                                    {
                                    
    InputAutomationRobotChangeListener* inputAutomationRobotChangeListener = dynamic_cast<InputAutomationRobotChangeListener*>(context->getService(serviceReference));;
    

                        if(inputAutomationRobotChangeListener == 
                                    nullptr
                                )
                        
                                    throw Exception("No Service For ServiceReference");
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputAutomationRobotChangeListener;
    

                                    }
                                
                        else {
                            this->logUtil->putF(JavaString::valueOf("No ServiceReference: ") +JavaString::valueOf(Class::forType(typeid(InputAutomationRobotChangeListener))->getName()), this, "getInputAutomationRobotChangeListener");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


    auto InputAutomationRobotBundleActivator::addRobots(BundleContext* context) -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, "addRobots");
    

    InputAutomationRobotChangeListener* inputAutomationRobotChangeListener = this->getInputAutomationRobotChangeListener(context);;
    

                        if(inputAutomationRobotChangeListener != 
                                    nullptr
                                )
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < this->getInputRobotInterface().length; index++)
        {

    InputAutomationRobotChangeEvent* inputAutomationRobotChangeEvent = InputAutomationRobotUtil::getChangeEvent(this->getInputRobotInterface()[index]);;
    
inputAutomationRobotChangeListener->onAdd(inputAutomationRobotChangeEvent);
    
}


                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->putF(this->commonStrings->EXCEPTION, this, "addModules");
    
}

}


    auto InputAutomationRobotBundleActivator::removeRobots(BundleContext* context) -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, "removeRobots");
    

    InputAutomationRobotChangeListener* inputAutomationRobotChangeListener = this->getInputAutomationRobotChangeListener(context);;
    

                        if(inputAutomationRobotChangeListener != 
                                    nullptr
                                )
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < this->getInputRobotInterface().length; index++)
        {

    InputAutomationRobotChangeEvent* inputAutomationRobotChangeEvent = InputAutomationRobotUtil::getChangeEvent(this->getInputRobotInterface()[index]);;
    
inputAutomationRobotChangeListener->onRemove(inputAutomationRobotChangeEvent);
    
}


                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->putF(this->commonStrings->EXCEPTION, this, "removeRobots");
    
}

}


                //@Throws(Exception.constructor)
            
    auto InputAutomationRobotBundleActivator::start(BundleContext* context) -> void{
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->START);
    
this->addRobots(context);
    
this->registerAsService(context);
    
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationRobotBundleActivator::stop(BundleContext* context) -> void{
this->logUtil->putF("Stop", this, this->commonStrings->START);
    
this->removeRobots(context);
    
}


    auto InputAutomationRobotBundleActivator::getServiceFactory() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->serviceFactory;
    
}


    auto InputAutomationRobotBundleActivator::setServiceFactory(ServiceFactory* serviceObject) -> void{
this->serviceFactory= serviceObject;
    
}


    auto InputAutomationRobotBundleActivator::getInputRobotInterface() -> std::vector<InputRobotInterface*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->inputRobotInterface;
    
}


    auto InputAutomationRobotBundleActivator::setInputRobotInterface(std::vector<InputRobotInterface*> inputRobotInterface) -> void{
this->inputRobotInterface= inputRobotInterface;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_OSGI_INPUTAUTOMATIONROBOTBUNDLEACTIVATOR_CPP
