
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_INPUTAUTOMATIONJFRAME_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_INPUTAUTOMATIONJFRAME_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/InputAutomationJFrame.h"
        

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

      

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/WindowConstants.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>
















                                        
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


InputAutomationJFrame::InputAutomationJFrame() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), inputAutomationModuleConfigurations(new InputAutomationModuleConfigurations()), uri(new URI("http://geocities.com/allbinary/")){
this->initComponents();
    

    URL* url = this->getClass()->getResource("/help/Help.hs");;
    
this->logUtil->putF(JavaString::valueOf("URL: ") +JavaString::valueOf(url), this, this->commonStrings->CONSTRUCTOR);
    
this->helpSet= JavaHelpUtil::getInstance()->getHelpSet(url);
    
url= this->getClass()->getResource("/resources/allbinaryicon8bit.jpg");
    

    ImageIcon* imageIcon = new ImageIcon(url);;
    
this->setIconImage(imageIcon->getImage());
    
this->init();
    
}


    auto InputAutomationJFrame::helpSetAdded(HelpSetEvent* helpSetEvent) -> void{
this->helpSet->add(helpSetEvent->getHelpSet());
    
}


    auto InputAutomationJFrame::helpSetRemoved(HelpSetEvent* helpSetEvent) -> void{
this->helpSet->remove(helpSetEvent->getHelpSet());
    
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationJFrame::init() -> void{

    InputAutomationConfigurationFactory* inputAutomationConfigurationFactory = InputAutomationConfigurationFactory::getInstance();;
    
inputAutomationConfigurationFactory->init(InputAutomationClientInformationFactory::getInstance());
    

    List<InputAutomationModuleConfiguration*>* inputAutomationModuleConfigurationList = inputAutomationConfigurationFactory->inputAutomationConfiguration->getInputAutomationModuleConfigurationList();;
    

                        if(inputAutomationModuleConfigurationList == 
                                    nullptr
                                )
                        
                                    {
                                    
                                    }
                                
                        else {
                            this->inputAutomationModuleConfigurations= new InputAutomationModuleConfigurations(inputAutomationModuleConfigurationList);
    

                        }
                            
this->inputAutomationModuleFactory= new InputAutomationModuleFactoryFactory(inputAutomationModuleConfigurations, this);
    
 = 
.
                    execute();
    
this->gameRobotJTabbedPane->setEnabledAt(1, false);
    
this->gameRobotJTabbedPane->setSelectedIndex(0);
    
}


    auto InputAutomationJFrame::initComponents() -> void{
this->noModuleSelectedJDialog= new javax::swing::JDialog();
    
this->noModuleSelectedJLabel= new javax::swing::JLabel();
    
this->gameRobotJTabbedPane= new javax::swing::JTabbedPane();
    
this->inputAutomationModuleJPanel= new javax::swing::JPanel();
    
this->jScrollPane1= new javax::swing::JScrollPane();
    
this->inputAutomationModuleJList= new javax::swing::JList();
    
this->automationModuleConfigurationJPanel= new javax::swing::JPanel();
    
this->mainJMenuBar= new javax::swing::JMenuBar();
    
this->processingJMenu= new javax::swing::JMenu();
    
this->startJMenuItem= new javax::swing::JMenuItem();
    
this->stopJMenuItem= new javax::swing::JMenuItem();
    
this->optionsJMenu= new javax::swing::JMenu();
    
this->stopOnFocusJCheckBoxMenuItem= new javax::swing::JCheckBoxMenuItem();
    
this->toolsJMenu= new javax::swing::JMenu();
    
this->helpJMenuItem= new javax::swing::JMenuItem();
    
this->updatesJMenuItem= new javax::swing::JMenuItem();
    
this->subscriptionJMenuItem= new javax::swing::JMenuItem();
    
this->modulesJMenuItem= new javax::swing::JMenuItem();
    
this->aboutJMenuItem= new javax::swing::JMenuItem();
    
this->noModuleSelectedJDialog->setMinimumSize(new java::awt::Dimension(200, 100));
    
this->noModuleSelectedJLabel->setText("Please Select A Module");
    

    javax::swing::GroupLayout* noModuleSelectedJDialogLayout = new javax::swing::GroupLayout(this->noModuleSelectedJDialog->getContentPane());;
    
this->noModuleSelectedJDialog->getContentPane()->setLayout(noModuleSelectedJDialogLayout);
    
noModuleSelectedJDialogLayout->setHorizontalGroup(noModuleSelectedJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(noModuleSelectedJDialogLayout->createSequentialGroup()->addContainerGap()->addComponent(noModuleSelectedJLabel)->addContainerGap(GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)));
    
noModuleSelectedJDialogLayout->setVerticalGroup(noModuleSelectedJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addComponent(noModuleSelectedJLabel, GroupLayout::Alignment->TRAILING, GroupLayout::DEFAULT_SIZE, 48, Short::MAX_VALUE));
    
setDefaultCloseOperation(WindowConstants::EXIT_ON_CLOSE);
    
this->setMinimumSize(new java::awt::Dimension(325, 215));
    
setResizable(false);
    
addWindowFocusListener([&]() {
    static thread_local InputAutomationJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::WindowFocusListener {
    public:
    using java::awt::event::WindowFocusListener::WindowFocusListener;
    InputAutomationJFrame* outer = anonymousOuter0;

    public: void windowGainedFocus(java::awt::event::WindowEvent* evt){
outer->formWindowGainedFocus(evt);
    
}

    public: void windowLostFocus(java::awt::event::WindowEvent* evt){
outer->formWindowLostFocus(evt);
    
}

    };
    return new Anonymous0();
}());
    
addFocusListener([&]() {
    static thread_local InputAutomationJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::FocusAdapter {
    public:
    using java::awt::event::FocusAdapter::FocusAdapter;
    InputAutomationJFrame* outer = anonymousOuter0;

    public: void focusGained(java::awt::event::FocusEvent* evt){
outer->formFocusGained(evt);
    
}

    public: void focusLost(java::awt::event::FocusEvent* evt){
outer->formFocusLost(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->gameRobotJTabbedPane->setMinimumSize(new java::awt::Dimension(320, 200));
    
this->inputAutomationModuleJList->setMinimumSize(new java::awt::Dimension(200, 0));
    
this->inputAutomationModuleJList->addListSelectionListener([&]() {
    static thread_local InputAutomationJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public javax::swing::event::ListSelectionListener {
    public:
    using javax::swing::event::ListSelectionListener::ListSelectionListener;
    InputAutomationJFrame* outer = anonymousOuter0;

    public: void valueChanged(javax::swing::event::ListSelectionEvent* evt){
outer->inputAutomationModuleJListValueChanged(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jScrollPane1->setViewportView(this->inputAutomationModuleJList);
    

    javax::swing::GroupLayout* inputAutomationModuleJPanelLayout = new javax::swing::GroupLayout(this->inputAutomationModuleJPanel);;
    
this->inputAutomationModuleJPanel->setLayout(inputAutomationModuleJPanelLayout);
    
inputAutomationModuleJPanelLayout->setHorizontalGroup(inputAutomationModuleJPanelLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(inputAutomationModuleJPanelLayout->createSequentialGroup()->addComponent(jScrollPane1, GroupLayout::PREFERRED_SIZE, 199, GroupLayout::PREFERRED_SIZE)->addContainerGap(367, Short::MAX_VALUE)));
    
inputAutomationModuleJPanelLayout->setVerticalGroup(inputAutomationModuleJPanelLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(inputAutomationModuleJPanelLayout->createSequentialGroup()->addComponent(jScrollPane1, GroupLayout::PREFERRED_SIZE, 330, GroupLayout::PREFERRED_SIZE)->addContainerGap(GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)));
    
this->gameRobotJTabbedPane->addTab("Modules", inputAutomationModuleJPanel);
    

    javax::swing::GroupLayout* automationModuleConfigurationJPanelLayout = new javax::swing::GroupLayout(this->automationModuleConfigurationJPanel);;
    
this->automationModuleConfigurationJPanel->setLayout(automationModuleConfigurationJPanelLayout);
    
automationModuleConfigurationJPanelLayout->setHorizontalGroup(automationModuleConfigurationJPanelLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGap(0, 566, Short::MAX_VALUE));
    
automationModuleConfigurationJPanelLayout->setVerticalGroup(automationModuleConfigurationJPanelLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGap(0, 334, Short::MAX_VALUE));
    
this->gameRobotJTabbedPane->addTab("Configuration", automationModuleConfigurationJPanel);
    
this->processingJMenu->setText("Processing");
    
this->processingJMenu->setToolTipText("Set module processing state");
    
this->startJMenuItem->setText(this->commonStrings->START);
    
this->startJMenuItem->addActionListener([&]() {
    static thread_local InputAutomationJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    InputAutomationJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->startJMenuItemActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->processingJMenu->add(this->startJMenuItem);
    
this->stopJMenuItem->setText("Stop");
    
this->stopJMenuItem->addActionListener([&]() {
    static thread_local InputAutomationJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    InputAutomationJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->stopJMenuItemActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->processingJMenu->add(this->stopJMenuItem);
    
this->mainJMenuBar->add(this->processingJMenu);
    
this->optionsJMenu->setText("Options");
    
this->optionsJMenu->addActionListener([&]() {
    static thread_local InputAutomationJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    InputAutomationJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->optionsJMenuActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->stopOnFocusJCheckBoxMenuItem->setSelected(true);
    
this->stopOnFocusJCheckBoxMenuItem->setEnabled(false);
    
this->stopOnFocusJCheckBoxMenuItem->setLabel("Stop Module On Focus");
    
this->stopOnFocusJCheckBoxMenuItem->addActionListener([&]() {
    static thread_local InputAutomationJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    InputAutomationJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->stopOnFocusJCheckBoxMenuItemActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->optionsJMenu->add(this->stopOnFocusJCheckBoxMenuItem);
    
this->mainJMenuBar->add(this->optionsJMenu);
    
this->toolsJMenu->setText("Help");
    
this->helpJMenuItem->setText("Help");
    
this->helpJMenuItem->addActionListener([&]() {
    static thread_local InputAutomationJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    InputAutomationJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->helpJMenuItemActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->toolsJMenu->add(this->helpJMenuItem);
    
this->updatesJMenuItem->setText("Updates");
    
this->updatesJMenuItem->addActionListener([&]() {
    static thread_local InputAutomationJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    InputAutomationJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->updatesJMenuItemActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->toolsJMenu->add(this->updatesJMenuItem);
    
this->subscriptionJMenuItem->setText("Subscription");
    
this->subscriptionJMenuItem->addActionListener([&]() {
    static thread_local InputAutomationJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    InputAutomationJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->subscriptionJMenuItemActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->toolsJMenu->add(this->subscriptionJMenuItem);
    
this->modulesJMenuItem->setText("Module Manager");
    
this->modulesJMenuItem->addActionListener([&]() {
    static thread_local InputAutomationJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    InputAutomationJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->modulesJMenuItemActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->toolsJMenu->add(this->modulesJMenuItem);
    
this->aboutJMenuItem->setText("About");
    
this->aboutJMenuItem->addActionListener([&]() {
    static thread_local InputAutomationJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    InputAutomationJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->aboutJMenuItemActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->toolsJMenu->add(this->aboutJMenuItem);
    
this->mainJMenuBar->add(this->toolsJMenu);
    
setJMenuBar(this->mainJMenuBar);
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(getContentPane());;
    
getContentPane()->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addComponent(gameRobotJTabbedPane, GroupLayout::Alignment->TRAILING, GroupLayout::DEFAULT_SIZE, 571, Short::MAX_VALUE));
    
layout->setVerticalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addComponent(gameRobotJTabbedPane, GroupLayout::Alignment->TRAILING, GroupLayout::DEFAULT_SIZE, 359, Short::MAX_VALUE));
    
pack();
    
}


    auto InputAutomationJFrame::subscriptionJMenuItemActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            Desktop::getDesktop()->browse(this->uri);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "subscriptionJMenuItemActionPerformed", &e);
    
}

}


    auto InputAutomationJFrame::updatesJMenuItemActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            Desktop::getDesktop()->browse(this->uri);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "updatesJMenuItemActionPerformed", &e);
    
}

}


    auto InputAutomationJFrame::aboutJMenuItemActionPerformed(java::awt::event::ActionEvent* evt) -> void{

    JDialog* textJDialog = new BasicTextJDialog("Copyright (c) 2002-2007 AllBinary");;
    
textJDialog->setVisible(true);
    
textJDialog->setLocationRelativeTo(this);
    
}


    auto InputAutomationJFrame::modulesJMenuItemActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            (new DesktopBundle())->start();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "modulesJMenuItemActionPerformed", &e);
    
}

}


    auto InputAutomationJFrame::helpJMenuItemActionPerformed(java::awt::event::ActionEvent* evt) -> void{
JavaHelpUtil::getInstance()->show(this->helpSet);
    
}


    auto InputAutomationJFrame::stopOnFocusJCheckBoxMenuItemActionPerformed(java::awt::event::ActionEvent* evt) -> void{
}


    auto InputAutomationJFrame::optionsJMenuActionPerformed(java::awt::event::ActionEvent* evt) -> void{
}


    auto InputAutomationJFrame::formWindowLostFocus(java::awt::event::WindowEvent* evt) -> void{
this->logUtil->putF("Nothing", this, "focusLost");
    
}


    auto InputAutomationJFrame::formWindowGainedFocus(java::awt::event::WindowEvent* evt) -> void{

                        if(this->stopOnFocusJCheckBoxMenuItem->isSelected())
                        
                                    {
                                    this->logUtil->putF("Stopping", this, "focusGained");
    

                        if(this->runnableInterface != 
                                    nullptr
                                )
                        
                                    {
                                    this->runnableInterface->setRunning(false);
    

                                    }
                                

                                    }
                                
}


    auto InputAutomationJFrame::formFocusLost(java::awt::event::FocusEvent* evt) -> void{
}


    auto InputAutomationJFrame::formFocusGained(java::awt::event::FocusEvent* evt) -> void{
}


    auto InputAutomationJFrame::inputAutomationModuleJListValueChanged(javax::swing::event::ListSelectionEvent* evt) -> void{

        try {
            
    std::string gameAutomationRobotModuleNameString = JavaBoxes::unbox<std::string>(this->inputAutomationModuleJList->getSelectedValue());;
    

                        if(true)
                        
                                    {
                                    this->inputAutomationModuleInterface= this->inputAutomationModuleFactory->getInstance(gameAutomationRobotModuleNameString);
    
this->getAutomationModuleConfigurationJPanel()->removeAll();
    

    javax::swing::GroupLayout* layout = dynamic_cast<javax::swing::GroupLayout*>(this->getAutomationModuleConfigurationJPanel()->getLayout());;
    
layout->setHorizontalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGap(0, 395, Short::MAX_VALUE)->addComponent(this->inputAutomationModuleInterface->getConfigurationJPanel(), GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE));
    
layout->setVerticalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGap(0, 256, Short::MAX_VALUE)->addComponent(this->inputAutomationModuleInterface->getConfigurationJPanel(), GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE));
    
this->gameRobotJTabbedPane->setEnabledAt(1, true);
    
this->logUtil->putF(JavaString::valueOf(JavaString::valueOf("Setting Module: ") +JavaString::valueOf(gameAutomationRobotModuleNameString)) +JavaString::valueOf(" and Configuration JPanel"), this, "gameAutomationRobotModuleJListValueChanged");
    

                                    }
                                
                        else {
                            this->logUtil->putF("Module name was null", this, "gameAutomationRobotModuleJListValueChanged");
    
this->gameRobotJTabbedPane->setEnabledAt(1, false);
    

                        }
                            

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "gameAutomationRobotModuleJListValueChanged", &e);
    
}

}


    auto InputAutomationJFrame::stopJMenuItemActionPerformed(java::awt::event::ActionEvent* evt) -> void{

                        if(this->runnableInterface != 
                                    nullptr
                                )
                        
                                    {
                                    this->runnableInterface->setRunning(false);
    

                                    }
                                
                        else {
                            this->noModuleSelectedJDialog->setVisible(true);
    
this->noModuleSelectedJDialog->setLocationRelativeTo(this);
    

                        }
                            
}


    auto InputAutomationJFrame::startJMenuItemActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            this->logUtil->putF("Starting", this, "startJMenuItemActionPerformed");
    

                        if(this->inputAutomationModuleInterface != 
                                    nullptr
                                )
                        
                                    {
                                    this->runnableInterface= this->inputAutomationModuleInterface->getInstance();
    

                        if(this->runnableInterface != 
                                    nullptr
                                )
                        
                                    {
                                    this->thread= new Thread(this->runnableInterface);
    
this->thread->setPriority(Thread::MIN_PRIORITY +1);
    
this->thread->start();
    

                                    }
                                
                        else {
                            this->logUtil->putF("Runnnable was null", this, "startJMenuItemActionPerformed");
    
this->noModuleSelectedJDialog->setVisible(true);
    
this->noModuleSelectedJDialog->setLocationRelativeTo(this);
    

                        }
                            

                                    }
                                
                        else {
                            this->logUtil->putF("InputAutomationModuleInterface was null", this, "startJMenuItemActionPerformed");
    
this->noModuleSelectedJDialog->setVisible(true);
    
this->noModuleSelectedJDialog->setLocationRelativeTo(this);
    

                        }
                            

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "startJMenuItemActionPerformed", &e);
    
}

}


    auto InputAutomationJFrame::getInstance() -> InputAutomationJFrame*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InputAutomationJFrame::INPUTAUTOMATION_JFRAME;
    
}


    auto InputAutomationJFrame::destroy() -> void{
InputAutomationJFrame::INPUTAUTOMATION_JFRAME->setVisible(false);
    
}


    auto InputAutomationJFrame::create(InputAutomationBundleActivatorListenerInterface* inputAutomationBundleActivatorListenerInterface) -> void{
LogConfigTypeFactory::getInstance();
    

    AppUrlGlobals* appUrlGlobals = new AppUrlGlobals();;
    
appUrlGlobals->setWebappPath("G:/mnt/bc/mydev/work_automation/automation/run/");
    
URLGLOBALS::init(appUrlGlobals);
    
WebappClassLoaderInfo::setLoader(appUrlGlobals->getClass()->getClassLoader());
    
EventQueue::invokeLater([&]() {
    static thread_local InputAutomationBundleActivatorListenerInterface* anonymous0_inputAutomationBundleActivatorListenerInterface{};
    anonymous0_inputAutomationBundleActivatorListenerInterface = inputAutomationBundleActivatorListenerInterface;
    class Anonymous0 : public ARunnable {
    public:
    using ARunnable::ARunnable;
    InputAutomationBundleActivatorListenerInterface* inputAutomationBundleActivatorListenerInterface = anonymous0_inputAutomationBundleActivatorListenerInterface;

    public: void run(){

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

        try {
            logUtil->putF("Running", this, commonStrings->RUN);
    
INPUTAUTOMATION_JFRAME= new InputAutomationJFrame();
    
InputRobotFactory::getInstance()->addListener(InputAutomationJFrame::getInstance());
    

                        if(inputAutomationBundleActivatorListenerInterface != 
                                    nullptr
                                )
                        
                                    {
                                    inputAutomationBundleActivatorListenerInterface->registerAsService();
    
inputAutomationBundleActivatorListenerInterface->useServices();
    

                                    }
                                
INPUTAUTOMATION_JFRAME->setVisible(true);
    

                //: 
} catch(Exception& e) 
            {
logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
}

}

    };
    return new Anonymous0();
}());
    
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationJFrame::main(std::vector<std::string> args) -> void{
InputAutomationJFrame::create(
                            nullptr);
    
}


    auto InputAutomationJFrame::getAutomationModuleConfigurationJPanel() -> javax::swing::JPanel*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->automationModuleConfigurationJPanel;
    
}


    auto InputAutomationJFrame::setAutomationModuleConfigurationJPanel(javax::swing::JPanel* automationModuleConfigurationJPanel) -> void{
this->automationModuleConfigurationJPanel= automationModuleConfigurationJPanel;
    
}


    auto InputAutomationJFrame::onAdd(InputAutomationRobotChangeEvent* inputAutomationRobotChangeEvent) -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, "onAdd");
    
InputRobotFactory::getInstance()->add(inputAutomationRobotChangeEvent->getInputAutomationRobotInterfaceWrapper()->getInputRobotInterface());
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "onAdd", &e);
    
}

}


    auto InputAutomationJFrame::onRemove(InputAutomationRobotChangeEvent* inputAutomationRobotChangeEvent) -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, "onRemove");
    
InputRobotFactory::getInstance()->add(inputAutomationRobotChangeEvent->getInputAutomationRobotInterfaceWrapper()->getInputRobotInterface());
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "onRemove", &e);
    
}

}


    auto InputAutomationJFrame::onAdd(InputAutomationConfigurationModuleChangeEvent* inputAutomationConfigurationChangeEvent) -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, "onAdd");
    
this->inputAutomationModuleConfigurations->add(inputAutomationConfigurationChangeEvent->getInputAutomationModuleConfiguration());
    
this->init();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "onAdd", &e);
    
}

}


    auto InputAutomationJFrame::onRemove(InputAutomationConfigurationModuleChangeEvent* inputAutomationConfigurationChangeEvent) -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, "onRemove");
    

    InputAutomationConfiguration* inputAutomationConfiguration = InputAutomationConfigurationFactory::getInstance()->inputAutomationConfiguration;;
    

    java::util::List<InputAutomationModuleConfiguration*>* inputAutomationModuleConfigurationList = inputAutomationConfiguration->getInputAutomationModuleConfigurationList();;
    

                        if(inputAutomationModuleConfigurationList == 
                                    nullptr
                                )
                        
                                    {
                                    
    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->putF(JavaString::valueOf("inputAutomationModuleConfigurationList: ") +JavaString::valueOf(inputAutomationModuleConfigurationList), this, commonStrings->INIT);
    



                            throw Exception();
                    

                                    }
                                

    InputAutomationModuleConfigurations* inputAutomationModuleConfigurations = new InputAutomationModuleConfigurations(inputAutomationConfiguration->getInputAutomationModuleConfigurationList());;
    
inputAutomationModuleConfigurations->remove(inputAutomationConfigurationChangeEvent->getInputAutomationModuleConfiguration());
    
this->init();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "onRemove", &e);
    
}

}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_INPUTAUTOMATIONJFRAME_CPP
