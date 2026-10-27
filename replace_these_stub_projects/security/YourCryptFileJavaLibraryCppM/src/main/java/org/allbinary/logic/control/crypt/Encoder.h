
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_ENCODER_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_ENCODER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Encoder
            : public virtual Object
         {

    public: static std::string encode(std::vector<int8_t> value);

    public: static std::vector<int8_t> decode(std::string value);

private: Encoder();

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_ENCODER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_ENCODER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_CONTROL_CRYPT_ENCODER_H_COMPLETE
        
        #endif
    
