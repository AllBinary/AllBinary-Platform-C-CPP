
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

            #include "../../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Hashtable.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbeClientInformationInterface.h"
#include "AbeClientInformationData.h"
// This is the information sent to the license server
class ClientInformation
            : public Object
        : public AbeClientInformationInterface {
        

    private: operatingSystemInterface: GenericOperatingSystem = NoOperatingSystem.NO_OPERATING_SYSTEM;

    private: const tsUtil: TsUtil = TsUtil.getInstance()!;

    private: const name: string;

    private: const shortName: string;

    private: const version: string;

    private: const specialName: string;

    private: hardSale: bool = true;

    private: licenseId: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: licenseServers: BasicArrayList = BasicArrayListUtil.getInstance()!.getImmutableInstance()!;

public constructor (string name, string version, string specialName, string shortName);

    public init();

    public GenericOperatingSystem getOperatingSystemInterface();

    public string getName();

    public string getSpecialName();

    public string getVersion();

    public string getLicenseId();

    public BasicArrayList getLicenseServers();

    public string getLicenseServer(int32_t index);

    public int32_t getNumberOfLicenseServers();

    public Hashtable<any, any> toHashtable();

    public bool isSameId(string alicenseId);

    public bool isLargerOrDifferentServerList(BasicArrayList list);

    setHardSale(bool hardSale);

    public bool isHardSale();

    setOperatingSystemInterface(GenericOperatingSystem operatingSystemInterface);

    setLicenseId(string licenseId);

    setLicenseServers(BasicArrayList licenseServers);

    public string toShortString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENTINFORMATION_H
