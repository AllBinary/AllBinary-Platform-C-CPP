
        /*
                *  
                *  To change this license header, choose License Headers in Project Properties. 
                *  To change this template file, choose Tools | Templates  and open the template in the editor.  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_JTREEINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_JTREEINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/actions/script/JTreeInterfaceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/JTreeInterface.h"


JTreeInterfaceFactory::JTreeInterfaceFactory() {
        }
        auto JTreeInterfaceFactory::instance_owner() -> JTreeInterfaceFactory* { static std::unique_ptr<JTreeInterfaceFactory> value(new JTreeInterfaceFactory()); return value.get(); }
JTreeInterfaceFactory* JTreeInterfaceFactory::instance = JTreeInterfaceFactory::instance_owner();

    auto JTreeInterfaceFactory::getInstance() -> JTreeInterfaceFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JTreeInterfaceFactory::instance;
    
}


    auto JTreeInterfaceFactory::set(JTreeInterface* jTreeInterface) -> void{
this->jTreeInterface= jTreeInterface;
    
}


    auto JTreeInterfaceFactory::getJTreeInterface() -> JTreeInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->jTreeInterface;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_JTREEINTERFACEFACTORY_CPP
