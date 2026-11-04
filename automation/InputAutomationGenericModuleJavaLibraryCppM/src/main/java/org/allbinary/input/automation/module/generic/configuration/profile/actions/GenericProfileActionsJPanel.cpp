
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONSJPANEL_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONSJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionsJPanel.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/input/automation/module/DefaultListModelHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

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

#include <javax/swing/GroupLayout.h>

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

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JPanel.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActions.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionJPanel.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JDialog.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JLabel.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JButton.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JTextField.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JScrollPane.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JList.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/Dimension.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/ActionListener.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/ActionEvent.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GroupLayout.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/Short.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/ListSelectionListener.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/ListSelectionEvent.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h"


GenericProfileActionsJPanel::GenericProfileActionsJPanel() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->initComponents();
    
}


    auto GenericProfileActionsJPanel::initComponents() -> void{
this->newProfileActionJDialog= new javax::swing::JDialog();
    
this->newProfileActionJLabel= new javax::swing::JLabel();
    
this->okNewProfileActionJButton= new javax::swing::JButton();
    
this->newProfileActionJTextField= new javax::swing::JTextField();
    
this->genericProfileActionsJPanel= new javax::swing::JPanel();
    
this->genericProfileActionsJScrollPane= new javax::swing::JScrollPane();
    
this->genericProfileActionsJList= new javax::swing::JList();
    
this->newActionJButton= new javax::swing::JButton();
    
this->deleteActionJButton= new javax::swing::JButton();
    
this->saveJButton= new javax::swing::JButton();
    
this->blankGenericProfileActionJPanel= new javax::swing::JPanel();
    
this->newProfileActionJDialog->setMinimumSize(new java::awt::Dimension(250, 150));
    
this->newProfileActionJDialog->setResizable(false);
    
this->newProfileActionJLabel->setText("New Action Name");
    
this->okNewProfileActionJButton->setText("Ok");
    
this->okNewProfileActionJButton->addActionListener([&]() {
    static thread_local GenericProfileActionsJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    GenericProfileActionsJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->okNewProfileActionJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    

    javax::swing::GroupLayout* newProfileActionJDialogLayout = new javax::swing::GroupLayout(this->newProfileActionJDialog->getContentPane());;
    
this->newProfileActionJDialog->getContentPane()->setLayout(newProfileActionJDialogLayout);
    
newProfileActionJDialogLayout->setHorizontalGroup(newProfileActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(newProfileActionJDialogLayout->createSequentialGroup()->addGroup(newProfileActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(newProfileActionJDialogLayout->createSequentialGroup()->addGap(93, 93, 93)->addComponent(okNewProfileActionJButton))->addGroup(newProfileActionJDialogLayout->createSequentialGroup()->addGap(75, 75, 75)->addComponent(newProfileActionJLabel))->addGroup(newProfileActionJDialogLayout->createSequentialGroup()->addGap(29, 29, 29)->addComponent(newProfileActionJTextField, GroupLayout::PREFERRED_SIZE, 178, GroupLayout::PREFERRED_SIZE)))->addContainerGap(34, Short::MAX_VALUE)));
    
newProfileActionJDialogLayout->setVerticalGroup(newProfileActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(GroupLayout::Alignment->TRAILING, newProfileActionJDialogLayout->createSequentialGroup()->addContainerGap()->addComponent(newProfileActionJLabel)->addGap(21, 21, 21)->addComponent(newProfileActionJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED, 20, Short::MAX_VALUE)->addComponent(okNewProfileActionJButton)->addContainerGap()));
    
this->genericProfileActionsJPanel->setPreferredSize(new java::awt::Dimension(10000, 10000));
    
this->genericProfileActionsJList->addListSelectionListener([&]() {
    static thread_local GenericProfileActionsJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public javax::swing::event::ListSelectionListener {
    public:
    using javax::swing::event::ListSelectionListener::ListSelectionListener;
    GenericProfileActionsJPanel* outer = anonymousOuter0;

    public: void valueChanged(javax::swing::event::ListSelectionEvent* evt){
outer->genericProfileActionsJListValueChanged(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->genericProfileActionsJScrollPane->setViewportView(this->genericProfileActionsJList);
    
this->newActionJButton->setText("New");
    
this->newActionJButton->addActionListener([&]() {
    static thread_local GenericProfileActionsJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    GenericProfileActionsJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->newActionJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->deleteActionJButton->setText("Delete");
    
this->deleteActionJButton->addActionListener([&]() {
    static thread_local GenericProfileActionsJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    GenericProfileActionsJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->deleteActionJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->saveJButton->setText("Save");
    
this->saveJButton->addActionListener([&]() {
    static thread_local GenericProfileActionsJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    GenericProfileActionsJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->saveJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->blankGenericProfileActionJPanel->setMinimumSize(new java::awt::Dimension(500, 300));
    

    javax::swing::GroupLayout* blankGenericProfileActionJPanelLayout = new javax::swing::GroupLayout(this->blankGenericProfileActionJPanel);;
    
this->blankGenericProfileActionJPanel->setLayout(blankGenericProfileActionJPanelLayout);
    
blankGenericProfileActionJPanelLayout->setHorizontalGroup(blankGenericProfileActionJPanelLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGap(0, 500, Short::MAX_VALUE));
    
blankGenericProfileActionJPanelLayout->setVerticalGroup(blankGenericProfileActionJPanelLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGap(0, 296, Short::MAX_VALUE));
    

    javax::swing::GroupLayout* genericProfileActionsJPanelLayout = new javax::swing::GroupLayout(this->genericProfileActionsJPanel);;
    
this->genericProfileActionsJPanel->setLayout(genericProfileActionsJPanelLayout);
    
genericProfileActionsJPanelLayout->setHorizontalGroup(genericProfileActionsJPanelLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(genericProfileActionsJPanelLayout->createSequentialGroup()->addComponent(genericProfileActionsJScrollPane, GroupLayout::PREFERRED_SIZE, 95, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(blankGenericProfileActionJPanel, GroupLayout::DEFAULT_SIZE, GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE))->addGroup(genericProfileActionsJPanelLayout->createSequentialGroup()->addComponent(newActionJButton)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(deleteActionJButton)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(saveJButton)->addContainerGap()));
    
genericProfileActionsJPanelLayout->setVerticalGroup(genericProfileActionsJPanelLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(genericProfileActionsJPanelLayout->createSequentialGroup()->addGroup(genericProfileActionsJPanelLayout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(newActionJButton)->addComponent(deleteActionJButton)->addComponent(saveJButton))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(genericProfileActionsJPanelLayout->createParallelGroup(GroupLayout::Alignment->LEADING, false)->addComponent(blankGenericProfileActionJPanel, 0, 296, Short::MAX_VALUE)->addComponent(genericProfileActionsJScrollPane, GroupLayout::DEFAULT_SIZE, 296, Short::MAX_VALUE))->addContainerGap(GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)));
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addComponent(genericProfileActionsJPanel, GroupLayout::PREFERRED_SIZE, 596, GroupLayout::PREFERRED_SIZE)->addContainerGap(GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)));
    
layout->setVerticalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addComponent(genericProfileActionsJPanel, GroupLayout::PREFERRED_SIZE, 336, GroupLayout::PREFERRED_SIZE));
    
}


    auto GenericProfileActionsJPanel::setModel() -> void{

    DefaultListModelHelper* defaultListModelHelper = this->getGenericProfileActions()->getDefaultListModelHelper();;
    

                        if(defaultListModelHelper->getListModel()->getSize() > 0)
                        
                                    {
                                    this->genericProfileActionsJList->setModel(defaultListModelHelper->getListModel());
    

                                    }
                                
}


    auto GenericProfileActionsJPanel::saveJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            this->getGenericProfileActions()->save();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "saveJButtonActionPerformed", &e);
    
}

}


    auto GenericProfileActionsJPanel::updateProfileActionUI(std::string profileActionNameString) -> void{
this->blankGenericProfileActionJPanel->removeAll();
    

                        if(true)
                        
                                    {
                                    
    GenericProfileAction* genericProfileAction = this->getGenericProfileActions()->getAction(profileActionNameString);;
    
this->setGenericProfileActionJPanel(new GenericProfileActionJPanel());
    
this->getGenericProfileActionJPanel()->setGenericProfileAction(genericProfileAction);
    
this->getGenericProfileActionJPanel()->updateProfileActionUI();
    

    javax::swing::GroupLayout* layout = dynamic_cast<javax::swing::GroupLayout*>(this->blankGenericProfileActionJPanel->getLayout());;
    
layout->setHorizontalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGap(0, 395, Short::MAX_VALUE)->addComponent(this->getGenericProfileActionJPanel(), GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE));
    
layout->setVerticalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGap(0, 256, Short::MAX_VALUE)->addComponent(this->getGenericProfileActionJPanel(), GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE));
    
this->logUtil->putF("Setting Configuration Profile Actions JPanel", this, "genericProfileActionsJListValueChanged");
    

                                    }
                                
}


    auto GenericProfileActionsJPanel::genericProfileActionsJListValueChanged(javax::swing::event::ListSelectionEvent* evt) -> void{

        try {
            
    std::string profileActionNameString = JavaBoxes::unbox<std::string>(this->genericProfileActionsJList->getSelectedValue());;
    
this->updateProfileActionUI(profileActionNameString);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "genericProfileActionsJListValueChanged", &e);
    
}

}


    auto GenericProfileActionsJPanel::okNewProfileActionJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            
    std::string newActionName = this->newProfileActionJTextField->getText();;
    
this->getGenericProfileActions()->add(newActionName);
    
this->setModel();
    
this->genericProfileActionsJList->setSelectedValue(newActionName, true);
    
this->newProfileActionJDialog->setVisible(false);
    
this->updateProfileActionUI(newActionName);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "okNewProfileActionJButtonActionPerformed", &e);
    
}

}


    auto GenericProfileActionsJPanel::deleteActionJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            
    std::vector<Object*> anyType = this->genericProfileActionsJList->getSelectedValues();;
    




                        for (
    int32_t index = 0;index < anyType.size(); index++)
        {

    std::string nextSelectedValueString = JavaBoxes::unbox<std::string>(anyType[index]);;
    
this->getGenericProfileActions()->remove(nextSelectedValueString);
    
}

this->selectFirstElement();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "deleteActionJButtonActionPerformed", &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto GenericProfileActionsJPanel::selectFirstElement() -> void{
this->setModel();
    

                        if(this->genericProfileActionsJList->getModel()->getSize() > 0)
                        
                                    {
                                    this->genericProfileActionsJList->setSelectedValue(this->genericProfileActionsJList->getModel()->getElementAt(0), true);
    
this->updateProfileActionUI(JavaBoxes::unbox<std::string>(this->genericProfileActionsJList->getModel()->getElementAt(0)));
    

                                    }
                                
                        else {
                            this->blankGenericProfileActionJPanel->removeAll();
    
this->blankGenericProfileActionJPanel->repaint();
    

                        }
                            
}


    auto GenericProfileActionsJPanel::getGenericProfileActionJPanel() -> GenericProfileActionJPanel*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->genericProfileActionJPanel;
    
}


    auto GenericProfileActionsJPanel::setGenericProfileActionJPanel(GenericProfileActionJPanel* genericProfileActionJPanel) -> void{
this->genericProfileActionJPanel= genericProfileActionJPanel;
    
}


    auto GenericProfileActionsJPanel::getGenericProfileActions() -> GenericProfileActions*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->genericProfileActions;
    
}


    auto GenericProfileActionsJPanel::setGenericProfileActions(GenericProfileActions* genericProfileActions) -> void{
this->genericProfileActions= genericProfileActions;
    
}


    auto GenericProfileActionsJPanel::newActionJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->newProfileActionJDialog->setVisible(true);
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONSJPANEL_CPP
