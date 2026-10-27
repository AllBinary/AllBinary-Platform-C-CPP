
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/security/spec/KeySpec.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class KeySpecFactory
            : public virtual Object
         {

    public: static inline const std::string DES = "DES";

    public: static inline const std::string DESEDE = "DESede";

    public: static KeySpec* getInstance(std::string algorithm, std::vector<int8_t> keyData);

private: KeySpecFactory();

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_JCEHELPER_KEYSPECFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_JCEHELPER_KEYSPECFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_JCEHELPER_KEYSPECFACTORY_H_COMPLETE
        #if __has_include(<java/security/spec/KeySpec.h>)
#include <java/security/spec/KeySpec.h>
#endif

        #endif
    
