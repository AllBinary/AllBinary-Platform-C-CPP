
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDOBJECTARRAYPERMUTATIONUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDOBJECTARRAYPERMUTATIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/math/permutations/OrderedObjectArrayPermutationUtil.h"
        

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

auto OrderedObjectArrayPermutationUtil::instance_owner() -> OrderedObjectArrayPermutationUtil* { static std::unique_ptr<OrderedObjectArrayPermutationUtil> value(new OrderedObjectArrayPermutationUtil()); return value.get(); }
OrderedObjectArrayPermutationUtil* OrderedObjectArrayPermutationUtil::instance = OrderedObjectArrayPermutationUtil::instance_owner();

    auto OrderedObjectArrayPermutationUtil::getInstance() -> OrderedObjectArrayPermutationUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return OrderedObjectArrayPermutationUtil::instance;
    
}


OrderedObjectArrayPermutationUtil::OrderedObjectArrayPermutationUtil(){
}


    auto OrderedObjectArrayPermutationUtil::getNext(std::vector<Object*> data) -> void{

    int32_t length = data.size();;
    

    int32_t i = length -1;;
    

    TsUtil* tsUtil = TsUtil::getInstance();;
    

        while(tsUtil->hashCode(data[i -1]) >= tsUtil->hashCode(data[i]))
        {
i= i -1;
    
}


    int32_t j = length;;
    

        while(tsUtil->hashCode(data[j -1]) <= tsUtil->hashCode(data[i -1]))
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


    auto OrderedObjectArrayPermutationUtil::swap(std::vector<Object*> data, int32_t a, int32_t b) -> void{

    Object* temp = data[a];;
    
data[a]= data[b];
    
data[b]= temp;
    
}


    auto OrderedObjectArrayPermutationUtil::factorial(int32_t dataLength) -> int64_t{

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


    auto OrderedObjectArrayPermutationUtil::generate(std::vector<Object*> data, Visitor* visitor) -> void{

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


    auto OrderedObjectArrayPermutationUtil::main(std::vector<std::string> args) -> void{

    int32_t TOTAL = 7;;
    

    std::vector<Object*> data = std::vector<Object*>(TOTAL);;
    




                        for (
    int32_t i = 0;i < TOTAL; i++)
        {
data[i]= new ComparableObject();
    
}

Arrays::sort(data);
    

    ObjectPermutationVisitor* permutationVisitor = new ObjectPermutationVisitor(data);;
    

    std::string ORIGINAL_DATA_LABEL = "Original Data: ";;
    
System.out.print(ORIGINAL_DATA_LABEL);
    
permutationVisitor->visit(data);
    
OrderedObjectArrayPermutationUtil::getInstance()->generate(data, permutationVisitor);
    
}




        #endif //ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_ORDEREDOBJECTARRAYPERMUTATIONUTIL_CPP
