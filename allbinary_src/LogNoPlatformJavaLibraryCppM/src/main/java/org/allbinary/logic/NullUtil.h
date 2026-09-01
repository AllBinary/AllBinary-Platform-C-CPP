
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
        
#include <java/util/Hashtable.h>

      
#include <java/util/Vector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //NoPlatform
// class NullUtil
            : public Object
         {

    private: static NullUtil instance() { return NullUtil(); }

    public: static NullUtil getInstance();

    public: const Object* NULL_OBJECT

    public: const Function NULL_CLASS

    public: const std::vector<Object*> NULL_OBJECT_ARRAY

    public: const std::vector<char> NULL_CHAR_ARRAY

    public: const std::vector<int8_t> NULL_BYTE_ARRAY

    public: const std::vector<std::vector<int16_t>> NULL_SHORT_ARRAY_ARRAY

    public: const std::vector<int32_t> NULL_INT_ARRAY

    public: const std::vector<std::vector<int32_t>> NULL_INT_ARRAY_ARRAY

    public: const std::vector<std::vector<std::vector<int32_t>>> NULL_INT_ARRAY_ARRAY_ARRAY

    public: const std::vector<float> NULL_FLOAT_ARRAY

    public: const Vector<any> EMPTY_VECTOR

    public: const Hashtable<any, any> NULL_TABLE

};

            


        #endif //ORG_ALLBINARY_LOGIC_NULLUTIL_H
