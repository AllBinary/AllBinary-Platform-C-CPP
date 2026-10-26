
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

            #include <hilog/log.h>
        
            #include "java/lang/Object.h"
        
#include <android/content/Context.h>

      
#include <android/os/Build.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AndroidSystemProperties
            : public Object
         {

    private: static const AndroidSystemProperties SINGLETON = AndroidSystemProperties(ResourceUtil::getInstance().getContext());

    public: static AndroidSystemProperties getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

public: AndroidSystemProperties(Context context);

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
