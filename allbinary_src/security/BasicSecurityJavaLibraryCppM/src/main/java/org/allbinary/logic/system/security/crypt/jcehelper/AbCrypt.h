
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_ABCRYPT_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_ABCRYPT_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/security/Security.h>

      
#include <java/security/spec/KeySpec.h>

      
#include <javax/crypto/Cipher.h>

      
#include <javax/crypto/SecretKey.h>

      
#include <javax/crypto/SecretKeyFactory.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/init/crypt/jcehelper/CryptInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/bouncycastle/jce/provider/BouncyCastleProvider.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseSecretComposite.h"
#include "KeySpecFactory.h"
#include "SecretComposite.h"

class AbCrypt
            : public Object
        : public CryptInterface {

    private: const TsUtil tsUtil = TsUtil::getInstance();

    private: BaseSecretComposite secretComposite = BaseSecretComposite::NULL_SECRET_COMPOSITE;

    private: std::string algorithm;

public: AbCrypt(std::string algorithm);

    public: void init(std::string keyAsString);

    public: std::vector<int8_t> encrypt(std::vector<int8_t> array);

    public: std::vector<int8_t> decrypt(std::vector<int8_t> array);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_ABCRYPT_H
