
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/osgi/framework/BundleContext.h>

      
#include <org/osgi/framework/ServiceReference.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/osgi/OSGIServiceInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OSGIServiceUtil
            : public Object
         {

    private: static OSGIServiceUtil* instance() { static std::unique_ptr<OSGIServiceUtil> value(new OSGIServiceUtil()); return value.get(); }

    public: static OSGIServiceUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OSGIServiceUtil::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

private: OSGIServiceUtil(){
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getServicesObjectVector(Object* bundleContext, std::vector<ServiceReference*> serviceReferences){

    BasicArrayList* vector = new BasicArrayListD();;
    

                        if(serviceReferences != 
                                    nullptr
                                )
                        
                                    {
                                    
    int32_t size = serviceReferences.size();;
    
this->logUtil->putF("Service References: " +size, this, "getServicesObjectVector");
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    ServiceReference* serviceReference = serviceReferences[index];;
    

                        if(serviceReference != 
                                    nullptr
                                )
                        
                                    {
                                    
    OSGIServiceInterface* osgiServiceInterface = dynamic_cast<OSGIServiceInterface*>(bundleContext->getService(serviceReference));;
    

                        if(osgiServiceInterface == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw new Exception("No Service For Reference");
                    

                                    }
                                
vector->add(osgiServiceInterface);
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


};

            

