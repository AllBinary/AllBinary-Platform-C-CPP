
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
        
            #include "../../../../../../java/lang/Object.h"
        
#include <android/content/Context.h>

      
#include <android/os/Build.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AndroidSystemProperties
            : public Object
         {
        

    private: static const SINGLETON: AndroidSystemProperties = new AndroidSystemProperties(ResourceUtil.getInstance()!.getContext());

    public static AndroidSystemProperties getInstance();

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

public constructor (Context context);

    public string getDeviceId();

    public string getDeviceSoftwareVersion();

    public string getLine1Number();

    public string getNetworkCountryIso();

    public string getNetworkOperator();

    public string getNetworkOperatorName();

    public string getSimCountryIso();

    public string getSimOperator();

    public string getSimOperatorName();

    public string getSimSerialNumber();

    public string getSubscriberId();

    public string getVoiceMailAlphaTag();

    public string getVoiceMailNumber();

    public int32_t getNetworkType();

    public int32_t getPhoneType();

    public string getBoard();

    public string getBrand();

    public string getDevice();

    public string getFingerprint();

    public string getHost();

    public string getId();

    public string getModel();

    public string getProduct();

    public string getTags();

    public int64_t getTime();

    public string getType();

    public string getUser();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_ANDROID_ANDROIDSYSTEMPROPERTIES_H
