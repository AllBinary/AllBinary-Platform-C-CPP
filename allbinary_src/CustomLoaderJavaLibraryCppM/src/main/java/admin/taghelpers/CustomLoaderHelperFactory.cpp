
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
        



        #ifndef ADMIN_TAGHELPERS_CUSTOMLOADERHELPERFACTORY_CPP
        #define ADMIN_TAGHELPERS_CUSTOMLOADERHELPERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/CustomLoaderHelperFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/TagHelperFactoryInterface.h"
#include "admin/taghelpers/HelperFactory.h"


CustomLoaderHelperFactory::CustomLoaderHelperFactory(){
}


                //@Throws(LicensingException.constructor)
            
    auto CustomLoaderHelperFactory::getInstance(HashMap<Object*, Object*>* hashMap, PageContext* pageContext) -> Object*{

    AbeClientInformationInterface* abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HelperFactory::getInstance(abeClientInformation, FACTORYNAME, CLASSNAME, hashMap, pageContext);;
    
}


                //@Throws(LicensingException.constructor)
            
    auto CustomLoaderHelperFactory::getInstance(AbeClientInformationInterface* abeClientInformation) -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HelperFactory::getInstance(abeClientInformation, FACTORYNAME, CustomLoaderHelperFactory::CLASSNAME);;
    
}




        #endif //ADMIN_TAGHELPERS_CUSTOMLOADERHELPERFACTORY_CPP
