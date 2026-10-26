
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_ABKEYS_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_ABKEYS_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeLicenseInterfaceFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbKeys
            : public Object
         {

    private: static AbKeys instance() { return AbKeys(); }

    public: static AbKeys getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: AbKeys();

                //@Throws(LicensingException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string getKey(AbeClientInformationInterface abeClientInformation, std::string keyName);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_ABKEYS_H
