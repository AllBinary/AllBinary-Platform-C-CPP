
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_NULLUTIL_H
        #define ORG_ALLBINARY_LOGIC_NULLUTIL_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
/*actual*/ class NullUtil
            : public Object
         {

    private: static NullUtil* instance() { static std::unique_ptr<NullUtil> value(new NullUtil()); return value.get(); }

    /*actual*/ public: static NullUtil* getInstance();

    /*actual*/ public: Object* NULL_OBJECT = new Object();

    /*actual*/ public: Class* NULL_CLASS = this->NULL_OBJECT->getClass();

    /*actual*/ public: const std::vector<Object*> NULL_OBJECT_ARRAY = {};

    /*actual*/ public: const std::vector<char> NULL_CHAR_ARRAY = std::vector<char>(0);

    /*actual*/ public: const std::vector<int8_t> NULL_BYTE_ARRAY = std::vector<int8_t>(0);

    /*actual*/ public: const std::vector<std::vector<int16_t>> NULL_SHORT_ARRAY_ARRAY = std::vector<std::vector<int16_t>>(0, std::vector<int16_t>(0));

    /*actual*/ public: const std::vector<int32_t> NULL_INT_ARRAY = std::vector<int32_t>(0);

    /*actual*/ public: const std::vector<std::vector<int32_t>> NULL_INT_ARRAY_ARRAY = std::vector<std::vector<int32_t>>(0, std::vector<int32_t>(0));

    /*actual*/ public: const std::vector<std::vector<std::vector<int32_t>>> NULL_INT_ARRAY_ARRAY_ARRAY = std::vector<std::vector<std::vector<int32_t>>>(0, std::vector<std::vector<int32_t>>(0, std::vector<int32_t>(0)));

    /*actual*/ public: const std::vector<float> NULL_FLOAT_ARRAY = std::vector<float>(0);

};

            


        #endif //ORG_ALLBINARY_LOGIC_NULLUTIL_H
