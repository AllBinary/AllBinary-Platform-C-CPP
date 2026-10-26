
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

            #include <vector>
        
            #include "java/lang/Exception.h"
        
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

class GenericProfileActionsJPanel: public javax::swing::JPanel {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: GenericProfileActions genericProfileActions;

    private: GenericProfileActionJPanel genericProfileActionJPanel;

public: GenericProfileActionsJPanel();

    private: void initComponents();

    public: void setModel();

    private: void saveJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: void updateProfileActionUI(std::string profileActionNameString);

    private: void genericProfileActionsJListValueChanged(javax::swing::event::ListSelectionEvent evt);

    private: void okNewProfileActionJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: void deleteActionJButtonActionPerformed(java::awt::event::ActionEvent evt);

                //@Throws(Exception.constructor)
            
    public: void selectFirstElement();

    public: GenericProfileActionJPanel getGenericProfileActionJPanel();

    public: void setGenericProfileActionJPanel(GenericProfileActionJPanel genericProfileActionJPanel);

    public: GenericProfileActions getGenericProfileActions();

    public: void setGenericProfileActions(GenericProfileActions genericProfileActions);

    private: void newActionJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: javax::swing::JPanel blankGenericProfileActionJPanel;

    private: javax::swing::JButton deleteActionJButton;

    private: javax::swing::JList genericProfileActionsJList;

    private: javax::swing::JPanel genericProfileActionsJPanel;

    private: javax::swing::JScrollPane genericProfileActionsJScrollPane;

    private: javax::swing::JButton newActionJButton;

    private: javax::swing::JDialog newProfileActionJDialog;

    private: javax::swing::JLabel newProfileActionJLabel;

    private: javax::swing::JTextField newProfileActionJTextField;

    private: javax::swing::JButton okNewProfileActionJButton;

    private: javax::swing::JButton saveJButton;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONSJPANEL_H
