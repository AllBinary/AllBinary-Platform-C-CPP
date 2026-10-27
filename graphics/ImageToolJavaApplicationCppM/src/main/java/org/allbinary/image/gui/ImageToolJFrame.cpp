
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

class ImageToolJFrame: public javax::swing::JFrame, public FileJDialogListenerInterface {

    private: static inline ImageProcessorInputCompositeInterface* imageProcessorInputCompositeInterface;

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: FileJDialog* fileJDialog;

    private: ImageProcessorInput* imageProcessorInput;

public: ImageToolJFrame(){
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


    private: void initComponents(){
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
    
this->okJButton->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
okJButtonActionPerformed(evt);
    
}

                                }
                            );
    

    org::jdesktop::layout::GroupLayout* analysisActionJDialogLayout = new org::jdesktop::layout::GroupLayout(this->analysisActionJDialog->getContentPane());;
    
this->analysisActionJDialog->getContentPane()->setLayout(analysisActionJDialogLayout);
    
analysisActionJDialogLayout->setHorizontalGroup(analysisActionJDialogLayout->createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)->add(analysisActionJDialogLayout->createSequentialGroup()->addContainerGap()->add(analysisActionJDialogLayout->createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)->add(analysisActionJDialogLayout->createSequentialGroup()->add(analysisActionJDialogLayout->createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)->add(blueJLabel)->add(greenJLabel)->add(redJLabel)->add(colorRangeJLabel))->add(29, 29, 29)->add(analysisActionJDialogLayout->createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)->add(org.jdesktop.layout.GroupLayout.TRAILING, minJLabel, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 58, Short::MAX_VALUE)->add(analysisActionJDialogLayout->createParallelGroup(org.jdesktop.layout.GroupLayout.TRAILING, false)->add(org.jdesktop.layout.GroupLayout.LEADING, minBlueJTextField)->add(org.jdesktop.layout.GroupLayout.LEADING, minGreenJTextField)->add(org.jdesktop.layout.GroupLayout.LEADING, minRedJTextField, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 42, Short::MAX_VALUE)->add(org.jdesktop.layout.GroupLayout.LEADING, okJButton)))->addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)->add(analysisActionJDialogLayout->createParallelGroup(org.jdesktop.layout.GroupLayout.TRAILING)->add(org.jdesktop.layout.GroupLayout.LEADING, analysisActionJDialogLayout->createSequentialGroup()->add(analysisActionJDialogLayout->createParallelGroup(org.jdesktop.layout.GroupLayout.TRAILING, false)->add(org.jdesktop.layout.GroupLayout.LEADING, maxRedJTextField)->add(org.jdesktop.layout.GroupLayout.LEADING, analysisActionJDialogLayout->createSequentialGroup()->add(1, 1, 1)->add(analysisActionJDialogLayout->createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)->add(maxBlueJTextField)->add(maxGreenJTextField, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 43, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE))))->addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED, 17, Short::MAX_VALUE))->add(org.jdesktop.layout.GroupLayout.LEADING, maxJLabel, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 61, Short::MAX_VALUE))->addContainerGap())->add(org.jdesktop.layout.GroupLayout.TRAILING, analysisActionJDialogLayout->createSequentialGroup()->add(titleJLabel)->add(25, 25, 25)))));
    
analysisActionJDialogLayout->setVerticalGroup(analysisActionJDialogLayout->createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)->add(analysisActionJDialogLayout->createSequentialGroup()->add(titleJLabel)->addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)->add(analysisActionJDialogLayout->createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)->add(minJLabel)->add(colorRangeJLabel)->add(maxJLabel))->addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)->add(analysisActionJDialogLayout->createParallelGroup(org.jdesktop.layout.GroupLayout.TRAILING)->add(redJLabel)->add(analysisActionJDialogLayout->createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)->add(minRedJTextField, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)->add(maxRedJTextField, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)))->addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)->add(analysisActionJDialogLayout->createParallelGroup(org.jdesktop.layout.GroupLayout.TRAILING)->add(greenJLabel)->add(analysisActionJDialogLayout->createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)->add(minGreenJTextField, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)->add(maxGreenJTextField, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)))->addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)->add(analysisActionJDialogLayout->createParallelGroup(org.jdesktop.layout.GroupLayout.TRAILING)->add(blueJLabel)->add(analysisActionJDialogLayout->createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)->add(minBlueJTextField, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)->add(maxBlueJTextField, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)))->add(16, 16, 16)->add(okJButton)->addContainerGap(org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE)));
    
setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
    
getContentPane()->setLayout(new java::awt::GridLayout(1, 0));
    
this->jPanel1->setLayout(new java::awt::GridLayout(1, 0));
    
getContentPane()->add(this->jPanel1);
    
this->fileJMenu->setText("File");
    
this->fileJMenu->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
fileJMenuActionPerformed(evt);
    
}

                                }
                            );
    
this->openImageJMenuItem->setText("Open");
    
this->openImageJMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
openImageJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->fileJMenu->add(this->openImageJMenuItem);
    
this->mainJMenuBar->add(this->fileJMenu);
    
this->processingJMenu->setText("Processing");
    
this->processingJMenu->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
processingJMenuActionPerformed(evt);
    
}

                                }
                            );
    
this->analyzeJMenuItem->setText("Image Analyze");
    
this->analyzeJMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
analyzeJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->processingJMenu->add(this->analyzeJMenuItem);
    
this->generateMirrorSpriteMenuItem->setText("Mirror Sprite Generator");
    
this->generateMirrorSpriteMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
generateMirrorSpriteMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->processingJMenu->add(this->generateMirrorSpriteMenuItem);
    
this->generateRotationSpriteJMenuItem->setText("Rotation Sprite Generator");
    
this->generateRotationSpriteJMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
generateRotationSpriteJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->processingJMenu->add(this->generateRotationSpriteJMenuItem);
    
this->generateSpriteSplitterMenuItem->setText("Sprite Splitter Generator");
    
this->generateSpriteSplitterMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
generateSpriteSplitterMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->processingJMenu->add(this->generateSpriteSplitterMenuItem);
    
this->generateRotationMenuItem->setText("Rotate Image Generator");
    
this->generateRotationMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
generateRotationMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->processingJMenu->add(this->generateRotationMenuItem);
    
this->createStripImageJMenuItem->setText("Multi Image Unifier");
    
this->createStripImageJMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
createStripImageJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->processingJMenu->add(this->createStripImageJMenuItem);
    
this->mirrorJMenuItem->setText("Mirror Image(s)");
    
this->mirrorJMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
mirrorJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->processingJMenu->add(this->mirrorJMenuItem);
    
this->scaleImagesJMenuItem->setText("Scale Image(s)");
    
this->scaleImagesJMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
scaleImagesJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->processingJMenu->add(this->scaleImagesJMenuItem);
    
this->canvasImagesJMenuItem->setText("Canvas Image(s)");
    
this->canvasImagesJMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
canvasImagesJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->processingJMenu->add(this->canvasImagesJMenuItem);
    
this->createIconImagesJMenuItem->setText("Create Icon Image(s)");
    
this->createIconImagesJMenuItem->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
createIconsJMenuItemActionPerformed(evt);
    
}

                                }
                            );
    
this->processingJMenu->add(this->createIconImagesJMenuItem);
    
this->mainJMenuBar->add(this->processingJMenu);
    
setJMenuBar(this->mainJMenuBar);
    
pack();
    
}


    private: void createStripImageJMenuItemActionPerformed(java::awt::event::ActionEvent* evt){

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


    private: void okJButtonActionPerformed(java::awt::event::ActionEvent* evt){

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


    private: void processingJMenuActionPerformed(java::awt::event::ActionEvent* evt){
}


    private: void openImageJMenuItemActionPerformed(java::awt::event::ActionEvent* evt){

        try {
            this->logUtil->putF("Starting", this, "openImageJMenuItemActionPerformed");
    
this->fileJDialog->setVisible(true);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "openImageJMenuItemActionPerformed", &e);
    
}

}


    public: void onFiles(std::vector<File*> files){

        try {
            this->logUtil->putF("Reading " +files.size() +" files.", this, "onFiles");
    
Arrays::sort(files, class extends Comparator<File*>
                                {
                                
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

                                }
                            );
    

    std::vector<BufferedImage*> bufferedImageArray = std::vector<BufferedImage*>(files.length);;
    




                        for (
    int32_t index = 0;index < files.size(); index++)
        {
bufferedImageArray[index]= ImageIO::read(files[index]);
    

                        if(bufferedImageArray[index] == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw new Exception("Unable to read file: " +files[index].getPath());
                    

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


    private: void fileJMenuActionPerformed(java::awt::event::ActionEvent* evt){
}


    private: void analyzeJMenuItemActionPerformed(java::awt::event::ActionEvent* evt){

        try {
            this->logUtil->putF("Starting", this, "analyzeJMenuItemActionPerformed");
    
this->analysisActionJDialog->setVisible(true);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "analyzeJMenuItemActionPerformed", &e);
    
}

}


    private: void generateRotationSpriteJMenuItemActionPerformed(java::awt::event::ActionEvent* evt){

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


    private: void generateSpriteSplitterMenuItemActionPerformed(java::awt::event::ActionEvent* evt){

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


    private: void generateRotationMenuItemActionPerformed(java::awt::event::ActionEvent* evt){

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


    private: void scaleImagesJMenuItemActionPerformed(java::awt::event::ActionEvent* evt){

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


    private: void createIconsJMenuItemActionPerformed(java::awt::event::ActionEvent* evt){

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


    private: void canvasImagesJMenuItemActionPerformed(java::awt::event::ActionEvent* evt){

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


    private: void generateMirrorSpriteMenuItemActionPerformed(java::awt::event::ActionEvent* evt){

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


    private: void mirrorJMenuItemActionPerformed(java::awt::event::ActionEvent* evt){

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


    private: ColorRangeInterface* getColorRangeInterface(){

    ColorRangeInterface* colorRangeInterface = dynamic_cast<ColorRangeInterface*>(new ColorRange());;
    
colorRangeInterface->setMinRed((int32_t(this->getMinRedJTextField()->getText())).intValue());
    
colorRangeInterface->setMaxRed((int32_t(this->getMaxRedJTextField()->getText())).intValue());
    
colorRangeInterface->setMinGreen((int32_t(this->getMinGreenJTextField()->getText())).intValue());
    
colorRangeInterface->setMaxGreen((int32_t(this->getMaxGreenJTextField()->getText())).intValue());
    
colorRangeInterface->setMinBlue((int32_t(this->getMinBlueJTextField()->getText())).intValue());
    
colorRangeInterface->setMaxBlue((int32_t(this->getMaxBlueJTextField()->getText())).intValue());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return colorRangeInterface;
    
}


    public: javax::swing::JTextField* getMaxBlueJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxBlueJTextField;
    
}


    public: void setMaxBlueJTextField(javax::swing::JTextField* maxBlueJTextField){
this->maxBlueJTextField= this->maxBlueJTextField;
    
}


    public: javax::swing::JTextField* getMaxGreenJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxGreenJTextField;
    
}


    public: void setMaxGreenJTextField(javax::swing::JTextField* maxGreenJTextField){
this->maxGreenJTextField= this->maxGreenJTextField;
    
}


    public: javax::swing::JTextField* getMaxRedJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxRedJTextField;
    
}


    public: void setMaxRedJTextField(javax::swing::JTextField* maxRedJTextField){
this->maxRedJTextField= this->maxRedJTextField;
    
}


    public: javax::swing::JTextField* getMinBlueJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->minBlueJTextField;
    
}


    public: void setMinBlueJTextField(javax::swing::JTextField* minBlueJTextField){
this->minBlueJTextField= this->minBlueJTextField;
    
}


    public: javax::swing::JTextField* getMinGreenJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->minGreenJTextField;
    
}


    public: void setMinGreenJTextField(javax::swing::JTextField* minGreenJTextField){
this->minGreenJTextField= this->minGreenJTextField;
    
}


    public: javax::swing::JTextField* getMinRedJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->minRedJTextField;
    
}


    public: void setMinRedJTextField(javax::swing::JTextField* minRedJTextField){
this->minRedJTextField= this->minRedJTextField;
    
}


    private: javax::swing::JDialog* analysisActionJDialog;

    private: javax::swing::JMenuItem* analyzeJMenuItem;

    private: javax::swing::JLabel* blueJLabel;

    private: javax::swing::JLabel* colorRangeJLabel;

    private: javax::swing::JMenuItem* createStripImageJMenuItem;

    private: javax::swing::JMenu* fileJMenu;

    private: javax::swing::JMenuItem* generateSpriteSplitterMenuItem;

    private: javax::swing::JMenuItem* generateRotationMenuItem;

    private: javax::swing::JMenuItem* generateMirrorSpriteMenuItem;

    private: javax::swing::JMenuItem* generateRotationSpriteJMenuItem;

    private: javax::swing::JLabel* greenJLabel;

    private: javax::swing::JPanel* jPanel1;

    private: javax::swing::JMenuBar* mainJMenuBar;

    private: javax::swing::JTextField* maxBlueJTextField;

    private: javax::swing::JTextField* maxGreenJTextField;

    private: javax::swing::JLabel* maxJLabel;

    private: javax::swing::JTextField* maxRedJTextField;

    private: javax::swing::JTextField* minBlueJTextField;

    private: javax::swing::JTextField* minGreenJTextField;

    private: javax::swing::JLabel* minJLabel;

    private: javax::swing::JTextField* minRedJTextField;

    private: javax::swing::JMenuItem* mirrorJMenuItem;

    private: javax::swing::JButton* okJButton;

    private: javax::swing::JMenuItem* openImageJMenuItem;

    private: javax::swing::JMenu* processingJMenu;

    private: javax::swing::JLabel* redJLabel;

    private: javax::swing::JMenuItem* scaleImagesJMenuItem;

    private: javax::swing::JMenuItem* canvasImagesJMenuItem;

    private: javax::swing::JMenuItem* createIconImagesJMenuItem;

    private: javax::swing::JLabel* titleJLabel;

};

            

