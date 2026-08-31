
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/System.h"
        
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "IntPermutationVisitor.h"

class OrderedIntArrayPermutationUtil
            : public Object
         {
        

    private: static const instance: OrderedIntArrayPermutationUtil = new OrderedIntArrayPermutationUtil();

    public static OrderedIntArrayPermutationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OrderedIntArrayPermutationUtil.instance;
    
}


    public static main(std::vector<string> args){

    TOTAL: int32_t = 3;;
    

    data: std::vector<int32_t> = new Array(TOTAL);;
    




                        for (
    i: int32_t = 0;i < TOTAL; i++)
        {
data[i]= i;
    
}


    permutationVisitor: IntPermutationVisitor = new IntPermutationVisitor(data);;
    

    ORIGINAL_DATA_LABEL: string = "Original Data: ";;
    
console.log(ORIGINAL_DATA_LABEL);
    
permutationVisitor!.print(data);
    
OrderedIntArrayPermutationUtil.getInstance()!.generate(data, permutationVisitor);
    
}


    private: const TOTAL_ITERATIONS_TABLE: string = "Total Iterations: ";

    private: const FINISHED: string = "\nFINISHED";

private constructor (){

            super();
        }


    public getNext(std::vector<int32_t> data){

    length: int32_t = data.length
                ;;
    

    i: int32_t = length -1;;
    

        while(data[i -1] >= data[i])
        {
i= i -1;
    
}


    j: int32_t = length;;
    

        while(data[j -1] <= data[i -1])
        {
j= j -1;
    
}

this.swap(data, i -1, j -1);
    
i++;
    
j= length;
    

        while(i < j)
        {
this.swap(data, i -1, j -1);
    
i++;
    
j--;
    
}

}


    public swap(std::vector<int32_t> data, int32_t a, int32_t b){

    temp: int32_t = data[a]!;;
    
data[a]= data[b]!;
    
data[b]= temp;
    
}


    public int64_t factorial(int32_t dataLength){

    temp: int64_t = 1;;
    

                        if(dataLength > 1)
                        
                                    {
                                    



                        for (
    i: int32_t = 1;i <= dataLength; i++)
        {
temp *= i;
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return temp;
    
}


    public generate(std::vector<int32_t> data, Visitor visitor){

    iterations: int64_t = this.factorial(data.length)!;;
    
console.log(this.TOTAL_ITERATIONS_TABLE);
    
console.log(iterations);
    




                        for (
    count: int64_t = 0;count < iterations -1; count++)
        {
this.getNext(data);
    
visitor.visit(this);
    
}

console.log(this.FINISHED);
    
}


};

            

