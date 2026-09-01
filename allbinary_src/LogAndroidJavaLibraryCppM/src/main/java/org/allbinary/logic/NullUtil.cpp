
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
        
            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Class.h"
        
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


    /*actual*/ public: const Object* NULL_OBJECT = {};

    /*actual*/ public: const Function NULL_CLASS = this->NULL_OBJECT.constructor;

    /*actual*/ public: const std::vector<Object*> NULL_OBJECT_ARRAY = {};

    /*actual*/ public: const std::vector<int8_t> NULL_BYTE_ARRAY = [];

    /*actual*/ public: const std::vector<char> NULL_CHAR_ARRAY = 
                                                        
                                                        std::vector<char>(0)
                                                    ;

    /*actual*/ public: const std::vector<std::vector<int16_t>> NULL_SHORT_ARRAY_ARRAY = new Array(0).fill(null).map(() => new Array(0).fill(0));

    /*actual*/ public: const std::vector<int32_t> NULL_INT_ARRAY = [];

    /*actual*/ public: const std::vector<std::vector<int32_t>> NULL_INT_ARRAY_ARRAY = new Array(0).fill(null).map(() => new Array(0).fill(0));

    /*actual*/ public: const std::vector<std::vector<std::vector<int32_t>>> NULL_INT_ARRAY_ARRAY_ARRAY = Array.from({ length: 0 }, () => Array.from({ length: 0 }, () => new Array(0).fill(0)));

    /*actual*/ public: const std::vector<float> NULL_FLOAT_ARRAY = [];

    /*actual*/ public: const Vector<any> EMPTY_VECTOR = Vector<any>();

    /*actual*/ public: const Hashtable<any, any> NULL_TABLE = Hashtable<any, any>();

    /*actual*/ public: const HashMap<any, any> NULL_MAP = HashMap<any, any>();

};

            

