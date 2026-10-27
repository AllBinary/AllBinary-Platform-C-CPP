
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
class ARunnable;
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/awt/Desktop.h>
#include <java/util/List.h>
class ImageIcon;
class JDialog;
class HelpSet;
class HelpSetEvent;
#include <javax/help/event/HelpSetListener.h>
class InputAutomationBundleActivatorListenerInterface;
#include <bundle/input/automation/module/configuration/InputAutomationConfigurationModuleChangeListener.h>
#include <bundle/input/automation/robot/InputAutomationRobotChangeListener.h>
class AppUrlGlobals;
class URLGLOBALS;
class BasicTextJDialog;
class JListSwingWorker;
class InputAutomationConfiguration;
class InputAutomationConfigurationFactory;
class InputAutomationConfigurationModuleChangeEvent;
class InputAutomationModuleFactoryFactory;
class InputAutomationModuleFactoryInterface;
class InputAutomationModuleConfiguration;
class InputAutomationModuleConfigurations;
class DesktopBundle;
class InputRobotFactory;
class InputAutomationRobotChangeEvent;
class LogUtil;
class LogConfigTypeFactory;
class JavaHelpUtil;
class WebappClassLoaderInfo;
class InputAutomationClientInformationFactory;
class CommonStrings;
class RunnableInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/JFrame.h"
class JLabel;
class JTabbedPane;
class JPanel;
class JScrollPane;
class JList;
class JMenuBar;
class JMenu;
class JMenuItem;
class JCheckBoxMenuItem;
class Dimension;
class GroupLayout;
class Short;
class WindowFocusListener;
class WindowEvent;
class FocusAdapter;
class FocusEvent;
class ListSelectionListener;
class ListSelectionEvent;
class ActionListener;
class ActionEvent;
class EventQueue;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputAutomationJFrame: public javax::swing::JFrame, public InputAutomationConfigurationModuleChangeListener, public InputAutomationRobotChangeListener, public HelpSetListener {

    private: static inline InputAutomationJFrame* INPUTAUTOMATION_JFRAME;

    public: static InputAutomationJFrame* getInstance();

    public: static void destroy();

    public: static void create(InputAutomationBundleActivatorListenerInterface* inputAutomationBundleActivatorListenerInterface);

                //@Throws(Exception.constructor)
            
    public: static void main(std::vector<std::string> args);

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: InputAutomationModuleConfigurations* inputAutomationModuleConfigurations;

    private: InputAutomationModuleFactoryFactory* inputAutomationModuleFactory;

    private: InputAutomationModuleFactoryInterface* inputAutomationModuleInterface;

    private: RunnableInterface* runnableInterface;

    private: Thread* thread;

    private: HelpSet* helpSet;

    private: URI* uri;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_INPUTAUTOMATIONJFRAME_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_INPUTAUTOMATIONJFRAME_H_COMPLETE
        #if __has_include(<org/allbinary/thread/ARunnable.h>)
#include <org/allbinary/thread/ARunnable.h>
#endif
#if __has_include(<java/net/URI.h>)
#include <java/net/URI.h>
#endif
#if __has_include(<java/net/URL.h>)
#include <java/net/URL.h>
#endif
#if __has_include(<java/awt/Desktop.h>)
#include <java/awt/Desktop.h>
#endif
#if __has_include(<java/util/List.h>)
#include <java/util/List.h>
#endif
#if __has_include(<javax/swing/ImageIcon.h>)
#include <javax/swing/ImageIcon.h>
#endif
#if __has_include(<javax/swing/JDialog.h>)
#include <javax/swing/JDialog.h>
#endif
#if __has_include(<javax/help/HelpSet.h>)
#include <javax/help/HelpSet.h>
#endif
#if __has_include(<javax/help/event/HelpSetEvent.h>)
#include <javax/help/event/HelpSetEvent.h>
#endif
#if __has_include(<javax/help/event/HelpSetListener.h>)
#include <javax/help/event/HelpSetListener.h>
#endif
#if __has_include(<bundle/input/automation/InputAutomationBundleActivatorListenerInterface.h>)
#include <bundle/input/automation/InputAutomationBundleActivatorListenerInterface.h>
#endif
#if __has_include(<bundle/input/automation/module/configuration/InputAutomationConfigurationModuleChangeListener.h>)
#include <bundle/input/automation/module/configuration/InputAutomationConfigurationModuleChangeListener.h>
#endif
#if __has_include(<bundle/input/automation/robot/InputAutomationRobotChangeListener.h>)
#include <bundle/input/automation/robot/InputAutomationRobotChangeListener.h>
#endif
#if __has_include(<org/allbinary/globals/AppUrlGlobals.h>)
#include <org/allbinary/globals/AppUrlGlobals.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/gui/dialog/BasicTextJDialog.h>)
#include <org/allbinary/gui/dialog/BasicTextJDialog.h>
#endif
#if __has_include(<org/allbinary/gui/swing/workers/JListSwingWorker.h>)
#include <org/allbinary/gui/swing/workers/JListSwingWorker.h>
#endif
#if __has_include(<org/allbinary/input/automation/configuration/InputAutomationConfiguration.h>)
#include <org/allbinary/input/automation/configuration/InputAutomationConfiguration.h>
#endif
#if __has_include(<org/allbinary/input/automation/configuration/InputAutomationConfigurationFactory.h>)
#include <org/allbinary/input/automation/configuration/InputAutomationConfigurationFactory.h>
#endif
#if __has_include(<org/allbinary/input/automation/configuration/InputAutomationConfigurationModuleChangeEvent.h>)
#include <org/allbinary/input/automation/configuration/InputAutomationConfigurationModuleChangeEvent.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/InputAutomationModuleFactoryFactory.h>)
#include <org/allbinary/input/automation/module/InputAutomationModuleFactoryFactory.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>)
#include <org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h>)
#include <org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/configuration/InputAutomationModuleConfigurations.h>)
#include <org/allbinary/input/automation/module/configuration/InputAutomationModuleConfigurations.h>
#endif
#if __has_include(<org/allbinary/input/automation/osgi/DesktopBundle.h>)
#include <org/allbinary/input/automation/osgi/DesktopBundle.h>
#endif
#if __has_include(<org/allbinary/input/automation/robot/InputRobotFactory.h>)
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>
#endif
#if __has_include(<org/allbinary/input/automation/robot/osgi/InputAutomationRobotChangeEvent.h>)
#include <org/allbinary/input/automation/robot/osgi/InputAutomationRobotChangeEvent.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>)
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
#endif
#if __has_include(<org/allbinary/logic/java/help/JavaHelpUtil.h>)
#include <org/allbinary/logic/java/help/JavaHelpUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/loader/WebappClassLoaderInfo.h>)
#include <org/allbinary/logic/system/loader/WebappClassLoaderInfo.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/InputAutomationClientInformationFactory.h>)
#include <org/allbinary/logic/system/security/licensing/InputAutomationClientInformationFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/thread/RunnableInterface.h>)
#include <org/allbinary/thread/RunnableInterface.h>
#endif
#if __has_include("org/allbinary/input/automation/JFrame.h")
#include "org/allbinary/input/automation/JFrame.h"
#endif
#if __has_include("org/allbinary/input/automation/JLabel.h")
#include "org/allbinary/input/automation/JLabel.h"
#endif
#if __has_include("org/allbinary/input/automation/JTabbedPane.h")
#include "org/allbinary/input/automation/JTabbedPane.h"
#endif
#if __has_include("org/allbinary/input/automation/JPanel.h")
#include "org/allbinary/input/automation/JPanel.h"
#endif
#if __has_include("org/allbinary/input/automation/JScrollPane.h")
#include "org/allbinary/input/automation/JScrollPane.h"
#endif
#if __has_include("org/allbinary/input/automation/JList.h")
#include "org/allbinary/input/automation/JList.h"
#endif
#if __has_include("org/allbinary/input/automation/JMenuBar.h")
#include "org/allbinary/input/automation/JMenuBar.h"
#endif
#if __has_include("org/allbinary/input/automation/JMenu.h")
#include "org/allbinary/input/automation/JMenu.h"
#endif
#if __has_include("org/allbinary/input/automation/JMenuItem.h")
#include "org/allbinary/input/automation/JMenuItem.h"
#endif
#if __has_include("org/allbinary/input/automation/JCheckBoxMenuItem.h")
#include "org/allbinary/input/automation/JCheckBoxMenuItem.h"
#endif
#if __has_include("org/allbinary/input/automation/Dimension.h")
#include "org/allbinary/input/automation/Dimension.h"
#endif
#if __has_include("org/allbinary/input/automation/GroupLayout.h")
#include "org/allbinary/input/automation/GroupLayout.h"
#endif
#if __has_include("org/allbinary/input/automation/Short.h")
#include "org/allbinary/input/automation/Short.h"
#endif
#if __has_include("org/allbinary/input/automation/WindowFocusListener.h")
#include "org/allbinary/input/automation/WindowFocusListener.h"
#endif
#if __has_include("org/allbinary/input/automation/WindowEvent.h")
#include "org/allbinary/input/automation/WindowEvent.h"
#endif
#if __has_include("org/allbinary/input/automation/FocusAdapter.h")
#include "org/allbinary/input/automation/FocusAdapter.h"
#endif
#if __has_include("org/allbinary/input/automation/FocusEvent.h")
#include "org/allbinary/input/automation/FocusEvent.h"
#endif
#if __has_include("org/allbinary/input/automation/ListSelectionListener.h")
#include "org/allbinary/input/automation/ListSelectionListener.h"
#endif
#if __has_include("org/allbinary/input/automation/ListSelectionEvent.h")
#include "org/allbinary/input/automation/ListSelectionEvent.h"
#endif
#if __has_include("org/allbinary/input/automation/ActionListener.h")
#include "org/allbinary/input/automation/ActionListener.h"
#endif
#if __has_include("org/allbinary/input/automation/ActionEvent.h")
#include "org/allbinary/input/automation/ActionEvent.h"
#endif
#if __has_include("org/allbinary/input/automation/EventQueue.h")
#include "org/allbinary/input/automation/EventQueue.h"
#endif

        #endif
    
