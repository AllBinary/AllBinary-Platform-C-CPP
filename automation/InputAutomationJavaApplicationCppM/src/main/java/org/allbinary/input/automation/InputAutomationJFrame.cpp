
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

    public: static InputAutomationJFrame* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputAutomationJFrame::INPUTAUTOMATION_JFRAME;
    
}


    public: static void destroy(){
InputAutomationJFrame::INPUTAUTOMATION_JFRAME->setVisible(false);
    
}


    public: static void create(InputAutomationBundleActivatorListenerInterface* inputAutomationBundleActivatorListenerInterface){
LogConfigTypeFactory::getInstance();
    

    AppUrlGlobals* appUrlGlobals = new AppUrlGlobals();;
    
appUrlGlobals->setWebappPath("G:/mnt/bc/mydev/work_automation/automation/run/");
    
URLGLOBALS::init(appUrlGlobals);
    
WebappClassLoaderInfo::setLoader(appUrlGlobals->getClass()getClassLoader());
    
java.awt.EventQueue.invokeLater(class extends ARunnable
                                {
                                
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

                                }
                            );
    
}


                //@Throws(Exception.constructor)
            
    public: static void main(std::vector<std::string> args){
InputAutomationJFrame::create(
                            nullptr);
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: InputAutomationModuleConfigurations* inputAutomationModuleConfigurations = new InputAutomationModuleConfigurations();

    private: InputAutomationModuleFactoryFactory* inputAutomationModuleFactory;

    private: InputAutomationModuleFactoryInterface* inputAutomationModuleInterface;

    private: RunnableInterface* runnableInterface;

    private: Thread* thread;

    private: HelpSet* helpSet;

    private: URI* uri = new URI("http://geocities.com/allbinary/");

public: InputAutomationJFrame(){
this->initComponents();
    

    URL* url = this->getClass()->getResource("/help/Help.hs");;
    
this->logUtil->putF("URL: " +url, this, this->commonStrings->CONSTRUCTOR);
    
this->helpSet= JavaHelpUtil::getInstance()->getHelpSet(url);
    
url= this->getClass()->getResource("/resources/allbinaryicon8bit.jpg");
    

    ImageIcon* imageIcon = new ImageIcon(url);;
    
this->setIconImage(imageIcon->getImage());
    
this->init();
    
}


    public: void helpSetAdded(HelpSetEvent* helpSetEvent){
this->helpSet->add(helpSetEvent->getHelpSet());
    
}


    public: void helpSetRemoved(HelpSetEvent* helpSetEvent){
this->helpSet->remove(helpSetEvent->getHelpSet());
    
}


                //@Throws(Exception.constructor)
            
    private: void init(){

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


    private: void initComponents(){
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
    
noModuleSelectedJDialogLayout->setHorizontalGroup(noModuleSelectedJDialogLayout->createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)->addGroup(noModuleSelectedJDialogLayout->createSequentialGroup()->addContainerGap()->addComponent(noModuleSelectedJLabel)->addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE)));
    
noModuleSelectedJDialogLayout->setVerticalGroup(noModuleSelectedJDialogLayout->createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)->addComponent(noModuleSelectedJLabel, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 48, Short::MAX_VALUE));
    
setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
    
this->setMinimumSize(new java::awt::Dimension(325, 215));
    
setResizable(false);
    
addWindowFocusListener(class extends java::awt::event::WindowFocusListener
                                {
                                
    public: void windowGainedFocus(java::awt::event::WindowEvent* evt){
formWindowGainedFocus(evt);
    
}

    public: void windowLostFocus(java::awt::event::WindowEvent* evt){
formWindowLostFocus(evt);
    
}

                                }
                            );
    
addFocusListener(class extends java::awt::event::FocusAdapter
                                {
                                
    public: void focusGained(java::awt::event::FocusEvent* evt){
formFocusGained(evt);
    
}

    public: void focusLost(java::awt::event::FocusEvent* evt){
formFocusLost(evt);
    
}

                                }
                            );
    
this->gameRobotJTabbedPane->setMinimumSize(new java::awt::Dimension(320, 200));
    
this->inputAutomationModuleJList->setMinimumSize(new java::awt::Dimension(200, 0));
    
this->inputAutomationModuleJList->addListSelectionListener(class extends javax::swing::event::ListSelectionListener
                                {
                                
    public: void valueChanged(javax::swing::event::ListSelectionEvent* evt){
inputAutomationModuleJListValueChanged(evt);
    
}

                                }
                            );
    
this->jScrollPane1->setViewportView(this->inputAutomationModuleJList);
    

    javax::swing::GroupLayout* inputAutomationModuleJPanelLayout = new javax::swing::GroupLayout(this->inputAutomationModuleJPanel);;
    
this->inputAutomationModuleJPanel->setLayout(inputAutomationModuleJPanelLayout);
    
inputAutomationModuleJPanelLayout->setHorizontalGroup(inputAutomationModuleJPanelLayout->createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)->addGroup(inputAutomationModuleJPanelLayout->createSequentialGroup()->addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 199, javax.swing.GroupLayout.PREFERRED_SIZE)->addContainerGap(367, Short::MAX_VALUE)));
    
inputAutomationModuleJPanelLayout->setVerticalGroup(inputAutomationModuleJPanelLayout->createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)->addGroup(inputAutomationModuleJPanelLayout->createSequentialGroup()->addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 330, javax.swing.GroupLayout.PREFERRED_SIZE)->addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE)));
    
this->gameRobotJTabbedPane->addTab("Modules", inputAutomationModuleJPanel);
    

    javax::swing::GroupLayout* automationModuleConfigurationJPanelLayout = new javax::swing::GroupLayout(this->automationModuleConfigurationJPanel);;
    
this->automationModuleConfigurationJPanel->setLayout(automationModuleConfigurationJPanelLayout);
    
automationModuleConfigurationJPanelLayout->setHorizontalGroup(automationModuleConfigurationJPanelLayout->createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)->addGap(0, 566, Short::MAX_VALUE));
    
automationModuleConfigurationJPanelLayout->setVerticalGroup(automationModuleConfigurationJPanelLayout->createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)->addGap(0, 334, Short::MAX_VALUE));
    
this->gameRobotJTabbedPane->addTab("Configuration", automationModuleConfigurationJPanel);
    
this->processingJMenu->setText("Processing");
    
this->processingJMenu->setToolTipText("Set module processing state");
    
this->startJMenuItem->setText(this->commonStrings->START);
    
this->startJMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
startJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->processingJMenu->add(this->startJMenuItem);
    
this->stopJMenuItem->setText("Stop");
    
this->stopJMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
stopJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->processingJMenu->add(this->stopJMenuItem);
    
this->mainJMenuBar->add(this->processingJMenu);
    
this->optionsJMenu->setText("Options");
    
this->optionsJMenu->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
optionsJMenuActionPerformed(evt);
    
}

                                }
                            );
    
this->stopOnFocusJCheckBoxMenuItem->setSelected(true);
    
this->stopOnFocusJCheckBoxMenuItem->setEnabled(false);
    
this->stopOnFocusJCheckBoxMenuItem->setLabel("Stop Module On Focus");
    
this->stopOnFocusJCheckBoxMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
stopOnFocusJCheckBoxMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->optionsJMenu->add(this->stopOnFocusJCheckBoxMenuItem);
    
this->mainJMenuBar->add(this->optionsJMenu);
    
this->toolsJMenu->setText("Help");
    
this->helpJMenuItem->setText("Help");
    
this->helpJMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
helpJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->toolsJMenu->add(this->helpJMenuItem);
    
this->updatesJMenuItem->setText("Updates");
    
this->updatesJMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
updatesJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->toolsJMenu->add(this->updatesJMenuItem);
    
this->subscriptionJMenuItem->setText("Subscription");
    
this->subscriptionJMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
subscriptionJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->toolsJMenu->add(this->subscriptionJMenuItem);
    
this->modulesJMenuItem->setText("Module Manager");
    
this->modulesJMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
modulesJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->toolsJMenu->add(this->modulesJMenuItem);
    
this->aboutJMenuItem->setText("About");
    
this->aboutJMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
aboutJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->toolsJMenu->add(this->aboutJMenuItem);
    
this->mainJMenuBar->add(this->toolsJMenu);
    
setJMenuBar(this->mainJMenuBar);
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(getContentPane());;
    
getContentPane()->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)->addComponent(gameRobotJTabbedPane, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 571, Short::MAX_VALUE));
    
layout->setVerticalGroup(layout->createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)->addComponent(gameRobotJTabbedPane, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 359, Short::MAX_VALUE));
    
pack();
    
}


    private: void subscriptionJMenuItemActionPerformed(java::awt::event::ActionEvent* evt){

        try {
            Desktop::getDesktop()->browse(this->uri);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "subscriptionJMenuItemActionPerformed", &e);
    
}

}


    private: void updatesJMenuItemActionPerformed(java::awt::event::ActionEvent* evt){

        try {
            Desktop::getDesktop()->browse(this->uri);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "updatesJMenuItemActionPerformed", &e);
    
}

}


    private: void aboutJMenuItemActionPerformed(java::awt::event::ActionEvent* evt){

    JDialog* textJDialog = new BasicTextJDialog("Copyright (c) 2002-2007 AllBinary");;
    
textJDialog->setVisible(true);
    
textJDialog->setLocationRelativeTo(this);
    
}


    private: void modulesJMenuItemActionPerformed(java::awt::event::ActionEvent* evt){

        try {
            (new DesktopBundle())->start();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "modulesJMenuItemActionPerformed", &e);
    
}

}


    private: void helpJMenuItemActionPerformed(java::awt::event::ActionEvent* evt){
JavaHelpUtil::getInstance()->show(this->helpSet);
    
}


    private: void stopOnFocusJCheckBoxMenuItemActionPerformed(java::awt::event::ActionEvent* evt){
}


    private: void optionsJMenuActionPerformed(java::awt::event::ActionEvent* evt){
}


    private: void formWindowLostFocus(java::awt::event::WindowEvent* evt){
this->logUtil->putF("Nothing", this, "focusLost");
    
}


    private: void formWindowGainedFocus(java::awt::event::WindowEvent* evt){

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


    private: void formFocusLost(java::awt::event::FocusEvent* evt){
}


    private: void formFocusGained(java::awt::event::FocusEvent* evt){
}


    private: void inputAutomationModuleJListValueChanged(javax::swing::event::ListSelectionEvent* evt){

        try {
            
    std::string gameAutomationRobotModuleNameString = this->inputAutomationModuleJList->getSelectedValue();;
    

                        if(true)
                        
                                    {
                                    this->inputAutomationModuleInterface= this->inputAutomationModuleFactory->getInstance(gameAutomationRobotModuleNameString);
    
this->getAutomationModuleConfigurationJPanel()->removeAll();
    

    javax::swing::GroupLayout* layout = dynamic_cast<javax::swing::GroupLayout*>(this->getAutomationModuleConfigurationJPanel()->getLayout());;
    
layout->setHorizontalGroup(layout->createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)->addGap(0, 395, Short::MAX_VALUE)->addComponent(this->inputAutomationModuleInterface->getConfigurationJPanel(), javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE));
    
layout->setVerticalGroup(layout->createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)->addGap(0, 256, Short::MAX_VALUE)->addComponent(this->inputAutomationModuleInterface->getConfigurationJPanel(), javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE));
    
this->gameRobotJTabbedPane->setEnabledAt(1, true);
    
this->logUtil->putF("Setting Module: " +gameAutomationRobotModuleNameString +" and Configuration JPanel", this, "gameAutomationRobotModuleJListValueChanged");
    

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


    private: void stopJMenuItemActionPerformed(java::awt::event::ActionEvent* evt){

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


    private: void startJMenuItemActionPerformed(java::awt::event::ActionEvent* evt){

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


    public: javax::swing::JPanel* getAutomationModuleConfigurationJPanel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->automationModuleConfigurationJPanel;
    
}


    public: void setAutomationModuleConfigurationJPanel(javax::swing::JPanel* automationModuleConfigurationJPanel){
this->automationModuleConfigurationJPanel= automationModuleConfigurationJPanel;
    
}


    public: void onAdd(InputAutomationRobotChangeEvent* inputAutomationRobotChangeEvent){

        try {
            this->logUtil->putF(this->commonStrings->START, this, "onAdd");
    
InputRobotFactory::getInstance()->add(inputAutomationRobotChangeEvent->getInputAutomationRobotInterfaceWrapper()->getInputRobotInterface());
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "onAdd", &e);
    
}

}


    public: void onRemove(InputAutomationRobotChangeEvent* inputAutomationRobotChangeEvent){

        try {
            this->logUtil->putF(this->commonStrings->START, this, "onRemove");
    
InputRobotFactory::getInstance()->add(inputAutomationRobotChangeEvent->getInputAutomationRobotInterfaceWrapper()->getInputRobotInterface());
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "onRemove", &e);
    
}

}


    public: void onAdd(InputAutomationConfigurationModuleChangeEvent* inputAutomationConfigurationChangeEvent){

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


    public: void onRemove(InputAutomationConfigurationModuleChangeEvent* inputAutomationConfigurationChangeEvent){

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
    
logUtil->putF("inputAutomationModuleConfigurationList: " +inputAutomationModuleConfigurationList, this, commonStrings->INIT);
    



                            throw new Exception();
                    

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

            

