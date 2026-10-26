
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_STATUSFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_STATUSFACTORY_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MyFrame.h"

class StatusFactory
            : public Object
         {

    private: static StatusFactory instance() { return StatusFactory(); }

    public: static StatusFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const std::string SETSTATUS = "setStatus";

    private: const std::string STATUS_LABEL = "Status: ";

    public: void setStatusNoLog(std::string status);

    public: void setStatus(std::string status);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_STATUSFACTORY_H
