
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

    public: static OrderedIntArrayPermutationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OrderedIntArrayPermutationUtil::instance();
    
}


    public: static void main(std::vector<std::string> args){

    int32_t TOTAL = 3;;
    

    std::vector<int32_t> data = std::vector<int32_t>(TOTAL);;
    




                        for (
    int32_t i = 0;i < TOTAL; i++)
        {
data[i]= i;
    
}


    IntPermutationVisitor permutationVisitor = IntPermutationVisitor(data);;
    

    std::string ORIGINAL_DATA_LABEL = "Original Data: ";;
    
console.log(ORIGINAL_DATA_LABEL);
    
permutationVisitor.print(data);
    
OrderedIntArrayPermutationUtil::getInstance().generate(data, permutationVisitor);
    
}


    private: const std::string TOTAL_ITERATIONS_TABLE = "Total Iterations: ";

    private: const std::string FINISHED = "\nFINISHED";

private: OrderedIntArrayPermutationUtil(){
}


    public: void getNext(std::vector<int32_t> data){

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


    public: void swap(std::vector<int32_t> data, int32_t a, int32_t b){

    int32_t temp = data[a];;
    
data[a]= data[b];
    
data[b]= temp;
    
}


    public: int64_t factorial(int32_t dataLength){

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


    public: void generate(std::vector<int32_t> data, Visitor visitor){

    int64_t iterations = this->factorial(data.size());;
    
console.log(this->TOTAL_ITERATIONS_TABLE);
    
console.log(iterations);
    




                        for (
    int64_t count = 0;count < iterations -1; count++)
        {
this->getNext(data);
    
visitor.visit(this);
    
}

console.log(this->FINISHED);
    
}


};

            

