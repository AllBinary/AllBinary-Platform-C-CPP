
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDINTARRAYPERMUTATIONUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDINTARRAYPERMUTATIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/math/permutations/OrderedIntArrayPermutationUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/math/permutations/IntPermutationVisitor.h"

auto OrderedIntArrayPermutationUtil::instance_owner() -> OrderedIntArrayPermutationUtil* { static std::unique_ptr<OrderedIntArrayPermutationUtil> value(new OrderedIntArrayPermutationUtil()); return value.get(); }
OrderedIntArrayPermutationUtil* OrderedIntArrayPermutationUtil::instance = OrderedIntArrayPermutationUtil::instance_owner();

    auto OrderedIntArrayPermutationUtil::getInstance() -> OrderedIntArrayPermutationUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OrderedIntArrayPermutationUtil::instance;
    
}


OrderedIntArrayPermutationUtil::OrderedIntArrayPermutationUtil(){
}


    auto OrderedIntArrayPermutationUtil::getNext(std::vector<int32_t> data) -> void{

    int32_t length = data.size();;
    

    int32_t i = length -1;;
    

        while(data[i -1] >= data[i])
        {
i= i -1;
    
}


    int32_t j = length;;
    

        while(data[j -1] <= data[i -1])
        {
j= j -1;
    
}

this->swap(data, i -1, j -1);
    
i++;
    
j= length;
    

        while(i < j)
        {
this->swap(data, i -1, j -1);
    
i++;
    
j--;
    
}

}


    auto OrderedIntArrayPermutationUtil::swap(std::vector<int32_t> data, int32_t a, int32_t b) -> void{

    int32_t temp = data[a];;
    
data[a]= data[b];
    
data[b]= temp;
    
}


    auto OrderedIntArrayPermutationUtil::factorial(int32_t dataLength) -> int64_t{

    int64_t temp = 1;;
    

                        if(dataLength > 1)
                        
                                    {
                                    



                        for (
    int32_t i = 1;i <= dataLength; i++)
        {
temp *= i;
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return temp;
    
}


    auto OrderedIntArrayPermutationUtil::generate(std::vector<int32_t> data, Visitor* visitor) -> void{

    int64_t iterations = this->factorial(data.size());;
    
System.out.print(this->TOTAL_ITERATIONS_TABLE);
    
System.out.println(iterations);
    




                        for (
    int64_t count = 0;count < iterations -1; count++)
        {
this->getNext(data);
    
visitor->visit(this);
    
}

System.out.println(this->FINISHED);
    
}


    auto OrderedIntArrayPermutationUtil::main(std::vector<std::string> args) -> void{

    int32_t TOTAL = 3;;
    

    std::vector<int32_t> data = std::vector<int32_t>(TOTAL);;
    




                        for (
    int32_t i = 0;i < TOTAL; i++)
        {
data[i]= i;
    
}


    IntPermutationVisitor* permutationVisitor = new IntPermutationVisitor(data);;
    

    std::string ORIGINAL_DATA_LABEL = "Original Data: ";;
    
System.out.print(ORIGINAL_DATA_LABEL);
    
permutationVisitor->print(data);
    
OrderedIntArrayPermutationUtil::getInstance()->generate(data, permutationVisitor);
    
}




        #endif //ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDINTARRAYPERMUTATIONUTIL_CPP
