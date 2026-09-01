
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

class KeyboardActionScriptInputJPanel: public javax::swing::JPanel {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: KeyboardActionScriptInputInterface keyActionScriptInputInterface;

public: KeyboardActionScriptInputJPanel(KeyboardActionScriptInputInterface keyActionScriptInputInterface){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    
this->initComponents();
    
this->keyActionScriptInputInterface= keyActionScriptInputInterface;
    

    DefaultComboBoxModel defaultComboBoxModel = DefaultComboBoxModel();;
    
defaultComboBoxModel.addElement(TempInputRobotNames::DX_NAME);
    
defaultComboBoxModel.addElement(InputRobot::NAME);
    
this->inputAutomationTypeJComboBox.setModel(defaultComboBoxModel);
    
this->keyNameJComboBox.setModel(KeyNameDefaultComboBoxModelFactory::getInstance());
    
this->keyIntegerJComboBox.setModel(KeyCharDefaultComboBoxModelFactory::getInstance());
    

                        if(this->keyActionScriptInputInterface.isNormal())
                        
                                    {
                                    this->normalJRadioButton.setSelected(true);
    
this->pressJRadioButton.setSelected(false);
    
this->releaseJRadioButton.setSelected(false);
    

                                    }
                                
                             else 
                        if(this->keyActionScriptInputInterface.isPress())
                        
                                    {
                                    this->normalJRadioButton.setSelected(false);
    
this->pressJRadioButton.setSelected(true);
    
this->releaseJRadioButton.setSelected(false);
    

                                    }
                                
                             else 
                        if(this->keyActionScriptInputInterface.isRelease())
                        
                                    {
                                    this->normalJRadioButton.setSelected(false);
    
this->pressJRadioButton.setSelected(false);
    
this->releaseJRadioButton.setSelected(true);
    

                                    }
                                
this->set();
    
}


    private: void set(){

    ComboBoxModel inputTypeComboBoxModel = this->inputAutomationTypeJComboBox.getModel();;
    
inputTypeComboBoxModel.setSelectedItem(this->keyActionScriptInputInterface.getInputRobotInterface().getName());
    
this->textJTextField.setText(this->keyActionScriptInputInterface.getText());
    
this->delayJTextField.setText(std::to_string(getDelayBetweenKeys));
    
this->timeJTextField.setText(std::to_string(getTime));
    
this->keyActionScriptInputInterface.log();
    
}


                //@Throws(Exception.constructor)
            
    private: void updateInputType(){

    ComboBoxModel comboBoxModel = this->inputAutomationTypeJComboBox.getModel();;
    

    std::string selectedItem = comboBoxModel.getSelectedItem() as string;;
    

                        if(!StringValidationUtil::getInstance().isEmpty(selectedItem))
                        
                                    {
                                    this->keyActionScriptInputInterface.setInputRobotInterface(InputRobotFactory::getInstance().get(selectedItem));
    

                                    }
                                
}


    private: Integer getSelectedKey(){

    ComboBoxModel comboBoxModel = this->keyNameJComboBox.getModel();;
    

    std::string selectedItem = comboBoxModel.getSelectedItem() as string;;
    

                        if(!StringValidationUtil::getInstance().isEmpty(selectedItem))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return KeySingletonFactory::getHashtable().get(selectedItem) as Integer;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    private: void updateKeys(){

    std::string text = this->textJTextField.getText();;
    
this->keyActionScriptInputInterface.setText(text);
    
}


                //@Throws(Exception.constructor)
            
    private: void update(){
this->updateInputType();
    
this->updateKeys();
    
this->keyActionScriptInputInterface.setTime(Integer::valueOf(this->timeJTextField.getText()).intValue());
    
this->keyActionScriptInputInterface.log();
    
}


    public: javax::swing::JDialog getKeyActionJDialog(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyActionJDialog;
    
}


    public: void setKeyActionJDialog(javax::swing::JDialog keyActionJDialog){
this->keyActionJDialog= keyActionJDialog;
    
}


    private: void initComponents(){
this->keyActionJDialog= javax::swing::JDialog();
    
this->titleJLabel= javax::swing::JLabel();
    
this->addKeyJLabel= javax::swing::JLabel();
    
this->keyNameJComboBox= javax::swing::JComboBox();
    
this->timeJTextField= javax::swing::JTextField();
    
this->holdTimeJLabel= javax::swing::JLabel();
    
this->inputAutomationTypeJComboBox= javax::swing::JComboBox();
    
this->inputTypeJLabel= javax::swing::JLabel();
    
this->delayJTextField= javax::swing::JTextField();
    
this->delayBetweenJLabel= javax::swing::JLabel();
    
this->testJLabel= javax::swing::JLabel();
    
this->textJTextField= javax::swing::JTextField();
    
this->pressJRadioButton= javax::swing::JRadioButton();
    
this->releaseJRadioButton= javax::swing::JRadioButton();
    
this->normalJRadioButton= javax::swing::JRadioButton();
    
this->simultaneousJRadioButton= javax::swing::JRadioButton();
    
this->sequenceJRadioButton= javax::swing::JRadioButton();
    
this->jPanel1= javax::swing::JPanel();
    
this->okJButton= javax::swing::JButton();
    
this->keyIntegerJComboBox= javax::swing::JComboBox();
    
this->keyActionJButton= javax::swing::JButton();
    
this->jLabel1= javax::swing::JLabel();
    
this->keyActionJDialog.setMinimumSize(java::awt::Dimension(255, 280));
    
this->titleJLabel.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
    
this->titleJLabel.setText("Keyboard Input Options");
    
this->addKeyJLabel.setText("Add Key:");
    
this->keyNameJComboBox.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
keyNameJComboBoxActionPerformed(evt);
    
}

                                }
                            );
    
this->timeJTextField.setText(CommonPhoneStrings::getInstance().ZERO);
    
this->holdTimeJLabel.setText("Hold Time (ms):");
    
this->inputTypeJLabel.setText("Input Type:");
    
this->delayJTextField.setText(CommonPhoneStrings::getInstance().ZERO);
    
this->delayBetweenJLabel.setText("Delay Between Keys (ms):");
    
this->testJLabel.setText("Text:");
    
this->textJTextField.setText(CommonPhoneStrings::getInstance().ZERO);
    
this->pressJRadioButton.setText("Press");
    
this->pressJRadioButton.setBorder(javax.swing.BorderFactory.createEmptyBorder(0, 0, 0, 0));
    
this->pressJRadioButton.setMargin(java::awt::Insets(0, 0, 0, 0));
    
this->pressJRadioButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
pressJRadioButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->releaseJRadioButton.setText("Release");
    
this->releaseJRadioButton.setBorder(javax.swing.BorderFactory.createEmptyBorder(0, 0, 0, 0));
    
this->releaseJRadioButton.setMargin(java::awt::Insets(0, 0, 0, 0));
    
this->releaseJRadioButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
releaseJRadioButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->normalJRadioButton.setSelected(true);
    
this->normalJRadioButton.setText("Normal");
    
this->normalJRadioButton.setBorder(javax.swing.BorderFactory.createEmptyBorder(0, 0, 0, 0));
    
this->normalJRadioButton.setMargin(java::awt::Insets(0, 0, 0, 0));
    
this->normalJRadioButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
normalJRadioButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->simultaneousJRadioButton.setSelected(true);
    
this->simultaneousJRadioButton.setText("Simultaneous");
    
this->simultaneousJRadioButton.setBorder(javax.swing.BorderFactory.createEmptyBorder(0, 0, 0, 0));
    
this->simultaneousJRadioButton.setMargin(java::awt::Insets(0, 0, 0, 0));
    
this->simultaneousJRadioButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
simultaneousJRadioButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->sequenceJRadioButton.setText("Sequence");
    
this->sequenceJRadioButton.setBorder(javax.swing.BorderFactory.createEmptyBorder(0, 0, 0, 0));
    
this->sequenceJRadioButton.setMargin(java::awt::Insets(0, 0, 0, 0));
    
this->sequenceJRadioButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
sequenceJRadioButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->okJButton.setText("OK");
    
this->okJButton.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
    
this->okJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
okJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->jPanel1.add(this->okJButton);
    
this->keyIntegerJComboBox.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
keyIntegerJComboBoxActionPerformed(evt);
    
}

                                }
                            );
    

    javax::swing::GroupLayout keyActionJDialogLayout = javax::swing::GroupLayout(this->keyActionJDialog.getContentPane());;
    
this->keyActionJDialog.getContentPane().setLayout(keyActionJDialogLayout);
    
keyActionJDialogLayout.setHorizontalGroup(keyActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(keyActionJDialogLayout.createSequentialGroup().addContainerGap().addGroup(keyActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(keyActionJDialogLayout.createSequentialGroup().addGroup(keyActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false).addComponent(addKeyJLabel, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE).addComponent(inputTypeJLabel, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(keyActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING).addComponent(inputAutomationTypeJComboBox, 0, 148, Short::MAX_VALUE).addComponent(textJTextField, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 148, Short::MAX_VALUE).addGroup(keyActionJDialogLayout.createSequentialGroup().addComponent(keyNameJComboBox, 0, 101, Short::MAX_VALUE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(keyIntegerJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, 41, javax.swing.GroupLayout.PREFERRED_SIZE)))).addComponent(testJLabel, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE).addGroup(keyActionJDialogLayout.createSequentialGroup().addComponent(normalJRadioButton).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(pressJRadioButton).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(releaseJRadioButton).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 48, javax.swing.GroupLayout.PREFERRED_SIZE)).addGroup(javax.swing.GroupLayout.Alignment.TRAILING, keyActionJDialogLayout.createSequentialGroup().addComponent(holdTimeJLabel).addGap(22, 22, 22).addComponent(timeJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 113, Short::MAX_VALUE)).addGroup(keyActionJDialogLayout.createSequentialGroup().addComponent(delayBetweenJLabel).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 15, Short::MAX_VALUE).addComponent(delayJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 68, javax.swing.GroupLayout.PREFERRED_SIZE)).addGroup(keyActionJDialogLayout.createSequentialGroup().addComponent(simultaneousJRadioButton).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(sequenceJRadioButton))).addContainerGap()).addComponent(titleJLabel, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 229, Short::MAX_VALUE).addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, 229, Short::MAX_VALUE));
    
keyActionJDialogLayout.setVerticalGroup(keyActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(keyActionJDialogLayout.createSequentialGroup().addComponent(titleJLabel).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(keyActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(inputTypeJLabel).addComponent(inputAutomationTypeJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(keyActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(addKeyJLabel).addComponent(keyIntegerJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(keyNameJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(keyActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(testJLabel).addComponent(textJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(keyActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(pressJRadioButton).addComponent(normalJRadioButton).addComponent(releaseJRadioButton)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(keyActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(holdTimeJLabel).addComponent(timeJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(keyActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(delayBetweenJLabel).addComponent(delayJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(keyActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(simultaneousJRadioButton).addComponent(sequenceJRadioButton)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addContainerGap()));
    
setMinimumSize(java::awt::Dimension(100, 0));
    
this->keyActionJButton.setText("Edit");
    
this->keyActionJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
keyActionJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel1.setText("Key:");
    

    javax::swing::GroupLayout layout = javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addComponent(jLabel1).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 49, Short::MAX_VALUE).addComponent(keyActionJButton)));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel1).addComponent(keyActionJButton)));
    
}


    private: void prependText(Integer integer){

                        if(integer != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string newKey = "&#" +integer.toString() +";";;
    
this->textJTextField.setText(newKey +this->textJTextField.getText());
    

                                    }
                                
}


    private: void keyIntegerJComboBoxActionPerformed(java::awt::event::ActionEvent evt){
this->keyIntegerJComboBox.getSelectedIndex();
    
this->keyNameJComboBox.setSelectedIndex(this->keyIntegerJComboBox.getSelectedIndex());
    
}


    private: void sequenceJRadioButtonActionPerformed(java::awt::event::ActionEvent evt){

                        if(this->sequenceJRadioButton.isSelected())
                        
                                    {
                                    this->delayJTextField.setText(CommonPhoneStrings::getInstance().ONE);
    
this->simultaneousJRadioButton.setSelected(false);
    

                                    }
                                
}


    private: void simultaneousJRadioButtonActionPerformed(java::awt::event::ActionEvent evt){

                        if(this->simultaneousJRadioButton.isSelected())
                        
                                    {
                                    this->delayJTextField.setText(CommonPhoneStrings::getInstance().ZERO);
    
this->sequenceJRadioButton.setSelected(false);
    

                                    }
                                
}


    private: void keyNameJComboBoxActionPerformed(java::awt::event::ActionEvent evt){

    Integer integer = this->getSelectedKey();;
    
this->prependText(integer);
    
this->keyIntegerJComboBox.setSelectedIndex(this->keyNameJComboBox.getSelectedIndex());
    
}


    private: void okJButtonActionPerformed(java::awt::event::ActionEvent evt){

        try {
            this->update();
    
this->getKeyActionJDialog().setVisible(false);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "okButtonActionPerformed", e);
    
}

}


    private: void keyActionJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->getKeyActionJDialog().setVisible(true);
    
}


    private: void normalJRadioButtonActionPerformed(java::awt::event::ActionEvent evt){

                        if(this->normalJRadioButton.isSelected())
                        
                                    {
                                    this->keyActionScriptInputInterface.setNormal();
    
this->pressJRadioButton.setSelected(false);
    
this->releaseJRadioButton.setSelected(false);
    

                                    }
                                
}


    private: void releaseJRadioButtonActionPerformed(java::awt::event::ActionEvent evt){

                        if(this->releaseJRadioButton.isSelected())
                        
                                    {
                                    this->keyActionScriptInputInterface.setRelease(true);
    
this->keyActionScriptInputInterface.setPress(false);
    
this->pressJRadioButton.setSelected(false);
    
this->normalJRadioButton.setSelected(false);
    

                                    }
                                
}


    private: void pressJRadioButtonActionPerformed(java::awt::event::ActionEvent evt){

                        if(this->pressJRadioButton.isSelected())
                        
                                    {
                                    this->keyActionScriptInputInterface.setPress(true);
    
this->keyActionScriptInputInterface.setRelease(false);
    
this->releaseJRadioButton.setSelected(false);
    
this->normalJRadioButton.setSelected(false);
    

                                    }
                                
}


    private: javax::swing::JLabel addKeyJLabel;

    private: javax::swing::JLabel delayBetweenJLabel;

    private: javax::swing::JTextField delayJTextField;

    private: javax::swing::JLabel holdTimeJLabel;

    private: javax::swing::JComboBox inputAutomationTypeJComboBox;

    private: javax::swing::JLabel inputTypeJLabel;

    private: javax::swing::JLabel jLabel1;

    private: javax::swing::JPanel jPanel1;

    private: javax::swing::JButton keyActionJButton;

    private: javax::swing::JDialog keyActionJDialog;

    private: javax::swing::JComboBox keyIntegerJComboBox;

    private: javax::swing::JComboBox keyNameJComboBox;

    private: javax::swing::JRadioButton normalJRadioButton;

    private: javax::swing::JButton okJButton;

    private: javax::swing::JRadioButton pressJRadioButton;

    private: javax::swing::JRadioButton releaseJRadioButton;

    private: javax::swing::JRadioButton sequenceJRadioButton;

    private: javax::swing::JRadioButton simultaneousJRadioButton;

    private: javax::swing::JLabel testJLabel;

    private: javax::swing::JTextField textJTextField;

    private: javax::swing::JTextField timeJTextField;

    private: javax::swing::JLabel titleJLabel;

};

            

