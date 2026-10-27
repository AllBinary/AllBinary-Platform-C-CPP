
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDOBJECTARRAYPERMUTATIONUTIL_H
        #define ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDOBJECTARRAYPERMUTATIONUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
#include <java/util/Arrays.h>
class TsUtil;
class Visitor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ComparableObject;
class ObjectPermutationVisitor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OrderedObjectArrayPermutationUtil
            : public virtual Object
         {

    private: static OrderedObjectArrayPermutationUtil* instance_owner();
    private: static OrderedObjectArrayPermutationUtil* instance;

    public: static OrderedObjectArrayPermutationUtil* getInstance();

    public: static void main(std::vector<std::string> args);

    private: const std::string TOTAL_ITERATIONS_TABLE = "Total Iterations: ";

    private: const std::string FINISHED = "\nFINISHED";

private: OrderedObjectArrayPermutationUtil();

    public: void getNext(std::vector<Object*> data);

    public: void swap(std::vector<Object*> data, int32_t a, int32_t b);

    public: int64_t factorial(int32_t dataLength);

    public: void generate(std::vector<Object*> data, Visitor* visitor);

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDOBJECTARRAYPERMUTATIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDOBJECTARRAYPERMUTATIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDOBJECTARRAYPERMUTATIONUTIL_H_COMPLETE
        #if __has_include(<java/util/Arrays.h>)
#include <java/util/Arrays.h>
#endif
#if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/visitor/Visitor.h>)
#include <org/allbinary/logic/util/visitor/Visitor.h>
#endif
#if __has_include("org/allbinary/logic/math/permutations/ComparableObject.h")
#include "org/allbinary/logic/math/permutations/ComparableObject.h"
#endif
#if __has_include("org/allbinary/logic/math/permutations/ObjectPermutationVisitor.h")
#include "org/allbinary/logic/math/permutations/ObjectPermutationVisitor.h"
#endif

        #endif
    
