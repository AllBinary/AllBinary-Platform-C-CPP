
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUTJPANEL_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUTJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInputJPanel.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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

      

#include <javax/swing/BorderFactory.h>

#include <javax/swing/BorderFactory.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/JPanel.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInputInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/DefaultComboBoxModel.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/ComboBoxModel.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JDialog.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JLabel.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JButton.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JCheckBox.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JTextField.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JComboBox.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/Dimension.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/ActionListener.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/ActionEvent.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/Insets.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/GroupLayout.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/Short.h"


MouseActionScriptInputJPanel::MouseActionScriptInputJPanel(MouseActionScriptInputInterface* mouseActionScriptInputInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->logUtil->putF(CommonLabels::getInstance()->START +mouseActionScriptInputInterface, this, this->commonStrings->CONSTRUCTOR);
    
this->initComponents();
    
this->mouseActionScriptInputInterface= mouseActionScriptInputInterface;
    

    DefaultComboBoxModel* defaultComboBoxModel = new DefaultComboBoxModel();;
    
defaultComboBoxModel->addElement(TempInputRobotNames::LOW_NAME);
    
defaultComboBoxModel->addElement(TempInputRobotNames::SYS_NAME);
    
defaultComboBoxModel->addElement(InputRobot::NAME);
    
this->inputAutomationTypeJComboBox->setModel(defaultComboBoxModel);
    
this->set();
    
}


    auto MouseActionScriptInputJPanel::set() -> void{

    ComboBoxModel* inputTypeComboBoxModel = this->inputAutomationTypeJComboBox->getModel();;
    
inputTypeComboBoxModel->setSelectedItem(this->mouseActionScriptInputInterface->getInputRobotInterface()->getName());
    

                        if((this->mouseActionScriptInputInterface->getButtonClicks()&InputEvent::BUTTON1_MASK) != 0)
                        
                                    {
                                    this->button1JCheckBox->setSelected(true);
    

                                    }
                                
                        else {
                            this->button1JCheckBox->setSelected(false);
    

                        }
                            

                        if((this->mouseActionScriptInputInterface->getButtonClicks()&InputEvent::BUTTON2_MASK) != 0)
                        
                                    {
                                    this->button2JCheckBox->setSelected(true);
    

                                    }
                                
                        else {
                            this->button2JCheckBox->setSelected(false);
    

                        }
                            
this->mouseDelayJTextField->setText(std::to_string(getTime));
    
this->mouseXJTextField->setText(std::to_string(x));
    
this->mouseYJTextField->setText(std::to_string(y));
    
this->mouseActionScriptInputInterface->log();
    
}


                //@Throws(Exception.constructor)
            
    auto MouseActionScriptInputJPanel::updateInputType() -> void{

    ComboBoxModel* comboBoxModel = this->inputAutomationTypeJComboBox->getModel();;
    

    std::string selectedItem = JavaBoxes::unbox<std::string>(comboBoxModel->getSelectedItem());;
    

                        if(!StringValidationUtil::getInstance()->isEmpty(selectedItem))
                        
                                    {
                                    this->mouseActionScriptInputInterface->setInputRobotInterface(InputRobotFactory::getInstance()->get(selectedItem));
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto MouseActionScriptInputJPanel::update() -> void{
this->updateInputType();
    
this->mouseActionScriptInputInterface->setTime(getText.valueOf());
    
this->logUtil->putF(JavaString::valueOf("Button State: ") +JavaString::valueOf(this->mouseActionScriptInputInterface->getButtonClicks()), this, "update");
    

                        if(this->button1JCheckBox->isSelected())
                        
                                    {
                                    
                        if((this->mouseActionScriptInputInterface->getButtonClicks()&InputEvent::BUTTON1_MASK) == 0)
                        
                                    {
                                    this->mouseActionScriptInputInterface->setButtonClicks(this->mouseActionScriptInputInterface->getButtonClicks() | InputEvent::BUTTON1_MASK);
    
this->logUtil->putF(JavaString::valueOf("Button 1 Selected: ") +JavaString::valueOf(this->mouseActionScriptInputInterface->getButtonClicks()), this, "update");
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if((this->mouseActionScriptInputInterface->getButtonClicks()&InputEvent::BUTTON1_MASK) != 0)
                        
                                    {
                                    this->mouseActionScriptInputInterface->setButtonClicks(this->mouseActionScriptInputInterface->getButtonClicks() ^ InputEvent::BUTTON1_MASK);
    
this->logUtil->putF(JavaString::valueOf("Button 1 Deselected: ") +JavaString::valueOf(this->mouseActionScriptInputInterface->getButtonClicks()), this, "update");
    

                                    }
                                

                        }
                            

                        if(this->button2JCheckBox->isSelected())
                        
                                    {
                                    
                        if((this->mouseActionScriptInputInterface->getButtonClicks()&InputEvent::BUTTON2_MASK) == 0)
                        
                                    {
                                    this->mouseActionScriptInputInterface->setButtonClicks(this->mouseActionScriptInputInterface->getButtonClicks() | InputEvent::BUTTON2_MASK);
    
this->logUtil->putF(JavaString::valueOf("Button 2 Selected: ") +JavaString::valueOf(this->mouseActionScriptInputInterface->getButtonClicks()), this, "update");
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if((this->mouseActionScriptInputInterface->getButtonClicks()&InputEvent::BUTTON2_MASK) != 0)
                        
                                    {
                                    this->mouseActionScriptInputInterface->setButtonClicks(this->mouseActionScriptInputInterface->getButtonClicks() ^ InputEvent::BUTTON2_MASK);
    
this->logUtil->putF(JavaString::valueOf("Button 2 Deselected: ") +JavaString::valueOf(this->mouseActionScriptInputInterface->getButtonClicks()), this, "update");
    

                                    }
                                

                        }
                            

    std::string mouseXString = this->mouseXJTextField->getText();;
    

                        if(!StringValidationUtil::getInstance()->isEmpty(mouseXString) && StringValidationUtil::getInstance()->isNumber(mouseXString))
                        
                                    {
                                    this->mouseActionScriptInputInterface->getPoint()->x= Integer.parseInt(mouseXString);
    

                                    }
                                

    std::string mouseYString = this->mouseYJTextField->getText();;
    

                        if(!StringValidationUtil::getInstance()->isEmpty(mouseYString) && StringValidationUtil::getInstance()->isNumber(mouseYString))
                        
                                    {
                                    this->mouseActionScriptInputInterface->getPoint()->y= Integer.parseInt(mouseYString);
    

                                    }
                                
this->mouseActionScriptInputInterface->log();
    
}


    auto MouseActionScriptInputJPanel::getMouseActionJDialog() -> javax::swing::JDialog*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->mouseActionJDialog;
    
}


    auto MouseActionScriptInputJPanel::setMouseActionJDialog(javax::swing::JDialog* mouseActionJDialog) -> void{
this->mouseActionJDialog= mouseActionJDialog;
    
}


    auto MouseActionScriptInputJPanel::initComponents() -> void{
this->mouseActionJDialog= new javax::swing::JDialog();
    
this->titleJLabel= new javax::swing::JLabel();
    
this->okJButton= new javax::swing::JButton();
    
this->jLabel2= new javax::swing::JLabel();
    
this->jLabel3= new javax::swing::JLabel();
    
this->button1JCheckBox= new javax::swing::JCheckBox();
    
this->button2JCheckBox= new javax::swing::JCheckBox();
    
this->jLabel4= new javax::swing::JLabel();
    
this->mouseXJTextField= new javax::swing::JTextField();
    
this->jLabel5= new javax::swing::JLabel();
    
this->mouseYJTextField= new javax::swing::JTextField();
    
this->inputTypeJLabel= new javax::swing::JLabel();
    
this->inputAutomationTypeJComboBox= new javax::swing::JComboBox();
    
this->jLabel6= new javax::swing::JLabel();
    
this->mouseDelayJTextField= new javax::swing::JTextField();
    
this->mouseActionJButton= new javax::swing::JButton();
    
this->jLabel1= new javax::swing::JLabel();
    
this->mouseActionJDialog->setMinimumSize(new java::awt::Dimension(275, 185));
    
this->titleJLabel->setText("Mouse Input Options");
    
this->okJButton->setText("OK");
    
this->okJButton->addActionListener([&]() {
    static thread_local MouseActionScriptInputJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    MouseActionScriptInputJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->okJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel2->setText("Buttons:");
    
this->jLabel3->setText("Move To:");
    
this->button1JCheckBox->setText(CommonPhoneStrings::getInstance()->ONE);
    
this->button1JCheckBox->setBorder(BorderFactory::createEmptyBorder(0, 0, 0, 0));
    
this->button1JCheckBox->setMargin(new java::awt::Insets(0, 0, 0, 0));
    
this->button2JCheckBox->setText(CommonPhoneStrings::getInstance()->TWO);
    
this->button2JCheckBox->setBorder(BorderFactory::createEmptyBorder(0, 0, 0, 0));
    
this->button2JCheckBox->setMargin(new java::awt::Insets(0, 0, 0, 0));
    
this->button2JCheckBox->addActionListener([&]() {
    static thread_local MouseActionScriptInputJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    MouseActionScriptInputJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->button2JCheckBoxActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel4->setText("x:");
    
this->mouseXJTextField->setText(CommonPhoneStrings::getInstance()->ZERO);
    
this->jLabel5->setText("y:");
    
this->mouseYJTextField->setText(CommonPhoneStrings::getInstance()->ZERO);
    
this->inputTypeJLabel->setText("Input Type:");
    
this->jLabel6->setText("Delay:");
    
this->mouseDelayJTextField->setText("100");
    

    javax::swing::GroupLayout* mouseActionJDialogLayout = new javax::swing::GroupLayout(this->mouseActionJDialog->getContentPane());;
    
this->mouseActionJDialog->getContentPane()->setLayout(mouseActionJDialogLayout);
    
mouseActionJDialogLayout->setHorizontalGroup(mouseActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(mouseActionJDialogLayout->createSequentialGroup()->addContainerGap()->addGroup(mouseActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addComponent(inputTypeJLabel)->addGroup(GroupLayout::Alignment->TRAILING, mouseActionJDialogLayout->createSequentialGroup()->addGroup(mouseActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(GroupLayout::Alignment->TRAILING, mouseActionJDialogLayout->createSequentialGroup()->addComponent(jLabel2)->addGap(25, 25, 25))->addGroup(mouseActionJDialogLayout->createSequentialGroup()->addGroup(mouseActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addComponent(jLabel3)->addComponent(jLabel6))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)))->addGroup(mouseActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addComponent(mouseDelayJTextField, GroupLayout::Alignment->TRAILING, GroupLayout::DEFAULT_SIZE, 154, Short::MAX_VALUE)->addGroup(mouseActionJDialogLayout->createSequentialGroup()->addComponent(titleJLabel)->addGap(45, 45, 45))->addGroup(GroupLayout::Alignment->TRAILING, mouseActionJDialogLayout->createSequentialGroup()->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(inputAutomationTypeJComboBox, 0, 154, Short::MAX_VALUE))->addGroup(mouseActionJDialogLayout->createSequentialGroup()->addComponent(button1JCheckBox)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(button2JCheckBox))->addGroup(mouseActionJDialogLayout->createSequentialGroup()->addGroup(mouseActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->TRAILING)->addGroup(mouseActionJDialogLayout->createSequentialGroup()->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(okJButton))->addGroup(mouseActionJDialogLayout->createSequentialGroup()->addComponent(jLabel4)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED, 5, Short::MAX_VALUE)->addComponent(mouseXJTextField, GroupLayout::PREFERRED_SIZE, 59, GroupLayout::PREFERRED_SIZE)))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(jLabel5)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(mouseYJTextField, GroupLayout::DEFAULT_SIZE, 62, Short::MAX_VALUE)))))->addContainerGap()));
    
mouseActionJDialogLayout->setVerticalGroup(mouseActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(mouseActionJDialogLayout->createSequentialGroup()->addComponent(titleJLabel)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(mouseActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(inputTypeJLabel)->addComponent(inputAutomationTypeJComboBox, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(mouseActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addComponent(jLabel2, GroupLayout::PREFERRED_SIZE, 15, GroupLayout::PREFERRED_SIZE)->addGroup(mouseActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(button1JCheckBox)->addComponent(button2JCheckBox)))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(mouseActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(jLabel6)->addComponent(mouseDelayJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(mouseActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(jLabel3)->addComponent(jLabel4)->addComponent(jLabel5)->addComponent(mouseYJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addComponent(mouseXJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED, GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)->addComponent(okJButton)->addContainerGap()));
    
setMinimumSize(new java::awt::Dimension(100, 0));
    
this->mouseActionJButton->setText("Edit");
    
this->mouseActionJButton->addActionListener([&]() {
    static thread_local MouseActionScriptInputJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    MouseActionScriptInputJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->mouseActionJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel1->setText("Mouse:");
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addComponent(jLabel1)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED, 36, Short::MAX_VALUE)->addComponent(mouseActionJButton)));
    
layout->setVerticalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(jLabel1)->addComponent(mouseActionJButton)));
    
}


    auto MouseActionScriptInputJPanel::button2JCheckBoxActionPerformed(java::awt::event::ActionEvent* evt) -> void{
}


    auto MouseActionScriptInputJPanel::okJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            this->update();
    
this->getMouseActionJDialog()->setVisible(false);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "okButtonActionPerformed", &e);
    
}

}


    auto MouseActionScriptInputJPanel::mouseActionJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->getMouseActionJDialog()->setVisible(true);
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUTJPANEL_CPP
