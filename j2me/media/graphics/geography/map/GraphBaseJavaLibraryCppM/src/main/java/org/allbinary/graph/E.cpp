
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPH_E_CPP
        #define ORG_ALLBINARY_GRAPH_E_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graph/E.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

E::E() {
        }
        auto E::e_owner() -> E* { static std::unique_ptr<E> value(new E()); return value.get(); }
E* E::e = E::e_owner();

    auto E::newInstance() -> E*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return E::e;
    
}




        #endif //ORG_ALLBINARY_GRAPH_E_CPP
