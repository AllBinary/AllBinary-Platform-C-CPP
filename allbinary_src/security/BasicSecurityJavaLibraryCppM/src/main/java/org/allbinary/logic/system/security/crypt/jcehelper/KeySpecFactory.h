
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_KEYSPECFACTORY_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_KEYSPECFACTORY_H

            #include <vector>
        
            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/RuntimeException.h"
        
#include <java/security/spec/KeySpec.h>

      
#include <javax/crypto/spec/DESKeySpec.h>

      
#include <javax/crypto/spec/DESedeKeySpec.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class KeySpecFactory
            : public Object
         {

    private: static KeySpecFactory instance() { return KeySpecFactory(); }

    public: static KeySpecFactory getInstance();

    public: const std::string DES = "DES";

    public: const std::string DESEDE = "DESede";

    public: const std::string BLOWFISH = "Blowfish";

private: KeySpecFactory();

    public: KeySpec getInstance(std::string algorithm, std::vector<int8_t> keyData);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_KEYSPECFACTORY_H
