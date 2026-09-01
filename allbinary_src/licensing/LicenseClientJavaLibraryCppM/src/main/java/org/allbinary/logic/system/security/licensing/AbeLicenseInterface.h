
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABELICENSEINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABELICENSEINTERFACE_H

#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LicenseType.h"

class AbeLicenseInterface {

    bool hasKey();

    std::string getKey(std::string keyName);

    std::string getLicenseId();

    BasicArrayList getServers();

    std::string getSpecial();

    LicenseType getLicenseType();

    bool isValid();

    std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABELICENSEINTERFACE_H
