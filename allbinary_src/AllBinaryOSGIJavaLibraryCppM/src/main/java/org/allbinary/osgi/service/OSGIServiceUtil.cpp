
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
        



        #ifndef ORG_ALLBINARY_OSGI_SERVICE_OSGISERVICEUTIL_CPP
        #define ORG_ALLBINARY_OSGI_SERVICE_OSGISERVICEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/osgi/service/OSGIServiceUtil.h"
        

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
        
auto OSGIServiceUtil::instance_owner() -> OSGIServiceUtil* { static std::unique_ptr<OSGIServiceUtil> value(new OSGIServiceUtil()); return value.get(); }
OSGIServiceUtil* OSGIServiceUtil::instance = OSGIServiceUtil::instance_owner();

    auto OSGIServiceUtil::getInstance() -> OSGIServiceUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OSGIServiceUtil::instance;
    
}


OSGIServiceUtil::OSGIServiceUtil() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto OSGIServiceUtil::getServicesObjectVector(BundleContext* bundleContext, std::vector<ServiceReference*> serviceReferences) -> BasicArrayList*{

    BasicArrayList* vector = new BasicArrayListD();;
    

                        if(!serviceReferences.empty())
                        
                                    {
                                    
    int32_t size = serviceReferences.size();;
    
this->logUtil->putF(JavaString::valueOf("Service References: ") +JavaString::valueOf(size), this, "getServicesObjectVector");
    




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
                                    


                            throw Exception("No Service For Reference");
                    

                                    }
                                
vector->add(osgiServiceInterface);
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}




        #endif //ORG_ALLBINARY_OSGI_SERVICE_OSGISERVICEUTIL_CPP
