
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_IMAGETOOLJFRAME_CPP
        #define ORG_ALLBINARY_IMAGE_GUI_IMAGETOOLJFRAME_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/gui/ImageToolJFrame.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/io/File.h>

      
#include <java/util/Arrays.h>

      
#include <java/util/Comparator.h>

      
#include <javax/imageio/ImageIO.h>

      
#include <org/allbinary/gui/dialog/FileJDialog.h>

      
#include <org/allbinary/gui/dialog/FileJDialogListenerInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageProcessorInputCompositeInterface.h>

      
#include <org/allbinary/media/image/analysis/ColorRange.h>

      
#include <org/allbinary/media/image/analysis/ColorRangeInterface.h>

      
#include <org/allbinary/media/image/analysis/ImageAnalysis.h>

      
#include <org/allbinary/media/image/analysis/ImageAnalysisResults.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

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

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/LayoutStyle.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/LayoutStyle.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/LayoutStyle.h>

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

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

#include <org/jdesktop/layout/GroupLayout.h>

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

#include <javax/swing/WindowConstants.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/gui/JFrame.h"
#include "org/allbinary/image/gui/JDialog.h"
#include "org/allbinary/image/gui/JLabel.h"
#include "org/allbinary/image/gui/JTextField.h"
#include "org/allbinary/image/gui/JButton.h"
#include "org/allbinary/image/gui/JPanel.h"
#include "org/allbinary/image/gui/JMenuBar.h"
#include "org/allbinary/image/gui/JMenu.h"
#include "org/allbinary/image/gui/JMenuItem.h"
#include "org/allbinary/image/gui/Dimension.h"
#include "org/allbinary/image/gui/ActionListener.h"
#include "org/allbinary/image/gui/ActionEvent.h"
#include "org/allbinary/image/gui/GroupLayout.h"
#include "org/allbinary/image/gui/Short.h"
#include "org/allbinary/image/gui/GridLayout.h"
#include "org/allbinary/image/gui/ImageUnifierJPanel.h"
#include "org/allbinary/image/gui/ImageAnalysisResultsJPanel.h"
#include "org/allbinary/image/gui/RotationSpriteImageJPanel.h"
#include "org/allbinary/image/gui/SpriteSplitterImageJPanel.h"
#include "org/allbinary/image/gui/RotationImageJPanel.h"
#include "org/allbinary/image/gui/ResizeImageJPanel.h"
#include "org/allbinary/image/gui/CreateIconImagesJPanel.h"
#include "org/allbinary/image/gui/CanvasImageJPanel.h"
#include "org/allbinary/image/gui/MirrorSpriteImageJPanel.h"
#include "org/allbinary/image/gui/MirrorImageJPanel.h"


ImageToolJFrame::ImageToolJFrame() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->initComponents();
    

    CommonPhoneStrings* commonPhoneStrings = CommonPhoneStrings::getInstance();;
    
this->setSize(640, 480);
    
this->getMaxRedJTextField()->setText("255");
    
this->getMaxGreenJTextField()->setText("255");
    
this->getMaxBlueJTextField()->setText("255");
    
this->getMinRedJTextField()->setText(commonPhoneStrings->ZERO);
    
this->getMinGreenJTextField()->setText(commonPhoneStrings->ZERO);
    
this->getMinBlueJTextField()->setText(commonPhoneStrings->ZERO);
    
this->fileJDialog= new FileJDialog();
    
this->fileJDialog->addFinishedListener(this);
    
}


    auto ImageToolJFrame::initComponents() -> void{
analysisActionJDialog= new javax::swing::JDialog();
    
this->titleJLabel= new javax::swing::JLabel();
    
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
    
this->jPanel1= new javax::swing::JPanel();
    
this->mainJMenuBar= new javax::swing::JMenuBar();
    
this->fileJMenu= new javax::swing::JMenu();
    
this->openImageJMenuItem= new javax::swing::JMenuItem();
    
this->processingJMenu= new javax::swing::JMenu();
    
this->analyzeJMenuItem= new javax::swing::JMenuItem();
    
this->generateSpriteSplitterMenuItem= new javax::swing::JMenuItem();
    
this->generateRotationMenuItem= new javax::swing::JMenuItem();
    
this->generateMirrorSpriteMenuItem= new javax::swing::JMenuItem();
    
this->generateRotationSpriteJMenuItem= new javax::swing::JMenuItem();
    
this->createStripImageJMenuItem= new javax::swing::JMenuItem();
    
this->mirrorJMenuItem= new javax::swing::JMenuItem();
    
this->scaleImagesJMenuItem= new javax::swing::JMenuItem();
    
this->canvasImagesJMenuItem= new javax::swing::JMenuItem();
    
this->createIconImagesJMenuItem= new javax::swing::JMenuItem();
    
this->analysisActionJDialog->setMinimumSize(new java::awt::Dimension(350, 250));
    
this->titleJLabel->setText("              Color At Action Options            ");
    
this->colorRangeJLabel->setText("Color Range");
    
this->redJLabel->setText("Red:");
    
this->minJLabel->setText("Minimum");
    
this->maxJLabel->setText("Maximum");
    
this->greenJLabel->setText("Green:");
    
this->blueJLabel->setText("Blue:");
    
this->okJButton->setText("OK");
    
this->okJButton->addActionListener([&]() {
    static thread_local ImageToolJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageToolJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->okJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    

    org::jdesktop::layout::GroupLayout* analysisActionJDialogLayout = new org::jdesktop::layout::GroupLayout(this->analysisActionJDialog->getContentPane());;
    
this->analysisActionJDialog->getContentPane()->setLayout(analysisActionJDialogLayout);
    
analysisActionJDialogLayout->setHorizontalGroup(analysisActionJDialogLayout->createParallelGroup(GroupLayout::LEADING)->add(analysisActionJDialogLayout->createSequentialGroup()->addContainerGap()->add(analysisActionJDialogLayout->createParallelGroup(GroupLayout::LEADING)->add(analysisActionJDialogLayout->createSequentialGroup()->add(analysisActionJDialogLayout->createParallelGroup(GroupLayout::LEADING)->add(blueJLabel)->add(greenJLabel)->add(redJLabel)->add(colorRangeJLabel))->add(29, 29, 29)->add(analysisActionJDialogLayout->createParallelGroup(GroupLayout::LEADING)->add(GroupLayout::TRAILING, minJLabel, GroupLayout::DEFAULT_SIZE, 58, Short::MAX_VALUE)->add(analysisActionJDialogLayout->createParallelGroup(GroupLayout::TRAILING, false)->add(GroupLayout::LEADING, minBlueJTextField)->add(GroupLayout::LEADING, minGreenJTextField)->add(GroupLayout::LEADING, minRedJTextField, GroupLayout::DEFAULT_SIZE, 42, Short::MAX_VALUE)->add(GroupLayout::LEADING, okJButton)))->addPreferredGap(LayoutStyle::RELATED)->add(analysisActionJDialogLayout->createParallelGroup(GroupLayout::TRAILING)->add(GroupLayout::LEADING, analysisActionJDialogLayout->createSequentialGroup()->add(analysisActionJDialogLayout->createParallelGroup(GroupLayout::TRAILING, false)->add(GroupLayout::LEADING, maxRedJTextField)->add(GroupLayout::LEADING, analysisActionJDialogLayout->createSequentialGroup()->add(1, 1, 1)->add(analysisActionJDialogLayout->createParallelGroup(GroupLayout::LEADING)->add(maxBlueJTextField)->add(maxGreenJTextField, GroupLayout::PREFERRED_SIZE, 43, GroupLayout::PREFERRED_SIZE))))->addPreferredGap(LayoutStyle::RELATED, 17, Short::MAX_VALUE))->add(GroupLayout::LEADING, maxJLabel, GroupLayout::DEFAULT_SIZE, 61, Short::MAX_VALUE))->addContainerGap())->add(GroupLayout::TRAILING, analysisActionJDialogLayout->createSequentialGroup()->add(titleJLabel)->add(25, 25, 25)))));
    
analysisActionJDialogLayout->setVerticalGroup(analysisActionJDialogLayout->createParallelGroup(GroupLayout::LEADING)->add(analysisActionJDialogLayout->createSequentialGroup()->add(titleJLabel)->addPreferredGap(LayoutStyle::RELATED)->add(analysisActionJDialogLayout->createParallelGroup(GroupLayout::BASELINE)->add(minJLabel)->add(colorRangeJLabel)->add(maxJLabel))->addPreferredGap(LayoutStyle::RELATED)->add(analysisActionJDialogLayout->createParallelGroup(GroupLayout::TRAILING)->add(redJLabel)->add(analysisActionJDialogLayout->createParallelGroup(GroupLayout::BASELINE)->add(minRedJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->add(maxRedJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)))->addPreferredGap(LayoutStyle::RELATED)->add(analysisActionJDialogLayout->createParallelGroup(GroupLayout::TRAILING)->add(greenJLabel)->add(analysisActionJDialogLayout->createParallelGroup(GroupLayout::BASELINE)->add(minGreenJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->add(maxGreenJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)))->addPreferredGap(LayoutStyle::RELATED)->add(analysisActionJDialogLayout->createParallelGroup(GroupLayout::TRAILING)->add(blueJLabel)->add(analysisActionJDialogLayout->createParallelGroup(GroupLayout::BASELINE)->add(minBlueJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->add(maxBlueJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)))->add(16, 16, 16)->add(okJButton)->addContainerGap(GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)));
    
setDefaultCloseOperation(WindowConstants::EXIT_ON_CLOSE);
    
getContentPane()->setLayout(new java::awt::GridLayout(1, 0));
    
this->jPanel1->setLayout(new java::awt::GridLayout(1, 0));
    
getContentPane()->add(this->jPanel1);
    
this->fileJMenu->setText("File");
    
this->fileJMenu->addActionListener([&]() {
    static thread_local ImageToolJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageToolJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->fileJMenuActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->openImageJMenuItem->setText("Open");
    
this->openImageJMenuItem->addActionListener([&]() {
    static thread_local ImageToolJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageToolJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->openImageJMenuItemActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->fileJMenu->add(this->openImageJMenuItem);
    
this->mainJMenuBar->add(this->fileJMenu);
    
this->processingJMenu->setText("Processing");
    
this->processingJMenu->addActionListener([&]() {
    static thread_local ImageToolJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageToolJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->processingJMenuActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->analyzeJMenuItem->setText("Image Analyze");
    
this->analyzeJMenuItem->addActionListener([&]() {
    static thread_local ImageToolJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageToolJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->analyzeJMenuItemActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->processingJMenu->add(this->analyzeJMenuItem);
    
this->generateMirrorSpriteMenuItem->setText("Mirror Sprite Generator");
    
this->generateMirrorSpriteMenuItem->addActionListener([&]() {
    static thread_local ImageToolJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageToolJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->generateMirrorSpriteMenuItemActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->processingJMenu->add(this->generateMirrorSpriteMenuItem);
    
this->generateRotationSpriteJMenuItem->setText("Rotation Sprite Generator");
    
this->generateRotationSpriteJMenuItem->addActionListener([&]() {
    static thread_local ImageToolJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageToolJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->generateRotationSpriteJMenuItemActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->processingJMenu->add(this->generateRotationSpriteJMenuItem);
    
this->generateSpriteSplitterMenuItem->setText("Sprite Splitter Generator");
    
this->generateSpriteSplitterMenuItem->addActionListener([&]() {
    static thread_local ImageToolJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageToolJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->generateSpriteSplitterMenuItemActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->processingJMenu->add(this->generateSpriteSplitterMenuItem);
    
this->generateRotationMenuItem->setText("Rotate Image Generator");
    
this->generateRotationMenuItem->addActionListener([&]() {
    static thread_local ImageToolJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageToolJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->generateRotationMenuItemActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->processingJMenu->add(this->generateRotationMenuItem);
    
this->createStripImageJMenuItem->setText("Multi Image Unifier");
    
this->createStripImageJMenuItem->addActionListener([&]() {
    static thread_local ImageToolJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageToolJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->createStripImageJMenuItemActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->processingJMenu->add(this->createStripImageJMenuItem);
    
this->mirrorJMenuItem->setText("Mirror Image(s)");
    
this->mirrorJMenuItem->addActionListener([&]() {
    static thread_local ImageToolJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageToolJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->mirrorJMenuItemActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->processingJMenu->add(this->mirrorJMenuItem);
    
this->scaleImagesJMenuItem->setText("Scale Image(s)");
    
this->scaleImagesJMenuItem->addActionListener([&]() {
    static thread_local ImageToolJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageToolJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->scaleImagesJMenuItemActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->processingJMenu->add(this->scaleImagesJMenuItem);
    
this->canvasImagesJMenuItem->setText("Canvas Image(s)");
    
this->canvasImagesJMenuItem->addActionListener([&]() {
    static thread_local ImageToolJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageToolJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->canvasImagesJMenuItemActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->processingJMenu->add(this->canvasImagesJMenuItem);
    
this->createIconImagesJMenuItem->setText("Create Icon Image(s)");
    
this->createIconImagesJMenuItem->addActionListener([&]() {
    static thread_local ImageToolJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageToolJFrame* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->createIconsJMenuItemActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->processingJMenu->add(this->createIconImagesJMenuItem);
    
this->mainJMenuBar->add(this->processingJMenu);
    
setJMenuBar(this->mainJMenuBar);
    
pack();
    
}


    auto ImageToolJFrame::createStripImageJMenuItemActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            
    ImageUnifierJPanel* imageUnifierJPanel = new ImageUnifierJPanel(this->imageProcessorInput);;
    
this->jPanel1->removeAll();
    
this->jPanel1->add(imageUnifierJPanel);
    
this->jPanel1->updateUI();
    
ImageToolJFrame::imageProcessorInputCompositeInterface= imageUnifierJPanel;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "createStripImageJMenuItemActionPerformed", &e);
    
}

}


    auto ImageToolJFrame::okJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            this->logUtil->putF("Starting", this, "okJButtonActionPerformed");
    

    std::vector<ImageAnalysisResults*> imageAnalysisResultsArray = ImageAnalysis::getInstance()->process(this->imageProcessorInput->getBufferedImageArray(), this->getColorRangeInterface());;
    
this->jPanel1->removeAll();
    
this->jPanel1->add(new ImageAnalysisResultsJPanel(imageAnalysisResultsArray));
    
this->jPanel1->updateUI();
    
this->analysisActionJDialog->setVisible(false);
    
ImageToolJFrame::imageProcessorInputCompositeInterface= 
                                        nullptr
                                    ;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "okJButtonActionPerformed", &e);
    
}

}


    auto ImageToolJFrame::processingJMenuActionPerformed(java::awt::event::ActionEvent* evt) -> void{
}


    auto ImageToolJFrame::openImageJMenuItemActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            this->logUtil->putF("Starting", this, "openImageJMenuItemActionPerformed");
    
this->fileJDialog->setVisible(true);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "openImageJMenuItemActionPerformed", &e);
    
}

}


    auto ImageToolJFrame::onFiles(std::vector<File*> files) -> void{

        try {
            this->logUtil->putF(JavaString::valueOf(JavaString::valueOf("Reading ") +JavaString::valueOf(files.size())) +JavaString::valueOf(" files."), this, "onFiles");
    
Arrays::sort(files, [&]() {
    static thread_local ImageToolJFrame* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public Comparator<File*> {
    public:
    using Comparator<File*>::Comparator;
    ImageToolJFrame* outer = anonymousOuter0;

    public: int32_t compare(File* file1, File* file2){

    int32_t fileNameIndexValue1 = extractIndexNumberIfAnyFromFileName(file1->getName());;
    

    int32_t fileNameIndexValue2 = extractIndexNumberIfAnyFromFileName(file2->getName());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return fileNameIndexValue1 -fileNameIndexValue2;
    
}

    private: int32_t extractIndexNumberIfAnyFromFileName(std::string name){

    int32_t i = 0;;
    

        try {
            
    int32_t start = JavaString::lastIndexOf(name, '_') +1;;
    

    int32_t end = JavaString::lastIndexOf(name, '.');;
    

    std::string number = JavaString::substring(name, start, end);;
    
i= Integer.parseInt(number);
    

                //: 
} catch(Exception& e) 
            {
i= 0;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return i;
    
}

    };
    return new Anonymous0();
}());
    

    std::vector<BufferedImage*> bufferedImageArray = std::vector<BufferedImage*>(files.size());;
    




                        for (
    int32_t index = 0;index < files.size(); index++)
        {
bufferedImageArray[index]= ImageIO::read(files[index]);
    

                        if(bufferedImageArray[index] == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception(JavaString::valueOf("Unable to read file: ") +JavaString::valueOf(files[index]->getPath()));
                    

                                    }
                                
}

this->imageProcessorInput= new ImageProcessorInput(files, bufferedImageArray);
    
this->fileJDialog->setVisible(false);
    

                        if(ImageToolJFrame::imageProcessorInputCompositeInterface != 
                                    nullptr
                                )
                        
                                    {
                                    ImageToolJFrame::imageProcessorInputCompositeInterface->setImageProcessorInput(this->imageProcessorInput);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "onFiles", &e);
    
}

}


    auto ImageToolJFrame::fileJMenuActionPerformed(java::awt::event::ActionEvent* evt) -> void{
}


    auto ImageToolJFrame::analyzeJMenuItemActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            this->logUtil->putF("Starting", this, "analyzeJMenuItemActionPerformed");
    
this->analysisActionJDialog->setVisible(true);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "analyzeJMenuItemActionPerformed", &e);
    
}

}


    auto ImageToolJFrame::generateRotationSpriteJMenuItemActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            this->logUtil->putF("Starting", this, "generateRotationSpriteJMenuItemActionPerformed");
    

    RotationSpriteImageJPanel* spriteImageJPanel = new RotationSpriteImageJPanel(this->imageProcessorInput);;
    
this->jPanel1->removeAll();
    
this->jPanel1->add(spriteImageJPanel);
    
this->jPanel1->updateUI();
    
ImageToolJFrame::imageProcessorInputCompositeInterface= spriteImageJPanel;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "generateRotationSpriteJMenuItemActionPerformed", &e);
    
}

}


    auto ImageToolJFrame::generateSpriteSplitterMenuItemActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            this->logUtil->putF("Starting", this, "generateRotationSpriteJMenuItemActionPerformed");
    

    SpriteSplitterImageJPanel* imageJPanel = new SpriteSplitterImageJPanel(this->imageProcessorInput);;
    
this->jPanel1->removeAll();
    
this->jPanel1->add(imageJPanel);
    
this->jPanel1->updateUI();
    
ImageToolJFrame::imageProcessorInputCompositeInterface= imageJPanel;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "generateRotationMenuItemActionPerformed", &e);
    
}

}


    auto ImageToolJFrame::generateRotationMenuItemActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            this->logUtil->putF("Starting", this, "generateRotationSpriteJMenuItemActionPerformed");
    

    RotationImageJPanel* rotationImageJPanel = new RotationImageJPanel(this->imageProcessorInput);;
    
this->jPanel1->removeAll();
    
this->jPanel1->add(rotationImageJPanel);
    
this->jPanel1->updateUI();
    
ImageToolJFrame::imageProcessorInputCompositeInterface= rotationImageJPanel;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "generateRotationMenuItemActionPerformed", &e);
    
}

}


    auto ImageToolJFrame::scaleImagesJMenuItemActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, "scaleImagesJMenuItemActionPerformed");
    

    ResizeImageJPanel* resizeImageJPanel = new ResizeImageJPanel(this->imageProcessorInput);;
    
this->jPanel1->removeAll();
    
this->jPanel1->add(resizeImageJPanel);
    
this->jPanel1->updateUI();
    
ImageToolJFrame::imageProcessorInputCompositeInterface= resizeImageJPanel;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "scaleImagesJMenuItemActionPerformed", &e);
    
}

}


    auto ImageToolJFrame::createIconsJMenuItemActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, "createIconsJMenuItemActionPerformed");
    

    CreateIconImagesJPanel* createIconImagesJPanel = new CreateIconImagesJPanel(this->imageProcessorInput);;
    
this->jPanel1->removeAll();
    
this->jPanel1->add(createIconImagesJPanel);
    
this->jPanel1->updateUI();
    
ImageToolJFrame::imageProcessorInputCompositeInterface= createIconImagesJPanel;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "scaleImagesJMenuItemActionPerformed", &e);
    
}

}


    auto ImageToolJFrame::canvasImagesJMenuItemActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, "canvasImagesJMenuItemActionPerformed");
    

    CanvasImageJPanel* resizeImageJPanel = new CanvasImageJPanel(this->imageProcessorInput);;
    
this->jPanel1->removeAll();
    
this->jPanel1->add(resizeImageJPanel);
    
this->jPanel1->updateUI();
    
ImageToolJFrame::imageProcessorInputCompositeInterface= resizeImageJPanel;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "scaleImagesJMenuItemActionPerformed", &e);
    
}

}


    auto ImageToolJFrame::generateMirrorSpriteMenuItemActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            this->logUtil->putF("Starting", this, "generateMirrorSpriteJMenuItemActionPerformed");
    

    MirrorSpriteImageJPanel* spriteImageJPanel = new MirrorSpriteImageJPanel(this->imageProcessorInput);;
    
this->jPanel1->removeAll();
    
this->jPanel1->add(spriteImageJPanel);
    
this->jPanel1->updateUI();
    
ImageToolJFrame::imageProcessorInputCompositeInterface= spriteImageJPanel;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "generateMirrorSpriteJMenuItemActionPerformed", &e);
    
}

}


    auto ImageToolJFrame::mirrorJMenuItemActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            this->logUtil->putF("Starting", this, "generateMirrorJMenuItemActionPerformed");
    

    MirrorImageJPanel* mirrorImageJPanel = new MirrorImageJPanel(this->imageProcessorInput);;
    
this->jPanel1->removeAll();
    
this->jPanel1->add(mirrorImageJPanel);
    
this->jPanel1->updateUI();
    
ImageToolJFrame::imageProcessorInputCompositeInterface= mirrorImageJPanel;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "generateMirrorJMenuItemActionPerformed", &e);
    
}

}


    auto ImageToolJFrame::getColorRangeInterface() -> ColorRangeInterface*{

    ColorRangeInterface* colorRangeInterface = dynamic_cast<ColorRangeInterface*>(new ColorRange());;
    
colorRangeInterface->setMinRed((int32_t(this->getMinRedJTextField()->getText())));
    
colorRangeInterface->setMaxRed((int32_t(this->getMaxRedJTextField()->getText())));
    
colorRangeInterface->setMinGreen((int32_t(this->getMinGreenJTextField()->getText())));
    
colorRangeInterface->setMaxGreen((int32_t(this->getMaxGreenJTextField()->getText())));
    
colorRangeInterface->setMinBlue((int32_t(this->getMinBlueJTextField()->getText())));
    
colorRangeInterface->setMaxBlue((int32_t(this->getMaxBlueJTextField()->getText())));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return colorRangeInterface;
    
}


    auto ImageToolJFrame::getMaxBlueJTextField() -> javax::swing::JTextField*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->maxBlueJTextField;
    
}


    auto ImageToolJFrame::setMaxBlueJTextField(javax::swing::JTextField* maxBlueJTextField) -> void{
this->maxBlueJTextField= this->maxBlueJTextField;
    
}


    auto ImageToolJFrame::getMaxGreenJTextField() -> javax::swing::JTextField*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->maxGreenJTextField;
    
}


    auto ImageToolJFrame::setMaxGreenJTextField(javax::swing::JTextField* maxGreenJTextField) -> void{
this->maxGreenJTextField= this->maxGreenJTextField;
    
}


    auto ImageToolJFrame::getMaxRedJTextField() -> javax::swing::JTextField*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->maxRedJTextField;
    
}


    auto ImageToolJFrame::setMaxRedJTextField(javax::swing::JTextField* maxRedJTextField) -> void{
this->maxRedJTextField= this->maxRedJTextField;
    
}


    auto ImageToolJFrame::getMinBlueJTextField() -> javax::swing::JTextField*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->minBlueJTextField;
    
}


    auto ImageToolJFrame::setMinBlueJTextField(javax::swing::JTextField* minBlueJTextField) -> void{
this->minBlueJTextField= this->minBlueJTextField;
    
}


    auto ImageToolJFrame::getMinGreenJTextField() -> javax::swing::JTextField*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->minGreenJTextField;
    
}


    auto ImageToolJFrame::setMinGreenJTextField(javax::swing::JTextField* minGreenJTextField) -> void{
this->minGreenJTextField= this->minGreenJTextField;
    
}


    auto ImageToolJFrame::getMinRedJTextField() -> javax::swing::JTextField*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->minRedJTextField;
    
}


    auto ImageToolJFrame::setMinRedJTextField(javax::swing::JTextField* minRedJTextField) -> void{
this->minRedJTextField= this->minRedJTextField;
    
}




        #endif //ORG_ALLBINARY_IMAGE_GUI_IMAGETOOLJFRAME_CPP
