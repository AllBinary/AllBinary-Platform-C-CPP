
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Hashtable.h>

      
#include <java/util/Vector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
/*actual*/ class NullUtil
            : public Object
         {

    private: static NullUtil instance() { return NullUtil(); }

    /*actual*/ public: static NullUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::instance();
    
}


    /*actual*/ public: const Object* NULL_OBJECT = new Object();

    /*actual*/ public: const Class* NULL_CLASS = this->NULL_OBJECT->getClass();

    /*actual*/ public: const std::vector<Object*> NULL_OBJECT_ARRAY = {};

    /*actual*/ public: const std::vector<int8_t> NULL_BYTE_ARRAY = std::vector<int8_t>(0);

    /*actual*/ public: const std::vector<char> NULL_CHAR_ARRAY = std::vector<char>(0);

    /*actual*/ public: const std::vector<std::vector<int16_t>> NULL_SHORT_ARRAY_ARRAY = std::vector<std::vector<int16_t>>(0, std::vector<int16_t>(0));

    /*actual*/ public: const std::vector<int32_t> NULL_INT_ARRAY = std::vector<int32_t>(0);

    /*actual*/ public: const std::vector<std::vector<int32_t>> NULL_INT_ARRAY_ARRAY = std::vector<std::vector<int32_t>>(0, std::vector<int32_t>(0));

    /*actual*/ public: const std::vector<std::vector<std::vector<int32_t>>> NULL_INT_ARRAY_ARRAY_ARRAY = std::vector<std::vector<std::vector<int32_t>>>(0, std::vector<std::vector<int32_t>>(0, std::vector<int32_t>(0)));

    /*actual*/ public: const std::vector<float> NULL_FLOAT_ARRAY = std::vector<float>(0);

    /*actual*/ public: const Vector<Object*> EMPTY_VECTOR = Vector<Object*>();

    /*actual*/ public: const Hashtable<Object*, Object*> NULL_TABLE = Hashtable<Object*, Object*>();

    /*actual*/ public: const HashMap<Object*, Object*> NULL_MAP = HashMap<Object*, Object*>();

};

            

