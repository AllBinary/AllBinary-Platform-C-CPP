
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_RESIZEIMAGEJPANEL_CPP
        #define ORG_ALLBINARY_IMAGE_GUI_RESIZEIMAGEJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/gui/ResizeImageJPanel.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Float.h"
        
            #include "java/lang/Thread.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/awt/image/Raster.h>

      
#include <java/io/File.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/FileWrapperUtil.h>

      
#include <org/allbinary/media/image/ImagePersistanceUtil.h>

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageProcessorInputCompositeInterface.h>

      
#include <org/allbinary/media/image/ImageUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

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
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/gui/JPanel.h"
#include "org/allbinary/image/gui/DefaultComboBoxModel.h"
#include "org/allbinary/image/gui/JLabel.h"
#include "org/allbinary/image/gui/JComboBox.h"
#include "org/allbinary/image/gui/JButton.h"
#include "org/allbinary/image/gui/JTextField.h"
#include "org/allbinary/image/gui/ActionListener.h"
#include "org/allbinary/image/gui/ActionEvent.h"
#include "org/allbinary/image/gui/Dimension.h"
#include "org/allbinary/image/gui/GroupLayout.h"
#include "org/allbinary/image/gui/Short.h"


ResizeImageJPanel::ResizeImageJPanel(ImageProcessorInput* imageProcessorInput) : javax::swing::JPanel(), logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
initComponents();
    
this->imageProcessorInput= imageProcessorInput;
    

    std::vector<std::string> numberStringArray = std::vector<std::string>(101);;
    
numberStringArray[0]= std::to_string( -1);
    




                        for (
    int32_t index = 1;index < 100; index++)
        {
numberStringArray[index]= std::to_string(index);
    
}

this->jComboBox1->setModel(new javax::swing::DefaultComboBoxModel(numberStringArray));
    

    Raster* araster = this->imageProcessorInput->getBufferedImageArray()[0].getAlphaRaster();;
    

                        if(araster == 
                                    nullptr
                                )
                        
                                    {
                                    System.out.println("there is no Alpha channel!!!!!!!!!");
    

                                    }
                                
                        else {
                            System.out.println("Alpha channel found !");
    

                        }
                            
}


    auto ResizeImageJPanel::process() -> void{
([&]() {
    static thread_local ResizeImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public Thread {
    public:
    using Thread::Thread;
    ResizeImageJPanel* outer = anonymousOuter0;

    public: void run(){

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
    ImageUtil* imageUtil = ImageUtil::getInstance();;
    

    int32_t percent = Integer.valueOf(JavaBoxes::unbox<std::string>(outer->jComboBox1->getSelectedItem()));;
    

    float percentAsFloat = Float.parseFloat(outer->floatPercentJTextField->getText());;
    

    ImageProcessorInput* imageProcessorInput = outer->getImageProcessorInput();;
    

    std::vector<File*> files = imageProcessorInput->getFiles();;
    

    std::vector<BufferedImage*> generatedBufferedImageArray = 
                null
            ;;
    

                        if(percentAsFloat !=  -1)
                        
                                    {
                                    generatedBufferedImageArray= imageUtil->createBufferedImage2(imageProcessorInput->getBufferedImageArray(), percentAsFloat, true);
    

                                    }
                                
                             else 
                        if(percent !=  -1)
                        
                                    {
                                    generatedBufferedImageArray= imageUtil->createBufferedImageForResize(imageProcessorInput->getBufferedImageArray(), percent, true);
    

                                    }
                                
                        else {
                            
    int32_t width = Integer.valueOf(JavaBoxes::unbox<std::string>(outer->jTextField1->getText()));;
    

    int32_t height = Integer.valueOf(JavaBoxes::unbox<std::string>(outer->jTextField2->getText()));;
    
generatedBufferedImageArray= imageUtil->createBufferedImage3(imageProcessorInput->getBufferedImageArray(), width, height, true);
    

                        }
                            

    Raster* araster = generatedBufferedImageArray[0]->getAlphaRaster();;
    

                        if(araster == 
                                    nullptr
                                )
                        
                                    {
                                    System.out.println("No Alpha Channel In Result");
    

                                    }
                                
                        else {
                            System.out.println("Found Alpha Channel In Result");
    

                        }
                            

    ImagePersistanceUtil* imagePersistanceUtil = ImagePersistanceUtil::getInstance();;
    




                        for (
    int32_t index = 0;index < generatedBufferedImageArray.size(); index++)
        {
imagePersistanceUtil->saveWithBatik(FileWrapperUtil::wrapFile(files[index]), generatedBufferedImageArray[index]);
    
}

outer->getParent()->repaint();
    

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


    auto ResizeImageJPanel::update() -> void{
([&]() {
    static thread_local ResizeImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public Thread {
    public:
    using Thread::Thread;
    ResizeImageJPanel* outer = anonymousOuter0;

    public: void run(){

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
    ImageProcessorInput* imageProcessorInput = outer->getImageProcessorInput();;
    

    int32_t size = imageProcessorInput->getBufferedImageArray()->length;;
    

    std::vector<BufferedImage*> bufferedImageArray = imageProcessorInput->getBufferedImageArray();;
    

    BufferedImage* bufferedImage;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
bufferedImage= bufferedImageArray[0];
    
outer->jTextField1->setText(std::to_string(getWidth));
    
outer->jTextField2->setText(std::to_string(getHeight));
    
}

outer->getParent()->repaint();
    

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


    auto ResizeImageJPanel::updateFor16Above() -> void{
([&]() {
    static thread_local ResizeImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public Thread {
    public:
    using Thread::Thread;
    ResizeImageJPanel* outer = anonymousOuter0;

    public: void run(){

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
    ImageProcessorInput* imageProcessorInput = outer->getImageProcessorInput();;
    

    int32_t size = imageProcessorInput->getBufferedImageArray()->length;;
    

    std::vector<BufferedImage*> bufferedImageArray = imageProcessorInput->getBufferedImageArray();;
    

    BufferedImage* bufferedImage;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
bufferedImage= bufferedImageArray[0];
    
outer->jTextField1->setText(std::to_string());
    
outer->jTextField2->setText(std::to_string());
    
}

outer->getParent()->repaint();
    

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


    auto ResizeImageJPanel::updateFor16Below() -> void{
([&]() {
    static thread_local ResizeImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public Thread {
    public:
    using Thread::Thread;
    ResizeImageJPanel* outer = anonymousOuter0;

    public: void run(){

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
    ImageProcessorInput* imageProcessorInput = outer->getImageProcessorInput();;
    

    int32_t size = imageProcessorInput->getBufferedImageArray()->length;;
    

    std::vector<BufferedImage*> bufferedImageArray = imageProcessorInput->getBufferedImageArray();;
    

    BufferedImage* bufferedImage;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
bufferedImage= bufferedImageArray[0];
    
outer->jTextField1->setText(std::to_string());
    
outer->jTextField2->setText(std::to_string());
    
}

outer->getParent()->repaint();
    

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


    auto ResizeImageJPanel::getImageProcessorInput() -> ImageProcessorInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->imageProcessorInput;
    
}


    auto ResizeImageJPanel::setImageProcessorInput(ImageProcessorInput* imageProcessorInput) -> void{
this->imageProcessorInput= imageProcessorInput;
    
}


    auto ResizeImageJPanel::initComponents() -> void{
this->jLabel1= new javax::swing::JLabel();
    
this->jComboBox1= new javax::swing::JComboBox<>();
    
this->aboveJButton= new javax::swing::JButton();
    
this->jTextField1= new javax::swing::JTextField();
    
this->jLabel2= new javax::swing::JLabel();
    
this->jLabel3= new javax::swing::JLabel();
    
this->jTextField2= new javax::swing::JTextField();
    
this->updateJButton= new javax::swing::JButton();
    
this->floatPercentJTextField= new javax::swing::JTextField();
    
this->adjustFor16AboveJButton= new javax::swing::JButton();
    
this->adjustFor16BelowJButton= new javax::swing::JButton();
    
this->jLabel1->setText("Percent:");
    
this->jComboBox1->setModel(new javax::swing::DefaultComboBoxModel<>(std::vector<std::string>
                                                {
                                                    "Item 1","Item 2","Item 3","Item 4"
                                                }));
    
this->aboveJButton->setText("Process");
    
this->aboveJButton->addActionListener([&]() {
    static thread_local ResizeImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ResizeImageJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->aboveJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel2->setText("Width:");
    
this->jLabel3->setText("Height:");
    
this->updateJButton->setText("Update");
    
this->updateJButton->addActionListener([&]() {
    static thread_local ResizeImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ResizeImageJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->updateJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->floatPercentJTextField->setText("-1.000000");
    
this->floatPercentJTextField->setMinimumSize(new java::awt::Dimension(120, 22));
    
this->adjustFor16AboveJButton->setText("Adjust for 16 Above");
    
this->adjustFor16AboveJButton->addActionListener([&]() {
    static thread_local ResizeImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ResizeImageJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->adjustFor16AboveJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->adjustFor16BelowJButton->setText("Adjust for 16 Below");
    
this->adjustFor16BelowJButton->addActionListener([&]() {
    static thread_local ResizeImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ResizeImageJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->adjustFor16BelowJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(GroupLayout::Alignment::LEADING)->addGroup(layout->createSequentialGroup()->addContainerGap()->addGroup(layout->createParallelGroup(GroupLayout::Alignment::LEADING)->addComponent(jLabel1)->addComponent(jLabel2)->addComponent(jLabel3))->addPreferredGap(LayoutStyle::ComponentPlacement::RELATED)->addGroup(layout->createParallelGroup(GroupLayout::Alignment::LEADING, false)->addComponent(jComboBox1, 0, GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)->addComponent(jTextField1)->addComponent(jTextField2))->addPreferredGap(LayoutStyle::ComponentPlacement::UNRELATED)->addGroup(layout->createParallelGroup(GroupLayout::Alignment::LEADING)->addComponent(floatPercentJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addComponent(adjustFor16AboveJButton)->addComponent(adjustFor16BelowJButton))->addContainerGap(GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE))->addGroup(layout->createSequentialGroup()->addComponent(updateJButton)->addPreferredGap(LayoutStyle::ComponentPlacement::RELATED)->addComponent(aboveJButton)->addGap(0, 250, Short::MAX_VALUE)));
    
layout->setVerticalGroup(layout->createParallelGroup(GroupLayout::Alignment::LEADING)->addGroup(layout->createSequentialGroup()->addContainerGap()->addGroup(layout->createParallelGroup(GroupLayout::Alignment::BASELINE)->addComponent(jLabel1)->addComponent(jComboBox1, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addComponent(floatPercentJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))->addPreferredGap(LayoutStyle::ComponentPlacement::RELATED)->addGroup(layout->createParallelGroup(GroupLayout::Alignment::BASELINE)->addComponent(jTextField1, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addComponent(jLabel2)->addComponent(adjustFor16AboveJButton))->addPreferredGap(LayoutStyle::ComponentPlacement::RELATED)->addGroup(layout->createParallelGroup(GroupLayout::Alignment::BASELINE)->addComponent(jLabel3)->addComponent(jTextField2, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addComponent(adjustFor16BelowJButton))->addGap(18, 18, 18)->addGroup(layout->createParallelGroup(GroupLayout::Alignment::BASELINE)->addComponent(aboveJButton)->addComponent(updateJButton))->addContainerGap(175, Short::MAX_VALUE)));
    
}


    auto ResizeImageJPanel::aboveJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->process();
    
}


    auto ResizeImageJPanel::updateJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->update();
    
}


    auto ResizeImageJPanel::adjustFor16AboveJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->updateFor16Above();
    
}


    auto ResizeImageJPanel::adjustFor16BelowJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->updateFor16Below();
    
}




        #endif //ORG_ALLBINARY_IMAGE_GUI_RESIZEIMAGEJPANEL_CPP
