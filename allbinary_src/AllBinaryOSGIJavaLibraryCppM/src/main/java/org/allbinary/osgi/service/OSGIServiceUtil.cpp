
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
        
#include <java/util/Vector.h>

      
#include <org/osgi/framework/BundleContext.h>

      
#include <org/osgi/framework/ServiceReference.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/osgi/OSGIServiceInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OSGIServiceUtil
            : public Object
         {

    private: static OSGIServiceUtil instance() { return OSGIServiceUtil(); }

    public: static OSGIServiceUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OSGIServiceUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: OSGIServiceUtil(){
}


                //@Throws(Exception.constructor)
            
    public: Vector getServicesObjectVector(Object bundleContext, std::vector<ServiceReference> serviceReferences){

    Vector vector = Vector();;
    

                        if(serviceReferences != 
                                    nullptr
                                )
                        
                                    {
                                    
    int32_t size = serviceReferences.size();;
    
this->logUtil.putF("Service References: " +size, this, "getServicesObjectVector");
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    ServiceReference serviceReference = serviceReferences[index];;
    

                        if(serviceReference != 
                                    nullptr
                                )
                        
                                    {
                                    
    OSGIServiceInterface osgiServiceInterface = bundleContext.getService(serviceReference) as OSGIServiceInterface;;
    

                        if(osgiServiceInterface == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("No Service For Reference");
                    

                                    }
                                
vector.add(osgiServiceInterface);
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


};

            

