
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_MIRRORSPRITEIMAGEJPANEL_CPP
        #define ORG_ALLBINARY_IMAGE_GUI_MIRRORSPRITEIMAGEJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/gui/MirrorSpriteImageJPanel.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <java/awt/image/RenderedImage.h>

      
#include <java/io/File.h>

      
#include <javax/imageio/ImageIO.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/BufferedImageUtil2.h>

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageProcessorInputCompositeInterface.h>

      
#include <org/allbinary/media/image/ImageStrings.h>

      
#include <org/allbinary/media/image/MirrorImageUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/gui/JPanel.h"
#include "org/allbinary/image/gui/JLayeredPane.h"
#include "org/allbinary/image/gui/Graphics.h"
#include "org/allbinary/image/gui/JCheckBox.h"
#include "org/allbinary/image/gui/JButton.h"
#include "org/allbinary/image/gui/JLabel.h"
#include "org/allbinary/image/gui/GroupLayout.h"
#include "org/allbinary/image/gui/Short.h"
#include "org/allbinary/image/gui/ActionListener.h"
#include "org/allbinary/image/gui/ActionEvent.h"


MirrorSpriteImageJPanel::MirrorSpriteImageJPanel(ImageProcessorInput* imageProcessorInput) : javax::swing::JPanel(), logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), imageStrings(ImageStrings::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil->putF("Starting", this, this->commonStrings->CONSTRUCTOR);
    
this->initComponents();
    
this->imageProcessorInput= imageProcessorInput;
    
}


    auto MirrorSpriteImageJPanel::process() -> void{
([&]() {
    static thread_local MirrorSpriteImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public Thread {
    public:
    using Thread::Thread;
    MirrorSpriteImageJPanel* outer = anonymousOuter0;

    public: void run(){

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
    std::vector<BufferedImage*> generatedBufferedImageArray;;
    

    ImageProcessorInput* imageProcessorInput = outer->getImageProcessorInput();;
    

    std::vector<BufferedImage*> bufferedImageArray = imageProcessorInput->getBufferedImageArray();;
    




                        for (
    int32_t index = 0;index < bufferedImageArray.size(); index++)
        {
generatedBufferedImageArray= MirrorImageUtil::getInstance()->getImages(bufferedImageArray[index], outer->verticleJCheckBox->isSelected(), outer->horizontalJCheckBox->isSelected());
    
outer->result= BufferedImageUtil2::getInstance()->createSpriteImage(generatedBufferedImageArray);
    
outer->getParent()->repaint();
    

    File* file = imageProcessorInput->getFiles()[index];;
    

                        if(!outer->writeOverOriginalJCheckBox->isSelected())
                        
                                    {
                                    
    std::string filePath = file->getAbsolutePath();;
    

    int32_t extensionIndex = JavaString::indexOf(filePath, outer->imageStrings->PNG_EXTENSION);;
    
filePath= JavaString::valueOf(JavaString::valueOf(JavaString::substring(filePath, 0, extensionIndex)) +JavaString::valueOf("_mirror")) +JavaString::valueOf(outer->imageStrings->PNG_EXTENSION);
    
logUtil->putF(JavaString::valueOf("Renamed File: ") +JavaString::valueOf(filePath), this, outer->commonStrings->RUN);
    
file= new File(filePath);
    

                                    }
                                

    bool isWritten = ImageIO::write(dynamic_cast<RenderedImage*>(outer->result), outer->imageStrings->PNG, file);;
    
logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("File: ") +JavaString::valueOf(file)) +JavaString::valueOf(" Wrote: ")) +JavaString::valueOf(isWritten), this, outer->commonStrings->RUN);
    
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


    auto MirrorSpriteImageJPanel::initComponents() -> void{
jLayeredPane1= new javax::swing::JLayeredPane();
    
this->jPanel1= [&]() {
    static thread_local MirrorSpriteImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public javax::swing::JPanel {
    public:
    using javax::swing::JPanel::JPanel;
    MirrorSpriteImageJPanel* outer = anonymousOuter0;

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
    
this->jPanel2= new javax::swing::JPanel();
    
this->imageHeightIsFrameSizeJCheckBox= new javax::swing::JCheckBox();
    
this->horizontalJCheckBox= new javax::swing::JCheckBox();
    
this->verticleJCheckBox= new javax::swing::JCheckBox();
    
this->writeOverOriginalJCheckBox= new javax::swing::JCheckBox();
    
this->generateJButton= new javax::swing::JButton();
    
this->jPanel3= new javax::swing::JPanel();
    
this->jLabel2= new javax::swing::JLabel();
    

    org::jdesktop::layout::GroupLayout* jPanel1Layout = new org::jdesktop::layout::GroupLayout(this->jPanel1);;
    
this->jPanel1->setLayout(jPanel1Layout);
    
jPanel1Layout->setHorizontalGroup(jPanel1Layout->createParallelGroup(org.jdesktop->layout->GroupLayout->LEADING)->add(0, 507, Short::MAX_VALUE));
    
jPanel1Layout->setVerticalGroup(jPanel1Layout->createParallelGroup(org.jdesktop->layout->GroupLayout->LEADING)->add(0, 230, Short::MAX_VALUE));
    
this->imageHeightIsFrameSizeJCheckBox->setSelected(true);
    
this->imageHeightIsFrameSizeJCheckBox->setText("Image Height Is Frame Size");
    
this->imageHeightIsFrameSizeJCheckBox->setEnabled(false);
    
this->imageHeightIsFrameSizeJCheckBox->addActionListener([&]() {
    static thread_local MirrorSpriteImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    MirrorSpriteImageJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->imageHeightIsFrameSizeJCheckBoxActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->horizontalJCheckBox->setSelected(true);
    
this->horizontalJCheckBox->setText("Horizontal");
    
this->horizontalJCheckBox->setEnabled(false);
    
this->verticleJCheckBox->setText("Verticle");
    
this->verticleJCheckBox->setEnabled(false);
    
this->writeOverOriginalJCheckBox->setText("Write Over Original");
    
this->generateJButton->setText("Generate");
    
this->generateJButton->addActionListener([&]() {
    static thread_local MirrorSpriteImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    MirrorSpriteImageJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->generateJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    

    org::jdesktop::layout::GroupLayout* jPanel2Layout = new org::jdesktop::layout::GroupLayout(this->jPanel2);;
    
this->jPanel2->setLayout(jPanel2Layout);
    
jPanel2Layout->setHorizontalGroup(jPanel2Layout->createParallelGroup(org.jdesktop->layout->GroupLayout->LEADING)->add(jPanel2Layout->createSequentialGroup()->addContainerGap(org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short::MAX_VALUE)->add(verticleJCheckBox)->addPreferredGap(org.jdesktop->layout->LayoutStyle->UNRELATED)->add(horizontalJCheckBox)->addPreferredGap(org.jdesktop->layout->LayoutStyle->RELATED)->add(imageHeightIsFrameSizeJCheckBox)->addPreferredGap(org.jdesktop->layout->LayoutStyle->RELATED)->add(writeOverOriginalJCheckBox)->addPreferredGap(org.jdesktop->layout->LayoutStyle->RELATED)->add(generateJButton)));
    
jPanel2Layout->setVerticalGroup(jPanel2Layout->createParallelGroup(org.jdesktop->layout->GroupLayout->LEADING)->add(jPanel2Layout->createSequentialGroup()->add(jPanel2Layout->createParallelGroup(org.jdesktop->layout->GroupLayout->BASELINE)->add(imageHeightIsFrameSizeJCheckBox, org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short::MAX_VALUE)->add(horizontalJCheckBox)->add(verticleJCheckBox)->add(writeOverOriginalJCheckBox)->add(generateJButton, org.jdesktop->layout->GroupLayout->PREFERRED_SIZE, 25, org.jdesktop->layout->GroupLayout->PREFERRED_SIZE))->addContainerGap()));
    
this->jLabel2->setText("Results:");
    

    org::jdesktop::layout::GroupLayout* jPanel3Layout = new org::jdesktop::layout::GroupLayout(this->jPanel3);;
    
this->jPanel3->setLayout(jPanel3Layout);
    
jPanel3Layout->setHorizontalGroup(jPanel3Layout->createParallelGroup(org.jdesktop->layout->GroupLayout->LEADING)->add(jPanel3Layout->createSequentialGroup()->add(jLabel2)->addContainerGap(448, Short::MAX_VALUE)));
    
jPanel3Layout->setVerticalGroup(jPanel3Layout->createParallelGroup(org.jdesktop->layout->GroupLayout->LEADING)->add(jLabel2));
    

    org::jdesktop::layout::GroupLayout* layout = new org::jdesktop::layout::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(org.jdesktop->layout->GroupLayout->LEADING)->add(org.jdesktop->layout->GroupLayout->TRAILING, layout->createSequentialGroup()->addContainerGap()->add(jPanel3, org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short::MAX_VALUE)->addContainerGap())->add(jPanel1, org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short::MAX_VALUE)->add(layout->createSequentialGroup()->add(jPanel2, org.jdesktop->layout->GroupLayout->PREFERRED_SIZE, org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, org.jdesktop->layout->GroupLayout->PREFERRED_SIZE)->addContainerGap(org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short::MAX_VALUE)));
    
layout->setVerticalGroup(layout->createParallelGroup(org.jdesktop->layout->GroupLayout->LEADING)->add(layout->createSequentialGroup()->add(jPanel2, org.jdesktop->layout->GroupLayout->PREFERRED_SIZE, 25, org.jdesktop->layout->GroupLayout->PREFERRED_SIZE)->addPreferredGap(org.jdesktop->layout->LayoutStyle->RELATED)->add(jPanel3, org.jdesktop->layout->GroupLayout->PREFERRED_SIZE, org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, org.jdesktop->layout->GroupLayout->PREFERRED_SIZE)->addPreferredGap(org.jdesktop->layout->LayoutStyle->RELATED)->add(jPanel1, org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short::MAX_VALUE)));
    
}


    auto MirrorSpriteImageJPanel::generateJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->process();
    
}


    auto MirrorSpriteImageJPanel::imageHeightIsFrameSizeJCheckBoxActionPerformed(java::awt::event::ActionEvent* evt) -> void{
}


    auto MirrorSpriteImageJPanel::getImageProcessorInput() -> ImageProcessorInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageProcessorInput;
    
}


    auto MirrorSpriteImageJPanel::setImageProcessorInput(ImageProcessorInput* imageProcessorInput) -> void{
this->imageProcessorInput= imageProcessorInput;
    
}




        #endif //ORG_ALLBINARY_IMAGE_GUI_MIRRORSPRITEIMAGEJPANEL_CPP
