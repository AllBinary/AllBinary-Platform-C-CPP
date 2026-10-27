
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_DB_INITDBHELPERFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_INIT_DB_INITDBHELPERFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
class AbeFactory;
class AbeClientInformationInterface;
class LicensingException;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class DatabaseConnectionInfoInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InitDbHelperFactory
            : public virtual Object
         {

    private: static inline const std::string CLASSNAME = "org.allbinary.business.installer.InitDbCrypted";

                //@Throws(LicensingException.constructor)
            
    public: static Object* getInstance(AbeClientInformationInterface* abeClientInformation, DatabaseConnectionInfoInterface* databaseConnectionInfoInterface);

                //@Throws(LicensingException.constructor)
            
    public: static Object* getInstance(AbeClientInformationInterface* abeClientInformation);

private: InitDbHelperFactory();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_DB_INITDBHELPERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_INIT_DB_INITDBHELPERFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_INIT_DB_INITDBHELPERFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/system/loader/AbeFactory.h>)
#include <org/allbinary/logic/system/loader/AbeFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include("org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h")
#include "org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h"
#endif

        #endif
    
