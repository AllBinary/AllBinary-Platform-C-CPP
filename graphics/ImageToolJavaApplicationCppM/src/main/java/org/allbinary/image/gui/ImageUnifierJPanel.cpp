
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
        



        #ifndef ORG_ALLBINARY_IMAGE_GUI_IMAGEUNIFIERJPANEL_CPP
        #define ORG_ALLBINARY_IMAGE_GUI_IMAGEUNIFIERJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/gui/ImageUnifierJPanel.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Double.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/io/File.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/FileWrapperUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/image/ImagePersistanceUtil.h>

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageProcessorInputCompositeInterface.h>

      
#include <org/allbinary/media/image/ImageStrings.h>

      
#include <org/allbinary/media/image/ImageUnifierCell.h>

      
#include <org/allbinary/media/image/ImageUnifierProperties.h>

      
#include <org/allbinary/media/image/ImageUnifierUtil.h>

      
#include <org/allbinary/media/image/ImageUtil.h>

      
#include <org/allbinary/media/image/ImagesRatioUtil.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
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

#include <javax/swing/LayoutStyle.h>

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

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/LayoutStyle.h>

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

#include <javax/swing/LayoutStyle.h>

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

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/gui/JPanel.h"
#include "org/allbinary/image/gui/ImageIconUnique.h"
#include "org/allbinary/image/gui/DefaultListModel.h"
#include "org/allbinary/image/gui/ImageIcon.h"
#include "org/allbinary/image/gui/Icon.h"
#include "org/allbinary/image/gui/JLabel.h"
#include "org/allbinary/image/gui/JScrollPane.h"
#include "org/allbinary/image/gui/JList.h"
#include "org/allbinary/image/gui/JButton.h"
#include "org/allbinary/image/gui/JTextField.h"
#include "org/allbinary/image/gui/Dimension.h"
#include "org/allbinary/image/gui/ActionListener.h"
#include "org/allbinary/image/gui/ActionEvent.h"
#include "org/allbinary/image/gui/PropertyChangeListener.h"
#include "org/allbinary/image/gui/PropertyChangeEvent.h"
#include "org/allbinary/image/gui/KeyAdapter.h"
#include "org/allbinary/image/gui/KeyEvent.h"
#include "org/allbinary/image/gui/GroupLayout.h"
#include "org/allbinary/image/gui/Short.h"


ImageUnifierJPanel::ImageUnifierJPanel(ImageProcessorInput* imageProcessorInput) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), imageStrings(ImageStrings::getInstance()), imagesRatioUtil(ImagesRatioUtil::getInstance()){
this->initComponents();
    
this->setImageProcessorInput(imageProcessorInput);
    
}


    auto ImageUnifierJPanel::init() -> void{

        try {
            
    ImageProcessorInput* imageProcessorInput = this->getImageProcessorInput();;
    

    std::vector<BufferedImage*> bufferedImageArray = imageProcessorInput->getBufferedImageArray();;
    
this->icon= std::vector<ImageIconUnique*>(bufferedImageArray.size());
    

    DefaultListModel* defaultListModel = new DefaultListModel();;
    




                        for (
    int32_t index = 0;index < bufferedImageArray.size(); index++)
        {

    double width = bufferedImageArray[index]->getWidth();;
    

    double height = bufferedImageArray[index]->getHeight();;
    

    int32_t newWidth = 52;;
    

    double oldRatio = width /height;;
    

    int32_t newHeight = static_cast<int32_t>((newWidth /oldRatio));;
    

    BufferedImage* iconBufferedImage = ImageUtil::getInstance()->createBufferedImage(bufferedImageArray[index], newWidth, newHeight, true);;
    
this->icon[index]= new ImageIconUnique(iconBufferedImage, index);
    
defaultListModel->addElement(this->icon[index]);
    
}

this->imageJList->setModel(defaultListModel);
    
this->updateOnPropertiesChange();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, &e);
    
}

}


    auto ImageUnifierJPanel::updateImage() -> void{

        try {
            
    std::vector<BufferedImage*> bufferedImageArray = this->getImageProcessorInput()->getBufferedImageArray();;
    

    std::vector<BufferedImage*> tempBufferedImageArray = std::vector<BufferedImage*>(bufferedImageArray.size());;
    




                        for (
    int32_t index = 0;index < bufferedImageArray.size(); index++)
        {

    ImageIconUnique* indexedImageIcon = dynamic_cast<ImageIconUnique*>(this->imageJList->getModel()->getElementAt(index));;
    

    BufferedImage* bufferedImage = ImageUtil::getInstance()->createBufferedImage(bufferedImageArray[indexedImageIcon->getId()], this->imageUnifierProperties->getImageUnifierCell()->getWidth(), this->imageUnifierProperties->getImageUnifierCell()->getHeight(), false);;
    
tempBufferedImageArray[index]= bufferedImage;
    
}


    int32_t totalImages = this->imageUnifierProperties->getRows() *this->imageUnifierProperties->getColumns();;
    

    double averageRatio = this->imagesRatioUtil->getAverage(tempBufferedImageArray, totalImages);;
    

    std::string averageRatioString = (double(averageRatio)).toString();;
    

                        if(averageRatioString.size() > 4)
                        
                                    {
                                    averageRatioString= JavaString::substring(averageRatioString, 0, 4);
    

                                    }
                                
this->avgRatioJTextField->setText(averageRatioString);
    
this->fudgeItJButton->setEnabled(false);
    

                        if(!this->imagesRatioUtil->isEqual(tempBufferedImageArray, totalImages))
                        
                                    {
                                    
                        if(this->isImageFillIn)
                        
                                    {
                                    this->fudgeItJButton->setEnabled(true);
    

                                    }
                                

                                    }
                                
this->updateImage(tempBufferedImageArray);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "updateImage", &e);
    
}

}


    auto ImageUnifierJPanel::updateImageWithFudgedImages() -> void{

        try {
            
    std::vector<BufferedImage*> bufferedImageArray = this->getImageProcessorInput()->getBufferedImageArray();;
    

    std::vector<BufferedImage*> tempBufferedImageArray = std::vector<BufferedImage*>(bufferedImageArray.size());;
    




                        for (
    int32_t index = 0;index < bufferedImageArray.size(); index++)
        {

    ImageIconUnique* indexedImageIcon = dynamic_cast<ImageIconUnique*>(this->imageJList->getModel()->getElementAt(index));;
    

    BufferedImage* bufferedImage = ImageUtil::getInstance()->createBufferedImage(bufferedImageArray[indexedImageIcon->getId()], this->imageUnifierProperties->getImageUnifierCell()->getWidth(), this->imageUnifierProperties->getImageUnifierCell()->getHeight(), false);;
    
tempBufferedImageArray[index]= bufferedImage;
    
}


    int32_t totalImages = this->imageUnifierProperties->getRows() *this->imageUnifierProperties->getColumns();;
    

    double averageRatio = this->imagesRatioUtil->getAverage(tempBufferedImageArray, totalImages);;
    

    std::vector<BufferedImage*> fudgedBufferedImageArray = imagesRatioUtil->fudge(tempBufferedImageArray, totalImages, averageRatio);;
    
this->updateImage(fudgedBufferedImageArray);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "updateImageWithFudgedImages", &e);
    
}

}


    auto ImageUnifierJPanel::updateImage(std::vector<BufferedImage*> tempBufferedImageArray) -> void{
this->result= ImageUnifierUtil::getInstance()->getImage(tempBufferedImageArray, this->imageUnifierProperties);
    

    Icon* image = new ImageIcon(this->result);;
    

    JLabel* label = new JLabel(image);;
    
this->jScrollPane2->getViewport()->add(label);
    
this->updateUI();
    
}


    auto ImageUnifierJPanel::updateOnPropertiesChange() -> void{

                        if(this->rowsJTextField->getText().length() > 0 && this->columnsJTextField->getText().length() > 0 && this->cellWidthJTextField->getText().length() > 0 && this->cellHeightJTextField->getText().length() > 0)
                        
                                    {
                                    this->imageUnifierProperties= new ImageUnifierProperties();
    
this->imageUnifierProperties->setRows(int32_t(this->rowsJTextField->getText()));
    
this->imageUnifierProperties->setColumns(int32_t(this->columnsJTextField->getText()));
    

    ImageUnifierCell* imageUnifierCell = new ImageUnifierCell(int32_t(this->cellWidthJTextField->getText()), int32_t(this->cellHeightJTextField->getText()));;
    
this->imageUnifierProperties->setImageUnifierCell(imageUnifierCell);
    

    double cellRatio = (imageUnifierCell->getWidth() /imageUnifierCell->getHeight());;
    

    std::string cellRatioString = (double(cellRatio)).toString();;
    

                        if(cellRatioString.size() > 4)
                        
                                    {
                                    cellRatioString= JavaString::substring(cellRatioString, 0, 4);
    

                                    }
                                
this->cellRatioJTextField->setText(cellRatioString);
    
this->updateImage();
    

                                    }
                                
}


    auto ImageUnifierJPanel::initComponents() -> void{

    CommonPhoneStrings* commonPhoneStrings = CommonPhoneStrings::getInstance();;
    
this->jScrollPane1= new javax::swing::JScrollPane();
    
this->imageJList= new javax::swing::JList();
    
this->jScrollPane2= new javax::swing::JScrollPane();
    
this->jPanel1= new javax::swing::JPanel();
    
this->jButton1= new javax::swing::JButton();
    
this->upJButton= new javax::swing::JButton();
    
this->downJButton= new javax::swing::JButton();
    
this->fudgeItJButton= new javax::swing::JButton();
    
this->jLabel2= new javax::swing::JLabel();
    
this->columnsJTextField= new javax::swing::JTextField();
    
this->jLabel1= new javax::swing::JLabel();
    
this->rowsJTextField= new javax::swing::JTextField();
    
this->jLabel3= new javax::swing::JLabel();
    
this->cellWidthJTextField= new javax::swing::JTextField();
    
this->jLabel4= new javax::swing::JLabel();
    
this->cellHeightJTextField= new javax::swing::JTextField();
    
this->jLabel5= new javax::swing::JLabel();
    
this->cellRatioJTextField= new javax::swing::JTextField();
    
this->jLabel6= new javax::swing::JLabel();
    
this->avgRatioJTextField= new javax::swing::JTextField();
    
this->jButton2= new javax::swing::JButton();
    
this->jButtonOrder= new javax::swing::JButton();
    
setMinimumSize(new java::awt::Dimension(500, 375));
    
setPreferredSize(new java::awt::Dimension(0, 0));
    
this->imageJList->setMinimumSize(new java::awt::Dimension(50, 0));
    
this->jScrollPane1->setViewportView(this->imageJList);
    
this->jButton1->setText("Save");
    
this->jButton1->addActionListener([&]() {
    static thread_local ImageUnifierJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageUnifierJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->jButton1ActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->upJButton->setText("Up");
    
this->upJButton->addActionListener([&]() {
    static thread_local ImageUnifierJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageUnifierJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->upJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->downJButton->setText("Down");
    
this->downJButton->addActionListener([&]() {
    static thread_local ImageUnifierJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageUnifierJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->downJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->fudgeItJButton->setText("Fudge It!");
    
this->fudgeItJButton->addActionListener([&]() {
    static thread_local ImageUnifierJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageUnifierJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->fudgeItJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel2->setText("Columns:");
    
this->columnsJTextField->setText(commonPhoneStrings->TWO);
    
this->columnsJTextField->addActionListener([&]() {
    static thread_local ImageUnifierJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageUnifierJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->columnsJTextFieldActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->columnsJTextField->addPropertyChangeListener([&]() {
    static thread_local ImageUnifierJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::beans::PropertyChangeListener {
    public:
    using java::beans::PropertyChangeListener::PropertyChangeListener;
    ImageUnifierJPanel* outer = anonymousOuter0;

    public: void propertyChange(java::beans::PropertyChangeEvent* evt){
outer->columnsJTextFieldPropertyChange(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->columnsJTextField->addKeyListener([&]() {
    static thread_local ImageUnifierJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::KeyAdapter {
    public:
    using java::awt::event::KeyAdapter::KeyAdapter;
    ImageUnifierJPanel* outer = anonymousOuter0;

    public: void keyPressed(java::awt::event::KeyEvent* evt){
outer->columnsJTextFieldKeyPressed(evt);
    
}

    public: void keyTyped(java::awt::event::KeyEvent* evt){
outer->columnsJTextFieldKeyTyped(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel1->setText("Rows:");
    
this->rowsJTextField->setText(commonPhoneStrings->TWO);
    
this->rowsJTextField->addActionListener([&]() {
    static thread_local ImageUnifierJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageUnifierJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->rowsJTextFieldActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel3->setText("Cell Width:");
    
this->cellWidthJTextField->setText("200");
    
this->cellWidthJTextField->addActionListener([&]() {
    static thread_local ImageUnifierJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageUnifierJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->cellWidthJTextFieldActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel4->setText("Cell Height:");
    
this->cellHeightJTextField->setText("150");
    
this->cellHeightJTextField->addActionListener([&]() {
    static thread_local ImageUnifierJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageUnifierJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->cellHeightJTextFieldActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel5->setText("Cell Ratio:");
    
this->cellRatioJTextField->setEditable(false);
    
this->jLabel6->setText("Avg Image Ratio:");
    
this->avgRatioJTextField->setEditable(false);
    
this->jButton2->setText(this->commonStrings->UPDATE);
    
this->jButton2->addActionListener([&]() {
    static thread_local ImageUnifierJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageUnifierJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->jButton2ActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jButtonOrder->setText("Order");
    
this->jButtonOrder->addActionListener([&]() {
    static thread_local ImageUnifierJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    ImageUnifierJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->jButtonOrderActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    

    javax::swing::GroupLayout* jPanel1Layout = new javax::swing::GroupLayout(this->jPanel1);;
    
this->jPanel1->setLayout(jPanel1Layout);
    
jPanel1Layout->setHorizontalGroup(jPanel1Layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(GroupLayout::Alignment->TRAILING, jPanel1Layout->createSequentialGroup()->addContainerGap()->addGroup(jPanel1Layout->createParallelGroup(GroupLayout::Alignment->TRAILING)->addComponent(jButton1, GroupLayout::DEFAULT_SIZE, 151, Short::MAX_VALUE)->addGroup(jPanel1Layout->createSequentialGroup()->addComponent(upJButton, GroupLayout::PREFERRED_SIZE, 71, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED, 10, Short::MAX_VALUE)->addComponent(downJButton, GroupLayout::PREFERRED_SIZE, 70, GroupLayout::PREFERRED_SIZE))->addComponent(fudgeItJButton, GroupLayout::Alignment->LEADING, GroupLayout::DEFAULT_SIZE, 151, Short::MAX_VALUE)->addGroup(GroupLayout::Alignment->LEADING, jPanel1Layout->createSequentialGroup()->addComponent(jLabel3)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED, 99, GroupLayout::PREFERRED_SIZE))->addGroup(GroupLayout::Alignment->LEADING, jPanel1Layout->createSequentialGroup()->addComponent(jLabel4)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED, 96, GroupLayout::PREFERRED_SIZE))->addComponent(avgRatioJTextField, GroupLayout::Alignment->LEADING, GroupLayout::DEFAULT_SIZE, 151, Short::MAX_VALUE)->addComponent(jLabel6, GroupLayout::Alignment->LEADING, GroupLayout::DEFAULT_SIZE, 151, Short::MAX_VALUE)->addComponent(cellRatioJTextField, GroupLayout::Alignment->LEADING, GroupLayout::DEFAULT_SIZE, 151, Short::MAX_VALUE)->addComponent(jLabel5, GroupLayout::Alignment->LEADING, GroupLayout::DEFAULT_SIZE, 151, Short::MAX_VALUE)->addComponent(cellHeightJTextField, GroupLayout::Alignment->LEADING, GroupLayout::DEFAULT_SIZE, 151, Short::MAX_VALUE)->addComponent(cellWidthJTextField, GroupLayout::Alignment->LEADING, GroupLayout::DEFAULT_SIZE, 151, Short::MAX_VALUE)->addComponent(jButton2, GroupLayout::Alignment->LEADING, GroupLayout::DEFAULT_SIZE, 151, Short::MAX_VALUE)->addGroup(GroupLayout::Alignment->LEADING, jPanel1Layout->createSequentialGroup()->addGroup(jPanel1Layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addComponent(jLabel2)->addComponent(jLabel1))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(jPanel1Layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addComponent(rowsJTextField, GroupLayout::DEFAULT_SIZE, 103, Short::MAX_VALUE)->addGroup(jPanel1Layout->createSequentialGroup()->addComponent(columnsJTextField, GroupLayout::DEFAULT_SIZE, 102, Short::MAX_VALUE)->addGap(1, 1, 1))))->addComponent(jButtonOrder, GroupLayout::DEFAULT_SIZE, 151, Short::MAX_VALUE))->addContainerGap()));
    
jPanel1Layout->setVerticalGroup(jPanel1Layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(jPanel1Layout->createSequentialGroup()->addContainerGap()->addComponent(jButton1)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(jPanel1Layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(upJButton)->addComponent(downJButton))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(jButtonOrder)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(fudgeItJButton)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(jPanel1Layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(jLabel2)->addComponent(columnsJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(jPanel1Layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(jLabel1)->addComponent(rowsJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(jLabel3)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(cellWidthJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(jLabel4)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(cellHeightJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(jButton2)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(jLabel5)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED, GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE)->addComponent(cellRatioJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addGap(7, 7, 7)->addComponent(jLabel6)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(avgRatioJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addGap(66, 66, 66)));
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addComponent(jScrollPane1, GroupLayout::PREFERRED_SIZE, 84, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(jPanel1, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addComponent(jScrollPane2, GroupLayout::DEFAULT_SIZE, 527, Short::MAX_VALUE)));
    
layout->setVerticalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(GroupLayout::Alignment->TRAILING, layout->createSequentialGroup()->addGroup(layout->createParallelGroup(GroupLayout::Alignment->TRAILING)->addComponent(jPanel1, GroupLayout::Alignment->LEADING, 0, 445, Short::MAX_VALUE)->addComponent(jScrollPane2, GroupLayout::Alignment->LEADING, GroupLayout::DEFAULT_SIZE, 445, Short::MAX_VALUE)->addComponent(jScrollPane1, GroupLayout::Alignment->LEADING, GroupLayout::DEFAULT_SIZE, 445, Short::MAX_VALUE))->addContainerGap()));
    
}


    auto ImageUnifierJPanel::jButton2ActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->updateOnPropertiesChange();
    
}


    auto ImageUnifierJPanel::columnsJTextFieldKeyPressed(java::awt::event::KeyEvent* evt) -> void{
}


    auto ImageUnifierJPanel::columnsJTextFieldKeyTyped(java::awt::event::KeyEvent* evt) -> void{
}


    auto ImageUnifierJPanel::columnsJTextFieldPropertyChange(java::beans::PropertyChangeEvent* evt) -> void{
}


    auto ImageUnifierJPanel::fudgeItJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->updateImageWithFudgedImages();
    
}


    auto ImageUnifierJPanel::cellHeightJTextFieldActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->updateOnPropertiesChange();
    
}


    auto ImageUnifierJPanel::cellWidthJTextFieldActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->updateOnPropertiesChange();
    
}


    auto ImageUnifierJPanel::columnsJTextFieldActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->updateOnPropertiesChange();
    
}


    auto ImageUnifierJPanel::rowsJTextFieldActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->updateOnPropertiesChange();
    
}


    auto ImageUnifierJPanel::jButton1ActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            
    std::vector<File*> fileArray = this->imageProcessorInput->getFiles();;
    

    File* file = fileArray[0];;
    

    std::string filePath = file->getAbsolutePath();;
    

    int32_t extensionIndex = JavaString::indexOf(filePath, this->imageStrings->PNG_EXTENSION);;
    
filePath= (new StringMaker())->append(JavaString::substring(filePath, 0, extensionIndex))->append(CommonSeps::getInstance()->UNDERSCORE)->appendint(this->imageUnifierProperties->getColumns())->append("_By_")->appendint(this->imageUnifierProperties->getRows())->append("_Unified")->append(this->imageStrings->PNG_EXTENSION)->toString();
    
this->logUtil->putF(JavaString::valueOf("New File Path: ") +JavaString::valueOf(filePath), this, StringUtil::getInstance()->EMPTY_STRING);
    

    File* outputFile = new File(filePath);;
    
ImagePersistanceUtil::getInstance()->saveWithBatik(FileWrapperUtil::wrapFile(outputFile), this->result);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "jButton1ActionPerformed", &e);
    
}

}


    auto ImageUnifierJPanel::downJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{

    int32_t index = this->imageJList->getSelectedIndex();;
    

    DefaultListModel* defaultListModel = dynamic_cast<DefaultListModel*>(this->imageJList->getModel());;
    

                        if(index >= 0 && index +1 < defaultListModel->size())
                        
                                    {
                                    
    ImageIconUnique* indexedImageIcon = dynamic_cast<ImageIconUnique*>(defaultListModel->remove(index));;
    
defaultListModel->insertElementAt(indexedImageIcon, index +1);
    
this->imageJList->setSelectedIndex(index +1);
    
this->updateImage();
    

                                    }
                                
}


    auto ImageUnifierJPanel::upJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{

    int32_t index = this->imageJList->getSelectedIndex();;
    

                        if(index > 0)
                        
                                    {
                                    
    DefaultListModel* defaultListModel = dynamic_cast<DefaultListModel*>(this->imageJList->getModel());;
    

    ImageIconUnique* indexedImageIcon = dynamic_cast<ImageIconUnique*>(defaultListModel->remove(index));;
    
defaultListModel->insertElementAt(indexedImageIcon, index -1);
    
this->imageJList->setSelectedIndex(index -1);
    
this->updateImage();
    

                                    }
                                
}


    auto ImageUnifierJPanel::jButtonOrderActionPerformed(java::awt::event::ActionEvent* evt) -> void{

    DefaultListModel* defaultListModel = dynamic_cast<DefaultListModel*>(this->imageJList->getModel());;
    

    int32_t size = defaultListModel->size();;
    

    int32_t last = size -1;;
    




                        for (
    int32_t index = last;index >= 0; index--)
        {

    ImageIconUnique* indexedImageIcon = dynamic_cast<ImageIconUnique*>(defaultListModel->remove(last));;
    
defaultListModel->insertElementAt(indexedImageIcon, last -index);
    
}


                        if(size > 0)
                        
                                    {
                                    this->imageJList->setSelectedIndex(0);
    
this->updateImage();
    

                                    }
                                
}


    auto ImageUnifierJPanel::getImageProcessorInput() -> ImageProcessorInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->imageProcessorInput;
    
}


    auto ImageUnifierJPanel::setImageProcessorInput(ImageProcessorInput* imageProcessorInput) -> void{
this->imageProcessorInput= imageProcessorInput;
    
this->init();
    
}




        #endif //ORG_ALLBINARY_IMAGE_GUI_IMAGEUNIFIERJPANEL_CPP
