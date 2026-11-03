
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StdUtil;
class StringMaker;
class StringUtil;
class StringValidationUtil;
template<typename T1, typename T2> class ABHashtable;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h"
class LicenseType;
class AbeClientInformationData;
class LicenseTypeFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbeClientLicense
            : public virtual Object
        , public virtual AbeLicenseInterface {

    public: static bool hasRequiredKeys(ABHashtable<Object*, Object*>* resultHashtable);

    private: ABHashtable<Object*, Object*>* hashtable;

    private: std::string id;

    private: BasicArrayList* servers;

    private: std::string special;

    private: LicenseType* licenseType;

public: AbeClientLicense(ABHashtable<Object*, Object*>* hashtable);

    public: bool hasKey();

    public: std::string getKey(std::string keyName);

    public: std::string getLicenseId();

    public: BasicArrayList* getServers();

    public: bool isValid();

    public: std::string toString();

    private: void setSpecial(std::string special);

    public: std::string getSpecial();

    public: LicenseType* getLicenseType();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTLICENSE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTLICENSE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTLICENSE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h")
#include "org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/LicenseType.h")
#include "org/allbinary/logic/system/security/licensing/LicenseType.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/AbeClientInformationData.h")
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationData.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/LicenseTypeFactory.h")
#include "org/allbinary/logic/system/security/licensing/LicenseTypeFactory.h"
#endif

        #endif
    
