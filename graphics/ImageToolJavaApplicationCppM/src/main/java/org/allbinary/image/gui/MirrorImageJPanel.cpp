
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_MIRRORIMAGEJPANEL_CPP
        #define ORG_ALLBINARY_IMAGE_GUI_MIRRORIMAGEJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/gui/MirrorImageJPanel.h"
        

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

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageProcessorInputCompositeInterface.h>

      
#include <org/allbinary/media/image/ImageStrings.h>

      
#include <org/allbinary/media/image/MirrorImageUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/gui/JPanel.h"
#include "org/allbinary/image/gui/JLayeredPane.h"
#include "org/allbinary/image/gui/ButtonGroup.h"
#include "org/allbinary/image/gui/Graphics.h"
#include "org/allbinary/image/gui/JCheckBox.h"
#include "org/allbinary/image/gui/JButton.h"
#include "org/allbinary/image/gui/JRadioButton.h"
#include "org/allbinary/image/gui/JLabel.h"
#include "org/allbinary/image/gui/GroupLayout.h"
#include "org/allbinary/image/gui/Short.h"
#include "org/allbinary/image/gui/ActionListener.h"
#include "org/allbinary/image/gui/ActionEvent.h"


MirrorImageJPanel::MirrorImageJPanel(ImageProcessorInput* imageProcessorInput) : javax::swing::JPanel(), logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), imageStrings(ImageStrings::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil->putF("Starting", this, this->commonStrings->CONSTRUCTOR);
    
this->initComponents();
    
this->imageProcessorInput= imageProcessorInput;
    
}


    auto MirrorImageJPanel::process() -> void{
([&]() {
    static thread_local MirrorImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public Thread {
    public:
    using Thread::Thread;
    MirrorImageJPanel* outer = anonymousOuter0;

    public: void run(){

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
    ImageProcessorInput* imageProcessorInput = outer->getImageProcessorInput();;
    

    std::vector<BufferedImage*> bufferedImageArray = imageProcessorInput->getBufferedImageArray();;
    




                        for (
    int32_t index = 0;index < bufferedImageArray.size(); index++)
        {
outer->result= MirrorImageUtil::getInstance()->getImage(bufferedImageArray[index], outer->verticleJCheckBox->isSelected(), outer->horizontalJCheckBox->isSelected());
    

    File* file = imageProcessorInput->getFiles()[index];;
    

                        if(outer->writeOverOriginalJRadioButton->isSelected())
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(outer->renameJRadioButton->isSelected())
                        
                                    {
                                    
    std::string filePath = file->getAbsolutePath();;
    

    int32_t extensionIndex = JavaString::indexOf(filePath, outer->imageStrings->PNG_EXTENSION);;
    
filePath= JavaString::valueOf(JavaString::valueOf(JavaString::substring(filePath, 0, extensionIndex)) +JavaString::valueOf("_mirror")) +JavaString::valueOf(outer->imageStrings->PNG_EXTENSION);
    
logUtil->putF(JavaString::valueOf("Renamed File: ") +JavaString::valueOf(filePath), this, outer->commonStrings->RUN);
    
file= new File(filePath);
    

                                    }
                                

    bool isWritten = ImageIO::write(dynamic_cast<RenderedImage*>(outer->result), outer->imageStrings->PNG, file);;
    
logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("File: ") +JavaString::valueOf(file)) +JavaString::valueOf(" Wrote: ")) +JavaString::valueOf(isWritten), this, outer->commonStrings->RUN);
    
outer->getParent()->repaint();
    
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


    auto MirrorImageJPanel::initComponents() -> void{
jLayeredPane1= new javax::swing::JLayeredPane();
    
this->buttonGroup= new javax::swing::ButtonGroup();
    
this->jPanel1= [&]() {
    static thread_local MirrorImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public javax::swing::JPanel {
    public:
    using javax::swing::JPanel::JPanel;
    MirrorImageJPanel* outer = anonymousOuter0;

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
    
this->horizontalJCheckBox= new javax::swing::JCheckBox();
    
this->verticleJCheckBox= new javax::swing::JCheckBox();
    
this->generateJButton= new javax::swing::JButton();
    
this->renameJRadioButton= new javax::swing::JRadioButton();
    
this->writeOverOriginalJRadioButton= new javax::swing::JRadioButton();
    
this->jPanel3= new javax::swing::JPanel();
    
this->jLabel2= new javax::swing::JLabel();
    

    org::jdesktop::layout::GroupLayout* jPanel1Layout = new org::jdesktop::layout::GroupLayout(this->jPanel1);;
    
this->jPanel1->setLayout(jPanel1Layout);
    
jPanel1Layout->setHorizontalGroup(jPanel1Layout->createParallelGroup(org.jdesktop->layout->GroupLayout->LEADING)->add(0, 522, Short::MAX_VALUE));
    
jPanel1Layout->setVerticalGroup(jPanel1Layout->createParallelGroup(org.jdesktop->layout->GroupLayout->LEADING)->add(0, 230, Short::MAX_VALUE));
    
this->horizontalJCheckBox->setSelected(true);
    
this->horizontalJCheckBox->setText("Horizontal");
    
this->horizontalJCheckBox->setEnabled(false);
    
this->verticleJCheckBox->setText("Verticle");
    
this->verticleJCheckBox->setEnabled(false);
    
this->generateJButton->setText("Generate");
    
this->generateJButton->addActionListener([&]() {
    static thread_local MirrorImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    MirrorImageJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->generateJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->renameJRadioButton->setText("Save As filename_mirror");
    
this->renameJRadioButton->addActionListener([&]() {
    static thread_local MirrorImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    MirrorImageJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->renameJRadioButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->writeOverOriginalJRadioButton->setText("Write Over Original");
    

    org::jdesktop::layout::GroupLayout* jPanel2Layout = new org::jdesktop::layout::GroupLayout(this->jPanel2);;
    
this->jPanel2->setLayout(jPanel2Layout);
    
jPanel2Layout->setHorizontalGroup(jPanel2Layout->createParallelGroup(org.jdesktop->layout->GroupLayout->LEADING)->add(jPanel2Layout->createSequentialGroup()->addContainerGap(org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short::MAX_VALUE)->add(verticleJCheckBox)->addPreferredGap(org.jdesktop->layout->LayoutStyle->UNRELATED)->add(horizontalJCheckBox)->addPreferredGap(org.jdesktop->layout->LayoutStyle->RELATED)->add(writeOverOriginalJRadioButton)->addPreferredGap(org.jdesktop->layout->LayoutStyle->UNRELATED)->add(renameJRadioButton)->addPreferredGap(org.jdesktop->layout->LayoutStyle->RELATED)->add(generateJButton)->add(37, 37, 37)));
    
jPanel2Layout->setVerticalGroup(jPanel2Layout->createParallelGroup(org.jdesktop->layout->GroupLayout->LEADING)->add(jPanel2Layout->createSequentialGroup()->add(jPanel2Layout->createParallelGroup(org.jdesktop->layout->GroupLayout->BASELINE)->add(horizontalJCheckBox)->add(verticleJCheckBox)->add(writeOverOriginalJRadioButton)->add(renameJRadioButton)->add(generateJButton))->addContainerGap()));
    
this->jLabel2->setText("Results:");
    

    org::jdesktop::layout::GroupLayout* jPanel3Layout = new org::jdesktop::layout::GroupLayout(this->jPanel3);;
    
this->jPanel3->setLayout(jPanel3Layout);
    
jPanel3Layout->setHorizontalGroup(jPanel3Layout->createParallelGroup(org.jdesktop->layout->GroupLayout->LEADING)->add(jPanel3Layout->createSequentialGroup()->add(jLabel2)->addContainerGap(433, Short::MAX_VALUE)));
    
jPanel3Layout->setVerticalGroup(jPanel3Layout->createParallelGroup(org.jdesktop->layout->GroupLayout->LEADING)->add(jLabel2));
    

    org::jdesktop::layout::GroupLayout* layout = new org::jdesktop::layout::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(org.jdesktop->layout->GroupLayout->LEADING)->add(org.jdesktop->layout->GroupLayout->TRAILING, layout->createSequentialGroup()->addContainerGap()->add(jPanel3, org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short::MAX_VALUE)->addContainerGap())->add(jPanel1, org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short::MAX_VALUE)->add(layout->createSequentialGroup()->add(jPanel2, org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short::MAX_VALUE)->addContainerGap(org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short::MAX_VALUE)));
    
layout->setVerticalGroup(layout->createParallelGroup(org.jdesktop->layout->GroupLayout->LEADING)->add(layout->createSequentialGroup()->add(jPanel2, org.jdesktop->layout->GroupLayout->PREFERRED_SIZE, 25, org.jdesktop->layout->GroupLayout->PREFERRED_SIZE)->addPreferredGap(org.jdesktop->layout->LayoutStyle->RELATED)->add(jPanel3, org.jdesktop->layout->GroupLayout->PREFERRED_SIZE, org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, org.jdesktop->layout->GroupLayout->PREFERRED_SIZE)->addPreferredGap(org.jdesktop->layout->LayoutStyle->RELATED)->add(jPanel1, org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, org.jdesktop->layout->GroupLayout->DEFAULT_SIZE, Short::MAX_VALUE)));
    
}


    auto MirrorImageJPanel::generateJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->process();
    
}


    auto MirrorImageJPanel::renameJRadioButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
}


    auto MirrorImageJPanel::getImageProcessorInput() -> ImageProcessorInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->imageProcessorInput;
    
}


    auto MirrorImageJPanel::setImageProcessorInput(ImageProcessorInput* imageProcessorInput) -> void{
this->imageProcessorInput= imageProcessorInput;
    
}




        #endif //ORG_ALLBINARY_IMAGE_GUI_MIRRORIMAGEJPANEL_CPP
