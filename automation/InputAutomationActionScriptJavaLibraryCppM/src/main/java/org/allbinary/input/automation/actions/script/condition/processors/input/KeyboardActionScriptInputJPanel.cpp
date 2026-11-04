
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYBOARDACTIONSCRIPTINPUTJPANEL_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYBOARDACTIONSCRIPTINPUTJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInputJPanel.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/swing.h>

      
#include <org/allbinary/input/KeySingletonFactory.h>

      
#include <org/allbinary/input/automation/robot/InputRobot.h>

      
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>

      
#include <org/allbinary/input/automation/robot/TempInputRobotNames.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <javax/swing/SwingConstants.h>

#include <javax/swing/BorderFactory.h>

#include <javax/swing/BorderFactory.h>

#include <javax/swing/BorderFactory.h>

#include <javax/swing/BorderFactory.h>

#include <javax/swing/BorderFactory.h>

#include <javax/swing/SwingConstants.h>

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

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

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

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/JPanel.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInputInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/DefaultComboBoxModel.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyNameDefaultComboBoxModelFactory.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyCharDefaultComboBoxModelFactory.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/ComboBoxModel.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JDialog.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JLabel.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JComboBox.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JTextField.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JRadioButton.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JButton.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/Dimension.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/ActionListener.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/ActionEvent.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/Insets.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/GroupLayout.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/Short.h"


KeyboardActionScriptInputJPanel::KeyboardActionScriptInputJPanel(KeyboardActionScriptInputInterface* keyActionScriptInputInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->initComponents();
    
this->keyActionScriptInputInterface= keyActionScriptInputInterface;
    

    DefaultComboBoxModel* defaultComboBoxModel = new DefaultComboBoxModel();;
    
defaultComboBoxModel->addElement(TempInputRobotNames::DX_NAME);
    
defaultComboBoxModel->addElement(InputRobot::NAME);
    
this->inputAutomationTypeJComboBox->setModel(defaultComboBoxModel);
    
this->keyNameJComboBox->setModel(KeyNameDefaultComboBoxModelFactory::getInstance());
    
this->keyIntegerJComboBox->setModel(KeyCharDefaultComboBoxModelFactory::getInstance());
    

                        if(this->keyActionScriptInputInterface->isNormal())
                        
                                    {
                                    this->normalJRadioButton->setSelected(true);
    
this->pressJRadioButton->setSelected(false);
    
this->releaseJRadioButton->setSelected(false);
    

                                    }
                                
                             else 
                        if(this->keyActionScriptInputInterface->isPress())
                        
                                    {
                                    this->normalJRadioButton->setSelected(false);
    
this->pressJRadioButton->setSelected(true);
    
this->releaseJRadioButton->setSelected(false);
    

                                    }
                                
                             else 
                        if(this->keyActionScriptInputInterface->isRelease())
                        
                                    {
                                    this->normalJRadioButton->setSelected(false);
    
this->pressJRadioButton->setSelected(false);
    
this->releaseJRadioButton->setSelected(true);
    

                                    }
                                
this->set();
    
}


    auto KeyboardActionScriptInputJPanel::set() -> void{

    ComboBoxModel* inputTypeComboBoxModel = this->inputAutomationTypeJComboBox->getModel();;
    
inputTypeComboBoxModel->setSelectedItem(this->keyActionScriptInputInterface->getInputRobotInterface()->getName());
    
this->textJTextField->setText(this->keyActionScriptInputInterface->getText());
    
this->delayJTextField->setText(std::to_string(getDelayBetweenKeys));
    
this->timeJTextField->setText(std::to_string(getTime));
    
this->keyActionScriptInputInterface->log();
    
}


                //@Throws(Exception.constructor)
            
    auto KeyboardActionScriptInputJPanel::updateInputType() -> void{

    ComboBoxModel* comboBoxModel = this->inputAutomationTypeJComboBox->getModel();;
    

    std::string selectedItem = JavaBoxes::unbox<std::string>(comboBoxModel->getSelectedItem());;
    

                        if(!StringValidationUtil::getInstance()->isEmpty(selectedItem))
                        
                                    {
                                    this->keyActionScriptInputInterface->setInputRobotInterface(InputRobotFactory::getInstance()->get(selectedItem));
    

                                    }
                                
}


    auto KeyboardActionScriptInputJPanel::getSelectedKey() -> int32_t{

    ComboBoxModel* comboBoxModel = this->keyNameJComboBox->getModel();;
    

    std::string selectedItem = JavaBoxes::unbox<std::string>(comboBoxModel->getSelectedItem());;
    

                        if(!StringValidationUtil::getInstance()->isEmpty(selectedItem))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<int32_t>(KeySingletonFactory::getHashtable()->get(selectedItem));
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto KeyboardActionScriptInputJPanel::updateKeys() -> void{

    std::string text = this->textJTextField->getText();;
    
this->keyActionScriptInputInterface->setText(text);
    
}


                //@Throws(Exception.constructor)
            
    auto KeyboardActionScriptInputJPanel::update() -> void{
this->updateInputType();
    
this->updateKeys();
    
this->keyActionScriptInputInterface->setTime(JavaBoxes::value<int32_t>(Integer.valueOf(this->timeJTextField->getText())));
    
this->keyActionScriptInputInterface->log();
    
}


    auto KeyboardActionScriptInputJPanel::getKeyActionJDialog() -> javax::swing::JDialog*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->keyActionJDialog;
    
}


    auto KeyboardActionScriptInputJPanel::setKeyActionJDialog(javax::swing::JDialog* keyActionJDialog) -> void{
this->keyActionJDialog= keyActionJDialog;
    
}


    auto KeyboardActionScriptInputJPanel::initComponents() -> void{
this->keyActionJDialog= new javax::swing::JDialog();
    
this->titleJLabel= new javax::swing::JLabel();
    
this->addKeyJLabel= new javax::swing::JLabel();
    
this->keyNameJComboBox= new javax::swing::JComboBox();
    
this->timeJTextField= new javax::swing::JTextField();
    
this->holdTimeJLabel= new javax::swing::JLabel();
    
this->inputAutomationTypeJComboBox= new javax::swing::JComboBox();
    
this->inputTypeJLabel= new javax::swing::JLabel();
    
this->delayJTextField= new javax::swing::JTextField();
    
this->delayBetweenJLabel= new javax::swing::JLabel();
    
this->testJLabel= new javax::swing::JLabel();
    
this->textJTextField= new javax::swing::JTextField();
    
this->pressJRadioButton= new javax::swing::JRadioButton();
    
this->releaseJRadioButton= new javax::swing::JRadioButton();
    
this->normalJRadioButton= new javax::swing::JRadioButton();
    
this->simultaneousJRadioButton= new javax::swing::JRadioButton();
    
this->sequenceJRadioButton= new javax::swing::JRadioButton();
    
this->jPanel1= new javax::swing::JPanel();
    
this->okJButton= new javax::swing::JButton();
    
this->keyIntegerJComboBox= new javax::swing::JComboBox();
    
this->keyActionJButton= new javax::swing::JButton();
    
this->jLabel1= new javax::swing::JLabel();
    
this->keyActionJDialog->setMinimumSize(new java::awt::Dimension(255, 280));
    
this->titleJLabel->setHorizontalAlignment(SwingConstants::CENTER);
    
this->titleJLabel->setText("Keyboard Input Options");
    
this->addKeyJLabel->setText("Add Key:");
    
this->keyNameJComboBox->addActionListener([&]() {
    static thread_local KeyboardActionScriptInputJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    KeyboardActionScriptInputJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->keyNameJComboBoxActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->timeJTextField->setText(CommonPhoneStrings::getInstance()->ZERO);
    
this->holdTimeJLabel->setText("Hold Time (ms):");
    
this->inputTypeJLabel->setText("Input Type:");
    
this->delayJTextField->setText(CommonPhoneStrings::getInstance()->ZERO);
    
this->delayBetweenJLabel->setText("Delay Between Keys (ms):");
    
this->testJLabel->setText("Text:");
    
this->textJTextField->setText(CommonPhoneStrings::getInstance()->ZERO);
    
this->pressJRadioButton->setText("Press");
    
this->pressJRadioButton->setBorder(BorderFactory::createEmptyBorder(0, 0, 0, 0));
    
this->pressJRadioButton->setMargin(new java::awt::Insets(0, 0, 0, 0));
    
this->pressJRadioButton->addActionListener([&]() {
    static thread_local KeyboardActionScriptInputJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    KeyboardActionScriptInputJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->pressJRadioButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->releaseJRadioButton->setText("Release");
    
this->releaseJRadioButton->setBorder(BorderFactory::createEmptyBorder(0, 0, 0, 0));
    
this->releaseJRadioButton->setMargin(new java::awt::Insets(0, 0, 0, 0));
    
this->releaseJRadioButton->addActionListener([&]() {
    static thread_local KeyboardActionScriptInputJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    KeyboardActionScriptInputJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->releaseJRadioButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->normalJRadioButton->setSelected(true);
    
this->normalJRadioButton->setText("Normal");
    
this->normalJRadioButton->setBorder(BorderFactory::createEmptyBorder(0, 0, 0, 0));
    
this->normalJRadioButton->setMargin(new java::awt::Insets(0, 0, 0, 0));
    
this->normalJRadioButton->addActionListener([&]() {
    static thread_local KeyboardActionScriptInputJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    KeyboardActionScriptInputJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->normalJRadioButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->simultaneousJRadioButton->setSelected(true);
    
this->simultaneousJRadioButton->setText("Simultaneous");
    
this->simultaneousJRadioButton->setBorder(BorderFactory::createEmptyBorder(0, 0, 0, 0));
    
this->simultaneousJRadioButton->setMargin(new java::awt::Insets(0, 0, 0, 0));
    
this->simultaneousJRadioButton->addActionListener([&]() {
    static thread_local KeyboardActionScriptInputJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    KeyboardActionScriptInputJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->simultaneousJRadioButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->sequenceJRadioButton->setText("Sequence");
    
this->sequenceJRadioButton->setBorder(BorderFactory::createEmptyBorder(0, 0, 0, 0));
    
this->sequenceJRadioButton->setMargin(new java::awt::Insets(0, 0, 0, 0));
    
this->sequenceJRadioButton->addActionListener([&]() {
    static thread_local KeyboardActionScriptInputJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    KeyboardActionScriptInputJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->sequenceJRadioButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->okJButton->setText("OK");
    
this->okJButton->setHorizontalTextPosition(SwingConstants::CENTER);
    
this->okJButton->addActionListener([&]() {
    static thread_local KeyboardActionScriptInputJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    KeyboardActionScriptInputJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->okJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jPanel1->add(this->okJButton);
    
this->keyIntegerJComboBox->addActionListener([&]() {
    static thread_local KeyboardActionScriptInputJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    KeyboardActionScriptInputJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->keyIntegerJComboBoxActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    

    javax::swing::GroupLayout* keyActionJDialogLayout = new javax::swing::GroupLayout(this->keyActionJDialog->getContentPane());;
    
this->keyActionJDialog->getContentPane()->setLayout(keyActionJDialogLayout);
    
keyActionJDialogLayout->setHorizontalGroup(keyActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(keyActionJDialogLayout->createSequentialGroup()->addContainerGap()->addGroup(keyActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(keyActionJDialogLayout->createSequentialGroup()->addGroup(keyActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING, false)->addComponent(addKeyJLabel, GroupLayout::DEFAULT_SIZE, GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)->addComponent(inputTypeJLabel, GroupLayout::DEFAULT_SIZE, GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(keyActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->TRAILING)->addComponent(inputAutomationTypeJComboBox, 0, 148, Short::MAX_VALUE)->addComponent(textJTextField, GroupLayout::Alignment->LEADING, GroupLayout::DEFAULT_SIZE, 148, Short::MAX_VALUE)->addGroup(keyActionJDialogLayout->createSequentialGroup()->addComponent(keyNameJComboBox, 0, 101, Short::MAX_VALUE)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(keyIntegerJComboBox, GroupLayout::PREFERRED_SIZE, 41, GroupLayout::PREFERRED_SIZE))))->addComponent(testJLabel, GroupLayout::PREFERRED_SIZE, 60, GroupLayout::PREFERRED_SIZE)->addGroup(keyActionJDialogLayout->createSequentialGroup()->addComponent(normalJRadioButton)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(pressJRadioButton)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(releaseJRadioButton)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED, 48, GroupLayout::PREFERRED_SIZE))->addGroup(GroupLayout::Alignment->TRAILING, keyActionJDialogLayout->createSequentialGroup()->addComponent(holdTimeJLabel)->addGap(22, 22, 22)->addComponent(timeJTextField, GroupLayout::DEFAULT_SIZE, 113, Short::MAX_VALUE))->addGroup(keyActionJDialogLayout->createSequentialGroup()->addComponent(delayBetweenJLabel)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED, 15, Short::MAX_VALUE)->addComponent(delayJTextField, GroupLayout::PREFERRED_SIZE, 68, GroupLayout::PREFERRED_SIZE))->addGroup(keyActionJDialogLayout->createSequentialGroup()->addComponent(simultaneousJRadioButton)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(sequenceJRadioButton)))->addContainerGap())->addComponent(titleJLabel, GroupLayout::Alignment->TRAILING, GroupLayout::DEFAULT_SIZE, 229, Short::MAX_VALUE)->addComponent(jPanel1, GroupLayout::DEFAULT_SIZE, 229, Short::MAX_VALUE));
    
keyActionJDialogLayout->setVerticalGroup(keyActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(keyActionJDialogLayout->createSequentialGroup()->addComponent(titleJLabel)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(keyActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(inputTypeJLabel)->addComponent(inputAutomationTypeJComboBox, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(keyActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(addKeyJLabel)->addComponent(keyIntegerJComboBox, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addComponent(keyNameJComboBox, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(keyActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(testJLabel)->addComponent(textJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(keyActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(pressJRadioButton)->addComponent(normalJRadioButton)->addComponent(releaseJRadioButton))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(keyActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(holdTimeJLabel)->addComponent(timeJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(keyActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(delayBetweenJLabel)->addComponent(delayJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(keyActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(simultaneousJRadioButton)->addComponent(sequenceJRadioButton))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(jPanel1, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addContainerGap()));
    
setMinimumSize(new java::awt::Dimension(100, 0));
    
this->keyActionJButton->setText("Edit");
    
this->keyActionJButton->addActionListener([&]() {
    static thread_local KeyboardActionScriptInputJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    KeyboardActionScriptInputJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->keyActionJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel1->setText("Key:");
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addComponent(jLabel1)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED, 49, Short::MAX_VALUE)->addComponent(keyActionJButton)));
    
layout->setVerticalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(jLabel1)->addComponent(keyActionJButton)));
    
}


    auto KeyboardActionScriptInputJPanel::prependText(int32_t integer) -> void{

                        if(true)
                        
                                    {
                                    
    std::string newKey = JavaString::valueOf(JavaString::valueOf("&#") +JavaString::valueOf(JavaString::valueOf(integer))) +JavaString::valueOf(";");;
    
this->textJTextField->setText(JavaString::valueOf(newKey) +JavaString::valueOf(this->textJTextField->getText()));
    

                                    }
                                
}


    auto KeyboardActionScriptInputJPanel::keyIntegerJComboBoxActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->keyIntegerJComboBox->getSelectedIndex();
    
this->keyNameJComboBox->setSelectedIndex(this->keyIntegerJComboBox->getSelectedIndex());
    
}


    auto KeyboardActionScriptInputJPanel::sequenceJRadioButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{

                        if(this->sequenceJRadioButton->isSelected())
                        
                                    {
                                    this->delayJTextField->setText(CommonPhoneStrings::getInstance()->ONE);
    
this->simultaneousJRadioButton->setSelected(false);
    

                                    }
                                
}


    auto KeyboardActionScriptInputJPanel::simultaneousJRadioButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{

                        if(this->simultaneousJRadioButton->isSelected())
                        
                                    {
                                    this->delayJTextField->setText(CommonPhoneStrings::getInstance()->ZERO);
    
this->sequenceJRadioButton->setSelected(false);
    

                                    }
                                
}


    auto KeyboardActionScriptInputJPanel::keyNameJComboBoxActionPerformed(java::awt::event::ActionEvent* evt) -> void{

    int32_t integer = this->getSelectedKey();;
    
this->prependText(integer);
    
this->keyIntegerJComboBox->setSelectedIndex(this->keyNameJComboBox->getSelectedIndex());
    
}


    auto KeyboardActionScriptInputJPanel::okJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            this->update();
    
this->getKeyActionJDialog()->setVisible(false);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "okButtonActionPerformed", &e);
    
}

}


    auto KeyboardActionScriptInputJPanel::keyActionJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->getKeyActionJDialog()->setVisible(true);
    
}


    auto KeyboardActionScriptInputJPanel::normalJRadioButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{

                        if(this->normalJRadioButton->isSelected())
                        
                                    {
                                    this->keyActionScriptInputInterface->setNormal();
    
this->pressJRadioButton->setSelected(false);
    
this->releaseJRadioButton->setSelected(false);
    

                                    }
                                
}


    auto KeyboardActionScriptInputJPanel::releaseJRadioButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{

                        if(this->releaseJRadioButton->isSelected())
                        
                                    {
                                    this->keyActionScriptInputInterface->setRelease(true);
    
this->keyActionScriptInputInterface->setPress(false);
    
this->pressJRadioButton->setSelected(false);
    
this->normalJRadioButton->setSelected(false);
    

                                    }
                                
}


    auto KeyboardActionScriptInputJPanel::pressJRadioButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{

                        if(this->pressJRadioButton->isSelected())
                        
                                    {
                                    this->keyActionScriptInputInterface->setPress(true);
    
this->keyActionScriptInputInterface->setRelease(false);
    
this->releaseJRadioButton->setSelected(false);
    
this->normalJRadioButton->setSelected(false);
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYBOARDACTIONSCRIPTINPUTJPANEL_CPP
