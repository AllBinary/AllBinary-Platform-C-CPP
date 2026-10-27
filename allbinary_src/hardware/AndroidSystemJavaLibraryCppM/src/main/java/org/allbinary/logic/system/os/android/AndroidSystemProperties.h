
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_ANDROID_ANDROIDSYSTEMPROPERTIES_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_ANDROID_ANDROIDSYSTEMPROPERTIES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <hilog/log.h>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Context;
class Build;
class ResourceUtil;
class StringUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AndroidSystemProperties
            : public virtual Object
         {

    private: static AndroidSystemProperties* SINGLETON_owner();
    private: static AndroidSystemProperties* SINGLETON;

    public: static AndroidSystemProperties* getInstance();

    private: CommonStrings* commonStrings;

public: AndroidSystemProperties(Context* context);

    public: std::string getDeviceId();

    public: std::string getDeviceSoftwareVersion();

    public: std::string getLine1Number();

    public: std::string getNetworkCountryIso();

    public: std::string getNetworkOperator();

    public: std::string getNetworkOperatorName();

    public: std::string getSimCountryIso();

    public: std::string getSimOperator();

    public: std::string getSimOperatorName();

    public: std::string getSimSerialNumber();

    public: std::string getSubscriberId();

    public: std::string getVoiceMailAlphaTag();

    public: std::string getVoiceMailNumber();

    public: int32_t getNetworkType();

    public: int32_t getPhoneType();

    public: std::string getBoard();

    public: std::string getBrand();

    public: std::string getDevice();

    public: std::string getFingerprint();

    public: std::string getHost();

    public: std::string getId();

    public: std::string getModel();

    public: std::string getProduct();

    public: std::string getTags();

    public: int64_t getTime();

    public: std::string getType();

    public: std::string getUser();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_ANDROID_ANDROIDSYSTEMPROPERTIES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_OS_ANDROID_ANDROIDSYSTEMPROPERTIES_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_ANDROID_ANDROIDSYSTEMPROPERTIES_H_COMPLETE
        #if __has_include(<android/content/Context.h>)
#include <android/content/Context.h>
#endif
#if __has_include(<android/os/Build.h>)
#include <android/os/Build.h>
#endif
#if __has_include(<org/allbinary/data/resource/ResourceUtil.h>)
#include <org/allbinary/data/resource/ResourceUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
