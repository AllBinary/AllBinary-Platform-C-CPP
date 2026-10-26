
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_ENCODER_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_ENCODER_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Encoder
            : public Object
         {

    public: static std::string encode(std::vector<int8_t> value);

    public: static std::vector<int8_t> decode(std::string value);

private: Encoder();

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_ENCODER_H
