
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VECTORUTIL_H
        #define ORG_ALLBINARY_LOGIC_VECTORUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Vector.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VectorUtil
            : public virtual Object
         {

    private: static VectorUtil* instance_owner();
    private: static VectorUtil* instance;

    public: static VectorUtil* getInstance();


            
    public: VectorUtil();
        
    public: int32_t getSize(Object* anyType);
    public: int32_t getSize(const std::string& anyType) { return getSize(JavaString::box(anyType)); }

    public: Object* elementAt(Object* anyType, int32_t index);
    public: Object* elementAt(const std::string& anyType, int32_t index) { return elementAt(JavaString::box(anyType), index); }

};

            


        #endif //ORG_ALLBINARY_LOGIC_VECTORUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VECTORUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VECTORUTIL_H_COMPLETE
        #if __has_include(<java/util/Vector.h>)
#include <java/util/Vector.h>
#endif

        #endif
    
