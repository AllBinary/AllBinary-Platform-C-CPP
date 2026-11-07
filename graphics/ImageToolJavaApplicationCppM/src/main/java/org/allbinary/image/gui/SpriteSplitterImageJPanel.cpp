
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_SPRITESPLITTERIMAGEJPANEL_CPP
        #define ORG_ALLBINARY_IMAGE_GUI_SPRITESPLITTERIMAGEJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/gui/SpriteSplitterImageJPanel.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Thread.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <java/awt/image/RenderedImage.h>

      
#include <java/io/File.h>

      
#include <java/io/IOException.h>

      
#include <javax/imageio/ImageIO.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/image/ImageProcessedVisitor.h>

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageStrings.h>

      
#include <org/allbinary/media/image/SpriteSplitterUtil.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/media/image/SpriteSplitterUtil.h>

#include <org/allbinary/media/image/SpriteSplitterUtil.h>

#include <org/allbinary/media/image/SpriteSplitterUtil.h>

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

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

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

#include <javax/swing/LayoutStyle.h>

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

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/gui/JPanel.h"
#include "org/allbinary/image/gui/JCheckBox.h"
#include "org/allbinary/image/gui/JTextField.h"
#include "org/allbinary/image/gui/JLabel.h"
#include "org/allbinary/image/gui/Graphics.h"
#include "org/allbinary/image/gui/JButton.h"
#include "org/allbinary/image/gui/JComboBox.h"
#include "org/allbinary/image/gui/DefaultComboBoxModel.h"
#include "org/allbinary/image/gui/ActionListener.h"
#include "org/allbinary/image/gui/ActionEvent.h"
#include "org/allbinary/image/gui/GroupLayout.h"
#include "org/allbinary/image/gui/Short.h"


SpriteSplitterImageJPanel::SpriteSplitterImageJPanel(ImageProcessorInput* imageProcessorInput) : javax::swing::JPanel(), logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), commonSeps(CommonSeps::getInstance()), imageStrings(ImageStrings::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
initComponents();
    
this->imageProcessorInput= imageProcessorInput;
    
}


    auto SpriteSplitterImageJPanel::process() -> void{
([&]() {
    static thread_local SpriteSplitterImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public Thread {
    public:
    using Thread::Thread;
    SpriteSplitterImageJPanel* outer = anonymousOuter0;

    public: void run(){

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
    SpriteSplitterUtil* spriteSplitterUtil = SpriteSplitterUtil::getInstance();;
    

    std::string spriteType = JavaBoxes::unbox<std::string>(outer->spriteTypeJComboBox->getSelectedItem());;
    

    int32_t totalFrames = Integer.valueOf(JavaBoxes::unbox<std::string>(outer->totalFramesJComboBox->getSelectedItem()));;
    

    int32_t totalAnimations = Integer.valueOf(JavaBoxes::unbox<std::string>(outer->totalAnimationsJComboBox->getSelectedItem()));;
    

    int32_t widthReduction = Integer.valueOf(outer->widthReductionTextField->getText());;
    

    int32_t heightReduction = Integer.valueOf(outer->heightReductionTextField->getText());;
    

    int32_t increaseWidth = Integer.valueOf(outer->increaseWidthTextField->getText());;
    

    int32_t increaseHeight = Integer.valueOf(outer->increaseHeightTextField->getText());;
    
spriteSplitterUtil->process(outer->getImageProcessorInput(), totalFrames, totalAnimations, widthReduction, heightReduction, increaseWidth, increaseHeight, spriteType, outer);
    

                //: 
} catch(Exception& e) 
            {
logUtil->put(outer->commonStrings->EXCEPTION, this, outer->commonStrings->RUN, &e);
    
}

}

    };
    return new Anonymous0();
}())->start();
    
}


    auto SpriteSplitterImageJPanel::initComponents() -> void{
this->writeOverOriginalJCheckBox= new javax::swing::JCheckBox();
    
this->widthReductionTextField= new javax::swing::JTextField();
    
this->jLabel5= new javax::swing::JLabel();
    
this->jPanel1= [&]() {
    static thread_local SpriteSplitterImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public javax::swing::JPanel {
    public:
    using javax::swing::JPanel::JPanel;
    SpriteSplitterImageJPanel* outer = anonymousOuter0;

    public: void paint(Graphics* graphics){

                        if(outer->result != 
                                    nullptr
                                )
                        
                                    {
                                    graphics->drawImage(outer->result, 0, 0, outer->result->getWidth(
                            nullptr), outer->result->getHeight(
                            nullptr), 
                            nullptr);
    

                                    }
                                
}

    };
    return new Anonymous0();
}();
    
this->jLabel4= new javax::swing::JLabel();
    
this->jLabel6= new javax::swing::JLabel();
    
this->heightReductionTextField= new javax::swing::JTextField();
    
this->generateJButton= new javax::swing::JButton();
    
this->jPanel2= new javax::swing::JPanel();
    
this->jLabel1= new javax::swing::JLabel();
    
this->totalFramesJComboBox= new javax::swing::JComboBox();
    

    int32_t size = 70;;
    

    std::vector<std::string> animationStringArray2 = std::vector<std::string>(size -1);;
    




                        for (
    int32_t index = 1;index < size; index++)
        {
animationStringArray2[index -1]= std::to_string(index);
    
}

this->totalFramesJComboBox->setModel(new javax::swing::DefaultComboBoxModel(animationStringArray2));
    
this->jLabel2= new javax::swing::JLabel();
    
this->totalAnimationsJComboBox= new javax::swing::JComboBox();
    

    std::vector<std::string> animationStringArray = std::vector<std::string>(size -1);;
    




                        for (
    int32_t index = 1;index < size; index++)
        {
animationStringArray[index -1]= std::to_string(index);
    
}

this->totalAnimationsJComboBox->setModel(new javax::swing::DefaultComboBoxModel(animationStringArray));
    
this->jLabel3= new javax::swing::JLabel();
    
this->spriteTypeJComboBox= new javax::swing::JComboBox();
    
this->spriteTypeJComboBox->setModel(new javax::swing::DefaultComboBoxModel(std::vector<std::string>
                                                {
                                                    SpriteSplitterUtil::getInstance()->DIRECTIONAL_ANIMATIONS,SpriteSplitterUtil::getInstance()->HORIZONTAL_ANIMATIONS,SpriteSplitterUtil::getInstance()->HORIZONTAL_SPRITE
                                                }));
    
jLabel7= new javax::swing::JLabel();
    
this->increaseWidthTextField= new javax::swing::JTextField();
    
this->jLabel8= new javax::swing::JLabel();
    
this->increaseHeightTextField= new javax::swing::JTextField();
    
this->writeOverOriginalJCheckBox->setText("Write Over Original");
    
this->writeOverOriginalJCheckBox->addActionListener([&]() {
    static thread_local SpriteSplitterImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    SpriteSplitterImageJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->writeOverOriginalJCheckBoxActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->widthReductionTextField->setText(CommonPhoneStrings::getInstance()->ZERO);
    
this->widthReductionTextField->addActionListener([&]() {
    static thread_local SpriteSplitterImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    SpriteSplitterImageJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->widthReductionTextFieldActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel5->setText("Less Width:");
    
this->jLabel4->setText("Results:");
    

    javax::swing::GroupLayout* jPanel1Layout = new javax::swing::GroupLayout(this->jPanel1);;
    
this->jPanel1->setLayout(jPanel1Layout);
    
jPanel1Layout->setHorizontalGroup(jPanel1Layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(jPanel1Layout->createSequentialGroup()->addComponent(jLabel4)->addGap(0, 0, Short::MAX_VALUE)));
    
jPanel1Layout->setVerticalGroup(jPanel1Layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(jPanel1Layout->createSequentialGroup()->addComponent(jLabel4)->addGap(0, 184, Short::MAX_VALUE)));
    
this->jLabel6->setText("Less Height:");
    
this->heightReductionTextField->setText(CommonPhoneStrings::getInstance()->ZERO);
    
this->generateJButton->setText("Generate");
    
this->generateJButton->addActionListener([&]() {
    static thread_local SpriteSplitterImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    SpriteSplitterImageJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->generateJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel1->setText("Row Total:");
    
this->totalFramesJComboBox->setSelectedIndex(1);
    
this->totalFramesJComboBox->addActionListener([&]() {
    static thread_local SpriteSplitterImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    SpriteSplitterImageJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->totalFramesJComboBoxActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel2->setText("Column Total :");
    
this->totalAnimationsJComboBox->setSelectedIndex(3);
    
this->totalAnimationsJComboBox->addActionListener([&]() {
    static thread_local SpriteSplitterImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    SpriteSplitterImageJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->totalAnimationsJComboBoxActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel3->setText("Type:");
    
this->spriteTypeJComboBox->addActionListener([&]() {
    static thread_local SpriteSplitterImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    SpriteSplitterImageJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->spriteTypeJComboBoxActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    

    javax::swing::GroupLayout* jPanel2Layout = new javax::swing::GroupLayout(this->jPanel2);;
    
this->jPanel2->setLayout(jPanel2Layout);
    
jPanel2Layout->setHorizontalGroup(jPanel2Layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(GroupLayout::Alignment->TRAILING, jPanel2Layout->createSequentialGroup()->addContainerGap()->addComponent(jLabel1)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(totalFramesJComboBox, GroupLayout::PREFERRED_SIZE, 48, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(jLabel2)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(totalAnimationsJComboBox, GroupLayout::PREFERRED_SIZE, 39, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(jLabel3)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(spriteTypeJComboBox, GroupLayout::PREFERRED_SIZE, 172, GroupLayout::PREFERRED_SIZE)->addContainerGap(GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)));
    
jPanel2Layout->setVerticalGroup(jPanel2Layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(jPanel2Layout->createSequentialGroup()->addContainerGap(GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)->addGroup(jPanel2Layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(jLabel1)->addComponent(totalFramesJComboBox, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addComponent(jLabel2)->addComponent(totalAnimationsJComboBox, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addComponent(jLabel3)->addComponent(spriteTypeJComboBox, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))));
    
this->jLabel7->setText("More Width:");
    
this->increaseWidthTextField->setText(CommonPhoneStrings::getInstance()->ZERO);
    
this->increaseWidthTextField->addActionListener([&]() {
    static thread_local SpriteSplitterImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    SpriteSplitterImageJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->increaseWidthTextFieldActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel8->setText("More Height:");
    
this->increaseHeightTextField->setText(CommonPhoneStrings::getInstance()->ZERO);
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addComponent(jPanel2, GroupLayout::PREFERRED_SIZE, 415, Short::MAX_VALUE)->addGap(78, 78, 78))->addGroup(layout->createSequentialGroup()->addContainerGap()->addGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addComponent(jPanel1, GroupLayout::DEFAULT_SIZE, GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)->addGroup(layout->createSequentialGroup()->addGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addComponent(writeOverOriginalJCheckBox)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(generateJButton))->addGroup(layout->createSequentialGroup()->addComponent(jLabel5)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(widthReductionTextField, GroupLayout::PREFERRED_SIZE, 41, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(jLabel6)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(heightReductionTextField, GroupLayout::PREFERRED_SIZE, 46, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(jLabel7)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(increaseWidthTextField, GroupLayout::PREFERRED_SIZE, 41, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(jLabel8)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(increaseHeightTextField, GroupLayout::PREFERRED_SIZE, 46, GroupLayout::PREFERRED_SIZE)))->addGap(0, 0, Short::MAX_VALUE)))->addContainerGap()));
    
layout->setVerticalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addComponent(jPanel2, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(jLabel7)->addComponent(increaseWidthTextField, GroupLayout::PREFERRED_SIZE, 22, GroupLayout::PREFERRED_SIZE)->addComponent(jLabel8)->addComponent(increaseHeightTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))->addGroup(layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(jLabel5)->addComponent(widthReductionTextField, GroupLayout::PREFERRED_SIZE, 22, GroupLayout::PREFERRED_SIZE)->addComponent(jLabel6)->addComponent(heightReductionTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(writeOverOriginalJCheckBox)->addComponent(generateJButton))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(jPanel1, GroupLayout::DEFAULT_SIZE, GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)));
    
}


    auto SpriteSplitterImageJPanel::writeOverOriginalJCheckBoxActionPerformed(java::awt::event::ActionEvent* evt) -> void{
}


    auto SpriteSplitterImageJPanel::generateJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->process();
    
}


    auto SpriteSplitterImageJPanel::spriteTypeJComboBoxActionPerformed(java::awt::event::ActionEvent* evt) -> void{

    SpriteSplitterUtil* spriteSplitterUtil = SpriteSplitterUtil::getInstance();;
    
this->jLabel1->setText(spriteSplitterUtil->ANIMATIONS_LABELS[this->spriteTypeJComboBox->getSelectedIndex()]);
    
this->jLabel2->setText(spriteSplitterUtil->ANIMATIONS_LABELS[this->spriteTypeJComboBox->getSelectedIndex() +1]);
    
}


    auto SpriteSplitterImageJPanel::totalAnimationsJComboBoxActionPerformed(java::awt::event::ActionEvent* evt) -> void{
}


    auto SpriteSplitterImageJPanel::totalFramesJComboBoxActionPerformed(java::awt::event::ActionEvent* evt) -> void{
}


    auto SpriteSplitterImageJPanel::widthReductionTextFieldActionPerformed(java::awt::event::ActionEvent* evt) -> void{
}


    auto SpriteSplitterImageJPanel::increaseWidthTextFieldActionPerformed(java::awt::event::ActionEvent* evt) -> void{
}


    auto SpriteSplitterImageJPanel::getImageProcessorInput() -> ImageProcessorInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->imageProcessorInput;
    
}


    auto SpriteSplitterImageJPanel::setImageProcessorInput(ImageProcessorInput* imageProcessorInput) -> void{
this->imageProcessorInput= imageProcessorInput;
    
}


                //@Throws(IOException.constructor)
            
    auto SpriteSplitterImageJPanel::visit(BufferedImage* generatedBufferedImage, std::string name, int32_t index) -> void{
this->logUtil->putF(this->commonStrings->VISIT, this, this->commonStrings->VISIT);
    
this->result= generatedBufferedImage;
    
this->getParent().repaint();
    

    File* file = this->imageProcessorInput->getFiles()[index];;
    

                        if(!this->writeOverOriginalJCheckBox->isSelected())
                        
                                    {
                                    
    std::string filePath = file->getAbsolutePath();;
    

    int32_t extensionIndex = JavaString::indexOf(filePath, this->imageStrings->PNG_EXTENSION);;
    
filePath= JavaString::valueOf((new StringMaker())->append(JavaString::substring(filePath, 0, extensionIndex))->append(this->commonSeps->UNDERSCORE)->append(name)->append(this->imageStrings->PNG_EXTENSION));
    
file= new File(filePath);
    

                                    }
                                

    bool isWritten = ImageIO::write(dynamic_cast<RenderedImage*>(this->result), imageStrings->PNG, file);;
    
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append("File: ")->append(StringUtil::getInstance()->toString(file))->append(" Wrote: ")->appendboolean(isWritten)), this, this->commonStrings->RUN);
    
}




        #endif //ORG_ALLBINARY_IMAGE_GUI_SPRITESPLITTERIMAGEJPANEL_CPP
