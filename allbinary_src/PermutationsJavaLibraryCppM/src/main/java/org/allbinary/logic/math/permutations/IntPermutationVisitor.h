
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_INTPERMUTATIONVISITOR_H
        #define ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_INTPERMUTATIONVISITOR_H

            #include <vector>
        
            #include "../../../../../java/lang/System.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class IntPermutationVisitor: public Visitor {

    protected: std::vector<int32_t> data;

public: IntPermutationVisitor(std::vector<int32_t> data);

    private: StringMaker stringBuilder = StringMaker();

    public: Object* visit(Object* anyType);

    public: void print(std::vector<int32_t> data);

    public: void print(std::vector<int32_t> data, StringMaker stringBuilder);

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_INTPERMUTATIONVISITOR_H
