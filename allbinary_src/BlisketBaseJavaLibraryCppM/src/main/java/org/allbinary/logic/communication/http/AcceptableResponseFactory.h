
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

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AcceptableResponse.h"

class AcceptableResponseFactory
            : public Object
         {

    private: static AcceptableResponseFactory instance() { return AcceptableResponseFactory(); }

    public: static AcceptableResponseFactory getInstance();

    public: const AcceptableResponse HTML = AcceptableResponse("text/html", "html", 0);

    public: const AcceptableResponse WML = AcceptableResponse("text/wml", "wml", 1);

    public: const AcceptableResponse VXML = AcceptableResponse("text/vxml", "vxml", 2);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSEFACTORY_H
