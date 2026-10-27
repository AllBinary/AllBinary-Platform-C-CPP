
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_OBJECTPERMUTATIONVISITOR_H
        #define ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_OBJECTPERMUTATIONVISITOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
class TsUtil;
class NullUtil;
class StringMaker;
#include <org/allbinary/logic/util/visitor/Visitor.h>
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ObjectPermutationVisitor: public Visitor {

    /*protected*/ public: std::vector<Object*> data;

public: ObjectPermutationVisitor(std::vector<Object*> data);

    private: StringMaker* stringBuilder;

    public: Object* visit(Object* anyType);
    public: Object* visit(const std::string& anyType) { return visit(JavaString::box(anyType)); }

    public: void print(std::vector<Object*> data);

    public: void print(std::vector<Object*> data, StringMaker* stringBuilder);

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_OBJECTPERMUTATIONVISITOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_OBJECTPERMUTATIONVISITOR_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_OBJECTPERMUTATIONVISITOR_H_COMPLETE
        #if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/util/visitor/Visitor.h>)
#include <org/allbinary/logic/util/visitor/Visitor.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif

        #endif
    
