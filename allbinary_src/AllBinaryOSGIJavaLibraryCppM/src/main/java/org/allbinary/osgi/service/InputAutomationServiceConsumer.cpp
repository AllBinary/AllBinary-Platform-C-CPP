
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
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/osgi/framework/BundleContext.h>

      
#include <org/osgi/framework/ServiceReference.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/osgi/OSGIServiceInterface.h>

      
#include <org/allbinary/osgi/OSGIServiceVisitorInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OSGIServiceUtil.h"

class InputAutomationServiceConsumer
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const OSGIServiceUtil osgiServiceUtil = OSGIServiceUtil::getInstance();

    private: std::string registryName;

    private: BundleContext bundleContext;

    private: OSGIServiceVisitorInterface osgiServiceVisitorInterface;

public: InputAutomationServiceConsumer(std::string registryName, BundleContext bundleContext, OSGIServiceVisitorInterface osgiServiceVisitorInterface){
this->setRegistryName(registryName);
    
this->setBundleContext(bundleContext);
    
this->setOsgiServiceVisitorInterface(osgiServiceVisitorInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void process(){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.PROCESS);
    

    BasicArrayList vector = this->osgiServiceUtil.getServicesObjectVector(this->getBundleContext(), this->getServiceReferences());;
    
this->logUtil.putF("Processing " +vector.size() +" Services", this, this->commonStrings.PROCESS);
    

    int32_t size = vector.size();;
    

    OSGIServiceInterface osgiServiceInterface;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
osgiServiceInterface= vector.get(index) as OSGIServiceInterface;
    

                        if(!getOsgiServiceVisitorInterface().visit(osgiServiceInterface))
                        
                                    {
                                    


                            throw Exception("Unable to process service: " +osgiServiceInterface);
                    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    private: std::vector<ServiceReference> getServiceReferences(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getBundleContext().getServiceReferences(this->getRegistryName(), 
                            nullptr);;
    
}


    public: BundleContext getBundleContext(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->bundleContext;
    
}


    public: void setBundleContext(BundleContext aBundleContext){
this->bundleContext= aBundleContext;
    
}


    public: std::string getRegistryName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->registryName;
    
}


    public: void setRegistryName(std::string registryName){
this->registryName= registryName;
    
}


    public: OSGIServiceVisitorInterface getOsgiServiceVisitorInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->osgiServiceVisitorInterface;
    
}


    public: void setOsgiServiceVisitorInterface(OSGIServiceVisitorInterface osgiServiceVisitorInterface){
this->osgiServiceVisitorInterface= osgiServiceVisitorInterface;
    
}


};

            

