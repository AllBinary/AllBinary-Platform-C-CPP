
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
class StringMaker;
class RegistrationConfiguration;
class CommonSeps;
class CommonStrings;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/AbeClientInformation.h"
class PartnerIdentifierFileUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MobileClientInformation: public AbeClientInformation {

    /*protected*/ public: static inline const std::string DESC = "Mobile";

    /*protected*/ public: static const std::string ANDROID_DESC;

public: MobileClientInformation(std::string name, std::string version, std::string specialName, std::string shortName);

    public: ABHashtable<Object*, Object*>* toHashtable();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_MOBILECLIENTINFORMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_MOBILECLIENTINFORMATION_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_MOBILECLIENTINFORMATION_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/registration/RegistrationConfiguration.h>)
#include <org/allbinary/logic/system/security/licensing/registration/RegistrationConfiguration.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/AbeClientInformation.h")
#include "org/allbinary/logic/system/security/licensing/AbeClientInformation.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/PartnerIdentifierFileUtil.h")
#include "org/allbinary/logic/system/security/licensing/PartnerIdentifierFileUtil.h"
#endif

        #endif
    
