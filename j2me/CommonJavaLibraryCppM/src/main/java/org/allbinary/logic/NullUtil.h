
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
        
            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Class.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
/*actual*/ class NullUtil
            : public Object
         {

    private: static NullUtil instance() { return NullUtil(); }

    /*actual*/ public: static NullUtil getInstance();

    /*actual*/ public: const Object* NULL_OBJECT = {};

    /*actual*/ public: const Function NULL_CLASS = this->NULL_OBJECT.constructor;

    /*actual*/ public: const std::vector<Object*> NULL_OBJECT_ARRAY = {};

    /*actual*/ public: const std::vector<char> NULL_CHAR_ARRAY = 
                                                        
                                                        new Array(0)
                                                    ;

    /*actual*/ public: const std::vector<int8_t> NULL_BYTE_ARRAY = [];

    /*actual*/ public: const std::vector<std::vector<int16_t>> NULL_SHORT_ARRAY_ARRAY = new Array(0).fill(null).map(() => new Array(0).fill(0));

    /*actual*/ public: const std::vector<int32_t> NULL_INT_ARRAY = [];

    /*actual*/ public: const std::vector<std::vector<int32_t>> NULL_INT_ARRAY_ARRAY = new Array(0).fill(null).map(() => new Array(0).fill(0));

    /*actual*/ public: const std::vector<std::vector<std::vector<int32_t>>> NULL_INT_ARRAY_ARRAY_ARRAY = Array.from({ length: 0 }, () => Array.from({ length: 0 }, () => new Array(0).fill(0)));

    /*actual*/ public: const std::vector<float> NULL_FLOAT_ARRAY = [];

};

            


        #endif //ORG_ALLBINARY_LOGIC_NULLUTIL_H
