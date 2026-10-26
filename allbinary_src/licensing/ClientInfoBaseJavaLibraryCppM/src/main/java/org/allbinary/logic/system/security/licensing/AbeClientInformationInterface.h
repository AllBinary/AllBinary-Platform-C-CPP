
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTINFORMATIONINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTINFORMATIONINTERFACE_H

#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbeClientInformationInterface {

    void init();

    GenericOperatingSystem getOperatingSystemInterface();

    std::string getName();

    std::string getSpecialName();

    std::string getVersion();

    std::string getLicenseId();

    BasicArrayList getLicenseServers();

    std::string getLicenseServer(int32_t index);

    int32_t getNumberOfLicenseServers();

    ABHashtable<Object*, Object*> toHashtable();

    bool isSameId(std::string alicenseId);

    bool isLargerOrDifferentServerList(BasicArrayList vector);

    bool isHardSale();

    std::string toShortString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTINFORMATIONINTERFACE_H
