
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class DefaultListModelHelper;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JPanel.h"
class GenericProfileActions;
class GenericProfileActionJPanel;
class JDialog;
class JLabel;
class JButton;
class JTextField;
class JScrollPane;
class JList;
class Dimension;
class ActionListener;
class ActionEvent;
class GroupLayout;
class Short;
class ListSelectionListener;
class ListSelectionEvent;
class GenericProfileAction;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GenericProfileActionsJPanel: public javax::swing::JPanel {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: GenericProfileActions* genericProfileActions;

    private: GenericProfileActionJPanel* genericProfileActionJPanel;

public: GenericProfileActionsJPanel();

    private: void initComponents();

    public: void setModel();

    private: void saveJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void updateProfileActionUI(std::string profileActionNameString);

    private: void genericProfileActionsJListValueChanged(javax::swing::event::ListSelectionEvent* evt);

    private: void okNewProfileActionJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void deleteActionJButtonActionPerformed(java::awt::event::ActionEvent* evt);

                //@Throws(Exception.constructor)
            
    public: void selectFirstElement();

    public: GenericProfileActionJPanel* getGenericProfileActionJPanel();

    public: void setGenericProfileActionJPanel(GenericProfileActionJPanel* genericProfileActionJPanel);

    public: GenericProfileActions* getGenericProfileActions();

    public: void setGenericProfileActions(GenericProfileActions* genericProfileActions);

    private: void newActionJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: javax::swing::JPanel* blankGenericProfileActionJPanel;

    private: javax::swing::JButton* deleteActionJButton;

    private: javax::swing::JList* genericProfileActionsJList;

    private: javax::swing::JPanel* genericProfileActionsJPanel;

    private: javax::swing::JScrollPane* genericProfileActionsJScrollPane;

    private: javax::swing::JButton* newActionJButton;

    private: javax::swing::JDialog* newProfileActionJDialog;

    private: javax::swing::JLabel* newProfileActionJLabel;

    private: javax::swing::JTextField* newProfileActionJTextField;

    private: javax::swing::JButton* okNewProfileActionJButton;

    private: javax::swing::JButton* saveJButton;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONSJPANEL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONSJPANEL_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONSJPANEL_H_COMPLETE
        #if __has_include(<org/allbinary/input/automation/module/DefaultListModelHelper.h>)
#include <org/allbinary/input/automation/module/DefaultListModelHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/JPanel.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JPanel.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActions.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActions.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionJPanel.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionJPanel.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/JDialog.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JDialog.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/JLabel.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JLabel.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/JButton.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JButton.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/JTextField.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JTextField.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/JScrollPane.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JScrollPane.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/JList.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JList.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/Dimension.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/Dimension.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/ActionListener.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/ActionListener.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/ActionEvent.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/ActionEvent.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/GroupLayout.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GroupLayout.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/Short.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/Short.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/ListSelectionListener.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/ListSelectionListener.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/ListSelectionEvent.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/ListSelectionEvent.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h"
#endif

        #endif
    
