
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_MOBILECLIENTINFORMATION_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_MOBILECLIENTINFORMATION_H

            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/registration/RegistrationConfiguration.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbeClientInformation.h"
#include "PartnerIdentifierFileUtil.h"

class MobileClientInformation: public AbeClientInformation {

    protected: static const std::string DESC = "Mobile";

    protected: static const std::string ANDROID_DESC = "Android" +MobileClientInformation::DESC;

public: MobileClientInformation(std::string name, std::string version, std::string specialName, std::string shortName);

    public: ABHashtable<Object*, Object*> toHashtable();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_MOBILECLIENTINFORMATION_H
