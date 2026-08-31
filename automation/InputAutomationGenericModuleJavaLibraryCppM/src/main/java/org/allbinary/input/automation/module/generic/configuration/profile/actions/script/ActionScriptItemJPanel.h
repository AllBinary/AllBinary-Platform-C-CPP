
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

class ActionScriptItemJPanel: public javax.swing.JPanel {
        

public constructor ();

    public javax.swing.JPanel getNewActionScriptInputJPanel();

    public setNewActionScriptInputJPanel(javax.swing.JPanel newActionScriptInputJPanel);

    public javax.swing.JPanel getRemoveJPanel();

    public setRemoveJPanel(javax.swing.JPanel removeJPanel);

    public javax.swing.JPanel getScriptItemJPanel();

    public setScriptItemJPanel(javax.swing.JPanel scriptItemJPanel);

    public javax.swing.JPanel getNewActionScriptConditionJPanel();

    public setNewActionScriptConditionJPanel(javax.swing.JPanel newActionScriptConditionJPanel);

    public javax.swing.JPanel getChildActionScriptConditionJPanel();

    public setChildActionScriptConditionJPanel(javax.swing.JPanel childActionScriptConditionJPanel);

    initComponents();

    private: childActionScriptConditionJPanel: javax.swing.JPanel;

    private: newActionScriptConditionJPanel: javax.swing.JPanel;

    private: newActionScriptInputJPanel: javax.swing.JPanel;

    private: removeJPanel: javax.swing.JPanel;

    private: scriptItemJPanel: javax.swing.JPanel;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_ACTIONSCRIPTITEMJPANEL_H
