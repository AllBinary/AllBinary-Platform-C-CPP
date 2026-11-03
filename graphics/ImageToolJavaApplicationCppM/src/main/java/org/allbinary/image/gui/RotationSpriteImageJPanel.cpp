
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_ROTATIONSPRITEIMAGEJPANEL_CPP
        #define ORG_ALLBINARY_IMAGE_GUI_ROTATIONSPRITEIMAGEJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/gui/RotationSpriteImageJPanel.h"
        

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

      
#include <javax/imageio/ImageIO.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/image/ImageJ2SERotationUtil.h>

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageProcessorInputCompositeInterface.h>

      
#include <org/allbinary/media/image/ImageStrings.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/LayoutStyle.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/LayoutStyle.h>

#include <org/jdesktop/layout/LayoutStyle.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/LayoutStyle.h>

#include <org/jdesktop/layout/LayoutStyle.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/LayoutStyle.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/LayoutStyle.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/gui/JPanel.h"
#include "org/allbinary/image/gui/Graphics.h"
#include "org/allbinary/image/gui/JComboBox.h"
#include "org/allbinary/image/gui/JLabel.h"
#include "org/allbinary/image/gui/JButton.h"
#include "org/allbinary/image/gui/JCheckBox.h"
#include "org/allbinary/image/gui/GroupLayout.h"
#include "org/allbinary/image/gui/Short.h"
#include "org/allbinary/image/gui/DefaultComboBoxModel.h"
#include "org/allbinary/image/gui/ActionListener.h"
#include "org/allbinary/image/gui/ActionEvent.h"


RotationSpriteImageJPanel::RotationSpriteImageJPanel(ImageProcessorInput* imageProcessorInput) : javax::swing::JPanel(), logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), imageStrings(ImageStrings::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initComponents();
    
this->imageProcessorInput= imageProcessorInput;
    
}


    auto RotationSpriteImageJPanel::process() -> void{
([&]() {
    static thread_local RotationSpriteImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public Thread {
    public:
    using Thread::Thread;
    RotationSpriteImageJPanel* outer = anonymousOuter0;

    public: void run(){

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
    std::vector<BufferedImage*> generatedBufferedImageArray;;
    

    ImageProcessorInput* imageProcessorInput = outer->getImageProcessorInput();;
    

    std::vector<BufferedImage*> bufferedImageArray = imageProcessorInput->getBufferedImageArray();;
    




                        for (
    int32_t index = 0;index < bufferedImageArray.size(); index++)
        {

    int32_t totalFrames = Integer.valueOf(JavaBoxes::unbox<std::string>(outer->totalFramesJComboBox->getSelectedItem()));;
    

    int32_t totalAngle = Integer.valueOf(JavaBoxes::unbox<std::string>(outer->totalAngleJComboBox->getSelectedItem()));;
    
generatedBufferedImageArray= ImageJ2SERotationUtil::getInstance()->getRotatedImages(bufferedImageArray[index], totalFrames, totalAngle);
    
outer->result= ImageJ2SERotationUtil::getInstance()->createSpriteImage(generatedBufferedImageArray);
    
outer->getParent()->repaint();
    

    File* file = imageProcessorInput->getFiles()[index];;
    

                        if(!outer->writeOverOriginalJCheckBox->isSelected())
                        
                                    {
                                    
    std::string filePath = file->getAbsolutePath();;
    

    int32_t extensionIndex = JavaString::indexOf(filePath, outer->imageStrings->PNG_EXTENSION);;
    
filePath= (new StringMaker())->append(JavaString::substring(filePath, 0, extensionIndex))->append(CommonSeps::getInstance()->UNDERSCORE)->append("sprite")->append(outer->imageStrings->PNG_EXTENSION)->toString();
    
logUtil->putF(JavaString::valueOf("New File Path: ") +JavaString::valueOf(filePath), this, outer->commonStrings->RUN);
    
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


    auto RotationSpriteImageJPanel::initComponents() -> void{
this->jPanel1= [&]() {
    static thread_local RotationSpriteImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public javax::swing::JPanel {
    public:
    using javax::swing::JPanel::JPanel;
    RotationSpriteImageJPanel* outer = anonymousOuter0;

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
    
this->totalFramesJComboBox= new javax::swing::JComboBox();
    
this->jLabel1= new javax::swing::JLabel();
    
this->generateJButton= new javax::swing::JButton();
    
this->totalAngleJComboBox= new javax::swing::JComboBox();
    
this->jLabel3= new javax::swing::JLabel();
    
this->writeOverOriginalJCheckBox= new javax::swing::JCheckBox();
    
this->jPanel3= new javax::swing::JPanel();
    
this->jLabel2= new javax::swing::JLabel();
    

    org::jdesktop::layout::GroupLayout* jPanel1Layout = new org::jdesktop::layout::GroupLayout(this->jPanel1);;
    
this->jPanel1->setLayout(jPanel1Layout);
    
jPanel1Layout->setHorizontalGroup(jPanel1Layout->createParallelGroup(GroupLayout::LEADING)->add(0, 436, Short::MAX_VALUE));
    
jPanel1Layout->setVerticalGroup(jPanel1Layout->createParallelGroup(GroupLayout::LEADING)->add(0, 227, Short::MAX_VALUE));
    
this->totalFramesJComboBox->setModel(new javax::swing::DefaultComboBoxModel(std::vector<std::string>
                                                {
                                                    CommonPhoneStrings::getInstance()->FOUR,CommonPhoneStrings::getInstance()->NINE,"18","20","36"
                                                }));
    
this->jLabel1->setText("Total Frames:");
    
this->generateJButton->setText("Generate");
    
this->generateJButton->addActionListener([&]() {
    static thread_local RotationSpriteImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    RotationSpriteImageJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->generateJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->totalAngleJComboBox->setModel(new javax::swing::DefaultComboBoxModel(std::vector<std::string>
                                                {
                                                    "360","90"
                                                }));
    
this->totalAngleJComboBox->addActionListener([&]() {
    static thread_local RotationSpriteImageJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    RotationSpriteImageJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->totalAngleJComboBoxActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel3->setText("Total Angle:");
    
this->writeOverOriginalJCheckBox->setText("Write Over Original");
    

    org::jdesktop::layout::GroupLayout* jPanel2Layout = new org::jdesktop::layout::GroupLayout(this->jPanel2);;
    
this->jPanel2->setLayout(jPanel2Layout);
    
jPanel2Layout->setHorizontalGroup(jPanel2Layout->createParallelGroup(GroupLayout::LEADING)->add(jPanel2Layout->createSequentialGroup()->add(8, 8, 8)->add(jLabel1)->addPreferredGap(LayoutStyle::RELATED)->add(totalFramesJComboBox, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::RELATED)->add(jLabel3)->addPreferredGap(LayoutStyle::RELATED)->add(totalAngleJComboBox, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::RELATED)->add(writeOverOriginalJCheckBox)->addPreferredGap(LayoutStyle::RELATED)->add(generateJButton)->addContainerGap(GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)));
    
jPanel2Layout->setVerticalGroup(jPanel2Layout->createParallelGroup(GroupLayout::LEADING)->add(jPanel2Layout->createParallelGroup(GroupLayout::BASELINE)->add(jLabel1)->add(totalFramesJComboBox, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->add(generateJButton)->add(totalAngleJComboBox, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->add(jLabel3)->add(writeOverOriginalJCheckBox)));
    
this->jLabel2->setText("Results:");
    

    org::jdesktop::layout::GroupLayout* jPanel3Layout = new org::jdesktop::layout::GroupLayout(this->jPanel3);;
    
this->jPanel3->setLayout(jPanel3Layout);
    
jPanel3Layout->setHorizontalGroup(jPanel3Layout->createParallelGroup(GroupLayout::LEADING)->add(jPanel3Layout->createSequentialGroup()->add(jLabel2)->addContainerGap(377, Short::MAX_VALUE)));
    
jPanel3Layout->setVerticalGroup(jPanel3Layout->createParallelGroup(GroupLayout::LEADING)->add(jLabel2));
    

    org::jdesktop::layout::GroupLayout* layout = new org::jdesktop::layout::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(GroupLayout::LEADING)->add(GroupLayout::TRAILING, jPanel2, GroupLayout::DEFAULT_SIZE, GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)->add(layout->createSequentialGroup()->addContainerGap()->add(jPanel3, GroupLayout::DEFAULT_SIZE, GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)->addContainerGap())->add(jPanel1, GroupLayout::DEFAULT_SIZE, GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE));
    
layout->setVerticalGroup(layout->createParallelGroup(GroupLayout::LEADING)->add(layout->createSequentialGroup()->add(jPanel2, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::UNRELATED)->add(jPanel3, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::RELATED)->add(jPanel1, GroupLayout::DEFAULT_SIZE, GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)));
    
}


    auto RotationSpriteImageJPanel::generateJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->process();
    
}


    auto RotationSpriteImageJPanel::totalAngleJComboBoxActionPerformed(java::awt::event::ActionEvent* evt) -> void{
}


    auto RotationSpriteImageJPanel::getImageProcessorInput() -> ImageProcessorInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->imageProcessorInput;
    
}


    auto RotationSpriteImageJPanel::setImageProcessorInput(ImageProcessorInput* imageProcessorInput) -> void{
this->imageProcessorInput= imageProcessorInput;
    
}




        #endif //ORG_ALLBINARY_IMAGE_GUI_ROTATIONSPRITEIMAGEJPANEL_CPP
