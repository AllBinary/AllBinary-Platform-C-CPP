
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_OBJECTPERMUTATIONVISITOR_H
        #define ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_OBJECTPERMUTATIONVISITOR_H

            #include "../../../../../java/lang/System.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ObjectPermutationVisitor: public Visitor {
        

    const data: std::vector<any>;

public constructor (std::vector<any> data);

    private: stringBuilder: StringMaker = new StringMaker();

    public any visit(any = {} anyType);

    public print(std::vector<any> data);

    public print(std::vector<any> data, StringMaker stringBuilder);

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_OBJECTPERMUTATIONVISITOR_H
