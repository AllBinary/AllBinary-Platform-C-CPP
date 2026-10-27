
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_JTREEINTERFACE_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_JTREEINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class JTree;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class JTreeInterface
            : public virtual Object
         {

    public: virtual void updateJTree() = 0;

    public: virtual javax::swing::JTree* getActionScriptJTree() = 0;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_JTREEINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_JTREEINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_JTREEINTERFACE_H_COMPLETE
        #if __has_include("org/allbinary/input/automation/actions/script/JTree.h")
#include "org/allbinary/input/automation/actions/script/JTree.h"
#endif

        #endif
    
