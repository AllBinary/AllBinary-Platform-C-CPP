
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

            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Thread.h"
        
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
        #include "JFrame.h"
#include "JLabel.h"
#include "JTabbedPane.h"
#include "JPanel.h"
#include "JScrollPane.h"
#include "JList.h"
#include "JMenuBar.h"
#include "JMenu.h"
#include "JMenuItem.h"
#include "JCheckBoxMenuItem.h"
#include "Dimension.h"
#include "GroupLayout.h"
#include "Short.h"
#include "WindowFocusListener.h"
#include "WindowEvent.h"
#include "FocusAdapter.h"
#include "FocusEvent.h"
#include "ListSelectionListener.h"
#include "ListSelectionEvent.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "EventQueue.h"

class InputAutomationJFrame: public javax.swing.JFrame: public InputAutomationConfigurationModuleChangeListener, public InputAutomationRobotChangeListener, public HelpSetListener {
        

    private: static INPUTAUTOMATION_JFRAME: InputAutomationJFrame;

    public static InputAutomationJFrame getInstance();

    public static destroy();

    public static create(InputAutomationBundleActivatorListenerInterface inputAutomationBundleActivatorListenerInterface);

                //@Throws(Exception.constructor)
            
    public static main(std::vector<string> args);

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: inputAutomationModuleConfigurations: InputAutomationModuleConfigurations = new InputAutomationModuleConfigurations();

    private: inputAutomationModuleFactory: InputAutomationModuleFactoryFactory;

    private: inputAutomationModuleInterface: InputAutomationModuleFactoryInterface;

    private: runnableInterface: RunnableInterface;

    private: thread: Thread;

    private: helpSet: HelpSet;

    private: const uri: URI = new URI("http://geocities.com/allbinary/");

public constructor ();

    public helpSetAdded(HelpSetEvent helpSetEvent);

    public helpSetRemoved(HelpSetEvent helpSetEvent);

                //@Throws(Exception.constructor)
            
    init();

    initComponents();

    subscriptionJMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    updatesJMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    aboutJMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    modulesJMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    helpJMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    stopOnFocusJCheckBoxMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    optionsJMenuActionPerformed(java.awt.event.ActionEvent evt);

    formWindowLostFocus(java.awt.event.WindowEvent evt);

    formWindowGainedFocus(java.awt.event.WindowEvent evt);

    formFocusLost(java.awt.event.FocusEvent evt);

    formFocusGained(java.awt.event.FocusEvent evt);

    inputAutomationModuleJListValueChanged(javax.swing.event.ListSelectionEvent evt);

    stopJMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    startJMenuItemActionPerformed(java.awt.event.ActionEvent evt);

    public javax.swing.JPanel getAutomationModuleConfigurationJPanel();

    public setAutomationModuleConfigurationJPanel(javax.swing.JPanel automationModuleConfigurationJPanel);

    public onAdd(InputAutomationRobotChangeEvent inputAutomationRobotChangeEvent);

    public onRemove(InputAutomationRobotChangeEvent inputAutomationRobotChangeEvent);

    public onAdd(InputAutomationConfigurationModuleChangeEvent inputAutomationConfigurationChangeEvent);

    public onRemove(InputAutomationConfigurationModuleChangeEvent inputAutomationConfigurationChangeEvent);

    private: aboutJMenuItem: javax.swing.JMenuItem;

    private: automationModuleConfigurationJPanel: javax.swing.JPanel;

    private: gameRobotJTabbedPane: javax.swing.JTabbedPane;

    private: helpJMenuItem: javax.swing.JMenuItem;

    private: inputAutomationModuleJList: javax.swing.JList;

    private: inputAutomationModuleJPanel: javax.swing.JPanel;

    private: jScrollPane1: javax.swing.JScrollPane;

    private: mainJMenuBar: javax.swing.JMenuBar;

    private: modulesJMenuItem: javax.swing.JMenuItem;

    private: noModuleSelectedJDialog: javax.swing.JDialog;

    private: noModuleSelectedJLabel: javax.swing.JLabel;

    private: optionsJMenu: javax.swing.JMenu;

    private: processingJMenu: javax.swing.JMenu;

    private: startJMenuItem: javax.swing.JMenuItem;

    private: stopJMenuItem: javax.swing.JMenuItem;

    private: stopOnFocusJCheckBoxMenuItem: javax.swing.JCheckBoxMenuItem;

    private: subscriptionJMenuItem: javax.swing.JMenuItem;

    private: toolsJMenu: javax.swing.JMenu;

    private: updatesJMenuItem: javax.swing.JMenuItem;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_INPUTAUTOMATIONJFRAME_H
