
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //ActualPlatform
/*actual*/ class NullUtil
            : public virtual Object
         {

    private: static NullUtil* instance_owner();
    private: static NullUtil* instance;

    /*actual*/ public: static NullUtil* getInstance();


            
    public: NullUtil();
        
    /*actual*/ public: Object* NULL_OBJECT;

    /*actual*/ public: Class* NULL_CLASS;

    /*actual*/ public: std::vector<Object*> NULL_OBJECT_ARRAY;

    /*actual*/ public: std::vector<char> NULL_CHAR_ARRAY;

    /*actual*/ public: std::vector<int8_t> NULL_BYTE_ARRAY;

    /*actual*/ public: std::vector<std::vector<int16_t>> NULL_SHORT_ARRAY_ARRAY;

    /*actual*/ public: std::vector<int32_t> NULL_INT_ARRAY;

    /*actual*/ public: std::vector<std::vector<int32_t>> NULL_INT_ARRAY_ARRAY;

    /*actual*/ public: std::vector<std::vector<std::vector<int32_t>>> NULL_INT_ARRAY_ARRAY_ARRAY;

    /*actual*/ public: std::vector<float> NULL_FLOAT_ARRAY;

    /*actual*/ public: Vector<Object*>* EMPTY_VECTOR;

    /*actual*/ public: Hashtable<Object*, Object*>* NULL_TABLE;

};

            


        #endif //ORG_ALLBINARY_LOGIC_NULLUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_NULLUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_NULLUTIL_H_COMPLETE
        #if __has_include(<java/util/Hashtable.h>)
#include <java/util/Hashtable.h>
#endif
#if __has_include(<java/util/Vector.h>)
#include <java/util/Vector.h>
#endif

        #endif
    
