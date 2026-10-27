
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

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbeClientInformationInterface {

    public: virtual void init() = 0;

    public: virtual GenericOperatingSystem* getOperatingSystemInterface() = 0;

    public: virtual std::string getName() = 0;

    public: virtual std::string getSpecialName() = 0;

    public: virtual std::string getVersion() = 0;

    public: virtual std::string getLicenseId() = 0;

    public: virtual BasicArrayList* getLicenseServers() = 0;

    public: virtual std::string getLicenseServer(int32_t index) = 0;

    public: virtual int32_t getNumberOfLicenseServers() = 0;

    public: virtual ABHashtable<Object*, Object*>* toHashtable() = 0;

    public: virtual bool isSameId(std::string alicenseId) = 0;

    public: virtual bool isLargerOrDifferentServerList(BasicArrayList* vector) = 0;

    public: virtual bool isHardSale() = 0;

    public: virtual std::string toShortString() = 0;

};

            

