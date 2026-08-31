
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

    public static InputAutomationJFrame getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputAutomationJFrame.INPUTAUTOMATION_JFRAME;
    
}


    public static destroy(){
InputAutomationJFrame.INPUTAUTOMATION_JFRAME.setVisible(false);
    
}


    public static create(InputAutomationBundleActivatorListenerInterface inputAutomationBundleActivatorListenerInterface){
LogConfigTypeFactory.getInstance();
    

    appUrlGlobals: AppUrlGlobals = new AppUrlGlobals();;
    
appUrlGlobals!.setWebappPath("G:/mnt/bc/mydev/work_automation/automation/run/");
    
URLGLOBALS.init(appUrlGlobals);
    
WebappClassLoaderInfo.setLoader(appUrlGlobals!.constructor.namegetClassLoader());
    
java.awt.EventQueue.invokeLater(new class extends ARunnable
                                {
                                
    public run(){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

        try {
            logUtil!.putF("Running", this, commonStrings!.RUN);
    
INPUTAUTOMATION_JFRAME= new InputAutomationJFrame();
    
InputRobotFactory.getInstance()!.addListener(InputAutomationJFrame.getInstance());
    

                        if(inputAutomationBundleActivatorListenerInterface != 
                                    null
                                )
                        
                                    {
                                    inputAutomationBundleActivatorListenerInterface!.registerAsService();
    
inputAutomationBundleActivatorListenerInterface!.useServices();
    

                                    }
                                
INPUTAUTOMATION_JFRAME.setVisible(true);
    

                //: 
} catch(e) 
            {
logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.RUN, e);
    
}

}

                                }
                            );
    
}


                //@Throws(Exception.constructor)
            
    public static main(std::vector<string> args){
InputAutomationJFrame.create(
                            nullptr);
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: inputAutomationModuleConfigurations: InputAutomationModuleConfigurations = new InputAutomationModuleConfigurations();

    private: inputAutomationModuleFactory: InputAutomationModuleFactoryFactory;

    private: inputAutomationModuleInterface: InputAutomationModuleFactoryInterface;

    private: runnableInterface: RunnableInterface;

    private: thread: Thread;

    private: helpSet: HelpSet;

    private: const uri: URI = new URI("http://geocities.com/allbinary/");

public constructor (){

            super();
        this.initComponents();
    

    url: URL = this.constructor.name.getResource("/help/Help.hs")!;;
    
this.logUtil!.putF("URL: " +url, this, this.commonStrings!.CONSTRUCTOR);
    
this.helpSet= JavaHelpUtil.getInstance()!.getHelpSet(url);
    
url= this.constructor.name.getResource("/resources/allbinaryicon8bit.jpg");
    

    imageIcon: ImageIcon = new ImageIcon(url);;
    
this.setIconImage(imageIcon!.getImage());
    
this.init();
    
}


    public helpSetAdded(HelpSetEvent helpSetEvent){
this.helpSet!.add(helpSetEvent!.getHelpSet());
    
}


    public helpSetRemoved(HelpSetEvent helpSetEvent){
this.helpSet!.remove(helpSetEvent!.getHelpSet());
    
}


                //@Throws(Exception.constructor)
            
    init(){

    inputAutomationConfigurationFactory: InputAutomationConfigurationFactory = InputAutomationConfigurationFactory.getInstance()!;;
    
inputAutomationConfigurationFactory!.init(InputAutomationClientInformationFactory.getInstance());
    

    inputAutomationModuleConfigurationList: List<InputAutomationModuleConfiguration> = inputAutomationConfigurationFactory!.inputAutomationConfiguration!.getInputAutomationModuleConfigurationList()!;;
    

                        if(inputAutomationModuleConfigurationList == 
                                    null
                                )
                        
                                    {
                                    
                                    }
                                
                        else {
                            this.inputAutomationModuleConfigurations= new InputAutomationModuleConfigurations(inputAutomationModuleConfigurationList);
    

                        }
                            
this.inputAutomationModuleFactory= new InputAutomationModuleFactoryFactory(inputAutomationModuleConfigurations, this);
    
 = 
.
                    execute();
    
this.gameRobotJTabbedPane!.setEnabledAt(1, false);
    
this.gameRobotJTabbedPane!.setSelectedIndex(0);
    
}


    initComponents(){
this.noModuleSelectedJDialog= new javax.swing.JDialog();
    
this.noModuleSelectedJLabel= new javax.swing.JLabel();
    
this.gameRobotJTabbedPane= new javax.swing.JTabbedPane();
    
this.inputAutomationModuleJPanel= new javax.swing.JPanel();
    
this.jScrollPane1= new javax.swing.JScrollPane();
    
this.inputAutomationModuleJList= new javax.swing.JList();
    
this.automationModuleConfigurationJPanel= new javax.swing.JPanel();
    
this.mainJMenuBar= new javax.swing.JMenuBar();
    
this.processingJMenu= new javax.swing.JMenu();
    
this.startJMenuItem= new javax.swing.JMenuItem();
    
this.stopJMenuItem= new javax.swing.JMenuItem();
    
this.optionsJMenu= new javax.swing.JMenu();
    
this.stopOnFocusJCheckBoxMenuItem= new javax.swing.JCheckBoxMenuItem();
    
this.toolsJMenu= new javax.swing.JMenu();
    
this.helpJMenuItem= new javax.swing.JMenuItem();
    
this.updatesJMenuItem= new javax.swing.JMenuItem();
    
this.subscriptionJMenuItem= new javax.swing.JMenuItem();
    
this.modulesJMenuItem= new javax.swing.JMenuItem();
    
this.aboutJMenuItem= new javax.swing.JMenuItem();
    
this.noModuleSelectedJDialog!.setMinimumSize(new java.awt.Dimension(200, 100));
    
this.noModuleSelectedJLabel!.setText("Please Select A Module");
    

    noModuleSelectedJDialogLayout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this.noModuleSelectedJDialog!.getContentPane());;
    
this.noModuleSelectedJDialog!.getContentPane()!.setLayout(noModuleSelectedJDialogLayout);
    
noModuleSelectedJDialogLayout!.setHorizontalGroup(noModuleSelectedJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(noModuleSelectedJDialogLayout!.createSequentialGroup()!.addContainerGap()!.addComponent(noModuleSelectedJLabel)!.addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)));
    
noModuleSelectedJDialogLayout!.setVerticalGroup(noModuleSelectedJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addComponent(noModuleSelectedJLabel, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 48, Short.MAX_VALUE));
    
setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
    
this.setMinimumSize(new java.awt.Dimension(325, 215));
    
setResizable(false);
    
addWindowFocusListener(new class extends java.awt.event.WindowFocusListener
                                {
                                
    public windowGainedFocus(java.awt.event.WindowEvent evt){
formWindowGainedFocus(evt);
    
}

    public windowLostFocus(java.awt.event.WindowEvent evt){
formWindowLostFocus(evt);
    
}

                                }
                            );
    
addFocusListener(new class extends java.awt.event.FocusAdapter
                                {
                                
    public focusGained(java.awt.event.FocusEvent evt){
formFocusGained(evt);
    
}

    public focusLost(java.awt.event.FocusEvent evt){
formFocusLost(evt);
    
}

                                }
                            );
    
this.gameRobotJTabbedPane!.setMinimumSize(new java.awt.Dimension(320, 200));
    
this.inputAutomationModuleJList!.setMinimumSize(new java.awt.Dimension(200, 0));
    
this.inputAutomationModuleJList!.addListSelectionListener(new class extends javax.swing.event.ListSelectionListener
                                {
                                
    public valueChanged(javax.swing.event.ListSelectionEvent evt){
inputAutomationModuleJListValueChanged(evt);
    
}

                                }
                            );
    
this.jScrollPane1!.setViewportView(this.inputAutomationModuleJList);
    

    inputAutomationModuleJPanelLayout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this.inputAutomationModuleJPanel);;
    
this.inputAutomationModuleJPanel!.setLayout(inputAutomationModuleJPanelLayout);
    
inputAutomationModuleJPanelLayout!.setHorizontalGroup(inputAutomationModuleJPanelLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(inputAutomationModuleJPanelLayout!.createSequentialGroup()!.addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 199, javax.swing.GroupLayout.PREFERRED_SIZE)!.addContainerGap(367, Short.MAX_VALUE)));
    
inputAutomationModuleJPanelLayout!.setVerticalGroup(inputAutomationModuleJPanelLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(inputAutomationModuleJPanelLayout!.createSequentialGroup()!.addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 330, javax.swing.GroupLayout.PREFERRED_SIZE)!.addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)));
    
this.gameRobotJTabbedPane!.addTab("Modules", inputAutomationModuleJPanel);
    

    automationModuleConfigurationJPanelLayout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this.automationModuleConfigurationJPanel);;
    
this.automationModuleConfigurationJPanel!.setLayout(automationModuleConfigurationJPanelLayout);
    
automationModuleConfigurationJPanelLayout!.setHorizontalGroup(automationModuleConfigurationJPanelLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGap(0, 566, Short.MAX_VALUE));
    
automationModuleConfigurationJPanelLayout!.setVerticalGroup(automationModuleConfigurationJPanelLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGap(0, 334, Short.MAX_VALUE));
    
this.gameRobotJTabbedPane!.addTab("Configuration", automationModuleConfigurationJPanel);
    
this.processingJMenu!.setText("Processing");
    
this.processingJMenu!.setToolTipText("Set module processing state");
    
this.startJMenuItem!.setText(this.commonStrings!.START);
    
this.startJMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
startJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.processingJMenu!.add(this.startJMenuItem);
    
this.stopJMenuItem!.setText("Stop");
    
this.stopJMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
stopJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.processingJMenu!.add(this.stopJMenuItem);
    
this.mainJMenuBar!.add(this.processingJMenu);
    
this.optionsJMenu!.setText("Options");
    
this.optionsJMenu!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
optionsJMenuActionPerformed(evt);
    
}

                                }
                            );
    
this.stopOnFocusJCheckBoxMenuItem!.setSelected(true);
    
this.stopOnFocusJCheckBoxMenuItem!.setEnabled(false);
    
this.stopOnFocusJCheckBoxMenuItem!.setLabel("Stop Module On Focus");
    
this.stopOnFocusJCheckBoxMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
stopOnFocusJCheckBoxMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.optionsJMenu!.add(this.stopOnFocusJCheckBoxMenuItem);
    
this.mainJMenuBar!.add(this.optionsJMenu);
    
this.toolsJMenu!.setText("Help");
    
this.helpJMenuItem!.setText("Help");
    
this.helpJMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
helpJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.toolsJMenu!.add(this.helpJMenuItem);
    
this.updatesJMenuItem!.setText("Updates");
    
this.updatesJMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
updatesJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.toolsJMenu!.add(this.updatesJMenuItem);
    
this.subscriptionJMenuItem!.setText("Subscription");
    
this.subscriptionJMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
subscriptionJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.toolsJMenu!.add(this.subscriptionJMenuItem);
    
this.modulesJMenuItem!.setText("Module Manager");
    
this.modulesJMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
modulesJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.toolsJMenu!.add(this.modulesJMenuItem);
    
this.aboutJMenuItem!.setText("About");
    
this.aboutJMenuItem!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
aboutJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this.toolsJMenu!.add(this.aboutJMenuItem);
    
this.mainJMenuBar!.add(this.toolsJMenu);
    
setJMenuBar(this.mainJMenuBar);
    

    layout: javax.swing.GroupLayout = new javax.swing.GroupLayout(getContentPane());;
    
getContentPane()!.setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addComponent(gameRobotJTabbedPane, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 571, Short.MAX_VALUE));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addComponent(gameRobotJTabbedPane, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 359, Short.MAX_VALUE));
    
pack();
    
}


    subscriptionJMenuItemActionPerformed(java.awt.event.ActionEvent evt){

        try {
            Desktop.getDesktop()!.browse(this.uri);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "subscriptionJMenuItemActionPerformed", e);
    
}

}


    updatesJMenuItemActionPerformed(java.awt.event.ActionEvent evt){

        try {
            Desktop.getDesktop()!.browse(this.uri);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "updatesJMenuItemActionPerformed", e);
    
}

}


    aboutJMenuItemActionPerformed(java.awt.event.ActionEvent evt){

    textJDialog: JDialog = new BasicTextJDialog("Copyright (c) 2002-2007 AllBinary");;
    
textJDialog!.setVisible(true);
    
textJDialog!.setLocationRelativeTo(this);
    
}


    modulesJMenuItemActionPerformed(java.awt.event.ActionEvent evt){

        try {
            new DesktopBundle().start();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "modulesJMenuItemActionPerformed", e);
    
}

}


    helpJMenuItemActionPerformed(java.awt.event.ActionEvent evt){
JavaHelpUtil.getInstance()!.show(this.helpSet);
    
}


    stopOnFocusJCheckBoxMenuItemActionPerformed(java.awt.event.ActionEvent evt){
}


    optionsJMenuActionPerformed(java.awt.event.ActionEvent evt){
}


    formWindowLostFocus(java.awt.event.WindowEvent evt){
this.logUtil!.putF("Nothing", this, "focusLost");
    
}


    formWindowGainedFocus(java.awt.event.WindowEvent evt){

                        if(this.stopOnFocusJCheckBoxMenuItem!.isSelected())
                        
                                    {
                                    this.logUtil!.putF("Stopping", this, "focusGained");
    

                        if(this.runnableInterface != 
                                    null
                                )
                        
                                    {
                                    this.runnableInterface!.setRunning(false);
    

                                    }
                                

                                    }
                                
}


    formFocusLost(java.awt.event.FocusEvent evt){
}


    formFocusGained(java.awt.event.FocusEvent evt){
}


    inputAutomationModuleJListValueChanged(javax.swing.event.ListSelectionEvent evt){

        try {
            
    gameAutomationRobotModuleNameString: string = this.inputAutomationModuleJList!.getSelectedValue() as string;;
    

                        if(gameAutomationRobotModuleNameString != 
                                    null
                                )
                        
                                    {
                                    this.inputAutomationModuleInterface= this.inputAutomationModuleFactory!.getInstance(gameAutomationRobotModuleNameString);
    
this.getAutomationModuleConfigurationJPanel()!.removeAll();
    

    layout: javax.swing.GroupLayout = this.getAutomationModuleConfigurationJPanel()!.getLayout() as javax.swing.GroupLayout;;
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGap(0, 395, Short.MAX_VALUE)!.addComponent(this.inputAutomationModuleInterface!.getConfigurationJPanel(), javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGap(0, 256, Short.MAX_VALUE)!.addComponent(this.inputAutomationModuleInterface!.getConfigurationJPanel(), javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE));
    
this.gameRobotJTabbedPane!.setEnabledAt(1, true);
    
this.logUtil!.putF("Setting Module: " +gameAutomationRobotModuleNameString +" and Configuration JPanel", this, "gameAutomationRobotModuleJListValueChanged");
    

                                    }
                                
                        else {
                            this.logUtil!.putF("Module name was null", this, "gameAutomationRobotModuleJListValueChanged");
    
this.gameRobotJTabbedPane!.setEnabledAt(1, false);
    

                        }
                            

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "gameAutomationRobotModuleJListValueChanged", e);
    
}

}


    stopJMenuItemActionPerformed(java.awt.event.ActionEvent evt){

                        if(this.runnableInterface != 
                                    null
                                )
                        
                                    {
                                    this.runnableInterface!.setRunning(false);
    

                                    }
                                
                        else {
                            this.noModuleSelectedJDialog!.setVisible(true);
    
this.noModuleSelectedJDialog!.setLocationRelativeTo(this);
    

                        }
                            
}


    startJMenuItemActionPerformed(java.awt.event.ActionEvent evt){

        try {
            this.logUtil!.putF("Starting", this, "startJMenuItemActionPerformed");
    

                        if(this.inputAutomationModuleInterface != 
                                    null
                                )
                        
                                    {
                                    this.runnableInterface= this.inputAutomationModuleInterface!.getInstance();
    

                        if(this.runnableInterface != 
                                    null
                                )
                        
                                    {
                                    this.thread= new Thread(this.runnableInterface);
    
this.thread.setPriority(Thread.MIN_PRIORITY +1);
    
this.thread.start();
    

                                    }
                                
                        else {
                            this.logUtil!.putF("Runnnable was null", this, "startJMenuItemActionPerformed");
    
this.noModuleSelectedJDialog!.setVisible(true);
    
this.noModuleSelectedJDialog!.setLocationRelativeTo(this);
    

                        }
                            

                                    }
                                
                        else {
                            this.logUtil!.putF("InputAutomationModuleInterface was null", this, "startJMenuItemActionPerformed");
    
this.noModuleSelectedJDialog!.setVisible(true);
    
this.noModuleSelectedJDialog!.setLocationRelativeTo(this);
    

                        }
                            

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "startJMenuItemActionPerformed", e);
    
}

}


    public javax.swing.JPanel getAutomationModuleConfigurationJPanel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.automationModuleConfigurationJPanel;
    
}


    public setAutomationModuleConfigurationJPanel(javax.swing.JPanel automationModuleConfigurationJPanel){
this.automationModuleConfigurationJPanel= automationModuleConfigurationJPanel;
    
}


    public onAdd(InputAutomationRobotChangeEvent inputAutomationRobotChangeEvent){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, "onAdd");
    
InputRobotFactory.getInstance()!.add(inputAutomationRobotChangeEvent!.getInputAutomationRobotInterfaceWrapper()!.getInputRobotInterface());
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "onAdd", e);
    
}

}


    public onRemove(InputAutomationRobotChangeEvent inputAutomationRobotChangeEvent){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, "onRemove");
    
InputRobotFactory.getInstance()!.add(inputAutomationRobotChangeEvent!.getInputAutomationRobotInterfaceWrapper()!.getInputRobotInterface());
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "onRemove", e);
    
}

}


    public onAdd(InputAutomationConfigurationModuleChangeEvent inputAutomationConfigurationChangeEvent){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, "onAdd");
    
this.inputAutomationModuleConfigurations!.add(inputAutomationConfigurationChangeEvent!.getInputAutomationModuleConfiguration());
    
this.init();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "onAdd", e);
    
}

}


    public onRemove(InputAutomationConfigurationModuleChangeEvent inputAutomationConfigurationChangeEvent){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, "onRemove");
    

    inputAutomationConfiguration: InputAutomationConfiguration = InputAutomationConfigurationFactory.getInstance()!.inputAutomationConfiguration;;
    

    inputAutomationModuleConfigurationList: java.util.List<InputAutomationModuleConfiguration> = inputAutomationConfiguration!.getInputAutomationModuleConfigurationList()!;;
    

                        if(inputAutomationModuleConfigurationList == 
                                    null
                                )
                        
                                    {
                                    
    logUtil: LogUtil = LogUtil.getInstance()!;;
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
logUtil!.putF("inputAutomationModuleConfigurationList: " +inputAutomationModuleConfigurationList, this, commonStrings!.INIT);
    



                            throw new Exception();
                    

                                    }
                                

    inputAutomationModuleConfigurations: InputAutomationModuleConfigurations = new InputAutomationModuleConfigurations(inputAutomationConfiguration!.getInputAutomationModuleConfigurationList());;
    
inputAutomationModuleConfigurations!.remove(inputAutomationConfigurationChangeEvent!.getInputAutomationModuleConfiguration());
    
this.init();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "onRemove", e);
    
}

}


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

            

