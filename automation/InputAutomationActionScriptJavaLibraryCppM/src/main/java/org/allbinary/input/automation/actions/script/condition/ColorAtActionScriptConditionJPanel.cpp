
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_COLORATACTIONSCRIPTCONDITIONJPANEL_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_COLORATACTIONSCRIPTCONDITIONJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptConditionJPanel.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/media/image/analysis/ColorRangeInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

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

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/LayoutStyle.h>

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

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/JPanel.h"
#include "org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptConditionInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/JTextField.h"
#include "org/allbinary/input/automation/actions/script/condition/JLabel.h"
#include "org/allbinary/input/automation/actions/script/condition/JDialog.h"
#include "org/allbinary/input/automation/actions/script/condition/JButton.h"
#include "org/allbinary/input/automation/actions/script/condition/Dimension.h"
#include "org/allbinary/input/automation/actions/script/condition/ActionListener.h"
#include "org/allbinary/input/automation/actions/script/condition/ActionEvent.h"
#include "org/allbinary/input/automation/actions/script/condition/GroupLayout.h"
#include "org/allbinary/input/automation/actions/script/condition/Short.h"


ColorAtActionScriptConditionJPanel::ColorAtActionScriptConditionJPanel(ColorAtActionScriptConditionInterface* colorAtActionScriptConditionInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->initComponents();
    
this->colorAtActionScriptConditionInterface= colorAtActionScriptConditionInterface;
    
this->set();
    
}


    auto ColorAtActionScriptConditionJPanel::set() -> void{

    ColorRangeInterface* colorRangeInterface = this->colorAtActionScriptConditionInterface->getColorRangeInterface();;
    
this->getMinRedJTextField()->setText(std::to_string(getMinRed));
    
this->getMaxRedJTextField()->setText(std::to_string(getMaxRed));
    
this->getMinGreenJTextField()->setText(std::to_string(getMinGreen));
    
this->getMaxGreenJTextField()->setText(std::to_string(getMaxGreen));
    
this->getMinBlueJTextField()->setText(std::to_string(getMinBlue));
    
this->getMaxBlueJTextField()->setText(std::to_string(getMaxBlue));
    
this->getColorAtXJTextField()->setText(std::to_string(x));
    
this->getColorAtYJTextField()->setText(std::to_string(y));
    
this->colorAtActionScriptConditionInterface->log();
    
}


    auto ColorAtActionScriptConditionJPanel::update() -> void{

    ColorRangeInterface* colorRangeInterface = this->colorAtActionScriptConditionInterface->getColorRangeInterface();;
    
colorRangeInterface->setMinRed(JavaBoxes::value<int32_t>(Integer.valueOf(this->getMinRedJTextField()->getText())));
    
colorRangeInterface->setMaxRed(JavaBoxes::value<int32_t>(Integer.valueOf(this->getMaxRedJTextField()->getText())));
    
colorRangeInterface->setMinGreen(JavaBoxes::value<int32_t>(Integer.valueOf(this->getMinGreenJTextField()->getText())));
    
colorRangeInterface->setMaxGreen(JavaBoxes::value<int32_t>(Integer.valueOf(this->getMaxGreenJTextField()->getText())));
    
colorRangeInterface->setMinBlue(JavaBoxes::value<int32_t>(Integer.valueOf(this->getMinBlueJTextField()->getText())));
    
colorRangeInterface->setMaxBlue(JavaBoxes::value<int32_t>(Integer.valueOf(this->getMaxBlueJTextField()->getText())));
    

    std::string xString = this->getColorAtXJTextField()->getText();;
    

                        if(!StringValidationUtil::getInstance()->isEmpty(xString) && StringValidationUtil::getInstance()->isNumber(xString))
                        
                                    {
                                    this->colorAtActionScriptConditionInterface->getPoint()->x= Integer.parseInt(xString);
    

                                    }
                                

    std::string yString = this->getColorAtYJTextField()->getText();;
    

                        if(!StringValidationUtil::getInstance()->isEmpty(yString) && StringValidationUtil::getInstance()->isNumber(yString))
                        
                                    {
                                    this->colorAtActionScriptConditionInterface->getPoint()->y= Integer.parseInt(xString);
    

                                    }
                                
this->colorAtActionScriptConditionInterface->log();
    
}


    auto ColorAtActionScriptConditionJPanel::getColorAtXJTextField() -> javax::swing::JTextField*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->colorAtXJTextField;
    
}


    auto ColorAtActionScriptConditionJPanel::setColorAtXJTextField(javax::swing::JTextField* colorAtXJTextField) -> void{
this->colorAtXJTextField= colorAtXJTextField;
    
}


    auto ColorAtActionScriptConditionJPanel::getColorAtYJTextField() -> javax::swing::JTextField*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->colorAtYJTextField;
    
}


    auto ColorAtActionScriptConditionJPanel::setColorAtYJTextField(javax::swing::JTextField* colorAtYJTextField) -> void{
this->colorAtYJTextField= colorAtYJTextField;
    
}


    auto ColorAtActionScriptConditionJPanel::getMaxBlueJTextField() -> javax::swing::JTextField*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->maxBlueJTextField;
    
}


    auto ColorAtActionScriptConditionJPanel::setMaxBlueJTextField(javax::swing::JTextField* maxBlueJTextField) -> void{
this->maxBlueJTextField= maxBlueJTextField;
    
}


    auto ColorAtActionScriptConditionJPanel::getMaxGreenJTextField() -> javax::swing::JTextField*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->maxGreenJTextField;
    
}


    auto ColorAtActionScriptConditionJPanel::setMaxGreenJTextField(javax::swing::JTextField* maxGreenJTextField) -> void{
this->maxGreenJTextField= maxGreenJTextField;
    
}


    auto ColorAtActionScriptConditionJPanel::getMaxRedJTextField() -> javax::swing::JTextField*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->maxRedJTextField;
    
}


    auto ColorAtActionScriptConditionJPanel::setMaxRedJTextField(javax::swing::JTextField* maxRedJTextField) -> void{
this->maxRedJTextField= maxRedJTextField;
    
}


    auto ColorAtActionScriptConditionJPanel::getMinBlueJTextField() -> javax::swing::JTextField*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->minBlueJTextField;
    
}


    auto ColorAtActionScriptConditionJPanel::setMinBlueJTextField(javax::swing::JTextField* minBlueJTextField) -> void{
this->minBlueJTextField= minBlueJTextField;
    
}


    auto ColorAtActionScriptConditionJPanel::getMinGreenJTextField() -> javax::swing::JTextField*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->minGreenJTextField;
    
}


    auto ColorAtActionScriptConditionJPanel::setMinGreenJTextField(javax::swing::JTextField* minGreenJTextField) -> void{
this->minGreenJTextField= minGreenJTextField;
    
}


    auto ColorAtActionScriptConditionJPanel::getMinRedJTextField() -> javax::swing::JTextField*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->minRedJTextField;
    
}


    auto ColorAtActionScriptConditionJPanel::setMinRedJTextField(javax::swing::JTextField* minRedJTextField) -> void{
this->minRedJTextField= minRedJTextField;
    
}


    auto ColorAtActionScriptConditionJPanel::getYJLabel() -> javax::swing::JLabel*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->yJLabel;
    
}


    auto ColorAtActionScriptConditionJPanel::setYJLabel(javax::swing::JLabel* yJLabel) -> void{
this->yJLabel= yJLabel;
    
}


    auto ColorAtActionScriptConditionJPanel::getColorAtActionJDialog() -> javax::swing::JDialog*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->colorAtActionJDialog;
    
}


    auto ColorAtActionScriptConditionJPanel::setColorAtActionJDialog(javax::swing::JDialog* colorAtActionJDialog) -> void{
this->colorAtActionJDialog= colorAtActionJDialog;
    
}


    auto ColorAtActionScriptConditionJPanel::initComponents() -> void{
this->colorAtActionJDialog= new javax::swing::JDialog();
    
this->titleJLabel= new javax::swing::JLabel();
    
this->locationJLabel= new javax::swing::JLabel();
    
this->colorAtXJTextField= new javax::swing::JTextField();
    
this->xJLabel= new javax::swing::JLabel();
    
this->yJLabel= new javax::swing::JLabel();
    
this->colorAtYJTextField= new javax::swing::JTextField();
    
this->colorRangeJLabel= new javax::swing::JLabel();
    
this->redJLabel= new javax::swing::JLabel();
    
this->minJLabel= new javax::swing::JLabel();
    
this->maxJLabel= new javax::swing::JLabel();
    
this->greenJLabel= new javax::swing::JLabel();
    
this->blueJLabel= new javax::swing::JLabel();
    
this->minRedJTextField= new javax::swing::JTextField();
    
this->maxRedJTextField= new javax::swing::JTextField();
    
this->maxGreenJTextField= new javax::swing::JTextField();
    
this->minBlueJTextField= new javax::swing::JTextField();
    
this->maxBlueJTextField= new javax::swing::JTextField();
    
this->okJButton= new javax::swing::JButton();
    
this->minGreenJTextField= new javax::swing::JTextField();
    
this->colorAtActionJButton= new javax::swing::JButton();
    
this->jLabel1= new javax::swing::JLabel();
    
this->colorAtActionJDialog->setMinimumSize(new java::awt::Dimension(350, 250));
    
this->titleJLabel->setText("              Color At Action Options            ");
    
this->locationJLabel->setText("Location:");
    
this->xJLabel->setText("X:");
    
this->yJLabel->setText("Y:");
    
this->colorRangeJLabel->setText("Color Range");
    
this->redJLabel->setText("Red:");
    
this->minJLabel->setText("Minimum");
    
this->maxJLabel->setText("Maximum");
    
this->greenJLabel->setText("Green:");
    
this->blueJLabel->setText("Blue:");
    
this->okJButton->setText("OK");
    
this->okJButton->addActionListener([&]() {
    static thread_local ColorAtActionScriptConditionJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ColorAtActionScriptConditionJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->okJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    

    javax::swing::GroupLayout* colorAtActionJDialogLayout = new javax::swing::GroupLayout(this->colorAtActionJDialog->getContentPane());;
    
this->colorAtActionJDialog->getContentPane()->setLayout(colorAtActionJDialogLayout);
    
colorAtActionJDialogLayout->setHorizontalGroup(colorAtActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(colorAtActionJDialogLayout->createSequentialGroup()->addContainerGap()->addGroup(colorAtActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(colorAtActionJDialogLayout->createSequentialGroup()->addGroup(colorAtActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->TRAILING)->addComponent(okJButton)->addGroup(colorAtActionJDialogLayout->createSequentialGroup()->addGroup(colorAtActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING, false)->addGroup(colorAtActionJDialogLayout->createSequentialGroup()->addGroup(colorAtActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addComponent(blueJLabel)->addComponent(greenJLabel)->addComponent(redJLabel)->addComponent(colorRangeJLabel))->addGap(29, 29, 29))->addGroup(GroupLayout::Alignment->TRAILING, colorAtActionJDialogLayout->createSequentialGroup()->addComponent(locationJLabel)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED, GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)->addComponent(xJLabel)->addGap(18, 18, 18)))->addGroup(colorAtActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addComponent(minBlueJTextField, GroupLayout::DEFAULT_SIZE, 40, Short::MAX_VALUE)->addComponent(minGreenJTextField, GroupLayout::DEFAULT_SIZE, 40, Short::MAX_VALUE)->addComponent(minJLabel, GroupLayout::Alignment->TRAILING, GroupLayout::DEFAULT_SIZE, GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)->addComponent(minRedJTextField, GroupLayout::DEFAULT_SIZE, 40, Short::MAX_VALUE)->addComponent(colorAtXJTextField, GroupLayout::DEFAULT_SIZE, 40, Short::MAX_VALUE))->addGap(16, 16, 16)))->addGap(6, 6, 6)->addComponent(yJLabel)->addGap(24, 24, 24)->addGroup(colorAtActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->TRAILING)->addComponent(maxJLabel, GroupLayout::Alignment->LEADING, GroupLayout::DEFAULT_SIZE, GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)->addGroup(GroupLayout::Alignment->LEADING, colorAtActionJDialogLayout->createSequentialGroup()->addGap(1, 1, 1)->addGroup(colorAtActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING, false)->addComponent(maxBlueJTextField, GroupLayout::Alignment->TRAILING)->addComponent(maxRedJTextField, GroupLayout::Alignment->TRAILING, GroupLayout::DEFAULT_SIZE, 43, Short::MAX_VALUE)->addComponent(maxGreenJTextField, GroupLayout::Alignment->TRAILING, GroupLayout::PREFERRED_SIZE, 43, GroupLayout::PREFERRED_SIZE)))->addComponent(colorAtYJTextField, GroupLayout::Alignment->LEADING, GroupLayout::DEFAULT_SIZE, 44, Short::MAX_VALUE))->addGap(22, 22, 22))->addGroup(GroupLayout::Alignment->TRAILING, colorAtActionJDialogLayout->createSequentialGroup()->addComponent(titleJLabel)->addGap(33, 33, 33)))));
    
colorAtActionJDialogLayout->setVerticalGroup(colorAtActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(colorAtActionJDialogLayout->createSequentialGroup()->addContainerGap()->addComponent(titleJLabel)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(colorAtActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(colorAtActionJDialogLayout->createSequentialGroup()->addGap(15, 15, 15)->addGroup(colorAtActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(xJLabel)->addComponent(locationJLabel)->addComponent(colorAtXJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addComponent(yJLabel))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(colorAtActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(minJLabel)->addComponent(colorRangeJLabel))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(colorAtActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(minRedJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addComponent(redJLabel))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(colorAtActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(greenJLabel)->addComponent(minGreenJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(colorAtActionJDialogLayout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(blueJLabel)->addComponent(minBlueJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED, 17, Short::MAX_VALUE)->addComponent(okJButton))->addGroup(colorAtActionJDialogLayout->createSequentialGroup()->addGap(14, 14, 14)->addComponent(colorAtYJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(maxJLabel)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(maxRedJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(maxGreenJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(maxBlueJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)))->addContainerGap()));
    
setPreferredSize(new java::awt::Dimension(100, 0));
    
this->colorAtActionJButton->setText("Edit");
    
this->colorAtActionJButton->addActionListener([&]() {
    static thread_local ColorAtActionScriptConditionJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ColorAtActionScriptConditionJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->colorAtActionJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel1->setText("Color At:");
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addComponent(jLabel1)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED, 15, Short::MAX_VALUE)->addComponent(colorAtActionJButton)));
    
layout->setVerticalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(jLabel1)->addComponent(colorAtActionJButton)));
    
}


    auto ColorAtActionScriptConditionJPanel::okJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->update();
    
this->getColorAtActionJDialog()->setVisible(false);
    
}


    auto ColorAtActionScriptConditionJPanel::colorAtActionJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->getColorAtActionJDialog()->setVisible(true);
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_COLORATACTIONSCRIPTCONDITIONJPANEL_CPP
