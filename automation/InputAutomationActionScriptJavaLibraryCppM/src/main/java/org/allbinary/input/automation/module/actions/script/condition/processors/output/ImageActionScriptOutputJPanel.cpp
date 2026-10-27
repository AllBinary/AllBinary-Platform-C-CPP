
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUTJPANEL_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUTJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputJPanel.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/input/media/image/InputImageType.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JPanel.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputInterface.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageTypes.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/DefaultListModel.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JDialog.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JLabel.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JButton.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JCheckBox.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JScrollPane.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JList.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/Dimension.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ActionListener.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ActionEvent.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/Insets.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/AbstractListModel.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/GroupLayout.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/Short.h"


ImageActionScriptOutputJPanel::ImageActionScriptOutputJPanel(ImageActionScriptOutputInterface* capturedImageActionScriptOutputInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->initComponents();
    
this->capturedImageActionScriptOutputInterface= capturedImageActionScriptOutputInterface;
    
this->set();
    
}


    auto ImageActionScriptOutputJPanel::set() -> void{
this->setImageTypeJlistModel();
    

    ImageTypes* imageTypes = this->capturedImageActionScriptOutputInterface->getImageTypes();;
    

    BasicArrayList* vector = imageTypes->getVector();;
    

    std::vector<int32_t> selectedArray = std::vector<int32_t>(vector->size());;
    

    int32_t size = vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    InputImageType* imageType = dynamic_cast<InputImageType*>(vector->get(index));;
    
selectedArray[index++]= imageType->getIndex();
    
}

this->itemTypesJList->setSelectedIndices(selectedArray);
    

                        if(this->capturedImageActionScriptOutputInterface->isSaved())
                        
                                    {
                                    this->saveJCheckBox->setSelected(true);
    

                                    }
                                

                        if(this->capturedImageActionScriptOutputInterface->isSaved())
                        
                                    {
                                    this->displayJCheckBox->setSelected(true);
    

                                    }
                                
this->capturedImageActionScriptOutputInterface->log();
    
}


    auto ImageActionScriptOutputJPanel::update() -> void{

    std::vector<Object*> anyType = this->itemTypesJList->getSelectedValues();;
    

    ImageTypes* imageTypes = anyType.slice(, ).join('');;
    
this->capturedImageActionScriptOutputInterface->setImageTypes(imageTypes);
    

                        if(this->saveJCheckBox->isSelected())
                        
                                    {
                                    this->capturedImageActionScriptOutputInterface->setSaved(true);
    

                                    }
                                
                        else {
                            this->capturedImageActionScriptOutputInterface->setSaved(false);
    

                        }
                            

                        if(this->displayJCheckBox->isSelected())
                        
                                    {
                                    this->capturedImageActionScriptOutputInterface->setDisplay(true);
    

                                    }
                                
                        else {
                            this->capturedImageActionScriptOutputInterface->setDisplay(false);
    

                        }
                            
this->capturedImageActionScriptOutputInterface->log();
    
}


    auto ImageActionScriptOutputJPanel::setImageTypeJlistModel() -> void{

    DefaultListModel* defaultListModel = new DefaultListModel();;
    

    BasicArrayList* vector = InputImageType::getAllAsVector();;
    

    int32_t size = vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    InputImageType* imageType = dynamic_cast<InputImageType*>(vector->get(index));;
    
defaultListModel->addElement(imageType->getName());
    
}

this->itemTypesJList->setModel(defaultListModel);
    
}


    auto ImageActionScriptOutputJPanel::getCapturedImageActionJDialog() -> javax::swing::JDialog*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->capturedImageActionJDialog;
    
}


    auto ImageActionScriptOutputJPanel::setCapturedImageActionJDialog(javax::swing::JDialog* capturedImageActionJDialog) -> void{
this->capturedImageActionJDialog= capturedImageActionJDialog;
    
}


    auto ImageActionScriptOutputJPanel::initComponents() -> void{
this->capturedImageActionJDialog= new javax::swing::JDialog();
    
this->titleJLabel= new javax::swing::JLabel();
    
this->okJButton= new javax::swing::JButton();
    
this->saveJCheckBox= new javax::swing::JCheckBox();
    
this->displayJCheckBox= new javax::swing::JCheckBox();
    
this->jScrollPane1= new javax::swing::JScrollPane();
    
this->itemTypesJList= new javax::swing::JList();
    
this->capturedImageActionJButton= new javax::swing::JButton();
    
this->jLabel1= new javax::swing::JLabel();
    
this->capturedImageActionJDialog->setMinimumSize(new java::awt::Dimension(250, 250));
    
this->titleJLabel->setText("Image Output Options");
    
this->okJButton->setText("OK");
    
this->okJButton->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
okJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->saveJCheckBox->setText("Save To File");
    
this->saveJCheckBox->setBorder(javax.swing->BorderFactory->createEmptyBorder(0, 0, 0, 0));
    
this->saveJCheckBox->setMargin(new java::awt::Insets(0, 0, 0, 0));
    
this->displayJCheckBox->setText("Display");
    
this->displayJCheckBox->setBorder(javax.swing->BorderFactory->createEmptyBorder(0, 0, 0, 0));
    
this->displayJCheckBox->setMargin(new java::awt::Insets(0, 0, 0, 0));
    
this->displayJCheckBox->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
displayJCheckBoxActionPerformed(evt);
    
}

                                }
                            );
    
this->itemTypesJList->setModel(class extends javax::swing::AbstractListModel
                                {
                                
    std::vector<std::string> strings = 
                                                        {
                                                            "Item 1","Item 2","Item 3","Item 4","Item 5"
                                                        };
    public: int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return strings.size();
    
}

    public: Object* getElementAt(int32_t i){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return strings[i];
    
}

                                }
                            );
    
this->jScrollPane1->setViewportView(this->itemTypesJList);
    

    javax::swing::GroupLayout* capturedImageActionJDialogLayout = new javax::swing::GroupLayout(this->capturedImageActionJDialog->getContentPane());;
    
this->capturedImageActionJDialog->getContentPane()->setLayout(capturedImageActionJDialogLayout);
    
capturedImageActionJDialogLayout->setHorizontalGroup(capturedImageActionJDialogLayout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(capturedImageActionJDialogLayout->createSequentialGroup()->addGroup(capturedImageActionJDialogLayout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(capturedImageActionJDialogLayout->createSequentialGroup()->addGap(61, 61, 61)->addComponent(titleJLabel))->addGroup(capturedImageActionJDialogLayout->createSequentialGroup()->addContainerGap()->addGroup(capturedImageActionJDialogLayout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(capturedImageActionJDialogLayout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addComponent(displayJCheckBox)->addComponent(saveJCheckBox, javax.swing->GroupLayout->Alignment->TRAILING))->addGroup(capturedImageActionJDialogLayout->createSequentialGroup()->addGap(84, 84, 84)->addComponent(okJButton))))->addGroup(capturedImageActionJDialogLayout->createSequentialGroup()->addContainerGap()->addComponent(jScrollPane1, javax.swing->GroupLayout->DEFAULT_SIZE, 216, Short::MAX_VALUE)))->addContainerGap()));
    
capturedImageActionJDialogLayout->setVerticalGroup(capturedImageActionJDialogLayout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(capturedImageActionJDialogLayout->createSequentialGroup()->addComponent(titleJLabel)->addGap(5, 5, 5)->addComponent(jScrollPane1, javax.swing->GroupLayout->DEFAULT_SIZE, 105, Short::MAX_VALUE)->addPreferredGap(javax.swing->LayoutStyle->ComponentPlacement->RELATED)->addComponent(saveJCheckBox)->addPreferredGap(javax.swing->LayoutStyle->ComponentPlacement->RELATED)->addComponent(displayJCheckBox)->addGap(9, 9, 9)->addComponent(okJButton)->addContainerGap()));
    
setMinimumSize(new java::awt::Dimension(100, 0));
    
this->capturedImageActionJButton->setText("Edit");
    
this->capturedImageActionJButton->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
capturedImageActionJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel1->setText("Capture Image:");
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addComponent(jLabel1)->addPreferredGap(javax.swing->LayoutStyle->ComponentPlacement->RELATED, javax.swing->GroupLayout->DEFAULT_SIZE, Short::MAX_VALUE)->addComponent(capturedImageActionJButton)));
    
layout->setVerticalGroup(layout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(layout->createParallelGroup(javax.swing->GroupLayout->Alignment->BASELINE)->addComponent(jLabel1)->addComponent(capturedImageActionJButton)));
    
}


    auto ImageActionScriptOutputJPanel::displayJCheckBoxActionPerformed(java::awt::event::ActionEvent* evt) -> void{
}


    auto ImageActionScriptOutputJPanel::okJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->update();
    
this->getCapturedImageActionJDialog()->setVisible(false);
    
}


    auto ImageActionScriptOutputJPanel::capturedImageActionJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->getCapturedImageActionJDialog()->setVisible(true);
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUTJPANEL_CPP
