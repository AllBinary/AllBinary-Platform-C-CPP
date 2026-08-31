
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

class GenericProfileActionJPanel: public javax.swing.JPanel {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: genericProfileAction: GenericProfileAction;

    private: genericProfileActionScriptJPanel: GenericProfileActionScriptJPanel;

public constructor (){

            super();
        this.initComponents();
    
}


    public updateProfileActionUI(){
this.blankProfileActionScriptJPanel!.removeAll();
    

    genericProfileActionScriptJPanel: GenericProfileActionScriptJPanel = new GenericProfileActionScriptJPanel();;
    
JTreeInterfaceFactory.getInstance()!.set(genericProfileActionScriptJPanel);
    
this.setGenericProfileActionScriptJPanel(genericProfileActionScriptJPanel);
    
this.getGenericProfileActionScriptJPanel()!.setGenericProfileActionScript(this.getGenericProfileAction()!.getGenericProfileActionScript());
    
this.getGenericProfileActionScriptJPanel()!.updateJTree();
    

    layout: javax.swing.GroupLayout = this.blankProfileActionScriptJPanel!.getLayout() as javax.swing.GroupLayout;;
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGap(0, 395, Short.MAX_VALUE)!.addComponent(this.getGenericProfileActionScriptJPanel(), javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGap(0, 256, Short.MAX_VALUE)!.addComponent(this.getGenericProfileActionScriptJPanel(), javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE));
    
this.logUtil!.putF("Updated UI", this, "updateUI");
    
}


    public GenericProfileAction getGenericProfileAction(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.genericProfileAction;
    
}


    public setGenericProfileAction(GenericProfileAction genericProfileAction){
this.genericProfileAction= genericProfileAction;
    
}


    public GenericProfileActionScriptJPanel getGenericProfileActionScriptJPanel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.genericProfileActionScriptJPanel;
    
}


    public setGenericProfileActionScriptJPanel(GenericProfileActionScriptJPanel genericProfileActionScriptJPanel){
this.genericProfileActionScriptJPanel= genericProfileActionScriptJPanel;
    
}


    initComponents(){
this.genericProfileActionScriptJScrollPane= new javax.swing.JScrollPane();
    
this.blankProfileActionScriptJPanel= new javax.swing.JPanel();
    
this.ifJLabel= new javax.swing.JLabel();
    
this.newColorAtJButton= new javax.swing.JButton();
    
this.newTimeIntervalJButton= new javax.swing.JButton();
    
this.newAlwaysJButton= new javax.swing.JButton();
    
setMinimumSize(new java.awt.Dimension(440, 275));
    
setPreferredSize(new java.awt.Dimension(440, 275));
    
this.genericProfileActionScriptJScrollPane!.setPreferredSize(new java.awt.Dimension(474, 270));
    
this.blankProfileActionScriptJPanel!.setMinimumSize(new java.awt.Dimension(400, 200));
    

    blankProfileActionScriptJPanelLayout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this.blankProfileActionScriptJPanel);;
    
this.blankProfileActionScriptJPanel!.setLayout(blankProfileActionScriptJPanelLayout);
    
blankProfileActionScriptJPanelLayout!.setHorizontalGroup(blankProfileActionScriptJPanelLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGap(0, 9996, Short.MAX_VALUE));
    
blankProfileActionScriptJPanelLayout!.setVerticalGroup(blankProfileActionScriptJPanelLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGap(0, 9967, Short.MAX_VALUE));
    
this.genericProfileActionScriptJScrollPane!.setViewportView(this.blankProfileActionScriptJPanel);
    
this.ifJLabel!.setText("Conditions:");
    
this.newColorAtJButton!.setText("Color Range At");
    
this.newColorAtJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
newColorAtJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.newTimeIntervalJButton!.setText("Time Interval");
    
this.newTimeIntervalJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
newTimeIntervalJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.newAlwaysJButton!.setText("Always On/Off");
    
this.newAlwaysJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
newAlwaysJButtonActionPerformed(evt);
    
}

                                }
                            );
    

    layout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this);;
    
this.setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(layout.createSequentialGroup()!.addComponent(ifJLabel)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(newColorAtJButton)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(newTimeIntervalJButton)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(newAlwaysJButton)!.addContainerGap(61, Short.MAX_VALUE))!.addComponent(genericProfileActionScriptJScrollPane, javax.swing.GroupLayout.DEFAULT_SIZE, 440, Short.MAX_VALUE));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(layout.createSequentialGroup()!.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(ifJLabel, javax.swing.GroupLayout.PREFERRED_SIZE, 14, javax.swing.GroupLayout.PREFERRED_SIZE)!.addComponent(newColorAtJButton)!.addComponent(newTimeIntervalJButton)!.addComponent(newAlwaysJButton))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(genericProfileActionScriptJScrollPane, javax.swing.GroupLayout.DEFAULT_SIZE, 246, Short.MAX_VALUE)));
    
}


    newTimeIntervalJButtonActionPerformed(java.awt.event.ActionEvent evt){
this.logUtil!.putF("New Time Interval Action Condition", this, "newTimeIntervalJButtonActionPerformed");
    
this.getGenericProfileAction()!.getGenericProfileActionScript()!.addCondition(new TimeIntervalActionScriptCondition() as ProfileActionScriptConditionInterface);
    
this.updateProfileActionUI();
    
}


    newAlwaysJButtonActionPerformed(java.awt.event.ActionEvent evt){
this.logUtil!.putF("New EveryTime Action Condition", this, "newEveryTimeJButtonActionPerformed");
    
this.getGenericProfileAction()!.getGenericProfileActionScript()!.addCondition(new AlwaysActionScriptCondition() as ProfileActionScriptConditionInterface);
    
this.updateProfileActionUI();
    
}


    newColorAtJButtonActionPerformed(java.awt.event.ActionEvent evt){
this.logUtil!.putF("New Color At Action Condition", this, "newColorAtJButtonActionPerformed");
    
this.getGenericProfileAction()!.getGenericProfileActionScript()!.addCondition(new ColorAtActionScriptCondition() as ProfileActionScriptConditionInterface);
    
this.updateProfileActionUI();
    
}


    private: blankProfileActionScriptJPanel: javax.swing.JPanel;

    private: genericProfileActionScriptJScrollPane: javax.swing.JScrollPane;

    private: ifJLabel: javax.swing.JLabel;

    private: newAlwaysJButton: javax.swing.JButton;

    private: newColorAtJButton: javax.swing.JButton;

    private: newTimeIntervalJButton: javax.swing.JButton;

};

            

