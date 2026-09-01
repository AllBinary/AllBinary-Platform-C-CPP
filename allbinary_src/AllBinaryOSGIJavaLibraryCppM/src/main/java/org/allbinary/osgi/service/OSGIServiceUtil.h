
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
        



        #ifndef ORG_ALLBINARY_OSGI_SERVICE_OSGISERVICEUTIL_H
        #define ORG_ALLBINARY_OSGI_SERVICE_OSGISERVICEUTIL_H

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

    public: static OSGIServiceUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: OSGIServiceUtil();

                //@Throws(Exception.constructor)
            
    public: Vector getServicesObjectVector(Object bundleContext, std::vector<ServiceReference> serviceReferences);

};

            


        #endif //ORG_ALLBINARY_OSGI_SERVICE_OSGISERVICEUTIL_H
