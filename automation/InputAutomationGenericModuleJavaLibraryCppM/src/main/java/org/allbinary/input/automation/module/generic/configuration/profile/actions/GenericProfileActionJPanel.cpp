
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONJPANEL_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionJPanel.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/input/automation/actions/script/JTreeInterfaceFactory.h>

      
#include <org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptCondition.h>

      
#include <org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptCondition.h>

      
#include <org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h>

      
#include <org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptCondition.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScriptJPanel.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JPanel.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GroupLayout.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/Short.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JScrollPane.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JLabel.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JButton.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/Dimension.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/ActionListener.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/ActionEvent.h"


GenericProfileActionJPanel::GenericProfileActionJPanel() : logUtil(LogUtil::getInstance()){
this->initComponents();
    
}


    auto GenericProfileActionJPanel::updateProfileActionUI() -> void{
this->blankProfileActionScriptJPanel->removeAll();
    

    GenericProfileActionScriptJPanel* genericProfileActionScriptJPanel = new GenericProfileActionScriptJPanel();;
    
JTreeInterfaceFactory::getInstance()->set(genericProfileActionScriptJPanel);
    
this->setGenericProfileActionScriptJPanel(genericProfileActionScriptJPanel);
    
this->getGenericProfileActionScriptJPanel()->setGenericProfileActionScript(this->getGenericProfileAction()->getGenericProfileActionScript());
    
this->getGenericProfileActionScriptJPanel()->updateJTree();
    

    javax::swing::GroupLayout* layout = dynamic_cast<javax::swing::GroupLayout*>(this->blankProfileActionScriptJPanel->getLayout());;
    
layout->setHorizontalGroup(layout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGap(0, 395, Short::MAX_VALUE)->addComponent(this->getGenericProfileActionScriptJPanel(), javax.swing->GroupLayout->PREFERRED_SIZE, javax.swing->GroupLayout->DEFAULT_SIZE, javax.swing->GroupLayout->PREFERRED_SIZE));
    
layout->setVerticalGroup(layout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGap(0, 256, Short::MAX_VALUE)->addComponent(this->getGenericProfileActionScriptJPanel(), javax.swing->GroupLayout->PREFERRED_SIZE, javax.swing->GroupLayout->DEFAULT_SIZE, javax.swing->GroupLayout->PREFERRED_SIZE));
    
this->logUtil->putF("Updated UI", this, "updateUI");
    
}


    auto GenericProfileActionJPanel::getGenericProfileAction() -> GenericProfileAction*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->genericProfileAction;
    
}


    auto GenericProfileActionJPanel::setGenericProfileAction(GenericProfileAction* genericProfileAction) -> void{
this->genericProfileAction= genericProfileAction;
    
}


    auto GenericProfileActionJPanel::getGenericProfileActionScriptJPanel() -> GenericProfileActionScriptJPanel*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->genericProfileActionScriptJPanel;
    
}


    auto GenericProfileActionJPanel::setGenericProfileActionScriptJPanel(GenericProfileActionScriptJPanel* genericProfileActionScriptJPanel) -> void{
this->genericProfileActionScriptJPanel= genericProfileActionScriptJPanel;
    
}


    auto GenericProfileActionJPanel::initComponents() -> void{
this->genericProfileActionScriptJScrollPane= new javax::swing::JScrollPane();
    
this->blankProfileActionScriptJPanel= new javax::swing::JPanel();
    
this->ifJLabel= new javax::swing::JLabel();
    
this->newColorAtJButton= new javax::swing::JButton();
    
this->newTimeIntervalJButton= new javax::swing::JButton();
    
this->newAlwaysJButton= new javax::swing::JButton();
    
setMinimumSize(new java::awt::Dimension(440, 275));
    
setPreferredSize(new java::awt::Dimension(440, 275));
    
this->genericProfileActionScriptJScrollPane->setPreferredSize(new java::awt::Dimension(474, 270));
    
this->blankProfileActionScriptJPanel->setMinimumSize(new java::awt::Dimension(400, 200));
    

    javax::swing::GroupLayout* blankProfileActionScriptJPanelLayout = new javax::swing::GroupLayout(this->blankProfileActionScriptJPanel);;
    
this->blankProfileActionScriptJPanel->setLayout(blankProfileActionScriptJPanelLayout);
    
blankProfileActionScriptJPanelLayout->setHorizontalGroup(blankProfileActionScriptJPanelLayout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGap(0, 9996, Short::MAX_VALUE));
    
blankProfileActionScriptJPanelLayout->setVerticalGroup(blankProfileActionScriptJPanelLayout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGap(0, 9967, Short::MAX_VALUE));
    
this->genericProfileActionScriptJScrollPane->setViewportView(this->blankProfileActionScriptJPanel);
    
this->ifJLabel->setText("Conditions:");
    
this->newColorAtJButton->setText("Color Range At");
    
this->newColorAtJButton->addActionListener([&]() {
    static thread_local GenericProfileActionJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    GenericProfileActionJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->newColorAtJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->newTimeIntervalJButton->setText("Time Interval");
    
this->newTimeIntervalJButton->addActionListener([&]() {
    static thread_local GenericProfileActionJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    GenericProfileActionJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->newTimeIntervalJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->newAlwaysJButton->setText("Always On/Off");
    
this->newAlwaysJButton->addActionListener([&]() {
    static thread_local GenericProfileActionJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    GenericProfileActionJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->newAlwaysJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addComponent(ifJLabel)->addPreferredGap(javax.swing->LayoutStyle->ComponentPlacement->RELATED)->addComponent(newColorAtJButton)->addPreferredGap(javax.swing->LayoutStyle->ComponentPlacement->RELATED)->addComponent(newTimeIntervalJButton)->addPreferredGap(javax.swing->LayoutStyle->ComponentPlacement->RELATED)->addComponent(newAlwaysJButton)->addContainerGap(61, Short::MAX_VALUE))->addComponent(genericProfileActionScriptJScrollPane, javax.swing->GroupLayout->DEFAULT_SIZE, 440, Short::MAX_VALUE));
    
layout->setVerticalGroup(layout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addGroup(layout->createParallelGroup(javax.swing->GroupLayout->Alignment->BASELINE)->addComponent(ifJLabel, javax.swing->GroupLayout->PREFERRED_SIZE, 14, javax.swing->GroupLayout->PREFERRED_SIZE)->addComponent(newColorAtJButton)->addComponent(newTimeIntervalJButton)->addComponent(newAlwaysJButton))->addPreferredGap(javax.swing->LayoutStyle->ComponentPlacement->RELATED)->addComponent(genericProfileActionScriptJScrollPane, javax.swing->GroupLayout->DEFAULT_SIZE, 246, Short::MAX_VALUE)));
    
}


    auto GenericProfileActionJPanel::newTimeIntervalJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->logUtil->putF("New Time Interval Action Condition", this, "newTimeIntervalJButtonActionPerformed");
    
this->getGenericProfileAction()->getGenericProfileActionScript()->addCondition(dynamic_cast<ProfileActionScriptConditionInterface*>(new TimeIntervalActionScriptCondition()));
    
this->updateProfileActionUI();
    
}


    auto GenericProfileActionJPanel::newAlwaysJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->logUtil->putF("New EveryTime Action Condition", this, "newEveryTimeJButtonActionPerformed");
    
this->getGenericProfileAction()->getGenericProfileActionScript()->addCondition(dynamic_cast<ProfileActionScriptConditionInterface*>(new AlwaysActionScriptCondition()));
    
this->updateProfileActionUI();
    
}


    auto GenericProfileActionJPanel::newColorAtJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->logUtil->putF("New Color At Action Condition", this, "newColorAtJButtonActionPerformed");
    
this->getGenericProfileAction()->getGenericProfileActionScript()->addCondition(dynamic_cast<ProfileActionScriptConditionInterface*>(new ColorAtActionScriptCondition()));
    
this->updateProfileActionUI();
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONJPANEL_CPP
