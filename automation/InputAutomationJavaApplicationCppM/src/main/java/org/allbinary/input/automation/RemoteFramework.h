
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_REMOTEFRAMEWORK_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_REMOTEFRAMEWORK_H

#include <java/util/Map.h>

      
#include <org/osgi/framework/BundleContext.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RemoteFramework {

    BundleContext connect(std::string host);

    void disconnect(BundleContext bc);

    Map getSystemProperties(BundleContext bc);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_REMOTEFRAMEWORK_H
