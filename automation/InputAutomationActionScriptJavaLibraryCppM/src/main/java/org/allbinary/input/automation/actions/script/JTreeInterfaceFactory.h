
        /*
                *  
                *  To change this license header, choose License Headers in Project Properties. 
                *  To change this template file, choose Tools | Templates  and open the template in the editor.  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_JTREEINTERFACEFACTORY_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_JTREEINTERFACEFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/JTreeInterface.h"

class JTreeInterfaceFactory
            : public Object
         {

    private: static JTreeInterfaceFactory* instance() { static std::unique_ptr<JTreeInterfaceFactory> value(new JTreeInterfaceFactory()); return value.get(); }

    public: static JTreeInterfaceFactory* getInstance();

    private: JTreeInterface* jTreeInterface;

    public: void set(JTreeInterface* jTreeInterface);

    public: JTreeInterface* getJTreeInterface();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_JTREEINTERFACEFACTORY_H
