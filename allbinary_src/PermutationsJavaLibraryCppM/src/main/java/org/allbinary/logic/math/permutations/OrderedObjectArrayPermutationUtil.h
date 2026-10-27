
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
#include <java/util/Arrays.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/math/permutations/ComparableObject.h"
#include "org/allbinary/logic/math/permutations/ObjectPermutationVisitor.h"

class OrderedObjectArrayPermutationUtil
            : public Object
         {

    private: static OrderedObjectArrayPermutationUtil* instance() { static std::unique_ptr<OrderedObjectArrayPermutationUtil> value(new OrderedObjectArrayPermutationUtil()); return value.get(); }

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
