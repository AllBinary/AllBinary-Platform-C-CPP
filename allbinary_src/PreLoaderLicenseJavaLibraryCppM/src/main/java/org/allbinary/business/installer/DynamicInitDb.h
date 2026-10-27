
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INSTALLER_DYNAMICINITDB_H
        #define ORG_ALLBINARY_BUSINESS_INSTALLER_DYNAMICINITDB_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class DatabaseConnectionInfoInterface;
class InitDbHelperFactory;
class AbeClientInformationInterface;
class LicensingException;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/installer/InitDb.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //Warning you must have sql root access
class DynamicInitDb: public InitDb {

public: DynamicInitDb(AbeClientInformationInterface* abeClientInformation);

public: DynamicInitDb(AbeClientInformationInterface* abeClientInformation, DatabaseConnectionInfoInterface* databaseConnectionInfoInterface);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INSTALLER_DYNAMICINITDB_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_INSTALLER_DYNAMICINITDB_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_INSTALLER_DYNAMICINITDB_H_COMPLETE
        #if __has_include(<org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>)
#include <org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>
#endif
#if __has_include(<org/allbinary/business/init/db/InitDbHelperFactory.h>)
#include <org/allbinary/business/init/db/InitDbHelperFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include("org/allbinary/business/installer/InitDb.h")
#include "org/allbinary/business/installer/InitDb.h"
#endif

        #endif
    
