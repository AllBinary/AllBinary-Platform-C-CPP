
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

            #include "../../../../../../java/lang/Object.h"
        
#include <java/util/Hashtable.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
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
        

    public static bool hasRequiredKeys(Hashtable<any, any> resultHashtable);

    private: hashtable: Hashtable<any, any>;

    private: id: string;

    private: servers: BasicArrayList;

    private: special: string;

    private: licenseType: LicenseType;

public constructor (Hashtable<any, any> hashtable);

    public bool hasKey();

    public string getKey(string keyName);

    public string getLicenseId();

    public BasicArrayList getServers();

    public bool isValid();

    public string toString();

    setSpecial(string special);

    public string getSpecial();

    public LicenseType getLicenseType();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTLICENSE_H
