
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
        



            #include "../../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../../java/lang/Integer.h"
        
#include <javax/swing.h>

      
#include <org/allbinary/input/KeySingletonFactory.h>

      
#include <org/allbinary/input/automation/robot/InputRobot.h>

      
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>

      
#include <org/allbinary/input/automation/robot/TempInputRobotNames.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "KeyboardActionScriptInputInterface.h"
#include "DefaultComboBoxModel.h"
#include "KeyNameDefaultComboBoxModelFactory.h"
#include "KeyCharDefaultComboBoxModelFactory.h"
#include "ComboBoxModel.h"
#include "JDialog.h"
#include "JLabel.h"
#include "JComboBox.h"
#include "JTextField.h"
#include "JRadioButton.h"
#include "JButton.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "Insets.h"
#include "GroupLayout.h"
#include "Short.h"

class KeyboardActionScriptInputJPanel: public javax.swing.JPanel {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: keyActionScriptInputInterface: KeyboardActionScriptInputInterface;

public constructor (KeyboardActionScriptInputInterface keyActionScriptInputInterface){

            super();
        this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    
this.initComponents();
    
this.keyActionScriptInputInterface= keyActionScriptInputInterface;
    

    defaultComboBoxModel: DefaultComboBoxModel = new DefaultComboBoxModel();;
    
defaultComboBoxModel!.addElement(TempInputRobotNames.DX_NAME);
    
defaultComboBoxModel!.addElement(InputRobot.NAME);
    
this.inputAutomationTypeJComboBox!.setModel(defaultComboBoxModel);
    
this.keyNameJComboBox!.setModel(KeyNameDefaultComboBoxModelFactory.getInstance());
    
this.keyIntegerJComboBox!.setModel(KeyCharDefaultComboBoxModelFactory.getInstance());
    

                        if(this.keyActionScriptInputInterface!.isNormal())
                        
                                    {
                                    this.normalJRadioButton!.setSelected(true);
    
this.pressJRadioButton!.setSelected(false);
    
this.releaseJRadioButton!.setSelected(false);
    

                                    }
                                
                             else 
                        if(this.keyActionScriptInputInterface!.isPress())
                        
                                    {
                                    this.normalJRadioButton!.setSelected(false);
    
this.pressJRadioButton!.setSelected(true);
    
this.releaseJRadioButton!.setSelected(false);
    

                                    }
                                
                             else 
                        if(this.keyActionScriptInputInterface!.isRelease())
                        
                                    {
                                    this.normalJRadioButton!.setSelected(false);
    
this.pressJRadioButton!.setSelected(false);
    
this.releaseJRadioButton!.setSelected(true);
    

                                    }
                                
this.set();
    
}


    set(){

    inputTypeComboBoxModel: ComboBoxModel = this.inputAutomationTypeJComboBox!.getModel()!;;
    
inputTypeComboBoxModel!.setSelectedItem(this.keyActionScriptInputInterface!.getInputRobotInterface()!.getName());
    
this.textJTextField!.setText(this.keyActionScriptInputInterface!.getText());
    
this.delayJTextField!.setText(this.keyActionScriptInputInterface!.getDelayBetweenKeys().toString());
    
this.timeJTextField!.setText(this.keyActionScriptInputInterface!.getTime().toString());
    
this.keyActionScriptInputInterface!.log();
    
}


                //@Throws(Exception.constructor)
            
    updateInputType(){

    comboBoxModel: ComboBoxModel = this.inputAutomationTypeJComboBox!.getModel()!;;
    

    selectedItem: string = comboBoxModel!.getSelectedItem() as string;;
    

                        if(!StringValidationUtil.getInstance()!.isEmpty(selectedItem))
                        
                                    {
                                    this.keyActionScriptInputInterface!.setInputRobotInterface(InputRobotFactory.getInstance()!.get(selectedItem));
    

                                    }
                                
}


    Integer getSelectedKey(){

    comboBoxModel: ComboBoxModel = this.keyNameJComboBox!.getModel()!;;
    

    selectedItem: string = comboBoxModel!.getSelectedItem() as string;;
    

                        if(!StringValidationUtil.getInstance()!.isEmpty(selectedItem))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return KeySingletonFactory.getHashtable()!.get(selectedItem) as Integer;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    updateKeys(){

    text: string = this.textJTextField!.getText()!;;
    
this.keyActionScriptInputInterface!.setText(text);
    
}


                //@Throws(Exception.constructor)
            
    update(){
this.updateInputType();
    
this.updateKeys();
    
this.keyActionScriptInputInterface!.setTime(Integer.valueOf(this.timeJTextField!.getText())!.intValue());
    
this.keyActionScriptInputInterface!.log();
    
}


    public javax.swing.JDialog getKeyActionJDialog(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.keyActionJDialog;
    
}


    public setKeyActionJDialog(javax.swing.JDialog keyActionJDialog){
this.keyActionJDialog= keyActionJDialog;
    
}


    initComponents(){
this.keyActionJDialog= new javax.swing.JDialog();
    
this.titleJLabel= new javax.swing.JLabel();
    
this.addKeyJLabel= new javax.swing.JLabel();
    
this.keyNameJComboBox= new javax.swing.JComboBox();
    
this.timeJTextField= new javax.swing.JTextField();
    
this.holdTimeJLabel= new javax.swing.JLabel();
    
this.inputAutomationTypeJComboBox= new javax.swing.JComboBox();
    
this.inputTypeJLabel= new javax.swing.JLabel();
    
this.delayJTextField= new javax.swing.JTextField();
    
this.delayBetweenJLabel= new javax.swing.JLabel();
    
this.testJLabel= new javax.swing.JLabel();
    
this.textJTextField= new javax.swing.JTextField();
    
this.pressJRadioButton= new javax.swing.JRadioButton();
    
this.releaseJRadioButton= new javax.swing.JRadioButton();
    
this.normalJRadioButton= new javax.swing.JRadioButton();
    
this.simultaneousJRadioButton= new javax.swing.JRadioButton();
    
this.sequenceJRadioButton= new javax.swing.JRadioButton();
    
this.jPanel1= new javax.swing.JPanel();
    
this.okJButton= new javax.swing.JButton();
    
this.keyIntegerJComboBox= new javax.swing.JComboBox();
    
this.keyActionJButton= new javax.swing.JButton();
    
this.jLabel1= new javax.swing.JLabel();
    
this.keyActionJDialog!.setMinimumSize(new java.awt.Dimension(255, 280));
    
this.titleJLabel!.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
    
this.titleJLabel!.setText("Keyboard Input Options");
    
this.addKeyJLabel!.setText("Add Key:");
    
this.keyNameJComboBox!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
keyNameJComboBoxActionPerformed(evt);
    
}

                                }
                            );
    
this.timeJTextField!.setText(CommonPhoneStrings.getInstance()!.ZERO);
    
this.holdTimeJLabel!.setText("Hold Time (ms):");
    
this.inputTypeJLabel!.setText("Input Type:");
    
this.delayJTextField!.setText(CommonPhoneStrings.getInstance()!.ZERO);
    
this.delayBetweenJLabel!.setText("Delay Between Keys (ms):");
    
this.testJLabel!.setText("Text:");
    
this.textJTextField!.setText(CommonPhoneStrings.getInstance()!.ZERO);
    
this.pressJRadioButton!.setText("Press");
    
this.pressJRadioButton!.setBorder(javax.swing.BorderFactory.createEmptyBorder(0, 0, 0, 0));
    
this.pressJRadioButton!.setMargin(new java.awt.Insets(0, 0, 0, 0));
    
this.pressJRadioButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
pressJRadioButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.releaseJRadioButton!.setText("Release");
    
this.releaseJRadioButton!.setBorder(javax.swing.BorderFactory.createEmptyBorder(0, 0, 0, 0));
    
this.releaseJRadioButton!.setMargin(new java.awt.Insets(0, 0, 0, 0));
    
this.releaseJRadioButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
releaseJRadioButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.normalJRadioButton!.setSelected(true);
    
this.normalJRadioButton!.setText("Normal");
    
this.normalJRadioButton!.setBorder(javax.swing.BorderFactory.createEmptyBorder(0, 0, 0, 0));
    
this.normalJRadioButton!.setMargin(new java.awt.Insets(0, 0, 0, 0));
    
this.normalJRadioButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
normalJRadioButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.simultaneousJRadioButton!.setSelected(true);
    
this.simultaneousJRadioButton!.setText("Simultaneous");
    
this.simultaneousJRadioButton!.setBorder(javax.swing.BorderFactory.createEmptyBorder(0, 0, 0, 0));
    
this.simultaneousJRadioButton!.setMargin(new java.awt.Insets(0, 0, 0, 0));
    
this.simultaneousJRadioButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
simultaneousJRadioButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.sequenceJRadioButton!.setText("Sequence");
    
this.sequenceJRadioButton!.setBorder(javax.swing.BorderFactory.createEmptyBorder(0, 0, 0, 0));
    
this.sequenceJRadioButton!.setMargin(new java.awt.Insets(0, 0, 0, 0));
    
this.sequenceJRadioButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
sequenceJRadioButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.okJButton!.setText("OK");
    
this.okJButton!.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
    
this.okJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
okJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.jPanel1!.add(this.okJButton);
    
this.keyIntegerJComboBox!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
keyIntegerJComboBoxActionPerformed(evt);
    
}

                                }
                            );
    

    keyActionJDialogLayout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this.keyActionJDialog!.getContentPane());;
    
this.keyActionJDialog!.getContentPane()!.setLayout(keyActionJDialogLayout);
    
keyActionJDialogLayout!.setHorizontalGroup(keyActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(keyActionJDialogLayout!.createSequentialGroup()!.addContainerGap()!.addGroup(keyActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(keyActionJDialogLayout!.createSequentialGroup()!.addGroup(keyActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)!.addComponent(addKeyJLabel, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)!.addComponent(inputTypeJLabel, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(keyActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)!.addComponent(inputAutomationTypeJComboBox, 0, 148, Short.MAX_VALUE)!.addComponent(textJTextField, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 148, Short.MAX_VALUE)!.addGroup(keyActionJDialogLayout!.createSequentialGroup()!.addComponent(keyNameJComboBox, 0, 101, Short.MAX_VALUE)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(keyIntegerJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, 41, javax.swing.GroupLayout.PREFERRED_SIZE))))!.addComponent(testJLabel, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)!.addGroup(keyActionJDialogLayout!.createSequentialGroup()!.addComponent(normalJRadioButton)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(pressJRadioButton)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(releaseJRadioButton)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 48, javax.swing.GroupLayout.PREFERRED_SIZE))!.addGroup(javax.swing.GroupLayout.Alignment.TRAILING, keyActionJDialogLayout!.createSequentialGroup()!.addComponent(holdTimeJLabel)!.addGap(22, 22, 22)!.addComponent(timeJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 113, Short.MAX_VALUE))!.addGroup(keyActionJDialogLayout!.createSequentialGroup()!.addComponent(delayBetweenJLabel)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 15, Short.MAX_VALUE)!.addComponent(delayJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 68, javax.swing.GroupLayout.PREFERRED_SIZE))!.addGroup(keyActionJDialogLayout!.createSequentialGroup()!.addComponent(simultaneousJRadioButton)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(sequenceJRadioButton)))!.addContainerGap())!.addComponent(titleJLabel, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 229, Short.MAX_VALUE)!.addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, 229, Short.MAX_VALUE));
    
keyActionJDialogLayout!.setVerticalGroup(keyActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(keyActionJDialogLayout!.createSequentialGroup()!.addComponent(titleJLabel)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(keyActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(inputTypeJLabel)!.addComponent(inputAutomationTypeJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(keyActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(addKeyJLabel)!.addComponent(keyIntegerJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)!.addComponent(keyNameJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(keyActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(testJLabel)!.addComponent(textJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(keyActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(pressJRadioButton)!.addComponent(normalJRadioButton)!.addComponent(releaseJRadioButton))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(keyActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(holdTimeJLabel)!.addComponent(timeJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(keyActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(delayBetweenJLabel)!.addComponent(delayJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(keyActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(simultaneousJRadioButton)!.addComponent(sequenceJRadioButton))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)!.addContainerGap()));
    
setMinimumSize(new java.awt.Dimension(100, 0));
    
this.keyActionJButton!.setText("Edit");
    
this.keyActionJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
keyActionJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.jLabel1!.setText("Key:");
    

    layout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this);;
    
this.setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(layout.createSequentialGroup()!.addComponent(jLabel1)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 49, Short.MAX_VALUE)!.addComponent(keyActionJButton)));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(jLabel1)!.addComponent(keyActionJButton)));
    
}


    prependText(Integer integer){

                        if(integer != 
                                    null
                                )
                        
                                    {
                                    
    newKey: string = "&#" +integer.toString() +";";;
    
this.textJTextField!.setText(newKey +this.textJTextField!.getText());
    

                                    }
                                
}


    keyIntegerJComboBoxActionPerformed(java.awt.event.ActionEvent evt){
this.keyIntegerJComboBox!.getSelectedIndex();
    
this.keyNameJComboBox!.setSelectedIndex(this.keyIntegerJComboBox!.getSelectedIndex());
    
}


    sequenceJRadioButtonActionPerformed(java.awt.event.ActionEvent evt){

                        if(this.sequenceJRadioButton!.isSelected())
                        
                                    {
                                    this.delayJTextField!.setText(CommonPhoneStrings.getInstance()!.ONE);
    
this.simultaneousJRadioButton!.setSelected(false);
    

                                    }
                                
}


    simultaneousJRadioButtonActionPerformed(java.awt.event.ActionEvent evt){

                        if(this.simultaneousJRadioButton!.isSelected())
                        
                                    {
                                    this.delayJTextField!.setText(CommonPhoneStrings.getInstance()!.ZERO);
    
this.sequenceJRadioButton!.setSelected(false);
    

                                    }
                                
}


    keyNameJComboBoxActionPerformed(java.awt.event.ActionEvent evt){

    integer: Integer = this.getSelectedKey()!;;
    
this.prependText(integer);
    
this.keyIntegerJComboBox!.setSelectedIndex(this.keyNameJComboBox!.getSelectedIndex());
    
}


    okJButtonActionPerformed(java.awt.event.ActionEvent evt){

        try {
            this.update();
    
this.getKeyActionJDialog()!.setVisible(false);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "okButtonActionPerformed", e);
    
}

}


    keyActionJButtonActionPerformed(java.awt.event.ActionEvent evt){
this.getKeyActionJDialog()!.setVisible(true);
    
}


    normalJRadioButtonActionPerformed(java.awt.event.ActionEvent evt){

                        if(this.normalJRadioButton!.isSelected())
                        
                                    {
                                    this.keyActionScriptInputInterface!.setNormal();
    
this.pressJRadioButton!.setSelected(false);
    
this.releaseJRadioButton!.setSelected(false);
    

                                    }
                                
}


    releaseJRadioButtonActionPerformed(java.awt.event.ActionEvent evt){

                        if(this.releaseJRadioButton!.isSelected())
                        
                                    {
                                    this.keyActionScriptInputInterface!.setRelease(true);
    
this.keyActionScriptInputInterface!.setPress(false);
    
this.pressJRadioButton!.setSelected(false);
    
this.normalJRadioButton!.setSelected(false);
    

                                    }
                                
}


    pressJRadioButtonActionPerformed(java.awt.event.ActionEvent evt){

                        if(this.pressJRadioButton!.isSelected())
                        
                                    {
                                    this.keyActionScriptInputInterface!.setPress(true);
    
this.keyActionScriptInputInterface!.setRelease(false);
    
this.releaseJRadioButton!.setSelected(false);
    
this.normalJRadioButton!.setSelected(false);
    

                                    }
                                
}


    private: addKeyJLabel: javax.swing.JLabel;

    private: delayBetweenJLabel: javax.swing.JLabel;

    private: delayJTextField: javax.swing.JTextField;

    private: holdTimeJLabel: javax.swing.JLabel;

    private: inputAutomationTypeJComboBox: javax.swing.JComboBox;

    private: inputTypeJLabel: javax.swing.JLabel;

    private: jLabel1: javax.swing.JLabel;

    private: jPanel1: javax.swing.JPanel;

    private: keyActionJButton: javax.swing.JButton;

    private: keyActionJDialog: javax.swing.JDialog;

    private: keyIntegerJComboBox: javax.swing.JComboBox;

    private: keyNameJComboBox: javax.swing.JComboBox;

    private: normalJRadioButton: javax.swing.JRadioButton;

    private: okJButton: javax.swing.JButton;

    private: pressJRadioButton: javax.swing.JRadioButton;

    private: releaseJRadioButton: javax.swing.JRadioButton;

    private: sequenceJRadioButton: javax.swing.JRadioButton;

    private: simultaneousJRadioButton: javax.swing.JRadioButton;

    private: testJLabel: javax.swing.JLabel;

    private: textJTextField: javax.swing.JTextField;

    private: timeJTextField: javax.swing.JTextField;

    private: titleJLabel: javax.swing.JLabel;

};

            

