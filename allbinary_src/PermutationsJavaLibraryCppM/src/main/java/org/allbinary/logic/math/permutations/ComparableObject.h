
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2011 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_COMPARABLEOBJECT_H
        #define ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_COMPARABLEOBJECT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class TsUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/math/permutations/Comparable.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ComparableObject
            : public virtual Object
        , public Comparable<Object*> {


            
    public: ComparableObject();
        
    public: int32_t compareTo(Object* anyType);
    public: int32_t compareTo(const std::string& anyType) { return compareTo(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> int32_t compareTo(BoxValue anyType) { return compareTo(JavaBoxes::toObject(anyType)); }

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_COMPARABLEOBJECT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_COMPARABLEOBJECT_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_COMPARABLEOBJECT_H_COMPLETE
        #if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include("org/allbinary/logic/math/permutations/Comparable.h")
#include "org/allbinary/logic/math/permutations/Comparable.h"
#endif

        #endif
    
