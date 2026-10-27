
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
        



        #ifndef ORG_ALLBINARY_OSGI_OSGISERVICEVISITORINTERFACE_H
        #define ORG_ALLBINARY_OSGI_OSGISERVICEVISITORINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/util/visitor/VisitorInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/osgi/OSGIServiceInterface.h"

class OSGIServiceVisitorInterface: public VisitorInterface {

    public: virtual bool visit(OSGIServiceInterface* osgiServiceInterface) = 0;

};

            


        #endif //ORG_ALLBINARY_OSGI_OSGISERVICEVISITORINTERFACE_H
