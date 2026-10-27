
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_ACTIONSCRIPTITEMJPANEL_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_ACTIONSCRIPTITEMJPANEL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JPanel.h"
class GridLayout;
class GroupLayout;
class Short;
class Dimension;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ActionScriptItemJPanel: public javax::swing::JPanel {

public: ActionScriptItemJPanel();

    public: javax::swing::JPanel* getNewActionScriptInputJPanel();

    public: void setNewActionScriptInputJPanel(javax::swing::JPanel* newActionScriptInputJPanel);

    public: javax::swing::JPanel* getRemoveJPanel();

    public: void setRemoveJPanel(javax::swing::JPanel* removeJPanel);

    public: javax::swing::JPanel* getScriptItemJPanel();

    public: void setScriptItemJPanel(javax::swing::JPanel* scriptItemJPanel);

    public: javax::swing::JPanel* getNewActionScriptConditionJPanel();

    public: void setNewActionScriptConditionJPanel(javax::swing::JPanel* newActionScriptConditionJPanel);

    public: javax::swing::JPanel* getChildActionScriptConditionJPanel();

    public: void setChildActionScriptConditionJPanel(javax::swing::JPanel* childActionScriptConditionJPanel);

    private: void initComponents();

    private: javax::swing::JPanel* childActionScriptConditionJPanel;

    private: javax::swing::JPanel* newActionScriptConditionJPanel;

    private: javax::swing::JPanel* newActionScriptInputJPanel;

    private: javax::swing::JPanel* removeJPanel;

    private: javax::swing::JPanel* scriptItemJPanel;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_ACTIONSCRIPTITEMJPANEL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_ACTIONSCRIPTITEMJPANEL_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_ACTIONSCRIPTITEMJPANEL_H_COMPLETE
        #if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JPanel.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JPanel.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GridLayout.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GridLayout.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GroupLayout.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GroupLayout.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/script/Short.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/Short.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/script/Dimension.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/Dimension.h"
#endif

        #endif
    
