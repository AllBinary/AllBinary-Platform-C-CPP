
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_LICENSEREGISTRATIONUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_LICENSEREGISTRATIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/registration/LicenseRegistrationUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/canvas/SpecialMessageUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/registration/RegistrationConfiguration.h"
#include "org/allbinary/logic/system/security/licensing/registration/XmlRpcRemoteLicenseRegistrationClient.h"


LicenseRegistrationUtil::LicenseRegistrationUtil(){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LicenseRegistrationUtil::process(AbeClientInformationInterface* abeClientInformation, std::string registrationId) -> void{

        try {
            
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::put(JavaString::valueOf(CommonLabels::getInstance()->START_LABEL) +JavaString::valueOf("License Registration"), "LicenseRegistrationUtil", commonStrings->PROCESS);
    

    RegistrationConfiguration* registrationConfiguration = RegistrationConfiguration::getInstance();;
    
registrationConfiguration->setRegistrationCode(registrationId);
    
registrationConfiguration->write();
    

    ABHashtable<Object*, Object*>* hashtable = abeClientInformation->toHashtable();;
    
hashtable->put(RegistrationConfiguration::getInstance()->NAME, registrationId);
    
hashtable->put("message", SpecialMessageUtil::getInstance()->get());
    
(new XmlRpcRemoteLicenseRegistrationClient(abeClientInformation))->get(hashtable);
    

                //: 
} catch(Exception& e) 
            {
PreLogUtil::putOE("License Registration Exception", "LicenseRegistrationUtil", "License Registration", &e);
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_LICENSEREGISTRATIONUTIL_CPP
