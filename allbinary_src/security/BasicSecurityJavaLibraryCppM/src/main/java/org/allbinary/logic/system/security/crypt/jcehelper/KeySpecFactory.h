
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
        

    private: static const instance: KeySpecFactory = new KeySpecFactory();

    public static KeySpecFactory getInstance();

    public const DES: string = "DES";

    public const DESEDE: string = "DESede";

    public const BLOWFISH: string = "Blowfish";

private constructor ();

    public KeySpec getInstance(string algorithm, std::vector<int8_t> keyData);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_CRYPT_JCEHELPER_KEYSPECFACTORY_H
