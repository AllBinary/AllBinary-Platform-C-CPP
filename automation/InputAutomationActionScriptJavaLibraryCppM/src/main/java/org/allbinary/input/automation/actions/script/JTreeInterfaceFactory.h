
        /*
                *  
                *  To change this license header, choose License Headers in Project Properties. 
                *  To change this template file, choose Tools | Templates  and open the template in the editor.  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_JTREEINTERFACEFACTORY_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_JTREEINTERFACEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class JTreeInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class JTreeInterfaceFactory
            : public virtual Object
         {

    private: static JTreeInterfaceFactory* instance_owner();
    private: static JTreeInterfaceFactory* instance;

    public: static JTreeInterfaceFactory* getInstance();


            
    public: JTreeInterfaceFactory();
        
    private: JTreeInterface* jTreeInterface;

    public: void set(JTreeInterface* jTreeInterface);

    public: JTreeInterface* getJTreeInterface();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_JTREEINTERFACEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_JTREEINTERFACEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_JTREEINTERFACEFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/input/automation/actions/script/JTreeInterface.h")
#include "org/allbinary/input/automation/actions/script/JTreeInterface.h"
#endif

        #endif
    
