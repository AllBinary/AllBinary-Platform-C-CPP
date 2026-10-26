
        /* Generated Code Do Not Modify */
        



#include <java/security/Provider.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BouncyCastleProvider: public Provider {

    private: static std::string info = "BouncyCastle Security Provider v1.41";

    public: static std::string PROVIDER_NAME = "BC";

public: BouncyCastleProvider() : Provider(BouncyCastleProvider::PROVIDER_NAME, 1.41, BouncyCastleProvider::info){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void setParameter(std::string parameterName, Object* parameter){
}


};

            

