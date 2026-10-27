
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>

      
#include <org/allbinary/business/init/db/InitDbHelperFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/installer/InitDb.h"
//Warning you must have sql root access
class DynamicInitDb: public InitDb {

public: DynamicInitDb(AbeClientInformationInterface* abeClientInformation){
this->setHelper(InitDbHelperFactory::getInstance(abeClientInformation));
    
}


public: DynamicInitDb(AbeClientInformationInterface* abeClientInformation, DatabaseConnectionInfoInterface* databaseConnectionInfoInterface){
this->setHelper(InitDbHelperFactory::getInstance(abeClientInformation, databaseConnectionInfoInterface));
    
}


};

            

