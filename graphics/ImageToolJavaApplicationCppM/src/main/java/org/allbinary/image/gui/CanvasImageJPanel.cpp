
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_CANVASIMAGEJPANEL_CPP
        #define ORG_ALLBINARY_IMAGE_GUI_CANVASIMAGEJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/gui/CanvasImageJPanel.h"
        

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

      
#include <org/allbinary/media/image/CanvasExpandUtil.h>

      
#include <org/allbinary/media/image/CanvasTrimUtil.h>

      
#include <org/allbinary/media/image/ImageProcessedVisitor.h>

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageStrings.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

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

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/gui/JPanel.h"
#include "org/allbinary/image/gui/JCheckBox.h"
#include "org/allbinary/image/gui/Graphics.h"
#include "org/allbinary/image/gui/JButton.h"
#include "org/allbinary/image/gui/JLabel.h"
#include "org/allbinary/image/gui/JTextField.h"
#include "org/allbinary/image/gui/ActionListener.h"
#include "org/allbinary/image/gui/ActionEvent.h"
#include "org/allbinary/image/gui/GroupLayout.h"
#include "org/allbinary/image/gui/Short.h"


CanvasImageJPanel::CanvasImageJPanel(ImageProcessorInput* imageProcessorInput) : javax::swing::JPanel(), logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), commonSeps(CommonSeps::getInstance()), imageStrings(ImageStrings::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
initComponents();
    
this->imageProcessorInput= imageProcessorInput;
    
}


    auto CanvasImageJPanel::process() -> void{
([&]() {
    static thread_local CanvasImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public Thread {
    public:
    using Thread::Thread;
    CanvasImageJPanel* outer = anonymousOuter0;

    public: void run(){

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
    CanvasTrimUtil* canvasTrimUtil = CanvasTrimUtil::getInstance();;
    

    CanvasExpandUtil* canvasExpandUtil = CanvasExpandUtil::getInstance();;
    

    int32_t leftReduction = Integer.valueOf(outer->widthReductionTextField1->getText());;
    

    int32_t topReduction = Integer.valueOf(outer->heightReductionTextField1->getText());;
    

    int32_t widthReduction = Integer.valueOf(outer->widthReductionTextField->getText());;
    

    int32_t heightReduction = Integer.valueOf(outer->heightReductionTextField->getText());;
    

                        if(leftReduction <= 0 || topReduction <= 0 || widthReduction <= 0 || heightReduction <= 0)
                        
                                    {
                                    canvasTrimUtil->process(outer->getImageProcessorInput(),  -leftReduction,  -topReduction,  -widthReduction,  -heightReduction, outer);
    

                                    }
                                
                        else {
                            canvasExpandUtil->process(outer->getImageProcessorInput(), leftReduction, topReduction, outer);
    

                        }
                            

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


    auto CanvasImageJPanel::initComponents() -> void{
this->writeOverOriginalJCheckBox= new javax::swing::JCheckBox();
    
this->jPanel1= [&]() {
    static thread_local CanvasImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public javax::swing::JPanel {
    public:
    using javax::swing::JPanel::JPanel;
    CanvasImageJPanel* outer = anonymousOuter0;

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
    
this->generateJButton= new javax::swing::JButton();
    
this->jLabel4= new javax::swing::JLabel();
    
this->jPanel2= new javax::swing::JPanel();
    
this->jLabel5= new javax::swing::JLabel();
    
this->widthReductionTextField= new javax::swing::JTextField();
    
this->jLabel6= new javax::swing::JLabel();
    
this->heightReductionTextField= new javax::swing::JTextField();
    
this->widthReductionTextField1= new javax::swing::JTextField();
    
this->jLabel7= new javax::swing::JLabel();
    
this->jLabel8= new javax::swing::JLabel();
    
this->heightReductionTextField1= new javax::swing::JTextField();
    
this->writeOverOriginalJCheckBox->setSelected(true);
    
this->writeOverOriginalJCheckBox->setText("Write Over Original");
    
this->writeOverOriginalJCheckBox->addActionListener([&]() {
    static thread_local CanvasImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    CanvasImageJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->writeOverOriginalJCheckBoxActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    

    javax::swing::GroupLayout* jPanel1Layout = new javax::swing::GroupLayout(this->jPanel1);;
    
this->jPanel1->setLayout(jPanel1Layout);
    
jPanel1Layout->setHorizontalGroup(jPanel1Layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGap(0, 0, Short::MAX_VALUE));
    
jPanel1Layout->setVerticalGroup(jPanel1Layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGap(0, 196, Short::MAX_VALUE));
    
this->generateJButton->setText("Generate");
    
this->generateJButton->addActionListener([&]() {
    static thread_local CanvasImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    CanvasImageJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->generateJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel4->setText("Results:");
    
this->jLabel5->setText("Right:");
    
this->widthReductionTextField->setText(CommonPhoneStrings::getInstance()->ZERO);
    
this->widthReductionTextField->addActionListener([&]() {
    static thread_local CanvasImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    CanvasImageJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->widthReductionTextFieldActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel6->setText("Bottom");
    
this->heightReductionTextField->setText(CommonPhoneStrings::getInstance()->ZERO);
    
this->widthReductionTextField1->setText(CommonPhoneStrings::getInstance()->ZERO);
    
this->widthReductionTextField1->addActionListener([&]() {
    static thread_local CanvasImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    CanvasImageJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->widthReductionTextField1ActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel7->setText("Top");
    
this->jLabel8->setText("Left:");
    
this->heightReductionTextField1->setText(CommonPhoneStrings::getInstance()->ZERO);
    

    javax::swing::GroupLayout* jPanel2Layout = new javax::swing::GroupLayout(this->jPanel2);;
    
this->jPanel2->setLayout(jPanel2Layout);
    
jPanel2Layout->setHorizontalGroup(jPanel2Layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(jPanel2Layout->createSequentialGroup()->addContainerGap()->addComponent(jLabel8)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(widthReductionTextField1, GroupLayout::PREFERRED_SIZE, 41, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(jLabel5)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(widthReductionTextField, GroupLayout::PREFERRED_SIZE, 41, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(jLabel7)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(heightReductionTextField1, GroupLayout::PREFERRED_SIZE, 46, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(jLabel6)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(heightReductionTextField, GroupLayout::PREFERRED_SIZE, 46, GroupLayout::PREFERRED_SIZE)->addContainerGap(140, Short::MAX_VALUE)));
    
jPanel2Layout->setVerticalGroup(jPanel2Layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(GroupLayout::Alignment->TRAILING, jPanel2Layout->createSequentialGroup()->addGap(0, 16, Short::MAX_VALUE)->addGroup(jPanel2Layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(jPanel2Layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(jLabel6)->addComponent(heightReductionTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))->addGroup(jPanel2Layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(jLabel8)->addComponent(widthReductionTextField1, GroupLayout::PREFERRED_SIZE, 22, GroupLayout::PREFERRED_SIZE)->addComponent(jLabel7)->addComponent(heightReductionTextField1, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))->addGroup(jPanel2Layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(jLabel5)->addComponent(widthReductionTextField, GroupLayout::PREFERRED_SIZE, 22, GroupLayout::PREFERRED_SIZE)))));
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addComponent(jPanel2, GroupLayout::DEFAULT_SIZE, GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)->addGap(78, 78, 78))->addGroup(layout->createSequentialGroup()->addGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addContainerGap()->addComponent(jPanel1, GroupLayout::DEFAULT_SIZE, GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE))->addGroup(layout->createSequentialGroup()->addGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addComponent(jLabel4)->addGroup(layout->createSequentialGroup()->addComponent(writeOverOriginalJCheckBox)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(generateJButton)))->addGap(0, 0, Short::MAX_VALUE)))->addContainerGap()));
    
layout->setVerticalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addComponent(jPanel2, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addComponent(generateJButton)->addComponent(writeOverOriginalJCheckBox))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(jLabel4)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(jPanel1, GroupLayout::DEFAULT_SIZE, GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)));
    
}


    auto CanvasImageJPanel::writeOverOriginalJCheckBoxActionPerformed(java::awt::event::ActionEvent* evt) -> void{
}


    auto CanvasImageJPanel::generateJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->process();
    
}


    auto CanvasImageJPanel::widthReductionTextFieldActionPerformed(java::awt::event::ActionEvent* evt) -> void{
}


    auto CanvasImageJPanel::widthReductionTextField1ActionPerformed(java::awt::event::ActionEvent* evt) -> void{
}


    auto CanvasImageJPanel::getImageProcessorInput() -> ImageProcessorInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->imageProcessorInput;
    
}


    auto CanvasImageJPanel::setImageProcessorInput(ImageProcessorInput* imageProcessorInput) -> void{
this->imageProcessorInput= imageProcessorInput;
    
}


                //@Throws(IOException.constructor)
            
    auto CanvasImageJPanel::visit(BufferedImage* generatedBufferedImage, std::string name, int32_t index) -> void{
this->logUtil->putF(this->commonStrings->VISIT, this, this->commonStrings->VISIT);
    
this->result= generatedBufferedImage;
    
this->getParent().repaint();
    

    File* file = this->imageProcessorInput->getFiles()[index];;
    

                        if(!this->writeOverOriginalJCheckBox->isSelected())
                        
                                    {
                                    
    std::string filePath = file->getAbsolutePath();;
    

    int32_t extensionIndex = JavaString::indexOf(filePath, this->imageStrings->PNG_EXTENSION);;
    
filePath= (new StringMaker())->append(JavaString::substring(filePath, 0, extensionIndex))->append(this->commonSeps->UNDERSCORE)->append(name)->append(this->imageStrings->PNG_EXTENSION)->toString();
    
file= new File(filePath);
    

                                    }
                                

    bool isWritten = ImageIO::write(dynamic_cast<RenderedImage*>(this->result), imageStrings->PNG, file);;
    
this->logUtil->putF((new StringMaker())->append("File: ")->append(StringUtil::getInstance()->toString(file))->append(" Wrote: ")->appendboolean(isWritten)->toString(), this, this->commonStrings->RUN);
    
}




        #endif //ORG_ALLBINARY_IMAGE_GUI_CANVASIMAGEJPANEL_CPP
