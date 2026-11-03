
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_VISITOR_VISITOR_H
        #define ORG_ALLBINARY_LOGIC_UTIL_VISITOR_VISITOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/visitor/VisitorInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Visitor
            : public virtual Object
        , public virtual VisitorInterface {

    private: static Visitor* instance_owner();
    private: static Visitor* instance;

    public: static Visitor* getInstance();


            
    public: Visitor();
        
    /*protected*/ public: NullUtil* nullUtil;

    public: Object* visit(Object* anyType);
    public: Object* visit(const std::string& anyType) { return visit(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> Object* visit(BoxValue anyType) { return visit(JavaBoxes::toObject(anyType)); }

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_VISITOR_VISITOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_VISITOR_VISITOR_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_VISITOR_VISITOR_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include("org/allbinary/logic/util/visitor/VisitorInterface.h")
#include "org/allbinary/logic/util/visitor/VisitorInterface.h"
#endif

        #endif
    
