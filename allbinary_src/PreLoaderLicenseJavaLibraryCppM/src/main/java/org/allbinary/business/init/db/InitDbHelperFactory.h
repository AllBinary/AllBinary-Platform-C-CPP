
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DatabaseConnectionInfoInterface.h"

class InitDbHelperFactory
            : public Object
         {

    private: static const std::string CLASSNAME = "org.allbinary.business.installer.InitDbCrypted";

                //@Throws(LicensingException.constructor)
            
    public: static Object* getInstance(AbeClientInformationInterface abeClientInformation, DatabaseConnectionInfoInterface databaseConnectionInfoInterface);

                //@Throws(LicensingException.constructor)
            
    public: static Object* getInstance(AbeClientInformationInterface abeClientInformation);

private: InitDbHelperFactory();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_DB_INITDBHELPERFACTORY_H
