
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_ANDROID_ANDROIDSYSTEMPROPERTIES_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_ANDROID_ANDROIDSYSTEMPROPERTIES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/os/android/AndroidSystemProperties.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <android/content/Context.h>

      
#include <android/os/Build.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto AndroidSystemProperties::SINGLETON_owner() -> AndroidSystemProperties* { static std::unique_ptr<AndroidSystemProperties> value(new AndroidSystemProperties(ResourceUtil::getInstance()->getContext())); return value.get(); }
AndroidSystemProperties* AndroidSystemProperties::SINGLETON = AndroidSystemProperties::SINGLETON_owner();

    auto AndroidSystemProperties::getInstance() -> AndroidSystemProperties*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidSystemProperties::SINGLETON;
    
}


AndroidSystemProperties::AndroidSystemProperties(Context* context) : commonStrings(CommonStrings::getInstance()){
}


    auto AndroidSystemProperties::getDeviceId() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


    auto AndroidSystemProperties::getDeviceSoftwareVersion() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->commonStrings->DISABLE;
    
}


    auto AndroidSystemProperties::getLine1Number() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->commonStrings->DISABLE;
    
}


    auto AndroidSystemProperties::getNetworkCountryIso() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->commonStrings->DISABLE;
    
}


    auto AndroidSystemProperties::getNetworkOperator() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->commonStrings->DISABLE;
    
}


    auto AndroidSystemProperties::getNetworkOperatorName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->commonStrings->DISABLE;
    
}


    auto AndroidSystemProperties::getSimCountryIso() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->commonStrings->DISABLE;
    
}


    auto AndroidSystemProperties::getSimOperator() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->commonStrings->DISABLE;
    
}


    auto AndroidSystemProperties::getSimOperatorName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->commonStrings->DISABLE;
    
}


    auto AndroidSystemProperties::getSimSerialNumber() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->commonStrings->DISABLE;
    
}


    auto AndroidSystemProperties::getSubscriberId() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->commonStrings->DISABLE;
    
}


    auto AndroidSystemProperties::getVoiceMailAlphaTag() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->commonStrings->DISABLE;
    
}


    auto AndroidSystemProperties::getVoiceMailNumber() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->commonStrings->DISABLE;
    
}


    auto AndroidSystemProperties::getNetworkType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    auto AndroidSystemProperties::getPhoneType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    auto AndroidSystemProperties::getBoard() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build::BOARD;
    
}


    auto AndroidSystemProperties::getBrand() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build::BRAND;
    
}


    auto AndroidSystemProperties::getDevice() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build::DEVICE;
    
}


    auto AndroidSystemProperties::getFingerprint() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build::FINGERPRINT;
    
}


    auto AndroidSystemProperties::getHost() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build::HOST;
    
}


    auto AndroidSystemProperties::getId() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build::ID;
    
}


    auto AndroidSystemProperties::getModel() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build::MODEL;
    
}


    auto AndroidSystemProperties::getProduct() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build::PRODUCT;
    
}


    auto AndroidSystemProperties::getTags() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build::TAGS;
    
}


    auto AndroidSystemProperties::getTime() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build::TIME;
    
}


    auto AndroidSystemProperties::getType() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build::TYPE;
    
}


    auto AndroidSystemProperties::getUser() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build::USER;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_ANDROID_ANDROIDSYSTEMPROPERTIES_CPP
