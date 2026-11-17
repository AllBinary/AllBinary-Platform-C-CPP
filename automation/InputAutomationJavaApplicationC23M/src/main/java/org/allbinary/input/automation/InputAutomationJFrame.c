/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.input.automation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/thread/ARunnable.h"
// #include "java/net/URI.h"
// #include "java/net/URL.h"
// #include "java/awt/Desktop.h"
// #include "java/util/List.h"
// #include "javax/swing/ImageIcon.h"
// #include "javax/swing/JDialog.h"
// #include "javax/help/HelpSet.h"
// #include "javax/help/event/HelpSetEvent.h"
// #include "javax/help/event/HelpSetListener.h"
#include "bundle/input/automation/InputAutomationBundleActivatorListenerInterface.h"
#include "bundle/input/automation/module/configuration/InputAutomationConfigurationModuleChangeListener.h"
#include "bundle/input/automation/robot/InputAutomationRobotChangeListener.h"
#include "org/allbinary/globals/AppUrlGlobals.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/gui/dialog/BasicTextJDialog.h"
#include "org/allbinary/gui/swing/workers/JListSwingWorker.h"
#include "org/allbinary/input/automation/configuration/InputAutomationConfiguration.h"
#include "org/allbinary/input/automation/configuration/InputAutomationConfigurationFactory.h"
#include "org/allbinary/input/automation/configuration/InputAutomationConfigurationModuleChangeEvent.h"
#include "org/allbinary/input/automation/module/InputAutomationModuleFactoryFactory.h"
#include "org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h"
#include "org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h"
#include "org/allbinary/input/automation/module/configuration/InputAutomationModuleConfigurations.h"
#include "org/allbinary/input/automation/osgi/DesktopBundle.h"
#include "org/allbinary/input/automation/robot/InputRobotFactory.h"
#include "org/allbinary/input/automation/robot/osgi/InputAutomationRobotChangeEvent.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
#include "org/allbinary/logic/java/help/JavaHelpUtil.h"
#include "org/allbinary/logic/system/loader/WebappClassLoaderInfo.h"
#include "org/allbinary/logic/system/security/licensing/InputAutomationClientInformationFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/thread/RunnableInterface.h"
#include "org/allbinary/input/automation/JFrame.h"

typedef struct InputAutomationJFrame InputAutomationJFrame;
struct InputAutomationJFrame {
    JFrame base;
    InputAutomationConfigurationModuleChangeListener InputAutomationConfigurationModuleChangeListener_interface;
    InputAutomationRobotChangeListener InputAutomationRobotChangeListener_interface;
    HelpSetListener HelpSetListener_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    InputAutomationModuleConfigurations* inputAutomationModuleConfigurations;
    InputAutomationModuleFactoryFactory* inputAutomationModuleFactory;
    InputAutomationModuleFactoryInterface* inputAutomationModuleInterface;
    RunnableInterface* runnableInterface;
    Thread* thread;
    HelpSet* helpSet;
    URI* uri;
    JMenuItem* aboutJMenuItem;
    JPanel* automationModuleConfigurationJPanel;
    JTabbedPane* gameRobotJTabbedPane;
    JMenuItem* helpJMenuItem;
    JList* inputAutomationModuleJList;
    JPanel* inputAutomationModuleJPanel;
    JScrollPane* jScrollPane1;
    JMenuBar* mainJMenuBar;
    JMenuItem* modulesJMenuItem;
    JDialog* noModuleSelectedJDialog;
    JLabel* noModuleSelectedJLabel;
    JMenu* optionsJMenu;
    JMenu* processingJMenu;
    JMenuItem* startJMenuItem;
    JMenuItem* stopJMenuItem;
    JCheckBoxMenuItem* stopOnFocusJCheckBoxMenuItem;
    JMenuItem* subscriptionJMenuItem;
    JMenu* toolsJMenu;
    JMenuItem* updatesJMenuItem;
};

static InputAutomationJFrame* InputAutomationJFrame_INPUTAUTOMATION_JFRAME = nullptr;

InputAutomationJFrame* InputAutomationJFrame_new(void);

void InputAutomationJFrame_init(InputAutomationJFrame* this);
void InputAutomationJFrame_helpSetAdded(InputAutomationJFrame* this, HelpSetEvent* helpSetEvent);
void InputAutomationJFrame_helpSetRemoved(InputAutomationJFrame* this, HelpSetEvent* helpSetEvent);
static void InputAutomationJFrame_init(InputAutomationJFrame* this);
static void InputAutomationJFrame_initComponents(InputAutomationJFrame* this);
static void InputAutomationJFrame_subscriptionJMenuItemActionPerformed(InputAutomationJFrame* this, ActionEvent* evt);
static void InputAutomationJFrame_updatesJMenuItemActionPerformed(InputAutomationJFrame* this, ActionEvent* evt);
static void InputAutomationJFrame_aboutJMenuItemActionPerformed(InputAutomationJFrame* this, ActionEvent* evt);
static void InputAutomationJFrame_modulesJMenuItemActionPerformed(InputAutomationJFrame* this, ActionEvent* evt);
static void InputAutomationJFrame_helpJMenuItemActionPerformed(InputAutomationJFrame* this, ActionEvent* evt);
static void InputAutomationJFrame_stopOnFocusJCheckBoxMenuItemActionPerformed(InputAutomationJFrame* this, ActionEvent* evt);
static void InputAutomationJFrame_optionsJMenuActionPerformed(InputAutomationJFrame* this, ActionEvent* evt);
static void InputAutomationJFrame_formWindowLostFocus(InputAutomationJFrame* this, WindowEvent* evt);
static void InputAutomationJFrame_formWindowGainedFocus(InputAutomationJFrame* this, WindowEvent* evt);
static void InputAutomationJFrame_formFocusLost(InputAutomationJFrame* this, FocusEvent* evt);
static void InputAutomationJFrame_formFocusGained(InputAutomationJFrame* this, FocusEvent* evt);
static void InputAutomationJFrame_inputAutomationModuleJListValueChanged(InputAutomationJFrame* this, ListSelectionEvent* evt);
static void InputAutomationJFrame_stopJMenuItemActionPerformed(InputAutomationJFrame* this, ActionEvent* evt);
static void InputAutomationJFrame_startJMenuItemActionPerformed(InputAutomationJFrame* this, ActionEvent* evt);
InputAutomationJFrame* InputAutomationJFrame_getInstance(void);
void InputAutomationJFrame_destroy(void);
void InputAutomationJFrame_create(InputAutomationBundleActivatorListenerInterface* inputAutomationBundleActivatorListenerInterface);
void InputAutomationJFrame_main(const char** args);
JPanel* InputAutomationJFrame_getAutomationModuleConfigurationJPanel(InputAutomationJFrame* this);
void InputAutomationJFrame_setAutomationModuleConfigurationJPanel(InputAutomationJFrame* this, JPanel* automationModuleConfigurationJPanel);
void InputAutomationJFrame_onAdd(InputAutomationJFrame* this, InputAutomationRobotChangeEvent* inputAutomationRobotChangeEvent);
void InputAutomationJFrame_onRemove(InputAutomationJFrame* this, InputAutomationRobotChangeEvent* inputAutomationRobotChangeEvent);
void InputAutomationJFrame_onAdd(InputAutomationJFrame* this, InputAutomationConfigurationModuleChangeEvent* inputAutomationConfigurationChangeEvent);
void InputAutomationJFrame_onRemove(InputAutomationJFrame* this, InputAutomationConfigurationModuleChangeEvent* inputAutomationConfigurationChangeEvent);

static void InputAutomationJFrame_initFields(InputAutomationJFrame* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->inputAutomationModuleConfigurations = InputAutomationModuleConfigurations_new();
    this->inputAutomationModuleFactory = nullptr;
    this->inputAutomationModuleInterface = nullptr;
    this->runnableInterface = nullptr;
    this->thread = nullptr;
    
    this->uri = URI_new("http://geocities.com/allbinary/");
    this->aboutJMenuItem = nullptr;
    this->automationModuleConfigurationJPanel = nullptr;
    this->gameRobotJTabbedPane = nullptr;
    this->helpJMenuItem = nullptr;
    this->inputAutomationModuleJList = nullptr;
    this->inputAutomationModuleJPanel = nullptr;
    this->jScrollPane1 = nullptr;
    this->mainJMenuBar = nullptr;
    this->modulesJMenuItem = nullptr;
    this->noModuleSelectedJDialog = nullptr;
    this->noModuleSelectedJLabel = nullptr;
    this->optionsJMenu = nullptr;
    this->processingJMenu = nullptr;
    this->startJMenuItem = nullptr;
    this->stopJMenuItem = nullptr;
    this->stopOnFocusJCheckBoxMenuItem = nullptr;
    this->subscriptionJMenuItem = nullptr;
    this->toolsJMenu = nullptr;
    this->updatesJMenuItem = nullptr;
}


void InputAutomationJFrame_init(InputAutomationJFrame* this) {
    JFrame_init(&this->base);
    InputAutomationJFrame_initFields(this);
        InputAutomationJFrame_initComponents(this);
        URL* url = JAVA_CALL(java_class_of(this), getResource, "/help/Help.hs");
        LogUtil_putF(this->logUtil, java_concat("URL: ", java_string_of(url)), this, this->commonStrings->CONSTRUCTOR);
        this->helpSet = JavaHelpUtil_getHelpSet(JavaHelpUtil_getInstance(), url);
        url = JAVA_CALL(java_class_of(this), getResource, "/resources/allbinaryicon8bit.jpg");
        ImageIcon* imageIcon = ImageIcon_new(url);
        InputAutomationJFrame_setIconImage(this, ImageIcon_getImage(imageIcon));
        InputAutomationJFrame_init(this);
}

InputAutomationJFrame* InputAutomationJFrame_new(void) {
    InputAutomationJFrame* this = calloc(1, sizeof(InputAutomationJFrame));
    InputAutomationJFrame_init(this);
    return this;
}


void InputAutomationJFrame_helpSetAdded(InputAutomationJFrame* this, HelpSetEvent* helpSetEvent) {
        HelpSet_add(this->helpSet, HelpSetEvent_getHelpSet(helpSetEvent));
}


void InputAutomationJFrame_helpSetRemoved(InputAutomationJFrame* this, HelpSetEvent* helpSetEvent) {
        HelpSet_remove(this->helpSet, HelpSetEvent_getHelpSet(helpSetEvent));
}


// throws Exception
static void InputAutomationJFrame_init(InputAutomationJFrame* this) {
        InputAutomationConfigurationFactory* inputAutomationConfigurationFactory = InputAutomationConfigurationFactory_getInstance();
        InputAutomationConfigurationFactory_init(inputAutomationConfigurationFactory, InputAutomationClientInformationFactory_getInstance());
        List* inputAutomationModuleConfigurationList = JAVA_CALL(inputAutomationConfigurationFactory->inputAutomationConfiguration, getInputAutomationModuleConfigurationList);
        if (inputAutomationModuleConfigurationList == nullptr) {
        } else {
            this->inputAutomationModuleConfigurations = InputAutomationModuleConfigurations_new(inputAutomationModuleConfigurationList);
        }
        this->inputAutomationModuleFactory = InputAutomationModuleFactoryFactory_new(this->inputAutomationModuleConfigurations, this);
        JAVA_CALL((JListSwingWorker_new(this->inputAutomationModuleJList, InputAutomationModuleFactoryFactory_getListModel(this->inputAutomationModuleFactory))), execute);
        JTabbedPane_setEnabledAt(this->gameRobotJTabbedPane, 1, false);
        JTabbedPane_setSelectedIndex(this->gameRobotJTabbedPane, 0);
}


static void InputAutomationJFrame_initComponents(InputAutomationJFrame* this) {
        this->noModuleSelectedJDialog = JDialog_new();
        this->noModuleSelectedJLabel = JLabel_new();
        this->gameRobotJTabbedPane = JTabbedPane_new();
        this->inputAutomationModuleJPanel = JPanel_new();
        this->jScrollPane1 = JScrollPane_new();
        this->inputAutomationModuleJList = JList_new();
        this->automationModuleConfigurationJPanel = JPanel_new();
        this->mainJMenuBar = JMenuBar_new();
        this->processingJMenu = JMenu_new();
        this->startJMenuItem = JMenuItem_new();
        this->stopJMenuItem = JMenuItem_new();
        this->optionsJMenu = JMenu_new();
        this->stopOnFocusJCheckBoxMenuItem = JCheckBoxMenuItem_new();
        this->toolsJMenu = JMenu_new();
        this->helpJMenuItem = JMenuItem_new();
        this->updatesJMenuItem = JMenuItem_new();
        this->subscriptionJMenuItem = JMenuItem_new();
        this->modulesJMenuItem = JMenuItem_new();
        this->aboutJMenuItem = JMenuItem_new();
        JDialog_setMinimumSize(this->noModuleSelectedJDialog, Dimension_new(200, 100));
        JLabel_setText(this->noModuleSelectedJLabel, "Please Select A Module");
        GroupLayout* noModuleSelectedJDialogLayout = GroupLayout_new(JDialog_getContentPane(this->noModuleSelectedJDialog));
        JAVA_CALL(JDialog_getContentPane(this->noModuleSelectedJDialog), setLayout, noModuleSelectedJDialogLayout);
        GroupLayout_setHorizontalGroup(noModuleSelectedJDialogLayout, JAVA_CALL(GroupLayout_createParallelGroup(noModuleSelectedJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(noModuleSelectedJDialogLayout), addContainerGap), addComponent, this->noModuleSelectedJLabel), addContainerGap, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE)));
        GroupLayout_setVerticalGroup(noModuleSelectedJDialogLayout, JAVA_CALL(GroupLayout_createParallelGroup(noModuleSelectedJDialogLayout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->noModuleSelectedJLabel, javax_swing->GroupLayout->Alignment->TRAILING, javax_swing->GroupLayout->DEFAULT_SIZE, 48, Short_MAX_VALUE));
        InputAutomationJFrame_setDefaultCloseOperation(this, javax_swing->WindowConstants->EXIT_ON_CLOSE);
        InputAutomationJFrame_setMinimumSize(this, Dimension_new(325, 215));
        InputAutomationJFrame_setResizable(this, false);
        InputAutomationJFrame_addWindowFocusListener(this, WindowFocusListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void InputAutomationJFrame_windowGainedFocus(InputAutomationJFrame* this, WindowEvent* evt) {
                InputAutomationJFrame_formWindowGainedFocus(this, evt);
        }
            

        void InputAutomationJFrame_windowLostFocus(InputAutomationJFrame* this, WindowEvent* evt) {
                InputAutomationJFrame_formWindowLostFocus(this, evt);
        }
#endif
);
        InputAutomationJFrame_addFocusListener(this, FocusAdapter_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void InputAutomationJFrame_focusGained(InputAutomationJFrame* this, FocusEvent* evt) {
                InputAutomationJFrame_formFocusGained(this, evt);
        }
            

        void InputAutomationJFrame_focusLost(InputAutomationJFrame* this, FocusEvent* evt) {
                InputAutomationJFrame_formFocusLost(this, evt);
        }
#endif
);
        JTabbedPane_setMinimumSize(this->gameRobotJTabbedPane, Dimension_new(320, 200));
        JList_setMinimumSize(this->inputAutomationModuleJList, Dimension_new(200, 0));
        JList_addListSelectionListener(this->inputAutomationModuleJList, ListSelectionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void InputAutomationJFrame_valueChanged(InputAutomationJFrame* this, ListSelectionEvent* evt) {
                InputAutomationJFrame_inputAutomationModuleJListValueChanged(this, evt);
        }
#endif
);
        JScrollPane_setViewportView(this->jScrollPane1, this->inputAutomationModuleJList);
        GroupLayout* inputAutomationModuleJPanelLayout = GroupLayout_new(this->inputAutomationModuleJPanel);
        JPanel_setLayout(this->inputAutomationModuleJPanel, inputAutomationModuleJPanelLayout);
        GroupLayout_setHorizontalGroup(inputAutomationModuleJPanelLayout, JAVA_CALL(GroupLayout_createParallelGroup(inputAutomationModuleJPanelLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(inputAutomationModuleJPanelLayout), addComponent, this->jScrollPane1, javax_swing->GroupLayout->PREFERRED_SIZE, 199, javax_swing->GroupLayout->PREFERRED_SIZE), addContainerGap, 367, Short_MAX_VALUE)));
        GroupLayout_setVerticalGroup(inputAutomationModuleJPanelLayout, JAVA_CALL(GroupLayout_createParallelGroup(inputAutomationModuleJPanelLayout, javax_swing->GroupLayout->Alignment->LEADING), addGroup, JAVA_CALL(JAVA_CALL(GroupLayout_createSequentialGroup(inputAutomationModuleJPanelLayout), addComponent, this->jScrollPane1, javax_swing->GroupLayout->PREFERRED_SIZE, 330, javax_swing->GroupLayout->PREFERRED_SIZE), addContainerGap, javax_swing->GroupLayout->DEFAULT_SIZE, Short_MAX_VALUE)));
        JTabbedPane_addTab(this->gameRobotJTabbedPane, "Modules", this->inputAutomationModuleJPanel);
        GroupLayout* automationModuleConfigurationJPanelLayout = GroupLayout_new(this->automationModuleConfigurationJPanel);
        JPanel_setLayout(this->automationModuleConfigurationJPanel, automationModuleConfigurationJPanelLayout);
        GroupLayout_setHorizontalGroup(automationModuleConfigurationJPanelLayout, JAVA_CALL(GroupLayout_createParallelGroup(automationModuleConfigurationJPanelLayout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 566, Short_MAX_VALUE));
        GroupLayout_setVerticalGroup(automationModuleConfigurationJPanelLayout, JAVA_CALL(GroupLayout_createParallelGroup(automationModuleConfigurationJPanelLayout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 334, Short_MAX_VALUE));
        JTabbedPane_addTab(this->gameRobotJTabbedPane, "Configuration", this->automationModuleConfigurationJPanel);
        JMenu_setText(this->processingJMenu, "Processing");
        JMenu_setToolTipText(this->processingJMenu, "Set module processing state");
        JMenuItem_setText(this->startJMenuItem, this->commonStrings->START);
        JMenuItem_addActionListener(this->startJMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void InputAutomationJFrame_actionPerformed(InputAutomationJFrame* this, ActionEvent* evt) {
                InputAutomationJFrame_startJMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->processingJMenu, this->startJMenuItem);
        JMenuItem_setText(this->stopJMenuItem, "Stop");
        JMenuItem_addActionListener(this->stopJMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void InputAutomationJFrame_actionPerformed(InputAutomationJFrame* this, ActionEvent* evt) {
                InputAutomationJFrame_stopJMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->processingJMenu, this->stopJMenuItem);
        JMenuBar_add(this->mainJMenuBar, this->processingJMenu);
        JMenu_setText(this->optionsJMenu, "Options");
        JMenu_addActionListener(this->optionsJMenu, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void InputAutomationJFrame_actionPerformed(InputAutomationJFrame* this, ActionEvent* evt) {
                InputAutomationJFrame_optionsJMenuActionPerformed(this, evt);
        }
#endif
);
        JCheckBoxMenuItem_setSelected(this->stopOnFocusJCheckBoxMenuItem, true);
        JCheckBoxMenuItem_setEnabled(this->stopOnFocusJCheckBoxMenuItem, false);
        JCheckBoxMenuItem_setLabel(this->stopOnFocusJCheckBoxMenuItem, "Stop Module On Focus");
        JCheckBoxMenuItem_addActionListener(this->stopOnFocusJCheckBoxMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void InputAutomationJFrame_actionPerformed(InputAutomationJFrame* this, ActionEvent* evt) {
                InputAutomationJFrame_stopOnFocusJCheckBoxMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->optionsJMenu, this->stopOnFocusJCheckBoxMenuItem);
        JMenuBar_add(this->mainJMenuBar, this->optionsJMenu);
        JMenu_setText(this->toolsJMenu, "Help");
        JMenuItem_setText(this->helpJMenuItem, "Help");
        JMenuItem_addActionListener(this->helpJMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void InputAutomationJFrame_actionPerformed(InputAutomationJFrame* this, ActionEvent* evt) {
                InputAutomationJFrame_helpJMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->toolsJMenu, this->helpJMenuItem);
        JMenuItem_setText(this->updatesJMenuItem, "Updates");
        JMenuItem_addActionListener(this->updatesJMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void InputAutomationJFrame_actionPerformed(InputAutomationJFrame* this, ActionEvent* evt) {
                InputAutomationJFrame_updatesJMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->toolsJMenu, this->updatesJMenuItem);
        JMenuItem_setText(this->subscriptionJMenuItem, "Subscription");
        JMenuItem_addActionListener(this->subscriptionJMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void InputAutomationJFrame_actionPerformed(InputAutomationJFrame* this, ActionEvent* evt) {
                InputAutomationJFrame_subscriptionJMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->toolsJMenu, this->subscriptionJMenuItem);
        JMenuItem_setText(this->modulesJMenuItem, "Module Manager");
        JMenuItem_addActionListener(this->modulesJMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void InputAutomationJFrame_actionPerformed(InputAutomationJFrame* this, ActionEvent* evt) {
                InputAutomationJFrame_modulesJMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->toolsJMenu, this->modulesJMenuItem);
        JMenuItem_setText(this->aboutJMenuItem, "About");
        JMenuItem_addActionListener(this->aboutJMenuItem, ActionListener_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void InputAutomationJFrame_actionPerformed(InputAutomationJFrame* this, ActionEvent* evt) {
                InputAutomationJFrame_aboutJMenuItemActionPerformed(this, evt);
        }
#endif
);
        JMenu_add(this->toolsJMenu, this->aboutJMenuItem);
        JMenuBar_add(this->mainJMenuBar, this->toolsJMenu);
        InputAutomationJFrame_setJMenuBar(this, this->mainJMenuBar);
        GroupLayout* layout = GroupLayout_new(InputAutomationJFrame_getContentPane(this));
        JAVA_CALL(InputAutomationJFrame_getContentPane(this), setLayout, layout);
        GroupLayout_setHorizontalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->gameRobotJTabbedPane, javax_swing->GroupLayout->Alignment->TRAILING, javax_swing->GroupLayout->DEFAULT_SIZE, 571, Short_MAX_VALUE));
        GroupLayout_setVerticalGroup(layout, JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addComponent, this->gameRobotJTabbedPane, javax_swing->GroupLayout->Alignment->TRAILING, javax_swing->GroupLayout->DEFAULT_SIZE, 359, Short_MAX_VALUE));
        InputAutomationJFrame_pack(this);
}


static void InputAutomationJFrame_subscriptionJMenuItemActionPerformed(InputAutomationJFrame* this, ActionEvent* evt) {
        JAVA_TRY {
            JAVA_CALL(Desktop_getDesktop(), browse, this->uri);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "subscriptionJMenuItemActionPerformed", e);
        } JAVA_END_TRY;
}


static void InputAutomationJFrame_updatesJMenuItemActionPerformed(InputAutomationJFrame* this, ActionEvent* evt) {
        JAVA_TRY {
            JAVA_CALL(Desktop_getDesktop(), browse, this->uri);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "updatesJMenuItemActionPerformed", e);
        } JAVA_END_TRY;
}


static void InputAutomationJFrame_aboutJMenuItemActionPerformed(InputAutomationJFrame* this, ActionEvent* evt) {
        JDialog* textJDialog = BasicTextJDialog_new("Copyright (c) 2002-2007 AllBinary");
        JDialog_setVisible(textJDialog, true);
        JDialog_setLocationRelativeTo(textJDialog, this);
}


static void InputAutomationJFrame_modulesJMenuItemActionPerformed(InputAutomationJFrame* this, ActionEvent* evt) {
        JAVA_TRY {
            DesktopBundle_start(DesktopBundle_new());
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "modulesJMenuItemActionPerformed", e);
        } JAVA_END_TRY;
}


static void InputAutomationJFrame_helpJMenuItemActionPerformed(InputAutomationJFrame* this, ActionEvent* evt) {
        JavaHelpUtil_show(JavaHelpUtil_getInstance(), this->helpSet);
}


static void InputAutomationJFrame_stopOnFocusJCheckBoxMenuItemActionPerformed(InputAutomationJFrame* this, ActionEvent* evt) {
}


static void InputAutomationJFrame_optionsJMenuActionPerformed(InputAutomationJFrame* this, ActionEvent* evt) {
}


static void InputAutomationJFrame_formWindowLostFocus(InputAutomationJFrame* this, WindowEvent* evt) {
        LogUtil_putF(this->logUtil, "Nothing", this, "focusLost");
}


static void InputAutomationJFrame_formWindowGainedFocus(InputAutomationJFrame* this, WindowEvent* evt) {
        if (JCheckBoxMenuItem_isSelected(this->stopOnFocusJCheckBoxMenuItem)) {
            LogUtil_putF(this->logUtil, "Stopping", this, "focusGained");
            if (this->runnableInterface != nullptr) {
                RunnableInterface_setRunning(this->runnableInterface, false);
            }
        }
}


static void InputAutomationJFrame_formFocusLost(InputAutomationJFrame* this, FocusEvent* evt) {
}


static void InputAutomationJFrame_formFocusGained(InputAutomationJFrame* this, FocusEvent* evt) {
}


static void InputAutomationJFrame_inputAutomationModuleJListValueChanged(InputAutomationJFrame* this, ListSelectionEvent* evt) {
        JAVA_TRY {
            const char* gameAutomationRobotModuleNameString = ((const char*) JList_getSelectedValue(this->inputAutomationModuleJList));
            if (gameAutomationRobotModuleNameString != nullptr) {
                this->inputAutomationModuleInterface = InputAutomationModuleFactoryFactory_getInstance(this->inputAutomationModuleFactory, gameAutomationRobotModuleNameString);
                JAVA_CALL(InputAutomationJFrame_getAutomationModuleConfigurationJPanel(this), removeAll);
                GroupLayout* layout = ((GroupLayout*) JAVA_CALL(InputAutomationJFrame_getAutomationModuleConfigurationJPanel(this), getLayout));
                GroupLayout_setHorizontalGroup(layout, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 395, Short_MAX_VALUE), addComponent, InputAutomationModuleFactoryInterface_getConfigurationJPanel(this->inputAutomationModuleInterface), javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE));
                GroupLayout_setVerticalGroup(layout, JAVA_CALL(JAVA_CALL(GroupLayout_createParallelGroup(layout, javax_swing->GroupLayout->Alignment->LEADING), addGap, 0, 256, Short_MAX_VALUE), addComponent, InputAutomationModuleFactoryInterface_getConfigurationJPanel(this->inputAutomationModuleInterface), javax_swing->GroupLayout->PREFERRED_SIZE, javax_swing->GroupLayout->DEFAULT_SIZE, javax_swing->GroupLayout->PREFERRED_SIZE));
                JTabbedPane_setEnabledAt(this->gameRobotJTabbedPane, 1, true);
                LogUtil_putF(this->logUtil, java_concat(java_concat("Setting Module: ", gameAutomationRobotModuleNameString), " and Configuration JPanel"), this, "gameAutomationRobotModuleJListValueChanged");
            } else {
                LogUtil_putF(this->logUtil, "Module name was null", this, "gameAutomationRobotModuleJListValueChanged");
                JTabbedPane_setEnabledAt(this->gameRobotJTabbedPane, 1, false);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "gameAutomationRobotModuleJListValueChanged", e);
        } JAVA_END_TRY;
}


static void InputAutomationJFrame_stopJMenuItemActionPerformed(InputAutomationJFrame* this, ActionEvent* evt) {
        if (this->runnableInterface != nullptr) {
            RunnableInterface_setRunning(this->runnableInterface, false);
        } else {
            JDialog_setVisible(this->noModuleSelectedJDialog, true);
            JDialog_setLocationRelativeTo(this->noModuleSelectedJDialog, this);
        }
}


static void InputAutomationJFrame_startJMenuItemActionPerformed(InputAutomationJFrame* this, ActionEvent* evt) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, "Starting", this, "startJMenuItemActionPerformed");
            if (this->inputAutomationModuleInterface != nullptr) {
                this->runnableInterface = InputAutomationModuleFactoryInterface_getInstance(this->inputAutomationModuleInterface);
                if (this->runnableInterface != nullptr) {
                    this->thread = Thread_new(this->runnableInterface);
                    Thread_setPriority(this->thread, Thread_MIN_PRIORITY + 1);
                    Thread_start(this->thread);
                } else {
                    LogUtil_putF(this->logUtil, "Runnnable was null", this, "startJMenuItemActionPerformed");
                    JDialog_setVisible(this->noModuleSelectedJDialog, true);
                    JDialog_setLocationRelativeTo(this->noModuleSelectedJDialog, this);
                }
            } else {
                LogUtil_putF(this->logUtil, "InputAutomationModuleInterface was null", this, "startJMenuItemActionPerformed");
                JDialog_setVisible(this->noModuleSelectedJDialog, true);
                JDialog_setLocationRelativeTo(this->noModuleSelectedJDialog, this);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "startJMenuItemActionPerformed", e);
        } JAVA_END_TRY;
}


InputAutomationJFrame* InputAutomationJFrame_getInstance(void) {
        return InputAutomationJFrame_INPUTAUTOMATION_JFRAME;
}


void InputAutomationJFrame_destroy(void) {
        JAVA_CALL(InputAutomationJFrame_INPUTAUTOMATION_JFRAME, setVisible, false);
}


void InputAutomationJFrame_create(InputAutomationBundleActivatorListenerInterface* inputAutomationBundleActivatorListenerInterface) {
        LogConfigTypeFactory_getInstance();
        AppUrlGlobals* appUrlGlobals = AppUrlGlobals_new();
        AppUrlGlobals_setWebappPath(appUrlGlobals, "G:/mnt/bc/mydev/work_automation/automation/run/");
        JAVA_CALL(JFrame_URLGLOBALS, init, appUrlGlobals);
        WebappClassLoaderInfo_setLoader(JAVA_CALL(java_class_of(appUrlGlobals), getClassLoader));
        JAVA_CALL(java_awt->EventQueue, invokeLater, ARunnable_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void InputAutomationJFrame_run(InputAutomationJFrame* this) {
                LogUtil* logUtil = LogUtil_getInstance();
                CommonStrings* commonStrings = CommonStrings_getInstance();
                JAVA_TRY {
                    LogUtil_putF(logUtil, "Running", this, commonStrings->RUN);
                    InputAutomationJFrame_INPUTAUTOMATION_JFRAME = InputAutomationJFrame_new();
                    InputRobotFactory_addListener(InputRobotFactory_getInstance(), InputAutomationJFrame_getInstance());
                    if (inputAutomationBundleActivatorListenerInterface != nullptr) {
                        InputAutomationBundleActivatorListenerInterface_registerAsService(inputAutomationBundleActivatorListenerInterface);
                        InputAutomationBundleActivatorListenerInterface_useServices(inputAutomationBundleActivatorListenerInterface);
                    }
                    InputAutomationJFrame_setVisible(InputAutomationJFrame_INPUTAUTOMATION_JFRAME, true);
                } JAVA_CATCH(Exception, e) {
                    LogUtil_put(logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
                } JAVA_END_TRY;
        }
#endif
);
}


// throws Exception
void InputAutomationJFrame_main(const char** args) {
        InputAutomationJFrame_create(nullptr);
}


JPanel* InputAutomationJFrame_getAutomationModuleConfigurationJPanel(InputAutomationJFrame* this) {
        return this->automationModuleConfigurationJPanel;
}


void InputAutomationJFrame_setAutomationModuleConfigurationJPanel(InputAutomationJFrame* this, JPanel* automationModuleConfigurationJPanel) {
        this->automationModuleConfigurationJPanel = automationModuleConfigurationJPanel;
}


void InputAutomationJFrame_onAdd(InputAutomationJFrame* this, InputAutomationRobotChangeEvent* inputAutomationRobotChangeEvent) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "onAdd");
            InputRobotFactory_add(InputRobotFactory_getInstance(), JAVA_CALL(InputAutomationRobotChangeEvent_getInputAutomationRobotInterfaceWrapper(inputAutomationRobotChangeEvent), getInputRobotInterface));
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "onAdd", e);
        } JAVA_END_TRY;
}


void InputAutomationJFrame_onRemove(InputAutomationJFrame* this, InputAutomationRobotChangeEvent* inputAutomationRobotChangeEvent) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "onRemove");
            InputRobotFactory_add(InputRobotFactory_getInstance(), JAVA_CALL(InputAutomationRobotChangeEvent_getInputAutomationRobotInterfaceWrapper(inputAutomationRobotChangeEvent), getInputRobotInterface));
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "onRemove", e);
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
void InputAutomationJFrame_onAdd(InputAutomationJFrame* this, InputAutomationConfigurationModuleChangeEvent* inputAutomationConfigurationChangeEvent) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "onAdd");
            InputAutomationModuleConfigurations_add(this->inputAutomationModuleConfigurations, InputAutomationConfigurationModuleChangeEvent_getInputAutomationModuleConfiguration(inputAutomationConfigurationChangeEvent));
            InputAutomationJFrame_init(this);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "onAdd", e);
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
void InputAutomationJFrame_onRemove(InputAutomationJFrame* this, InputAutomationConfigurationModuleChangeEvent* inputAutomationConfigurationChangeEvent) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "onRemove");
            InputAutomationConfiguration* inputAutomationConfiguration = InputAutomationConfigurationFactory_getInstance()->inputAutomationConfiguration;
            List* inputAutomationModuleConfigurationList = InputAutomationConfiguration_getInputAutomationModuleConfigurationList(inputAutomationConfiguration);
            if (inputAutomationModuleConfigurationList == nullptr) {
                LogUtil* logUtil = LogUtil_getInstance();
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_putF(logUtil, java_concat("inputAutomationModuleConfigurationList: ", java_string_of(inputAutomationModuleConfigurationList)), this, commonStrings->INIT);
                java_throw(java_exception_new("Exception", ""));
            }
            InputAutomationModuleConfigurations* inputAutomationModuleConfigurations = InputAutomationModuleConfigurations_new(InputAutomationConfiguration_getInputAutomationModuleConfigurationList(inputAutomationConfiguration));
            InputAutomationModuleConfigurations_remove(inputAutomationModuleConfigurations, InputAutomationConfigurationModuleChangeEvent_getInputAutomationModuleConfiguration(inputAutomationConfigurationChangeEvent));
            InputAutomationJFrame_init(this);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "onRemove", e);
        } JAVA_END_TRY;
}

