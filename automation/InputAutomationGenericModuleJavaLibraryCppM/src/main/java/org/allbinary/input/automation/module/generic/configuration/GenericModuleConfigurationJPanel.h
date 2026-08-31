
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_GENERICMODULECONFIGURATIONJPANEL_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_GENERICMODULECONFIGURATIONJPANEL_H

            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfile.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfiles.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActions.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionsJPanel.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "GenericModuleConfigurationInterface.h"
#include "JDialog.h"
#include "JButton.h"
#include "JLabel.h"
#include "JTextField.h"
#include "ButtonGroup.h"
#include "JTabbedPane.h"
#include "JScrollPane.h"
#include "JList.h"
#include "JRadioButton.h"
#include "JCheckBox.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "GroupLayout.h"
#include "Short.h"
#include "GridLayout.h"
#include "ListSelectionListener.h"
#include "ListSelectionEvent.h"
#include "Insets.h"

class GenericModuleConfigurationJPanel: public javax.swing.JPanel: public GenericModuleConfigurationInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const stringUtil: StringUtil = StringUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: genericProfiles: GenericProfiles;

    private: selectedGenericProfile: GenericProfile;

public constructor ();

    initComponents();

    savedCaptureJRadioButtonActionPerformed(java.awt.event.ActionEvent evt);

    screenCaptureJRadioButtonActionPerformed(java.awt.event.ActionEvent evt);

    captureMotionAnalysisJCheckBoxActionPerformed(java.awt.event.ActionEvent evt);

    captureComparisonJCheckBoxActionPerformed(java.awt.event.ActionEvent evt);

                //@Throws(Exception.constructor)
            
    updateProfileUI(string profileNameString);

                //@Throws(Exception.constructor)
            
    selectFirstElement();

                //@Throws(Exception.constructor)
            
    updateProfileOptions();

    public javax.swing.JPanel getBlankGenericProfileActionsJPanel();

    public setBlankGenericProfileActionsJPanel(javax.swing.JPanel blankGenericProfileActionsJPanel);

    GenericProfiles getGenericProfiles();

    setGenericProfiles(GenericProfiles genericProfiles);

    public GenericProfile getSelectedGenericProfile();

    public setSelectedGenericProfile(GenericProfile selectedGenericProfile);

    genericProfilesJListValueChanged(javax.swing.event.ListSelectionEvent evt);

    deleteProfileJButtonActionPerformed(java.awt.event.ActionEvent evt);

    okNewProfileJButtonActionPerformed(java.awt.event.ActionEvent evt);

    newProfileJButtonActionPerformed(java.awt.event.ActionEvent evt);

    private: blankGenericProfileActionsJPanel: javax.swing.JPanel;

    private: buttonGroup2: javax.swing.ButtonGroup;

    private: captureComparisonJCheckBox: javax.swing.JCheckBox;

    private: captureMotionAnalysisJCheckBox: javax.swing.JCheckBox;

    private: deleteProfileJButton: javax.swing.JButton;

    private: genericJTabbedPane: javax.swing.JTabbedPane;

    private: genericProfilesJList: javax.swing.JList;

    private: genericProfilesJPanel: javax.swing.JPanel;

    private: genericProfilesJScrollPane: javax.swing.JScrollPane;

    private: jLabel1: javax.swing.JLabel;

    private: jLabel2: javax.swing.JLabel;

    private: jLabel3: javax.swing.JLabel;

    private: jPanel1: javax.swing.JPanel;

    private: newProfileJButton: javax.swing.JButton;

    private: newProfileJDialog: javax.swing.JDialog;

    private: newProfileNameJLabel: javax.swing.JLabel;

    private: newProfileNameJTextField: javax.swing.JTextField;

    private: okNewProfileJButton: javax.swing.JButton;

    private: savedCaptureJRadioButton: javax.swing.JRadioButton;

    private: screenCaptureJRadioButton: javax.swing.JRadioButton;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_GENERICMODULECONFIGURATIONJPANEL_H
