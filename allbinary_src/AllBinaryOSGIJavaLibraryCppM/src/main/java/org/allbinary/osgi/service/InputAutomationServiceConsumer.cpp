
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
        



        #ifndef ORG_ALLBINARY_OSGI_SERVICE_INPUTAUTOMATIONSERVICECONSUMER_CPP
        #define ORG_ALLBINARY_OSGI_SERVICE_INPUTAUTOMATIONSERVICECONSUMER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/osgi/service/InputAutomationServiceConsumer.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/osgi/framework/BundleContext.h>

      
#include <org/osgi/framework/ServiceReference.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/osgi/OSGIServiceInterface.h>

      
#include <org/allbinary/osgi/OSGIServiceVisitorInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/osgi/service/OSGIServiceUtil.h"


InputAutomationServiceConsumer::InputAutomationServiceConsumer(std::string registryName, BundleContext* bundleContext, OSGIServiceVisitorInterface* osgiServiceVisitorInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), osgiServiceUtil(OSGIServiceUtil::getInstance()){
this->setRegistryName(registryName);
    
this->setBundleContext(bundleContext);
    
this->setOsgiServiceVisitorInterface(osgiServiceVisitorInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationServiceConsumer::process() -> void{
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->PROCESS);
    

    BasicArrayList* vector = this->osgiServiceUtil->getServicesObjectVector(this->getBundleContext(), this->getServiceReferences());;
    
this->logUtil->putF(JavaString::valueOf(JavaString::valueOf("Processing ") +JavaString::valueOf(vector->size())) +JavaString::valueOf(" Services"), this, this->commonStrings->PROCESS);
    

    int32_t size = vector->size();;
    

    OSGIServiceInterface* osgiServiceInterface;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
osgiServiceInterface= dynamic_cast<OSGIServiceInterface*>(vector->get(index));
    

                        if(!getOsgiServiceVisitorInterface()->visit(osgiServiceInterface))
                        
                                    {
                                    


                            throw Exception(JavaString::valueOf("Unable to process service: ") +JavaString::valueOf(osgiServiceInterface));
                    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    auto InputAutomationServiceConsumer::getServiceReferences() -> std::vector<ServiceReference*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getBundleContext()->getServiceReferences(this->getRegistryName(), 
                            nullptr);;
    
}


    auto InputAutomationServiceConsumer::getBundleContext() -> BundleContext*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->bundleContext;
    
}


    auto InputAutomationServiceConsumer::setBundleContext(BundleContext* aBundleContext) -> void{
this->bundleContext= aBundleContext;
    
}


    auto InputAutomationServiceConsumer::getRegistryName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->registryName;
    
}


    auto InputAutomationServiceConsumer::setRegistryName(std::string registryName) -> void{
this->registryName= registryName;
    
}


    auto InputAutomationServiceConsumer::getOsgiServiceVisitorInterface() -> OSGIServiceVisitorInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->osgiServiceVisitorInterface;
    
}


    auto InputAutomationServiceConsumer::setOsgiServiceVisitorInterface(OSGIServiceVisitorInterface* osgiServiceVisitorInterface) -> void{
this->osgiServiceVisitorInterface= osgiServiceVisitorInterface;
    
}




        #endif //ORG_ALLBINARY_OSGI_SERVICE_INPUTAUTOMATIONSERVICECONSUMER_CPP
