
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "IntPermutationVisitor.h"

class OrderedIntArrayPermutationUtil
            : public Object
         {

    private: static OrderedIntArrayPermutationUtil instance() { return OrderedIntArrayPermutationUtil(); }

    public: static OrderedIntArrayPermutationUtil getInstance();

    public: static void main(std::vector<std::string> args);

    private: const std::string TOTAL_ITERATIONS_TABLE = "Total Iterations: ";

    private: const std::string FINISHED = "\nFINISHED";

private: OrderedIntArrayPermutationUtil();

    public: void getNext(std::vector<int32_t> data);

    public: void swap(std::vector<int32_t> data, int32_t a, int32_t b);

    public: int64_t factorial(int32_t dataLength);

    public: void generate(std::vector<int32_t> data, Visitor visitor);

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDINTARRAYPERMUTATIONUTIL_H
