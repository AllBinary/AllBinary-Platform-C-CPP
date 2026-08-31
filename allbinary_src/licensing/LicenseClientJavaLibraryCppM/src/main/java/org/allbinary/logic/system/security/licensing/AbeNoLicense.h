
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

            #include "../../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbeLicenseInterface.h"
#include "LicenseTypeFactory.h"
#include "LicenseType.h"

class AbeNoLicense
            : public Object
        : public AbeLicenseInterface {
        

    private: static abeNoLicense: AbeNoLicense = new AbeNoLicense();

    public static AbeNoLicense getInstance();

    public serverVector: BasicArrayList = new BasicArrayListD();

private constructor ();

    public bool hasKey();

    public string getKey(string keyName);

    public string getLicenseId();

    public string getSpecial();

    public BasicArrayList getServers();

    public bool isValid();

    public LicenseType getLicenseType();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABENOLICENSE_H
