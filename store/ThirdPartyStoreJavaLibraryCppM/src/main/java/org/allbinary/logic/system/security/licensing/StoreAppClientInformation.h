
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_STOREAPPCLIENTINFORMATION_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_STOREAPPCLIENTINFORMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/thirdparty/store/LongArrayIdentifierInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/AbeClientInformation.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StoreAppClientInformation: public AbeClientInformation, public virtual LongArrayIdentifierInterface {

    private: std::vector<int64_t> longArrayIdentifier;

public: StoreAppClientInformation(std::string name, std::string version, std::string specialName, std::string shortName, std::vector<int64_t> longArrayIdentifier);

    public: std::vector<int64_t> getLongArrayIdentifier();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_STOREAPPCLIENTINFORMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_STOREAPPCLIENTINFORMATION_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_STOREAPPCLIENTINFORMATION_H_COMPLETE
        #if __has_include(<org/allbinary/thirdparty/store/LongArrayIdentifierInterface.h>)
#include <org/allbinary/thirdparty/store/LongArrayIdentifierInterface.h>
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/AbeClientInformation.h")
#include "org/allbinary/logic/system/security/licensing/AbeClientInformation.h"
#endif

        #endif
    
