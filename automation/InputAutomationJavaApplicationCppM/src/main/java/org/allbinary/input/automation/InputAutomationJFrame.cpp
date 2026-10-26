
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

class InputAutomationJFrame: public javax::swing::JFrame, public InputAutomationConfigurationModuleChangeListener, public InputAutomationRobotChangeListener, public HelpSetListener {

    private: static InputAutomationJFrame INPUTAUTOMATION_JFRAME;

    public: static InputAutomationJFrame getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputAutomationJFrame::INPUTAUTOMATION_JFRAME;
    
}


    public: static void destroy(){
InputAutomationJFrame::INPUTAUTOMATION_JFRAME.setVisible(false);
    
}


    public: static void create(InputAutomationBundleActivatorListenerInterface inputAutomationBundleActivatorListenerInterface){
LogConfigTypeFactory::getInstance();
    

    AppUrlGlobals appUrlGlobals = AppUrlGlobals();;
    
appUrlGlobals.setWebappPath("G:/mnt/bc/mydev/work_automation/automation/run/");
    
URLGLOBALS::init(appUrlGlobals);
    
WebappClassLoaderInfo::setLoader(appUrlGlobals.constructor.namegetClassLoader());
    
java.awt.EventQueue.invokeLater(class extends ARunnable
                                {
                                
    public: void run(){

    LogUtil logUtil = LogUtil::getInstance();;
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

        try {
            logUtil.putF("Running", this, commonStrings.RUN);
    
INPUTAUTOMATION_JFRAME= InputAutomationJFrame();
    
InputRobotFactory::getInstance().addListener(InputAutomationJFrame::getInstance());
    

                        if(inputAutomationBundleActivatorListenerInterface != 
                                    nullptr
                                )
                        
                                    {
                                    inputAutomationBundleActivatorListenerInterface.registerAsService();
    
inputAutomationBundleActivatorListenerInterface.useServices();
    

                                    }
                                
INPUTAUTOMATION_JFRAME::setVisible(true);
    

                //: 
} catch(e) 
            {
logUtil.put(commonStrings.EXCEPTION, this, commonStrings.RUN, e);
    
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


    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: InputAutomationModuleConfigurations inputAutomationModuleConfigurations = InputAutomationModuleConfigurations();

    private: InputAutomationModuleFactoryFactory inputAutomationModuleFactory;

    private: InputAutomationModuleFactoryInterface inputAutomationModuleInterface;

    private: RunnableInterface runnableInterface;

    private: Thread thread;

    private: HelpSet helpSet;

    private: const URI uri = URI("http://geocities.com/allbinary/");

public: InputAutomationJFrame(){
this->initComponents();
    

    URL url = this->constructor.name.getResource("/help/Help.hs");;
    
this->logUtil.putF("URL: " +url, this, this->commonStrings.CONSTRUCTOR);
    
this->helpSet= JavaHelpUtil::getInstance().getHelpSet(url);
    
url= this->constructor.name.getResource("/resources/allbinaryicon8bit.jpg");
    

    ImageIcon imageIcon = ImageIcon(url);;
    
this->setIconImage(imageIcon.getImage());
    
this->init();
    
}


    public: void helpSetAdded(HelpSetEvent helpSetEvent){
this->helpSet.add(helpSetEvent.getHelpSet());
    
}


    public: void helpSetRemoved(HelpSetEvent helpSetEvent){
this->helpSet.remove(helpSetEvent.getHelpSet());
    
}


                //@Throws(Exception.constructor)
            
    private: void init(){

    InputAutomationConfigurationFactory inputAutomationConfigurationFactory = InputAutomationConfigurationFactory::getInstance();;
    
inputAutomationConfigurationFactory.init(InputAutomationClientInformationFactory::getInstance());
    

    List<InputAutomationModuleConfiguration> inputAutomationModuleConfigurationList = inputAutomationConfigurationFactory.inputAutomationConfiguration.getInputAutomationModuleConfigurationList();;
    

                        if(inputAutomationModuleConfigurationList == 
                                    nullptr
                                )
                        
                                    {
                                    
                                    }
                                
                        else {
                            this->inputAutomationModuleConfigurations= InputAutomationModuleConfigurations(inputAutomationModuleConfigurationList);
    

                        }
                            
this->inputAutomationModuleFactory= InputAutomationModuleFactoryFactory(inputAutomationModuleConfigurations, this);
    
 = 
.
                    execute();
    
this->gameRobotJTabbedPane.setEnabledAt(1, false);
    
this->gameRobotJTabbedPane.setSelectedIndex(0);
    
}


    private: void initComponents(){
this->noModuleSelectedJDialog= javax::swing::JDialog();
    
this->noModuleSelectedJLabel= javax::swing::JLabel();
    
this->gameRobotJTabbedPane= javax::swing::JTabbedPane();
    
this->inputAutomationModuleJPanel= javax::swing::JPanel();
    
this->jScrollPane1= javax::swing::JScrollPane();
    
this->inputAutomationModuleJList= javax::swing::JList();
    
this->automationModuleConfigurationJPanel= javax::swing::JPanel();
    
this->mainJMenuBar= javax::swing::JMenuBar();
    
this->processingJMenu= javax::swing::JMenu();
    
this->startJMenuItem= javax::swing::JMenuItem();
    
this->stopJMenuItem= javax::swing::JMenuItem();
    
this->optionsJMenu= javax::swing::JMenu();
    
this->stopOnFocusJCheckBoxMenuItem= javax::swing::JCheckBoxMenuItem();
    
this->toolsJMenu= javax::swing::JMenu();
    
this->helpJMenuItem= javax::swing::JMenuItem();
    
this->updatesJMenuItem= javax::swing::JMenuItem();
    
this->subscriptionJMenuItem= javax::swing::JMenuItem();
    
this->modulesJMenuItem= javax::swing::JMenuItem();
    
this->aboutJMenuItem= javax::swing::JMenuItem();
    
this->noModuleSelectedJDialog.setMinimumSize(java::awt::Dimension(200, 100));
    
this->noModuleSelectedJLabel.setText("Please Select A Module");
    

    javax::swing::GroupLayout noModuleSelectedJDialogLayout = javax::swing::GroupLayout(this->noModuleSelectedJDialog.getContentPane());;
    
this->noModuleSelectedJDialog.getContentPane().setLayout(noModuleSelectedJDialogLayout);
    
noModuleSelectedJDialogLayout.setHorizontalGroup(noModuleSelectedJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(noModuleSelectedJDialogLayout.createSequentialGroup().addContainerGap().addComponent(noModuleSelectedJLabel).addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE)));
    
noModuleSelectedJDialogLayout.setVerticalGroup(noModuleSelectedJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(noModuleSelectedJLabel, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 48, Short::MAX_VALUE));
    
setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
    
this->setMinimumSize(java::awt::Dimension(325, 215));
    
setResizable(false);
    
addWindowFocusListener(class extends java::awt::event::WindowFocusListener
                                {
                                
    public: void windowGainedFocus(java::awt::event::WindowEvent evt){
formWindowGainedFocus(evt);
    
}

    public: void windowLostFocus(java::awt::event::WindowEvent evt){
formWindowLostFocus(evt);
    
}

                                }
                            );
    
addFocusListener(class extends java::awt::event::FocusAdapter
                                {
                                
    public: void focusGained(java::awt::event::FocusEvent evt){
formFocusGained(evt);
    
}

    public: void focusLost(java::awt::event::FocusEvent evt){
formFocusLost(evt);
    
}

                                }
                            );
    
this->gameRobotJTabbedPane.setMinimumSize(java::awt::Dimension(320, 200));
    
this->inputAutomationModuleJList.setMinimumSize(java::awt::Dimension(200, 0));
    
this->inputAutomationModuleJList.addListSelectionListener(class extends javax::swing::event::ListSelectionListener
                                {
                                
    public: void valueChanged(javax::swing::event::ListSelectionEvent evt){
inputAutomationModuleJListValueChanged(evt);
    
}

                                }
                            );
    
this->jScrollPane1.setViewportView(this->inputAutomationModuleJList);
    

    javax::swing::GroupLayout inputAutomationModuleJPanelLayout = javax::swing::GroupLayout(this->inputAutomationModuleJPanel);;
    
this->inputAutomationModuleJPanel.setLayout(inputAutomationModuleJPanelLayout);
    
inputAutomationModuleJPanelLayout.setHorizontalGroup(inputAutomationModuleJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(inputAutomationModuleJPanelLayout.createSequentialGroup().addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 199, javax.swing.GroupLayout.PREFERRED_SIZE).addContainerGap(367, Short::MAX_VALUE)));
    
inputAutomationModuleJPanelLayout.setVerticalGroup(inputAutomationModuleJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(inputAutomationModuleJPanelLayout.createSequentialGroup().addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 330, javax.swing.GroupLayout.PREFERRED_SIZE).addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE)));
    
this->gameRobotJTabbedPane.addTab("Modules", inputAutomationModuleJPanel);
    

    javax::swing::GroupLayout automationModuleConfigurationJPanelLayout = javax::swing::GroupLayout(this->automationModuleConfigurationJPanel);;
    
this->automationModuleConfigurationJPanel.setLayout(automationModuleConfigurationJPanelLayout);
    
automationModuleConfigurationJPanelLayout.setHorizontalGroup(automationModuleConfigurationJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGap(0, 566, Short::MAX_VALUE));
    
automationModuleConfigurationJPanelLayout.setVerticalGroup(automationModuleConfigurationJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGap(0, 334, Short::MAX_VALUE));
    
this->gameRobotJTabbedPane.addTab("Configuration", automationModuleConfigurationJPanel);
    
this->processingJMenu.setText("Processing");
    
this->processingJMenu.setToolTipText("Set module processing state");
    
this->startJMenuItem.setText(this->commonStrings.START);
    
this->startJMenuItem.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
startJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->processingJMenu.add(this->startJMenuItem);
    
this->stopJMenuItem.setText("Stop");
    
this->stopJMenuItem.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
stopJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->processingJMenu.add(this->stopJMenuItem);
    
this->mainJMenuBar.add(this->processingJMenu);
    
this->optionsJMenu.setText("Options");
    
this->optionsJMenu.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
optionsJMenuActionPerformed(evt);
    
}

                                }
                            );
    
this->stopOnFocusJCheckBoxMenuItem.setSelected(true);
    
this->stopOnFocusJCheckBoxMenuItem.setEnabled(false);
    
this->stopOnFocusJCheckBoxMenuItem.setLabel("Stop Module On Focus");
    
this->stopOnFocusJCheckBoxMenuItem.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
stopOnFocusJCheckBoxMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->optionsJMenu.add(this->stopOnFocusJCheckBoxMenuItem);
    
this->mainJMenuBar.add(this->optionsJMenu);
    
this->toolsJMenu.setText("Help");
    
this->helpJMenuItem.setText("Help");
    
this->helpJMenuItem.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
helpJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->toolsJMenu.add(this->helpJMenuItem);
    
this->updatesJMenuItem.setText("Updates");
    
this->updatesJMenuItem.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
updatesJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->toolsJMenu.add(this->updatesJMenuItem);
    
this->subscriptionJMenuItem.setText("Subscription");
    
this->subscriptionJMenuItem.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
subscriptionJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->toolsJMenu.add(this->subscriptionJMenuItem);
    
this->modulesJMenuItem.setText("Module Manager");
    
this->modulesJMenuItem.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
modulesJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->toolsJMenu.add(this->modulesJMenuItem);
    
this->aboutJMenuItem.setText("About");
    
this->aboutJMenuItem.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
aboutJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->toolsJMenu.add(this->aboutJMenuItem);
    
this->mainJMenuBar.add(this->toolsJMenu);
    
setJMenuBar(this->mainJMenuBar);
    

    javax::swing::GroupLayout layout = javax::swing::GroupLayout(getContentPane());;
    
getContentPane().setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(gameRobotJTabbedPane, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 571, Short::MAX_VALUE));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(gameRobotJTabbedPane, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 359, Short::MAX_VALUE));
    
pack();
    
}


    private: void subscriptionJMenuItemActionPerformed(java::awt::event::ActionEvent evt){

        try {
            Desktop::getDesktop().browse(this->uri);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "subscriptionJMenuItemActionPerformed", e);
    
}

}


    private: void updatesJMenuItemActionPerformed(java::awt::event::ActionEvent evt){

        try {
            Desktop::getDesktop().browse(this->uri);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "updatesJMenuItemActionPerformed", e);
    
}

}


    private: void aboutJMenuItemActionPerformed(java::awt::event::ActionEvent evt){

    JDialog textJDialog = BasicTextJDialog("Copyright (c) 2002-2007 AllBinary");;
    
textJDialog.setVisible(true);
    
textJDialog.setLocationRelativeTo(this);
    
}


    private: void modulesJMenuItemActionPerformed(java::awt::event::ActionEvent evt){

        try {
            DesktopBundle().start();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "modulesJMenuItemActionPerformed", e);
    
}

}


    private: void helpJMenuItemActionPerformed(java::awt::event::ActionEvent evt){
JavaHelpUtil::getInstance().show(this->helpSet);
    
}


    private: void stopOnFocusJCheckBoxMenuItemActionPerformed(java::awt::event::ActionEvent evt){
}


    private: void optionsJMenuActionPerformed(java::awt::event::ActionEvent evt){
}


    private: void formWindowLostFocus(java::awt::event::WindowEvent evt){
this->logUtil.putF("Nothing", this, "focusLost");
    
}


    private: void formWindowGainedFocus(java::awt::event::WindowEvent evt){

                        if(this->stopOnFocusJCheckBoxMenuItem.isSelected())
                        
                                    {
                                    this->logUtil.putF("Stopping", this, "focusGained");
    

                        if(this->runnableInterface != 
                                    nullptr
                                )
                        
                                    {
                                    this->runnableInterface.setRunning(false);
    

                                    }
                                

                                    }
                                
}


    private: void formFocusLost(java::awt::event::FocusEvent evt){
}


    private: void formFocusGained(java::awt::event::FocusEvent evt){
}


    private: void inputAutomationModuleJListValueChanged(javax::swing::event::ListSelectionEvent evt){

        try {
            
    std::string gameAutomationRobotModuleNameString = this->inputAutomationModuleJList.getSelectedValue();;
    

                        if(true)
                        
                                    {
                                    this->inputAutomationModuleInterface= this->inputAutomationModuleFactory.getInstance(gameAutomationRobotModuleNameString);
    
this->getAutomationModuleConfigurationJPanel().removeAll();
    

    javax::swing::GroupLayout layout = this->getAutomationModuleConfigurationJPanel().getLayout();;
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGap(0, 395, Short::MAX_VALUE).addComponent(this->inputAutomationModuleInterface.getConfigurationJPanel(), javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGap(0, 256, Short::MAX_VALUE).addComponent(this->inputAutomationModuleInterface.getConfigurationJPanel(), javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE));
    
this->gameRobotJTabbedPane.setEnabledAt(1, true);
    
this->logUtil.putF("Setting Module: " +gameAutomationRobotModuleNameString +" and Configuration JPanel", this, "gameAutomationRobotModuleJListValueChanged");
    

                                    }
                                
                        else {
                            this->logUtil.putF("Module name was null", this, "gameAutomationRobotModuleJListValueChanged");
    
this->gameRobotJTabbedPane.setEnabledAt(1, false);
    

                        }
                            

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "gameAutomationRobotModuleJListValueChanged", e);
    
}

}


    private: void stopJMenuItemActionPerformed(java::awt::event::ActionEvent evt){

                        if(this->runnableInterface != 
                                    nullptr
                                )
                        
                                    {
                                    this->runnableInterface.setRunning(false);
    

                                    }
                                
                        else {
                            this->noModuleSelectedJDialog.setVisible(true);
    
this->noModuleSelectedJDialog.setLocationRelativeTo(this);
    

                        }
                            
}


    private: void startJMenuItemActionPerformed(java::awt::event::ActionEvent evt){

        try {
            this->logUtil.putF("Starting", this, "startJMenuItemActionPerformed");
    

                        if(this->inputAutomationModuleInterface != 
                                    nullptr
                                )
                        
                                    {
                                    this->runnableInterface= this->inputAutomationModuleInterface.getInstance();
    

                        if(this->runnableInterface != 
                                    nullptr
                                )
                        
                                    {
                                    this->thread= Thread(this->runnableInterface);
    
this->thread.setPriority(Thread::MIN_PRIORITY +1);
    
this->thread.start();
    

                                    }
                                
                        else {
                            this->logUtil.putF("Runnnable was null", this, "startJMenuItemActionPerformed");
    
this->noModuleSelectedJDialog.setVisible(true);
    
this->noModuleSelectedJDialog.setLocationRelativeTo(this);
    

                        }
                            

                                    }
                                
                        else {
                            this->logUtil.putF("InputAutomationModuleInterface was null", this, "startJMenuItemActionPerformed");
    
this->noModuleSelectedJDialog.setVisible(true);
    
this->noModuleSelectedJDialog.setLocationRelativeTo(this);
    

                        }
                            

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "startJMenuItemActionPerformed", e);
    
}

}


    public: javax::swing::JPanel getAutomationModuleConfigurationJPanel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->automationModuleConfigurationJPanel;
    
}


    public: void setAutomationModuleConfigurationJPanel(javax::swing::JPanel automationModuleConfigurationJPanel){
this->automationModuleConfigurationJPanel= automationModuleConfigurationJPanel;
    
}


    public: void onAdd(InputAutomationRobotChangeEvent inputAutomationRobotChangeEvent){

        try {
            this->logUtil.putF(this->commonStrings.START, this, "onAdd");
    
InputRobotFactory::getInstance().add(inputAutomationRobotChangeEvent.getInputAutomationRobotInterfaceWrapper().getInputRobotInterface());
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "onAdd", e);
    
}

}


    public: void onRemove(InputAutomationRobotChangeEvent inputAutomationRobotChangeEvent){

        try {
            this->logUtil.putF(this->commonStrings.START, this, "onRemove");
    
InputRobotFactory::getInstance().add(inputAutomationRobotChangeEvent.getInputAutomationRobotInterfaceWrapper().getInputRobotInterface());
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "onRemove", e);
    
}

}


    public: void onAdd(InputAutomationConfigurationModuleChangeEvent inputAutomationConfigurationChangeEvent){

        try {
            this->logUtil.putF(this->commonStrings.START, this, "onAdd");
    
this->inputAutomationModuleConfigurations.add(inputAutomationConfigurationChangeEvent.getInputAutomationModuleConfiguration());
    
this->init();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "onAdd", e);
    
}

}


    public: void onRemove(InputAutomationConfigurationModuleChangeEvent inputAutomationConfigurationChangeEvent){

        try {
            this->logUtil.putF(this->commonStrings.START, this, "onRemove");
    

    InputAutomationConfiguration inputAutomationConfiguration = InputAutomationConfigurationFactory::getInstance().inputAutomationConfiguration;;
    

    java::util::List<InputAutomationModuleConfiguration> inputAutomationModuleConfigurationList = inputAutomationConfiguration.getInputAutomationModuleConfigurationList();;
    

                        if(inputAutomationModuleConfigurationList == 
                                    nullptr
                                )
                        
                                    {
                                    
    LogUtil logUtil = LogUtil::getInstance();;
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
logUtil.putF("inputAutomationModuleConfigurationList: " +inputAutomationModuleConfigurationList, this, commonStrings.INIT);
    



                            throw Exception();
                    

                                    }
                                

    InputAutomationModuleConfigurations inputAutomationModuleConfigurations = InputAutomationModuleConfigurations(inputAutomationConfiguration.getInputAutomationModuleConfigurationList());;
    
inputAutomationModuleConfigurations.remove(inputAutomationConfigurationChangeEvent.getInputAutomationModuleConfiguration());
    
this->init();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "onRemove", e);
    
}

}


    private: javax::swing::JMenuItem aboutJMenuItem;

    private: javax::swing::JPanel automationModuleConfigurationJPanel;

    private: javax::swing::JTabbedPane gameRobotJTabbedPane;

    private: javax::swing::JMenuItem helpJMenuItem;

    private: javax::swing::JList inputAutomationModuleJList;

    private: javax::swing::JPanel inputAutomationModuleJPanel;

    private: javax::swing::JScrollPane jScrollPane1;

    private: javax::swing::JMenuBar mainJMenuBar;

    private: javax::swing::JMenuItem modulesJMenuItem;

    private: javax::swing::JDialog noModuleSelectedJDialog;

    private: javax::swing::JLabel noModuleSelectedJLabel;

    private: javax::swing::JMenu optionsJMenu;

    private: javax::swing::JMenu processingJMenu;

    private: javax::swing::JMenuItem startJMenuItem;

    private: javax::swing::JMenuItem stopJMenuItem;

    private: javax::swing::JCheckBoxMenuItem stopOnFocusJCheckBoxMenuItem;

    private: javax::swing::JMenuItem subscriptionJMenuItem;

    private: javax::swing::JMenu toolsJMenu;

    private: javax::swing::JMenuItem updatesJMenuItem;

};

            

