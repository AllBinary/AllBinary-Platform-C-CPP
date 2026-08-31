
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/System.h"
        
#include <java/util/Arrays.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ComparableObject.h"
#include "ObjectPermutationVisitor.h"

class OrderedObjectArrayPermutationUtil
            : public Object
         {
        

    private: static const instance: OrderedObjectArrayPermutationUtil = new OrderedObjectArrayPermutationUtil();

    public static OrderedObjectArrayPermutationUtil getInstance();

    public static main(std::vector<string> args);

    private: const TOTAL_ITERATIONS_TABLE: string = "Total Iterations: ";

    private: const FINISHED: string = "\nFINISHED";

private constructor ();

    public getNext(std::vector<any> data);

    public swap(std::vector<any> data, int32_t a, int32_t b);

    public int64_t factorial(int32_t dataLength);

    public generate(std::vector<any> data, Visitor visitor);

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDOBJECTARRAYPERMUTATIONUTIL_H
