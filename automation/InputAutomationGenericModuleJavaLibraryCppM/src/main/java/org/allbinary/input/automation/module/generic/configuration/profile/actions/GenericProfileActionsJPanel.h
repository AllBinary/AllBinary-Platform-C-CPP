
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONSJPANEL_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONSJPANEL_H

            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/input/automation/module/DefaultListModelHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "GenericProfileActions.h"
#include "GenericProfileActionJPanel.h"
#include "JDialog.h"
#include "JLabel.h"
#include "JButton.h"
#include "JTextField.h"
#include "JScrollPane.h"
#include "JList.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "GroupLayout.h"
#include "Short.h"
#include "ListSelectionListener.h"
#include "ListSelectionEvent.h"
#include "GenericProfileAction.h"

class GenericProfileActionsJPanel: public javax.swing.JPanel {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: genericProfileActions: GenericProfileActions;

    private: genericProfileActionJPanel: GenericProfileActionJPanel;

public constructor ();

    initComponents();

    public setModel();

    saveJButtonActionPerformed(java.awt.event.ActionEvent evt);

    updateProfileActionUI(string profileActionNameString);

    genericProfileActionsJListValueChanged(javax.swing.event.ListSelectionEvent evt);

    okNewProfileActionJButtonActionPerformed(java.awt.event.ActionEvent evt);

    deleteActionJButtonActionPerformed(java.awt.event.ActionEvent evt);

                //@Throws(Exception.constructor)
            
    public selectFirstElement();

    public GenericProfileActionJPanel getGenericProfileActionJPanel();

    public setGenericProfileActionJPanel(GenericProfileActionJPanel genericProfileActionJPanel);

    public GenericProfileActions getGenericProfileActions();

    public setGenericProfileActions(GenericProfileActions genericProfileActions);

    newActionJButtonActionPerformed(java.awt.event.ActionEvent evt);

    private: blankGenericProfileActionJPanel: javax.swing.JPanel;

    private: deleteActionJButton: javax.swing.JButton;

    private: genericProfileActionsJList: javax.swing.JList;

    private: genericProfileActionsJPanel: javax.swing.JPanel;

    private: genericProfileActionsJScrollPane: javax.swing.JScrollPane;

    private: newActionJButton: javax.swing.JButton;

    private: newProfileActionJDialog: javax.swing.JDialog;

    private: newProfileActionJLabel: javax.swing.JLabel;

    private: newProfileActionJTextField: javax.swing.JTextField;

    private: okNewProfileActionJButton: javax.swing.JButton;

    private: saveJButton: javax.swing.JButton;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONSJPANEL_H
