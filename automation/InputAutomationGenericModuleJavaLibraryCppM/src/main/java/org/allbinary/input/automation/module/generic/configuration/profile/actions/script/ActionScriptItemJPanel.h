
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

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "GridLayout.h"
#include "GroupLayout.h"
#include "Short.h"
#include "Dimension.h"

class ActionScriptItemJPanel: public javax::swing::JPanel {

public: ActionScriptItemJPanel();

    public: javax::swing::JPanel getNewActionScriptInputJPanel();

    public: void setNewActionScriptInputJPanel(javax::swing::JPanel newActionScriptInputJPanel);

    public: javax::swing::JPanel getRemoveJPanel();

    public: void setRemoveJPanel(javax::swing::JPanel removeJPanel);

    public: javax::swing::JPanel getScriptItemJPanel();

    public: void setScriptItemJPanel(javax::swing::JPanel scriptItemJPanel);

    public: javax::swing::JPanel getNewActionScriptConditionJPanel();

    public: void setNewActionScriptConditionJPanel(javax::swing::JPanel newActionScriptConditionJPanel);

    public: javax::swing::JPanel getChildActionScriptConditionJPanel();

    public: void setChildActionScriptConditionJPanel(javax::swing::JPanel childActionScriptConditionJPanel);

    private: void initComponents();

    private: javax::swing::JPanel childActionScriptConditionJPanel;

    private: javax::swing::JPanel newActionScriptConditionJPanel;

    private: javax::swing::JPanel newActionScriptInputJPanel;

    private: javax::swing::JPanel removeJPanel;

    private: javax::swing::JPanel scriptItemJPanel;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_ACTIONSCRIPTITEMJPANEL_H
