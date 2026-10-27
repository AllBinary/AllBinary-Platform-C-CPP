
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABENOLICENSE_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABENOLICENSE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h"
#include "org/allbinary/logic/system/security/licensing/LicenseTypeFactory.h"
#include "org/allbinary/logic/system/security/licensing/LicenseType.h"

class AbeNoLicense
            : public Object
        , public AbeLicenseInterface {

    private: static AbeNoLicense* abeNoLicense() { static std::unique_ptr<AbeNoLicense> value(new AbeNoLicense()); return value.get(); }

    public: static AbeNoLicense* getInstance();

    public: BasicArrayList* serverVector = new BasicArrayListD();

private: AbeNoLicense();

    public: bool hasKey();

    public: std::string getKey(std::string keyName);

    public: std::string getLicenseId();

    public: std::string getSpecial();

    public: BasicArrayList* getServers();

    public: bool isValid();

    public: LicenseType* getLicenseType();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABENOLICENSE_H
