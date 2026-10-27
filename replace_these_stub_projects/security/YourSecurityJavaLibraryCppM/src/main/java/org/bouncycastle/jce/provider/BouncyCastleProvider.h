
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_BOUNCYCASTLE_JCE_PROVIDER_BOUNCYCASTLEPROVIDER_H
        #define ORG_BOUNCYCASTLE_JCE_PROVIDER_BOUNCYCASTLEPROVIDER_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/security/Provider.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BouncyCastleProvider: public Provider {

    private: static inline std::string info = "BouncyCastle Security Provider v1.41";

    public: static inline std::string PROVIDER_NAME = "BC";

public: BouncyCastleProvider();

    public: void setParameter(std::string parameterName, Object* parameter);

};

            


        #endif //ORG_BOUNCYCASTLE_JCE_PROVIDER_BOUNCYCASTLEPROVIDER_H
