
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_OBJECTPERMUTATIONVISITOR_H
        #define ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_OBJECTPERMUTATIONVISITOR_H

            #include <vector>
        
            #include "java/lang/System.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ObjectPermutationVisitor: public Visitor {

    protected: std::vector<Object*> data;

public: ObjectPermutationVisitor(std::vector<Object*> data);

    private: StringMaker stringBuilder = StringMaker();

    public: Object* visit(Object* anyType);

    public: void print(std::vector<Object*> data);

    public: void print(std::vector<Object*> data, StringMaker stringBuilder);

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_OBJECTPERMUTATIONVISITOR_H
