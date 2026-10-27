
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class TsUtil;
class StringMaker;
class StringUtil;
class HardwareInterface;
class SystemHardwareFactory;
class GenericOperatingSystem;
class NoOperatingSystem;
class CommonSeps;
class BasicArrayList;
class BasicArrayListUtil;
class StdUtil;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
class AbeClientInformationData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        // This is the information sent to the license server
class ClientInformation
            : public virtual Object
        , public AbeClientInformationInterface {

    private: GenericOperatingSystem* operatingSystemInterface;

    private: TsUtil* tsUtil;

    private: std::string name;

    private: std::string shortName;

    private: std::string version;

    private: std::string specialName;

    private: bool hardSale = true;

    private: std::string licenseId;

    private: BasicArrayList* licenseServers;

public: ClientInformation(std::string name, std::string version, std::string specialName, std::string shortName);

    public: void init();

    public: GenericOperatingSystem* getOperatingSystemInterface();

    public: std::string getName();

    public: std::string getSpecialName();

    public: std::string getVersion();

    public: std::string getLicenseId();

    public: BasicArrayList* getLicenseServers();

    public: std::string getLicenseServer(int32_t index);

    public: int32_t getNumberOfLicenseServers();

    public: ABHashtable<Object*, Object*>* toHashtable();

    public: bool isSameId(std::string alicenseId);

    public: bool isLargerOrDifferentServerList(BasicArrayList* list);

    /*protected*/ public: void setHardSale(bool hardSale);

    public: bool isHardSale();

    /*protected*/ public: void setOperatingSystemInterface(GenericOperatingSystem* operatingSystemInterface);

    /*protected*/ public: void setLicenseId(std::string licenseId);

    /*protected*/ public: void setLicenseServers(BasicArrayList* licenseServers);

    public: std::string toShortString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENTINFORMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENTINFORMATION_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENTINFORMATION_H_COMPLETE
        #if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/HardwareInterface.h>)
#include <org/allbinary/logic/system/hardware/HardwareInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/SystemHardwareFactory.h>)
#include <org/allbinary/logic/system/hardware/SystemHardwareFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/os/GenericOperatingSystem.h>)
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>
#endif
#if __has_include(<org/allbinary/logic/system/os/NoOperatingSystem.h>)
#include <org/allbinary/logic/system/os/NoOperatingSystem.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListUtil.h>)
#include <org/allbinary/util/BasicArrayListUtil.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h")
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/AbeClientInformationData.h")
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationData.h"
#endif

        #endif
    
