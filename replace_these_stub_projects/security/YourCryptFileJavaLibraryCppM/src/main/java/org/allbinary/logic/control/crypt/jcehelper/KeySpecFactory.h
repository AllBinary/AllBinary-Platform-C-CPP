
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_JCEHELPER_KEYSPECFACTORY_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_JCEHELPER_KEYSPECFACTORY_H

            #include "../../../../../../java/lang/Object.h"
        
#include <java/security/spec/KeySpec.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class KeySpecFactory
            : public Object
         {
        

    public static const DES: string = "DES";

    public static const DESEDE: string = "DESede";

    public static KeySpec getInstance(string algorithm, std::vector<int8_t> keyData);

private constructor ();

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_JCEHELPER_KEYSPECFACTORY_H
