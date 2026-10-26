
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
        



            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt/event/InputEvent.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/input/automation/robot/InputRobot.h>

      
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>

      
#include <org/allbinary/input/automation/robot/TempInputRobotNames.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "MouseActionScriptInputInterface.h"
#include "DefaultComboBoxModel.h"
#include "ComboBoxModel.h"
#include "JDialog.h"
#include "JLabel.h"
#include "JButton.h"
#include "JCheckBox.h"
#include "JTextField.h"
#include "JComboBox.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "Insets.h"
#include "GroupLayout.h"
#include "Short.h"

class MouseActionScriptInputJPanel: public javax::swing::JPanel {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: MouseActionScriptInputInterface mouseActionScriptInputInterface;

public: MouseActionScriptInputJPanel(MouseActionScriptInputInterface mouseActionScriptInputInterface){
this->logUtil.putF(CommonLabels::getInstance().START +mouseActionScriptInputInterface, this, this->commonStrings.CONSTRUCTOR);
    
this->initComponents();
    
this->mouseActionScriptInputInterface= mouseActionScriptInputInterface;
    

    DefaultComboBoxModel defaultComboBoxModel = DefaultComboBoxModel();;
    
defaultComboBoxModel.addElement(TempInputRobotNames::LOW_NAME);
    
defaultComboBoxModel.addElement(TempInputRobotNames::SYS_NAME);
    
defaultComboBoxModel.addElement(InputRobot::NAME);
    
this->inputAutomationTypeJComboBox.setModel(defaultComboBoxModel);
    
this->set();
    
}


    private: void set(){

    ComboBoxModel inputTypeComboBoxModel = this->inputAutomationTypeJComboBox.getModel();;
    
inputTypeComboBoxModel.setSelectedItem(this->mouseActionScriptInputInterface.getInputRobotInterface().getName());
    

                        if((this->mouseActionScriptInputInterface.getButtonClicks()&InputEvent::BUTTON1_MASK) != 0)
                        
                                    {
                                    this->button1JCheckBox.setSelected(true);
    

                                    }
                                
                        else {
                            this->button1JCheckBox.setSelected(false);
    

                        }
                            

                        if((this->mouseActionScriptInputInterface.getButtonClicks()&InputEvent::BUTTON2_MASK) != 0)
                        
                                    {
                                    this->button2JCheckBox.setSelected(true);
    

                                    }
                                
                        else {
                            this->button2JCheckBox.setSelected(false);
    

                        }
                            
this->mouseDelayJTextField.setText(std::to_string(getTime));
    
this->mouseXJTextField.setText(std::to_string(x));
    
this->mouseYJTextField.setText(std::to_string(y));
    
this->mouseActionScriptInputInterface.log();
    
}


                //@Throws(Exception.constructor)
            
    private: void updateInputType(){

    ComboBoxModel comboBoxModel = this->inputAutomationTypeJComboBox.getModel();;
    

    std::string selectedItem = comboBoxModel.getSelectedItem();;
    

                        if(!StringValidationUtil::getInstance().isEmpty(selectedItem))
                        
                                    {
                                    this->mouseActionScriptInputInterface.setInputRobotInterface(InputRobotFactory::getInstance().get(selectedItem));
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    private: void update(){
this->updateInputType();
    
this->mouseActionScriptInputInterface.setTime(getText.valueOf());
    
this->logUtil.putF("Button State: " +this->mouseActionScriptInputInterface.getButtonClicks(), this, "update");
    

                        if(this->button1JCheckBox.isSelected())
                        
                                    {
                                    
                        if((this->mouseActionScriptInputInterface.getButtonClicks()&InputEvent::BUTTON1_MASK) == 0)
                        
                                    {
                                    this->mouseActionScriptInputInterface.setButtonClicks(this->mouseActionScriptInputInterface.getButtonClicks() | InputEvent::BUTTON1_MASK);
    
this->logUtil.putF("Button 1 Selected: " +this->mouseActionScriptInputInterface.getButtonClicks(), this, "update");
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if((this->mouseActionScriptInputInterface.getButtonClicks()&InputEvent::BUTTON1_MASK) != 0)
                        
                                    {
                                    this->mouseActionScriptInputInterface.setButtonClicks(this->mouseActionScriptInputInterface.getButtonClicks() ^ InputEvent::BUTTON1_MASK);
    
this->logUtil.putF("Button 1 Deselected: " +this->mouseActionScriptInputInterface.getButtonClicks(), this, "update");
    

                                    }
                                

                        }
                            

                        if(this->button2JCheckBox.isSelected())
                        
                                    {
                                    
                        if((this->mouseActionScriptInputInterface.getButtonClicks()&InputEvent::BUTTON2_MASK) == 0)
                        
                                    {
                                    this->mouseActionScriptInputInterface.setButtonClicks(this->mouseActionScriptInputInterface.getButtonClicks() | InputEvent::BUTTON2_MASK);
    
this->logUtil.putF("Button 2 Selected: " +this->mouseActionScriptInputInterface.getButtonClicks(), this, "update");
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if((this->mouseActionScriptInputInterface.getButtonClicks()&InputEvent::BUTTON2_MASK) != 0)
                        
                                    {
                                    this->mouseActionScriptInputInterface.setButtonClicks(this->mouseActionScriptInputInterface.getButtonClicks() ^ InputEvent::BUTTON2_MASK);
    
this->logUtil.putF("Button 2 Deselected: " +this->mouseActionScriptInputInterface.getButtonClicks(), this, "update");
    

                                    }
                                

                        }
                            

    std::string mouseXString = this->mouseXJTextField.getText();;
    

                        if(!StringValidationUtil::getInstance().isEmpty(mouseXString) && StringValidationUtil::getInstance().isNumber(mouseXString))
                        
                                    {
                                    this->mouseActionScriptInputInterface.getPoint().x= Integer::parseInt(mouseXString);
    

                                    }
                                

    std::string mouseYString = this->mouseYJTextField.getText();;
    

                        if(!StringValidationUtil::getInstance().isEmpty(mouseYString) && StringValidationUtil::getInstance().isNumber(mouseYString))
                        
                                    {
                                    this->mouseActionScriptInputInterface.getPoint().y= Integer::parseInt(mouseYString);
    

                                    }
                                
this->mouseActionScriptInputInterface.log();
    
}


    public: javax::swing::JDialog getMouseActionJDialog(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->mouseActionJDialog;
    
}


    public: void setMouseActionJDialog(javax::swing::JDialog mouseActionJDialog){
this->mouseActionJDialog= mouseActionJDialog;
    
}


    private: void initComponents(){
this->mouseActionJDialog= javax::swing::JDialog();
    
this->titleJLabel= javax::swing::JLabel();
    
this->okJButton= javax::swing::JButton();
    
this->jLabel2= javax::swing::JLabel();
    
this->jLabel3= javax::swing::JLabel();
    
this->button1JCheckBox= javax::swing::JCheckBox();
    
this->button2JCheckBox= javax::swing::JCheckBox();
    
this->jLabel4= javax::swing::JLabel();
    
this->mouseXJTextField= javax::swing::JTextField();
    
this->jLabel5= javax::swing::JLabel();
    
this->mouseYJTextField= javax::swing::JTextField();
    
this->inputTypeJLabel= javax::swing::JLabel();
    
this->inputAutomationTypeJComboBox= javax::swing::JComboBox();
    
this->jLabel6= javax::swing::JLabel();
    
this->mouseDelayJTextField= javax::swing::JTextField();
    
this->mouseActionJButton= javax::swing::JButton();
    
this->jLabel1= javax::swing::JLabel();
    
this->mouseActionJDialog.setMinimumSize(java::awt::Dimension(275, 185));
    
this->titleJLabel.setText("Mouse Input Options");
    
this->okJButton.setText("OK");
    
this->okJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
okJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel2.setText("Buttons:");
    
this->jLabel3.setText("Move To:");
    
this->button1JCheckBox.setText(CommonPhoneStrings::getInstance().ONE);
    
this->button1JCheckBox.setBorder(javax.swing.BorderFactory.createEmptyBorder(0, 0, 0, 0));
    
this->button1JCheckBox.setMargin(java::awt::Insets(0, 0, 0, 0));
    
this->button2JCheckBox.setText(CommonPhoneStrings::getInstance().TWO);
    
this->button2JCheckBox.setBorder(javax.swing.BorderFactory.createEmptyBorder(0, 0, 0, 0));
    
this->button2JCheckBox.setMargin(java::awt::Insets(0, 0, 0, 0));
    
this->button2JCheckBox.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
button2JCheckBoxActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel4.setText("x:");
    
this->mouseXJTextField.setText(CommonPhoneStrings::getInstance().ZERO);
    
this->jLabel5.setText("y:");
    
this->mouseYJTextField.setText(CommonPhoneStrings::getInstance().ZERO);
    
this->inputTypeJLabel.setText("Input Type:");
    
this->jLabel6.setText("Delay:");
    
this->mouseDelayJTextField.setText("100");
    

    javax::swing::GroupLayout mouseActionJDialogLayout = javax::swing::GroupLayout(this->mouseActionJDialog.getContentPane());;
    
this->mouseActionJDialog.getContentPane().setLayout(mouseActionJDialogLayout);
    
mouseActionJDialogLayout.setHorizontalGroup(mouseActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(mouseActionJDialogLayout.createSequentialGroup().addContainerGap().addGroup(mouseActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(inputTypeJLabel).addGroup(javax.swing.GroupLayout.Alignment.TRAILING, mouseActionJDialogLayout.createSequentialGroup().addGroup(mouseActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(javax.swing.GroupLayout.Alignment.TRAILING, mouseActionJDialogLayout.createSequentialGroup().addComponent(jLabel2).addGap(25, 25, 25)).addGroup(mouseActionJDialogLayout.createSequentialGroup().addGroup(mouseActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(jLabel3).addComponent(jLabel6)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED))).addGroup(mouseActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(mouseDelayJTextField, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 154, Short::MAX_VALUE).addGroup(mouseActionJDialogLayout.createSequentialGroup().addComponent(titleJLabel).addGap(45, 45, 45)).addGroup(javax.swing.GroupLayout.Alignment.TRAILING, mouseActionJDialogLayout.createSequentialGroup().addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(inputAutomationTypeJComboBox, 0, 154, Short::MAX_VALUE)).addGroup(mouseActionJDialogLayout.createSequentialGroup().addComponent(button1JCheckBox).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(button2JCheckBox)).addGroup(mouseActionJDialogLayout.createSequentialGroup().addGroup(mouseActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING).addGroup(mouseActionJDialogLayout.createSequentialGroup().addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(okJButton)).addGroup(mouseActionJDialogLayout.createSequentialGroup().addComponent(jLabel4).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 5, Short::MAX_VALUE).addComponent(mouseXJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 59, javax.swing.GroupLayout.PREFERRED_SIZE))).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jLabel5).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(mouseYJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 62, Short::MAX_VALUE))))).addContainerGap()));
    
mouseActionJDialogLayout.setVerticalGroup(mouseActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(mouseActionJDialogLayout.createSequentialGroup().addComponent(titleJLabel).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(mouseActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(inputTypeJLabel).addComponent(inputAutomationTypeJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(mouseActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(jLabel2, javax.swing.GroupLayout.PREFERRED_SIZE, 15, javax.swing.GroupLayout.PREFERRED_SIZE).addGroup(mouseActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(button1JCheckBox).addComponent(button2JCheckBox))).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(mouseActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel6).addComponent(mouseDelayJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(mouseActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel3).addComponent(jLabel4).addComponent(jLabel5).addComponent(mouseYJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(mouseXJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE).addComponent(okJButton).addContainerGap()));
    
setMinimumSize(java::awt::Dimension(100, 0));
    
this->mouseActionJButton.setText("Edit");
    
this->mouseActionJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
mouseActionJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel1.setText("Mouse:");
    

    javax::swing::GroupLayout layout = javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addComponent(jLabel1).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 36, Short::MAX_VALUE).addComponent(mouseActionJButton)));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel1).addComponent(mouseActionJButton)));
    
}


    private: void button2JCheckBoxActionPerformed(java::awt::event::ActionEvent evt){
}


    private: void okJButtonActionPerformed(java::awt::event::ActionEvent evt){

        try {
            this->update();
    
this->getMouseActionJDialog().setVisible(false);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "okButtonActionPerformed", e);
    
}

}


    private: void mouseActionJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->getMouseActionJDialog().setVisible(true);
    
}


    private: javax::swing::JCheckBox button1JCheckBox;

    private: javax::swing::JCheckBox button2JCheckBox;

    private: javax::swing::JComboBox inputAutomationTypeJComboBox;

    private: javax::swing::JLabel inputTypeJLabel;

    private: javax::swing::JLabel jLabel1;

    private: javax::swing::JLabel jLabel2;

    private: javax::swing::JLabel jLabel3;

    private: javax::swing::JLabel jLabel4;

    private: javax::swing::JLabel jLabel5;

    private: javax::swing::JLabel jLabel6;

    private: javax::swing::JButton mouseActionJButton;

    private: javax::swing::JDialog mouseActionJDialog;

    private: javax::swing::JTextField mouseDelayJTextField;

    private: javax::swing::JTextField mouseXJTextField;

    private: javax::swing::JTextField mouseYJTextField;

    private: javax::swing::JButton okJButton;

    private: javax::swing::JLabel titleJLabel;

};

            

