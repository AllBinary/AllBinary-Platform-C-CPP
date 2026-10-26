
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_LICENSEREGISTRATIONUTIL_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_LICENSEREGISTRATIONUTIL_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/canvas/SpecialMessageUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RegistrationConfiguration.h"
#include "XmlRpcRemoteLicenseRegistrationClient.h"

class LicenseRegistrationUtil
            : public Object
         {
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void process(AbeClientInformationInterface abeClientInformation, std::string registrationId);

private: LicenseRegistrationUtil();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_LICENSEREGISTRATIONUTIL_H
