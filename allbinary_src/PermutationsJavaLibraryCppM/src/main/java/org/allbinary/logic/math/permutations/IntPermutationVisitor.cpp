
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_INTPERMUTATIONVISITOR_CPP
        #define ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_INTPERMUTATIONVISITOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/math/permutations/IntPermutationVisitor.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

IntPermutationVisitor::IntPermutationVisitor(std::vector<int32_t> data) : stringBuilder(new StringMaker()){
this->data= data;
    
}


    auto IntPermutationVisitor::visit(Object* anyType) -> Object*{
this->stringBuilder->delete_(0, stringBuilder->length());
    
this->print(this->data, stringBuilder);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(NullUtil::getInstance()->NULL_OBJECT);
    
}


    auto IntPermutationVisitor::print(std::vector<int32_t> data) -> void{

    StringMaker* stringBuilder = new StringMaker();;
    
this->print(data, stringBuilder);
    
}


    auto IntPermutationVisitor::print(std::vector<int32_t> data, StringMaker* stringBuilder) -> void{

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    int32_t size = data.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {
stringBuilder->appendint(data[i]);
    
stringBuilder->append(commonSeps->SPACE);
    
}

System.out.println(stringBuilder->toString());
    
}




        #endif //ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_INTPERMUTATIONVISITOR_CPP
