
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_INTPERMUTATIONVISITOR_H
        #define ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_INTPERMUTATIONVISITOR_H

            #include "../../../../../java/lang/System.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class IntPermutationVisitor: public Visitor {
        

    const data: std::vector<int32_t>;

public constructor (std::vector<int32_t> data);

    private: stringBuilder: StringMaker = new StringMaker();

    public any visit(any = {} anyType);

    public print(std::vector<int32_t> data);

    public print(std::vector<int32_t> data, StringMaker stringBuilder);

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_INTPERMUTATIONVISITOR_H
