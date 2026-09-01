
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSEGENERATOR_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSEGENERATOR_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AcceptableResponseUtil.h"

class AcceptableResponseGenerator
            : public Object
         {

    private: static AcceptableResponseGenerator instance() { return AcceptableResponseGenerator(); }

    public: static AcceptableResponseGenerator getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: AcceptableResponseGenerator();

                //@Throws(Exception.constructor)
            
    public: std::string get(HttpServletRequest httpServletRequest);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSEGENERATOR_H
