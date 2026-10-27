
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDINTARRAYPERMUTATIONUTIL_H
        #define ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDINTARRAYPERMUTATIONUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
class Visitor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class IntPermutationVisitor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OrderedIntArrayPermutationUtil
            : public virtual Object
         {

    private: static OrderedIntArrayPermutationUtil* instance_owner();
    private: static OrderedIntArrayPermutationUtil* instance;

    public: static OrderedIntArrayPermutationUtil* getInstance();

    public: static void main(std::vector<std::string> args);

    private: const std::string TOTAL_ITERATIONS_TABLE = "Total Iterations: ";

    private: const std::string FINISHED = "\nFINISHED";

private: OrderedIntArrayPermutationUtil();

    public: void getNext(std::vector<int32_t> data);

    public: void swap(std::vector<int32_t> data, int32_t a, int32_t b);

    public: int64_t factorial(int32_t dataLength);

    public: void generate(std::vector<int32_t> data, Visitor* visitor);

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDINTARRAYPERMUTATIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDINTARRAYPERMUTATIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDINTARRAYPERMUTATIONUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/util/visitor/Visitor.h>)
#include <org/allbinary/logic/util/visitor/Visitor.h>
#endif
#if __has_include("org/allbinary/logic/math/permutations/IntPermutationVisitor.h")
#include "org/allbinary/logic/math/permutations/IntPermutationVisitor.h"
#endif

        #endif
    
