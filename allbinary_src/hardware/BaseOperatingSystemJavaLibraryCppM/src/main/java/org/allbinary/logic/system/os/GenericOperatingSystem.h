
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_GENERICOPERATINGSYSTEM_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_GENERICOPERATINGSYSTEM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class CharacterSet;
class StringMaker;
class StringUtil;
class StringValidationUtil;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/os/OperatingSystemInterface.h"
class SystemProperties;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GenericOperatingSystem
            : public virtual Object
        , public OperatingSystemInterface {

    private: const std::string osName;

    private: const std::string osArch;

    private: const std::string osVersion;

    private: CharacterSet* characterSet;

    /*protected*/ public: bool scalable = false;

public: GenericOperatingSystem();

    public: std::string getName();

    public: std::string getVersion();

    public: std::string getArch();

    public: CharacterSet* getCharacterSet();

    public: bool isOverScan();

    public: int32_t getOverScanXPercent();

    public: int32_t getOverScanYPercent();

    public: bool isScalable();

    public: bool isAutoHide();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_GENERICOPERATINGSYSTEM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_OS_GENERICOPERATINGSYSTEM_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_GENERICOPERATINGSYSTEM_H_COMPLETE
        #if __has_include(<org/allbinary/logic/java/character/CharacterSet.h>)
#include <org/allbinary/logic/java/character/CharacterSet.h>
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
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/logic/system/os/OperatingSystemInterface.h")
#include "org/allbinary/logic/system/os/OperatingSystemInterface.h"
#endif
#if __has_include("org/allbinary/logic/system/os/SystemProperties.h")
#include "org/allbinary/logic/system/os/SystemProperties.h"
#endif

        #endif
    
