
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTLICENSE_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTLICENSE_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbeLicenseInterface.h"
#include "LicenseType.h"
#include "AbeClientInformationData.h"
#include "LicenseTypeFactory.h"

class AbeClientLicense
            : public Object
        : public AbeLicenseInterface {

    public: static bool hasRequiredKeys(ABHashtable<Object*, Object*> resultHashtable);

    private: ABHashtable<Object*, Object*> hashtable;

    private: std::string id;

    private: BasicArrayList servers;

    private: std::string special;

    private: LicenseType licenseType;

public: AbeClientLicense(ABHashtable<Object*, Object*> hashtable);

    public: bool hasKey();

    public: std::string getKey(std::string keyName);

    public: std::string getLicenseId();

    public: BasicArrayList getServers();

    public: bool isValid();

    public: std::string toString();

    private: void setSpecial(std::string special);

    public: std::string getSpecial();

    public: LicenseType getLicenseType();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTLICENSE_H
