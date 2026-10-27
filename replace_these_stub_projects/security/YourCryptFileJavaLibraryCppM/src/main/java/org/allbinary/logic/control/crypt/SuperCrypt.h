
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_SUPERCRYPT_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_SUPERCRYPT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SuperCrypt
            : public virtual Object
         {

    public: static inline int32_t KEYMAX = 0;

public: SuperCrypt(int32_t key);

    public: std::string encrypt(std::string value);

    public: std::string decrypt(std::string value);

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_SUPERCRYPT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_SUPERCRYPT_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_SUPERCRYPT_H_COMPLETE
        
        #endif
    
