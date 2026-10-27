
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfile.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfiles.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActions.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionsJPanel.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/configuration/JPanel.h"
#include "org/allbinary/input/automation/module/generic/configuration/GenericModuleConfigurationInterface.h"
#include "org/allbinary/input/automation/module/generic/configuration/JDialog.h"
#include "org/allbinary/input/automation/module/generic/configuration/JButton.h"
#include "org/allbinary/input/automation/module/generic/configuration/JLabel.h"
#include "org/allbinary/input/automation/module/generic/configuration/JTextField.h"
#include "org/allbinary/input/automation/module/generic/configuration/ButtonGroup.h"
#include "org/allbinary/input/automation/module/generic/configuration/JTabbedPane.h"
#include "org/allbinary/input/automation/module/generic/configuration/JScrollPane.h"
#include "org/allbinary/input/automation/module/generic/configuration/JList.h"
#include "org/allbinary/input/automation/module/generic/configuration/JRadioButton.h"
#include "org/allbinary/input/automation/module/generic/configuration/JCheckBox.h"
#include "org/allbinary/input/automation/module/generic/configuration/Dimension.h"
#include "org/allbinary/input/automation/module/generic/configuration/ActionListener.h"
#include "org/allbinary/input/automation/module/generic/configuration/ActionEvent.h"
#include "org/allbinary/input/automation/module/generic/configuration/GroupLayout.h"
#include "org/allbinary/input/automation/module/generic/configuration/Short.h"
#include "org/allbinary/input/automation/module/generic/configuration/GridLayout.h"
#include "org/allbinary/input/automation/module/generic/configuration/ListSelectionListener.h"
#include "org/allbinary/input/automation/module/generic/configuration/ListSelectionEvent.h"
#include "org/allbinary/input/automation/module/generic/configuration/Insets.h"

class GenericModuleConfigurationJPanel: public javax::swing::JPanel, public GenericModuleConfigurationInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: StringUtil* stringUtil = StringUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: GenericProfiles* genericProfiles;

    private: GenericProfile* selectedGenericProfile;

public: GenericModuleConfigurationJPanel();

    private: void initComponents();

    private: void savedCaptureJRadioButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void screenCaptureJRadioButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void captureMotionAnalysisJCheckBoxActionPerformed(java::awt::event::ActionEvent* evt);

    private: void captureComparisonJCheckBoxActionPerformed(java::awt::event::ActionEvent* evt);

                //@Throws(Exception.constructor)
            
    private: void updateProfileUI(std::string profileNameString);

                //@Throws(Exception.constructor)
            
    private: void selectFirstElement();

                //@Throws(Exception.constructor)
            
    private: void updateProfileOptions();

    public: javax::swing::JPanel* getBlankGenericProfileActionsJPanel();

    public: void setBlankGenericProfileActionsJPanel(javax::swing::JPanel* blankGenericProfileActionsJPanel);

    private: GenericProfiles* getGenericProfiles();

    private: void setGenericProfiles(GenericProfiles* genericProfiles);

    public: GenericProfile* getSelectedGenericProfile();

    public: void setSelectedGenericProfile(GenericProfile* selectedGenericProfile);

    private: void genericProfilesJListValueChanged(javax::swing::event::ListSelectionEvent* evt);

    private: void deleteProfileJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void okNewProfileJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void newProfileJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: javax::swing::JPanel* blankGenericProfileActionsJPanel;

    private: javax::swing::ButtonGroup* buttonGroup2;

    private: javax::swing::JCheckBox* captureComparisonJCheckBox;

    private: javax::swing::JCheckBox* captureMotionAnalysisJCheckBox;

    private: javax::swing::JButton* deleteProfileJButton;

    private: javax::swing::JTabbedPane* genericJTabbedPane;

    private: javax::swing::JList* genericProfilesJList;

    private: javax::swing::JPanel* genericProfilesJPanel;

    private: javax::swing::JScrollPane* genericProfilesJScrollPane;

    private: javax::swing::JLabel* jLabel1;

    private: javax::swing::JLabel* jLabel2;

    private: javax::swing::JLabel* jLabel3;

    private: javax::swing::JPanel* jPanel1;

    private: javax::swing::JButton* newProfileJButton;

    private: javax::swing::JDialog* newProfileJDialog;

    private: javax::swing::JLabel* newProfileNameJLabel;

    private: javax::swing::JTextField* newProfileNameJTextField;

    private: javax::swing::JButton* okNewProfileJButton;

    private: javax::swing::JRadioButton* savedCaptureJRadioButton;

    private: javax::swing::JRadioButton* screenCaptureJRadioButton;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_GENERICMODULECONFIGURATIONJPANEL_H
