
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_INPUTAUTOMATIONJFRAME_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_INPUTAUTOMATIONJFRAME_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <org/allbinary/thread/ARunnable.h>

      
#include <java/net/URI.h>

      
#include <java/net/URL.h>

      
#include <java/awt/Desktop.h>

      
#include <java/util/List.h>

      
#include <javax/swing/ImageIcon.h>

      
#include <javax/swing/JDialog.h>

      
#include <javax/help/HelpSet.h>

      
#include <javax/help/event/HelpSetEvent.h>

      
#include <javax/help/event/HelpSetListener.h>

      
#include <bundle/input/automation/InputAutomationBundleActivatorListenerInterface.h>

      
#include <bundle/input/automation/module/configuration/InputAutomationConfigurationModuleChangeListener.h>

      
#include <bundle/input/automation/robot/InputAutomationRobotChangeListener.h>

      
#include <org/allbinary/globals/AppUrlGlobals.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/gui/dialog/BasicTextJDialog.h>

      
#include <org/allbinary/gui/swing/workers/JListSwingWorker.h>

      
#include <org/allbinary/input/automation/configuration/InputAutomationConfiguration.h>

      
#include <org/allbinary/input/automation/configuration/InputAutomationConfigurationFactory.h>

      
#include <org/allbinary/input/automation/configuration/InputAutomationConfigurationModuleChangeEvent.h>

      
#include <org/allbinary/input/automation/module/InputAutomationModuleFactoryFactory.h>

      
#include <org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>

      
#include <org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h>

      
#include <org/allbinary/input/automation/module/configuration/InputAutomationModuleConfigurations.h>

      
#include <org/allbinary/input/automation/osgi/DesktopBundle.h>

      
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>

      
#include <org/allbinary/input/automation/robot/osgi/InputAutomationRobotChangeEvent.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/java/help/JavaHelpUtil.h>

      
#include <org/allbinary/logic/system/loader/WebappClassLoaderInfo.h>

      
#include <org/allbinary/logic/system/security/licensing/InputAutomationClientInformationFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/RunnableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/JFrame.h"
#include "org/allbinary/input/automation/JLabel.h"
#include "org/allbinary/input/automation/JTabbedPane.h"
#include "org/allbinary/input/automation/JPanel.h"
#include "org/allbinary/input/automation/JScrollPane.h"
#include "org/allbinary/input/automation/JList.h"
#include "org/allbinary/input/automation/JMenuBar.h"
#include "org/allbinary/input/automation/JMenu.h"
#include "org/allbinary/input/automation/JMenuItem.h"
#include "org/allbinary/input/automation/JCheckBoxMenuItem.h"
#include "org/allbinary/input/automation/Dimension.h"
#include "org/allbinary/input/automation/GroupLayout.h"
#include "org/allbinary/input/automation/Short.h"
#include "org/allbinary/input/automation/WindowFocusListener.h"
#include "org/allbinary/input/automation/WindowEvent.h"
#include "org/allbinary/input/automation/FocusAdapter.h"
#include "org/allbinary/input/automation/FocusEvent.h"
#include "org/allbinary/input/automation/ListSelectionListener.h"
#include "org/allbinary/input/automation/ListSelectionEvent.h"
#include "org/allbinary/input/automation/ActionListener.h"
#include "org/allbinary/input/automation/ActionEvent.h"
#include "org/allbinary/input/automation/EventQueue.h"

class InputAutomationJFrame: public javax::swing::JFrame, public InputAutomationConfigurationModuleChangeListener, public InputAutomationRobotChangeListener, public HelpSetListener {

    private: static inline InputAutomationJFrame* INPUTAUTOMATION_JFRAME;

    public: static InputAutomationJFrame* getInstance();

    public: static void destroy();

    public: static void create(InputAutomationBundleActivatorListenerInterface* inputAutomationBundleActivatorListenerInterface);

                //@Throws(Exception.constructor)
            
    public: static void main(std::vector<std::string> args);

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: InputAutomationModuleConfigurations* inputAutomationModuleConfigurations = new InputAutomationModuleConfigurations();

    private: InputAutomationModuleFactoryFactory* inputAutomationModuleFactory;

    private: InputAutomationModuleFactoryInterface* inputAutomationModuleInterface;

    private: RunnableInterface* runnableInterface;

    private: Thread* thread;

    private: HelpSet* helpSet;

    private: URI* uri = new URI("http://geocities.com/allbinary/");

public: InputAutomationJFrame();

    public: void helpSetAdded(HelpSetEvent* helpSetEvent);

    public: void helpSetRemoved(HelpSetEvent* helpSetEvent);

                //@Throws(Exception.constructor)
            
    private: void init();

    private: void initComponents();

    private: void subscriptionJMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    private: void updatesJMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    private: void aboutJMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    private: void modulesJMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    private: void helpJMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    private: void stopOnFocusJCheckBoxMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    private: void optionsJMenuActionPerformed(java::awt::event::ActionEvent* evt);

    private: void formWindowLostFocus(java::awt::event::WindowEvent* evt);

    private: void formWindowGainedFocus(java::awt::event::WindowEvent* evt);

    private: void formFocusLost(java::awt::event::FocusEvent* evt);

    private: void formFocusGained(java::awt::event::FocusEvent* evt);

    private: void inputAutomationModuleJListValueChanged(javax::swing::event::ListSelectionEvent* evt);

    private: void stopJMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    private: void startJMenuItemActionPerformed(java::awt::event::ActionEvent* evt);

    public: javax::swing::JPanel* getAutomationModuleConfigurationJPanel();

    public: void setAutomationModuleConfigurationJPanel(javax::swing::JPanel* automationModuleConfigurationJPanel);

    public: void onAdd(InputAutomationRobotChangeEvent* inputAutomationRobotChangeEvent);

    public: void onRemove(InputAutomationRobotChangeEvent* inputAutomationRobotChangeEvent);

    public: void onAdd(InputAutomationConfigurationModuleChangeEvent* inputAutomationConfigurationChangeEvent);

    public: void onRemove(InputAutomationConfigurationModuleChangeEvent* inputAutomationConfigurationChangeEvent);

    private: javax::swing::JMenuItem* aboutJMenuItem;

    private: javax::swing::JPanel* automationModuleConfigurationJPanel;

    private: javax::swing::JTabbedPane* gameRobotJTabbedPane;

    private: javax::swing::JMenuItem* helpJMenuItem;

    private: javax::swing::JList* inputAutomationModuleJList;

    private: javax::swing::JPanel* inputAutomationModuleJPanel;

    private: javax::swing::JScrollPane* jScrollPane1;

    private: javax::swing::JMenuBar* mainJMenuBar;

    private: javax::swing::JMenuItem* modulesJMenuItem;

    private: javax::swing::JDialog* noModuleSelectedJDialog;

    private: javax::swing::JLabel* noModuleSelectedJLabel;

    private: javax::swing::JMenu* optionsJMenu;

    private: javax::swing::JMenu* processingJMenu;

    private: javax::swing::JMenuItem* startJMenuItem;

    private: javax::swing::JMenuItem* stopJMenuItem;

    private: javax::swing::JCheckBoxMenuItem* stopOnFocusJCheckBoxMenuItem;

    private: javax::swing::JMenuItem* subscriptionJMenuItem;

    private: javax::swing::JMenu* toolsJMenu;

    private: javax::swing::JMenuItem* updatesJMenuItem;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_INPUTAUTOMATIONJFRAME_H
