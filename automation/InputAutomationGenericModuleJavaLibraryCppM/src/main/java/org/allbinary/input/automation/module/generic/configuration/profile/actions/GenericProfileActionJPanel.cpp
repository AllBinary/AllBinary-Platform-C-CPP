
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
        



#include <org/allbinary/input/automation/actions/script/JTreeInterfaceFactory.h>

      
#include <org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptCondition.h>

      
#include <org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptCondition.h>

      
#include <org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h>

      
#include <org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptCondition.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScriptJPanel.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "GenericProfileAction.h"
#include "GroupLayout.h"
#include "Short.h"
#include "JScrollPane.h"
#include "JLabel.h"
#include "JButton.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"

class GenericProfileActionJPanel: public javax::swing::JPanel {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: GenericProfileAction genericProfileAction;

    private: GenericProfileActionScriptJPanel genericProfileActionScriptJPanel;

public: GenericProfileActionJPanel(){
this->initComponents();
    
}


    public: void updateProfileActionUI(){
this->blankProfileActionScriptJPanel.removeAll();
    

    GenericProfileActionScriptJPanel genericProfileActionScriptJPanel = GenericProfileActionScriptJPanel();;
    
JTreeInterfaceFactory::getInstance().set(genericProfileActionScriptJPanel);
    
this->setGenericProfileActionScriptJPanel(genericProfileActionScriptJPanel);
    
this->getGenericProfileActionScriptJPanel().setGenericProfileActionScript(this->getGenericProfileAction().getGenericProfileActionScript());
    
this->getGenericProfileActionScriptJPanel().updateJTree();
    

    javax::swing::GroupLayout layout = this->blankProfileActionScriptJPanel.getLayout() as javax::swing::GroupLayout;;
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGap(0, 395, Short::MAX_VALUE).addComponent(this->getGenericProfileActionScriptJPanel(), javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGap(0, 256, Short::MAX_VALUE).addComponent(this->getGenericProfileActionScriptJPanel(), javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE));
    
this->logUtil.putF("Updated UI", this, "updateUI");
    
}


    public: GenericProfileAction getGenericProfileAction(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->genericProfileAction;
    
}


    public: void setGenericProfileAction(GenericProfileAction genericProfileAction){
this->genericProfileAction= genericProfileAction;
    
}


    public: GenericProfileActionScriptJPanel getGenericProfileActionScriptJPanel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->genericProfileActionScriptJPanel;
    
}


    public: void setGenericProfileActionScriptJPanel(GenericProfileActionScriptJPanel genericProfileActionScriptJPanel){
this->genericProfileActionScriptJPanel= genericProfileActionScriptJPanel;
    
}


    private: void initComponents(){
this->genericProfileActionScriptJScrollPane= javax::swing::JScrollPane();
    
this->blankProfileActionScriptJPanel= javax::swing::JPanel();
    
this->ifJLabel= javax::swing::JLabel();
    
this->newColorAtJButton= javax::swing::JButton();
    
this->newTimeIntervalJButton= javax::swing::JButton();
    
this->newAlwaysJButton= javax::swing::JButton();
    
setMinimumSize(java::awt::Dimension(440, 275));
    
setPreferredSize(java::awt::Dimension(440, 275));
    
this->genericProfileActionScriptJScrollPane.setPreferredSize(java::awt::Dimension(474, 270));
    
this->blankProfileActionScriptJPanel.setMinimumSize(java::awt::Dimension(400, 200));
    

    javax::swing::GroupLayout blankProfileActionScriptJPanelLayout = javax::swing::GroupLayout(this->blankProfileActionScriptJPanel);;
    
this->blankProfileActionScriptJPanel.setLayout(blankProfileActionScriptJPanelLayout);
    
blankProfileActionScriptJPanelLayout.setHorizontalGroup(blankProfileActionScriptJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGap(0, 9996, Short::MAX_VALUE));
    
blankProfileActionScriptJPanelLayout.setVerticalGroup(blankProfileActionScriptJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGap(0, 9967, Short::MAX_VALUE));
    
this->genericProfileActionScriptJScrollPane.setViewportView(this->blankProfileActionScriptJPanel);
    
this->ifJLabel.setText("Conditions:");
    
this->newColorAtJButton.setText("Color Range At");
    
this->newColorAtJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
newColorAtJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->newTimeIntervalJButton.setText("Time Interval");
    
this->newTimeIntervalJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
newTimeIntervalJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->newAlwaysJButton.setText("Always On/Off");
    
this->newAlwaysJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
newAlwaysJButtonActionPerformed(evt);
    
}

                                }
                            );
    

    javax::swing::GroupLayout layout = javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addComponent(ifJLabel).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(newColorAtJButton).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(newTimeIntervalJButton).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(newAlwaysJButton).addContainerGap(61, Short::MAX_VALUE)).addComponent(genericProfileActionScriptJScrollPane, javax.swing.GroupLayout.DEFAULT_SIZE, 440, Short::MAX_VALUE));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(ifJLabel, javax.swing.GroupLayout.PREFERRED_SIZE, 14, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(newColorAtJButton).addComponent(newTimeIntervalJButton).addComponent(newAlwaysJButton)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(genericProfileActionScriptJScrollPane, javax.swing.GroupLayout.DEFAULT_SIZE, 246, Short::MAX_VALUE)));
    
}


    private: void newTimeIntervalJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->logUtil.putF("New Time Interval Action Condition", this, "newTimeIntervalJButtonActionPerformed");
    
this->getGenericProfileAction().getGenericProfileActionScript().addCondition(TimeIntervalActionScriptCondition() as ProfileActionScriptConditionInterface);
    
this->updateProfileActionUI();
    
}


    private: void newAlwaysJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->logUtil.putF("New EveryTime Action Condition", this, "newEveryTimeJButtonActionPerformed");
    
this->getGenericProfileAction().getGenericProfileActionScript().addCondition(AlwaysActionScriptCondition() as ProfileActionScriptConditionInterface);
    
this->updateProfileActionUI();
    
}


    private: void newColorAtJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->logUtil.putF("New Color At Action Condition", this, "newColorAtJButtonActionPerformed");
    
this->getGenericProfileAction().getGenericProfileActionScript().addCondition(ColorAtActionScriptCondition() as ProfileActionScriptConditionInterface);
    
this->updateProfileActionUI();
    
}


    private: javax::swing::JPanel blankProfileActionScriptJPanel;

    private: javax::swing::JScrollPane genericProfileActionScriptJScrollPane;

    private: javax::swing::JLabel ifJLabel;

    private: javax::swing::JButton newAlwaysJButton;

    private: javax::swing::JButton newColorAtJButton;

    private: javax::swing::JButton newTimeIntervalJButton;

};

            

