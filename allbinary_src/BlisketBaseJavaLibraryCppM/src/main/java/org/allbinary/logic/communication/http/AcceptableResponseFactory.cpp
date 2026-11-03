
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSEFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/http/AcceptableResponseFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/http/AcceptableResponse.h"


AcceptableResponseFactory::AcceptableResponseFactory() : HTML(new AcceptableResponse("text/html", "html", 0)), WML(new AcceptableResponse("text/wml", "wml", 1)), VXML(new AcceptableResponse("text/vxml", "vxml", 2)) {
        }
        auto AcceptableResponseFactory::instance_owner() -> AcceptableResponseFactory* { static std::unique_ptr<AcceptableResponseFactory> value(new AcceptableResponseFactory()); return value.get(); }
AcceptableResponseFactory* AcceptableResponseFactory::instance = AcceptableResponseFactory::instance_owner();

    auto AcceptableResponseFactory::getInstance() -> AcceptableResponseFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AcceptableResponseFactory::instance;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSEFACTORY_CPP
