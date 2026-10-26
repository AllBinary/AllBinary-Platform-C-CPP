
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "ImageIconUnique.h"
#include "DefaultListModel.h"
#include "ImageIcon.h"
#include "Icon.h"
#include "JLabel.h"
#include "JScrollPane.h"
#include "JList.h"
#include "JButton.h"
#include "JTextField.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "PropertyChangeListener.h"
#include "PropertyChangeEvent.h"
#include "KeyAdapter.h"
#include "KeyEvent.h"
#include "GroupLayout.h"
#include "Short.h"

class ImageUnifierJPanel: public javax::swing::JPanel, public ImageProcessorInputCompositeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const ImageStrings imageStrings = ImageStrings::getInstance();

    private: const ImagesRatioUtil imagesRatioUtil = ImagesRatioUtil::getInstance();

    private: ImageProcessorInput imageProcessorInput;

    private: std::vector<ImageIconUnique> icon;

    private: ImageUnifierProperties imageUnifierProperties;

    private: BufferedImage result;

    private: bool isImageFillIn = true;

public: ImageUnifierJPanel(ImageProcessorInput imageProcessorInput){
this->initComponents();
    
this->setImageProcessorInput(imageProcessorInput);
    
}


    public: void init(){

        try {
            
    ImageProcessorInput imageProcessorInput = this->getImageProcessorInput();;
    

    std::vector<BufferedImage> bufferedImageArray = imageProcessorInput.getBufferedImageArray();;
    
this->icon= std::vector<ImageIconUnique>(bufferedImageArray.length);
    

    DefaultListModel defaultListModel = DefaultListModel();;
    




                        for (
    int32_t index = 0;index < bufferedImageArray.size(); index++)
        {

    double width = bufferedImageArray[index].getWidth();;
    

    double height = bufferedImageArray[index].getHeight();;
    

    int32_t newWidth = 52;;
    

    double oldRatio = width /height;;
    

    int32_t newHeight = static_cast<int32_t>((newWidth /oldRatio));;
    

    BufferedImage iconBufferedImage = ImageUtil::getInstance().createBufferedImage(bufferedImageArray[index], newWidth, newHeight, true);;
    
this->icon[index]= ImageIconUnique(iconBufferedImage, index);
    
defaultListModel.addElement(this->icon[index]);
    
}

this->imageJList.setModel(defaultListModel);
    
this->updateOnPropertiesChange();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.INIT, e);
    
}

}


    private: void updateImage(){

        try {
            
    std::vector<BufferedImage> bufferedImageArray = this->getImageProcessorInput().getBufferedImageArray();;
    

    std::vector<BufferedImage> tempBufferedImageArray = std::vector<BufferedImage>(bufferedImageArray.length);;
    




                        for (
    int32_t index = 0;index < bufferedImageArray.size(); index++)
        {

    ImageIconUnique indexedImageIcon = this->imageJList.getModel().getElementAt(index);;
    

    BufferedImage bufferedImage = ImageUtil::getInstance().createBufferedImage(bufferedImageArray[indexedImageIcon.getId()], this->imageUnifierProperties.getImageUnifierCell().getWidth(), this->imageUnifierProperties.getImageUnifierCell().getHeight(), false);;
    
tempBufferedImageArray[index]= bufferedImage;
    
}


    int32_t totalImages = this->imageUnifierProperties.getRows() *this->imageUnifierProperties.getColumns();;
    

    double averageRatio = this->imagesRatioUtil.getAverage(tempBufferedImageArray, totalImages);;
    

    std::string averageRatioString = number(averageRatio).toString();;
    

                        if(averageRatioString.size() > 4)
                        
                                    {
                                    averageRatioString= averageRatioString.substring(0, 4);
    

                                    }
                                
this->avgRatioJTextField.setText(averageRatioString);
    
this->fudgeItJButton.setEnabled(false);
    

                        if(!this->imagesRatioUtil.isEqual(tempBufferedImageArray, totalImages))
                        
                                    {
                                    
                        if(this->isImageFillIn)
                        
                                    {
                                    this->fudgeItJButton.setEnabled(true);
    

                                    }
                                

                                    }
                                
this->updateImage(tempBufferedImageArray);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "updateImage", e);
    
}

}


    private: void updateImageWithFudgedImages(){

        try {
            
    std::vector<BufferedImage> bufferedImageArray = this->getImageProcessorInput().getBufferedImageArray();;
    

    std::vector<BufferedImage> tempBufferedImageArray = std::vector<BufferedImage>(bufferedImageArray.length);;
    




                        for (
    int32_t index = 0;index < bufferedImageArray.size(); index++)
        {

    ImageIconUnique indexedImageIcon = this->imageJList.getModel().getElementAt(index);;
    

    BufferedImage bufferedImage = ImageUtil::getInstance().createBufferedImage(bufferedImageArray[indexedImageIcon.getId()], this->imageUnifierProperties.getImageUnifierCell().getWidth(), this->imageUnifierProperties.getImageUnifierCell().getHeight(), false);;
    
tempBufferedImageArray[index]= bufferedImage;
    
}


    int32_t totalImages = this->imageUnifierProperties.getRows() *this->imageUnifierProperties.getColumns();;
    

    double averageRatio = this->imagesRatioUtil.getAverage(tempBufferedImageArray, totalImages);;
    

    std::vector<BufferedImage> fudgedBufferedImageArray = imagesRatioUtil.fudge(tempBufferedImageArray, totalImages, averageRatio);;
    
this->updateImage(fudgedBufferedImageArray);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "updateImageWithFudgedImages", e);
    
}

}


    private: void updateImage(std::vector<BufferedImage> tempBufferedImageArray){
this->result= ImageUnifierUtil::getInstance().getImage(tempBufferedImageArray, this->imageUnifierProperties);
    

    Icon image = ImageIcon(this->result);;
    

    JLabel label = JLabel(image);;
    
this->jScrollPane2.getViewport().add(label);
    
this->updateUI();
    
}


    private: void updateOnPropertiesChange(){

                        if(this->rowsJTextField.getText().length() > 0 && this->columnsJTextField.getText().length() > 0 && this->cellWidthJTextField.getText().length() > 0 && this->cellHeightJTextField.getText().length() > 0)
                        
                                    {
                                    this->imageUnifierProperties= ImageUnifierProperties();
    
this->imageUnifierProperties.setRows(Integer(this->rowsJTextField.getText()));
    
this->imageUnifierProperties.setColumns(Integer(this->columnsJTextField.getText()));
    

    ImageUnifierCell imageUnifierCell = ImageUnifierCell(Integer(this->cellWidthJTextField.getText()), Integer(this->cellHeightJTextField.getText()));;
    
this->imageUnifierProperties.setImageUnifierCell(imageUnifierCell);
    

    double cellRatio = (imageUnifierCell.getWidth() /imageUnifierCell.getHeight());;
    

    std::string cellRatioString = number(cellRatio).toString();;
    

                        if(cellRatioString.size() > 4)
                        
                                    {
                                    cellRatioString= cellRatioString.substring(0, 4);
    

                                    }
                                
this->cellRatioJTextField.setText(cellRatioString);
    
this->updateImage();
    

                                    }
                                
}


    private: void initComponents(){

    CommonPhoneStrings commonPhoneStrings = CommonPhoneStrings::getInstance();;
    
this->jScrollPane1= javax::swing::JScrollPane();
    
this->imageJList= javax::swing::JList();
    
this->jScrollPane2= javax::swing::JScrollPane();
    
this->jPanel1= javax::swing::JPanel();
    
this->jButton1= javax::swing::JButton();
    
this->upJButton= javax::swing::JButton();
    
this->downJButton= javax::swing::JButton();
    
this->fudgeItJButton= javax::swing::JButton();
    
this->jLabel2= javax::swing::JLabel();
    
this->columnsJTextField= javax::swing::JTextField();
    
this->jLabel1= javax::swing::JLabel();
    
this->rowsJTextField= javax::swing::JTextField();
    
this->jLabel3= javax::swing::JLabel();
    
this->cellWidthJTextField= javax::swing::JTextField();
    
this->jLabel4= javax::swing::JLabel();
    
this->cellHeightJTextField= javax::swing::JTextField();
    
this->jLabel5= javax::swing::JLabel();
    
this->cellRatioJTextField= javax::swing::JTextField();
    
this->jLabel6= javax::swing::JLabel();
    
this->avgRatioJTextField= javax::swing::JTextField();
    
this->jButton2= javax::swing::JButton();
    
this->jButtonOrder= javax::swing::JButton();
    
setMinimumSize(java::awt::Dimension(500, 375));
    
setPreferredSize(java::awt::Dimension(0, 0));
    
this->imageJList.setMinimumSize(java::awt::Dimension(50, 0));
    
this->jScrollPane1.setViewportView(this->imageJList);
    
this->jButton1.setText("Save");
    
this->jButton1.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
jButton1ActionPerformed(evt);
    
}

                                }
                            );
    
this->upJButton.setText("Up");
    
this->upJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
upJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->downJButton.setText("Down");
    
this->downJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
downJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->fudgeItJButton.setText("Fudge It!");
    
this->fudgeItJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
fudgeItJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel2.setText("Columns:");
    
this->columnsJTextField.setText(commonPhoneStrings.TWO);
    
this->columnsJTextField.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
columnsJTextFieldActionPerformed(evt);
    
}

                                }
                            );
    
this->columnsJTextField.addPropertyChangeListener(class extends java::beans::PropertyChangeListener
                                {
                                
    public: void propertyChange(java::beans::PropertyChangeEvent evt){
columnsJTextFieldPropertyChange(evt);
    
}

                                }
                            );
    
this->columnsJTextField.addKeyListener(class extends java::awt::event::KeyAdapter
                                {
                                
    public: void keyPressed(java::awt::event::KeyEvent evt){
columnsJTextFieldKeyPressed(evt);
    
}

    public: void keyTyped(java::awt::event::KeyEvent evt){
columnsJTextFieldKeyTyped(evt);
    
}

                                }
                            );
    
this->jLabel1.setText("Rows:");
    
this->rowsJTextField.setText(commonPhoneStrings.TWO);
    
this->rowsJTextField.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
rowsJTextFieldActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel3.setText("Cell Width:");
    
this->cellWidthJTextField.setText("200");
    
this->cellWidthJTextField.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
cellWidthJTextFieldActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel4.setText("Cell Height:");
    
this->cellHeightJTextField.setText("150");
    
this->cellHeightJTextField.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
cellHeightJTextFieldActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel5.setText("Cell Ratio:");
    
this->cellRatioJTextField.setEditable(false);
    
this->jLabel6.setText("Avg Image Ratio:");
    
this->avgRatioJTextField.setEditable(false);
    
this->jButton2.setText(this->commonStrings.UPDATE);
    
this->jButton2.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
jButton2ActionPerformed(evt);
    
}

                                }
                            );
    
this->jButtonOrder.setText("Order");
    
this->jButtonOrder.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
jButtonOrderActionPerformed(evt);
    
}

                                }
                            );
    

    javax::swing::GroupLayout jPanel1Layout = javax::swing::GroupLayout(this->jPanel1);;
    
this->jPanel1.setLayout(jPanel1Layout);
    
jPanel1Layout.setHorizontalGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup().addContainerGap().addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING).addComponent(jButton1, javax.swing.GroupLayout.DEFAULT_SIZE, 151, Short::MAX_VALUE).addGroup(jPanel1Layout.createSequentialGroup().addComponent(upJButton, javax.swing.GroupLayout.PREFERRED_SIZE, 71, javax.swing.GroupLayout.PREFERRED_SIZE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 10, Short::MAX_VALUE).addComponent(downJButton, javax.swing.GroupLayout.PREFERRED_SIZE, 70, javax.swing.GroupLayout.PREFERRED_SIZE)).addComponent(fudgeItJButton, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 151, Short::MAX_VALUE).addGroup(javax.swing.GroupLayout.Alignment.LEADING, jPanel1Layout.createSequentialGroup().addComponent(jLabel3).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 99, javax.swing.GroupLayout.PREFERRED_SIZE)).addGroup(javax.swing.GroupLayout.Alignment.LEADING, jPanel1Layout.createSequentialGroup().addComponent(jLabel4).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 96, javax.swing.GroupLayout.PREFERRED_SIZE)).addComponent(avgRatioJTextField, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 151, Short::MAX_VALUE).addComponent(jLabel6, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 151, Short::MAX_VALUE).addComponent(cellRatioJTextField, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 151, Short::MAX_VALUE).addComponent(jLabel5, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 151, Short::MAX_VALUE).addComponent(cellHeightJTextField, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 151, Short::MAX_VALUE).addComponent(cellWidthJTextField, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 151, Short::MAX_VALUE).addComponent(jButton2, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 151, Short::MAX_VALUE).addGroup(javax.swing.GroupLayout.Alignment.LEADING, jPanel1Layout.createSequentialGroup().addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(jLabel2).addComponent(jLabel1)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(rowsJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 103, Short::MAX_VALUE).addGroup(jPanel1Layout.createSequentialGroup().addComponent(columnsJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 102, Short::MAX_VALUE).addGap(1, 1, 1)))).addComponent(jButtonOrder, javax.swing.GroupLayout.DEFAULT_SIZE, 151, Short::MAX_VALUE)).addContainerGap()));
    
jPanel1Layout.setVerticalGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(jPanel1Layout.createSequentialGroup().addContainerGap().addComponent(jButton1).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(upJButton).addComponent(downJButton)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jButtonOrder).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(fudgeItJButton).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel2).addComponent(columnsJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel1).addComponent(rowsJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jLabel3).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(cellWidthJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jLabel4).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(cellHeightJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jButton2).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jLabel5).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE).addComponent(cellRatioJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addGap(7, 7, 7).addComponent(jLabel6).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(avgRatioJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addGap(66, 66, 66)));
    

    javax::swing::GroupLayout layout = javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 84, javax.swing.GroupLayout.PREFERRED_SIZE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jScrollPane2, javax.swing.GroupLayout.DEFAULT_SIZE, 527, Short::MAX_VALUE)));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup().addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING).addComponent(jPanel1, javax.swing.GroupLayout.Alignment.LEADING, 0, 445, Short::MAX_VALUE).addComponent(jScrollPane2, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 445, Short::MAX_VALUE).addComponent(jScrollPane1, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 445, Short::MAX_VALUE)).addContainerGap()));
    
}


    private: void jButton2ActionPerformed(java::awt::event::ActionEvent evt){
this->updateOnPropertiesChange();
    
}


    private: void columnsJTextFieldKeyPressed(java::awt::event::KeyEvent evt){
}


    private: void columnsJTextFieldKeyTyped(java::awt::event::KeyEvent evt){
}


    private: void columnsJTextFieldPropertyChange(java::beans::PropertyChangeEvent evt){
}


    private: void fudgeItJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->updateImageWithFudgedImages();
    
}


    private: void cellHeightJTextFieldActionPerformed(java::awt::event::ActionEvent evt){
this->updateOnPropertiesChange();
    
}


    private: void cellWidthJTextFieldActionPerformed(java::awt::event::ActionEvent evt){
this->updateOnPropertiesChange();
    
}


    private: void columnsJTextFieldActionPerformed(java::awt::event::ActionEvent evt){
this->updateOnPropertiesChange();
    
}


    private: void rowsJTextFieldActionPerformed(java::awt::event::ActionEvent evt){
this->updateOnPropertiesChange();
    
}


    private: void jButton1ActionPerformed(java::awt::event::ActionEvent evt){

        try {
            
    std::vector<File> fileArray = this->imageProcessorInput.getFiles();;
    

    File file = fileArray[0];;
    

    std::string filePath = file.getAbsolutePath();;
    

    int32_t extensionIndex = filePath.indexOf(this->imageStrings.PNG_EXTENSION);;
    
filePath= StringMaker().append(filePath.substring(0, extensionIndex)).append(CommonSeps::getInstance().UNDERSCORE).appendint(this->imageUnifierProperties.getColumns()).append("_By_").appendint(this->imageUnifierProperties.getRows()).append("_Unified").append(this->imageStrings.PNG_EXTENSION).toString();
    
this->logUtil.putF("New File Path: " +filePath, this, StringUtil::getInstance().EMPTY_STRING);
    

    File outputFile = File(filePath);;
    
ImagePersistanceUtil::getInstance().saveWithBatik(FileWrapperUtil::wrapFile(outputFile), this->result);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "jButton1ActionPerformed", e);
    
}

}


    private: void downJButtonActionPerformed(java::awt::event::ActionEvent evt){

    int32_t index = this->imageJList.getSelectedIndex();;
    

    DefaultListModel defaultListModel = this->imageJList.getModel();;
    

                        if(index >= 0 && index +1 < defaultListModel.size())
                        
                                    {
                                    
    ImageIconUnique indexedImageIcon = defaultListModel.remove(index);;
    
defaultListModel.insertElementAt(indexedImageIcon, index +1);
    
this->imageJList.setSelectedIndex(index +1);
    
this->updateImage();
    

                                    }
                                
}


    private: void upJButtonActionPerformed(java::awt::event::ActionEvent evt){

    int32_t index = this->imageJList.getSelectedIndex();;
    

                        if(index > 0)
                        
                                    {
                                    
    DefaultListModel defaultListModel = this->imageJList.getModel();;
    

    ImageIconUnique indexedImageIcon = defaultListModel.remove(index);;
    
defaultListModel.insertElementAt(indexedImageIcon, index -1);
    
this->imageJList.setSelectedIndex(index -1);
    
this->updateImage();
    

                                    }
                                
}


    private: void jButtonOrderActionPerformed(java::awt::event::ActionEvent evt){

    DefaultListModel defaultListModel = this->imageJList.getModel();;
    

    int32_t size = defaultListModel.size();;
    

    int32_t last = size -1;;
    




                        for (
    int32_t index = last;index >= 0; index--)
        {

    ImageIconUnique indexedImageIcon = defaultListModel.remove(last);;
    
defaultListModel.insertElementAt(indexedImageIcon, last -index);
    
}


                        if(size > 0)
                        
                                    {
                                    this->imageJList.setSelectedIndex(0);
    
this->updateImage();
    

                                    }
                                
}


    private: javax::swing::JTextField avgRatioJTextField;

    private: javax::swing::JTextField cellHeightJTextField;

    private: javax::swing::JTextField cellRatioJTextField;

    private: javax::swing::JTextField cellWidthJTextField;

    private: javax::swing::JTextField columnsJTextField;

    private: javax::swing::JButton downJButton;

    private: javax::swing::JButton fudgeItJButton;

    private: javax::swing::JList imageJList;

    private: javax::swing::JButton jButton1;

    private: javax::swing::JButton jButton2;

    private: javax::swing::JButton jButtonOrder;

    private: javax::swing::JLabel jLabel1;

    private: javax::swing::JLabel jLabel2;

    private: javax::swing::JLabel jLabel3;

    private: javax::swing::JLabel jLabel4;

    private: javax::swing::JLabel jLabel5;

    private: javax::swing::JLabel jLabel6;

    private: javax::swing::JPanel jPanel1;

    private: javax::swing::JScrollPane jScrollPane1;

    private: javax::swing::JScrollPane jScrollPane2;

    private: javax::swing::JTextField rowsJTextField;

    private: javax::swing::JButton upJButton;

    public: ImageProcessorInput getImageProcessorInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageProcessorInput;
    
}


    public: void setImageProcessorInput(ImageProcessorInput imageProcessorInput){
this->imageProcessorInput= imageProcessorInput;
    
this->init();
    
}


};

            

