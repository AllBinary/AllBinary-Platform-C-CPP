
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSEFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/http/AcceptableResponse.h"

class AcceptableResponseFactory
            : public Object
         {

    private: static AcceptableResponseFactory* instance() { static std::unique_ptr<AcceptableResponseFactory> value(new AcceptableResponseFactory()); return value.get(); }

    public: static AcceptableResponseFactory* getInstance();

    public: AcceptableResponse* HTML = new AcceptableResponse("text/html", "html", 0);

    public: AcceptableResponse* WML = new AcceptableResponse("text/wml", "wml", 1);

    public: AcceptableResponse* VXML = new AcceptableResponse("text/vxml", "vxml", 2);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSEFACTORY_H
