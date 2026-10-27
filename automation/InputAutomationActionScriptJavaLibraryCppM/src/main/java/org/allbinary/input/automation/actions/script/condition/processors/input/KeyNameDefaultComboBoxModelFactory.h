
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYNAMEDEFAULTCOMBOBOXMODELFACTORY_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYNAMEDEFAULTCOMBOBOXMODELFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt/event/KeyEvent.h>
#include <javax/swing.h>
class KeySingletonFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class DefaultComboBoxModel;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class KeyNameDefaultComboBoxModelFactory
            : public virtual Object
         {

    public: static DefaultComboBoxModel* getInstance();

private: KeyNameDefaultComboBoxModelFactory();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYNAMEDEFAULTCOMBOBOXMODELFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYNAMEDEFAULTCOMBOBOXMODELFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYNAMEDEFAULTCOMBOBOXMODELFACTORY_H_COMPLETE
        #if __has_include(<java/awt/event/KeyEvent.h>)
#include <java/awt/event/KeyEvent.h>
#endif
#if __has_include(<javax/swing.h>)
#include <javax/swing.h>
#endif
#if __has_include(<org/allbinary/input/KeySingletonFactory.h>)
#include <org/allbinary/input/KeySingletonFactory.h>
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/DefaultComboBoxModel.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/DefaultComboBoxModel.h"
#endif

        #endif
    
