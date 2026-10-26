
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENTINFORMATION_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENTINFORMATION_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/hardware/HardwareInterface.h>

      
#include <org/allbinary/logic/system/hardware/SystemHardwareFactory.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/NoOperatingSystem.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbeClientInformationInterface.h"
#include "AbeClientInformationData.h"
// This is the information sent to the license server
class ClientInformation
            : public Object
        : public AbeClientInformationInterface {

    private: GenericOperatingSystem operatingSystemInterface = NoOperatingSystem::NO_OPERATING_SYSTEM;

    private: const TsUtil tsUtil = TsUtil::getInstance();

    private: std::string name;

    private: std::string shortName;

    private: std::string version;

    private: std::string specialName;

    private: bool hardSale = true;

    private: std::string licenseId = StringUtil::getInstance().EMPTY_STRING;

    private: BasicArrayList licenseServers = BasicArrayListUtil::getInstance().getImmutableInstance();

public: ClientInformation(std::string name, std::string version, std::string specialName, std::string shortName);

    public: void init();

    public: GenericOperatingSystem getOperatingSystemInterface();

    public: std::string getName();

    public: std::string getSpecialName();

    public: std::string getVersion();

    public: std::string getLicenseId();

    public: BasicArrayList getLicenseServers();

    public: std::string getLicenseServer(int32_t index);

    public: int32_t getNumberOfLicenseServers();

    public: ABHashtable<Object*, Object*> toHashtable();

    public: bool isSameId(std::string alicenseId);

    public: bool isLargerOrDifferentServerList(BasicArrayList list);

    protected: void setHardSale(bool hardSale);

    public: bool isHardSale();

    protected: void setOperatingSystemInterface(GenericOperatingSystem operatingSystemInterface);

    protected: void setLicenseId(std::string licenseId);

    protected: void setLicenseServers(BasicArrayList licenseServers);

    public: std::string toShortString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENTINFORMATION_H
