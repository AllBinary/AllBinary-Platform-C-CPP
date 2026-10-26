
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_SUPERCRYPT_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_SUPERCRYPT_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SuperCrypt
            : public Object
         {

    public: static int32_t KEYMAX = 0;

public: SuperCrypt(int32_t key);

    public: std::string encrypt(std::string value);

    public: std::string decrypt(std::string value);

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_SUPERCRYPT_H
