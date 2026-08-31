
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
        



            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
            #include "../../../../java/lang/Double.h"
        
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

class ImageUnifierJPanel: public javax.swing.JPanel: public ImageProcessorInputCompositeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const imageStrings: ImageStrings = ImageStrings.getInstance()!;

    private: const imagesRatioUtil: ImagesRatioUtil = ImagesRatioUtil.getInstance()!;

    private: imageProcessorInput: ImageProcessorInput;

    private: icon: std::vector<ImageIconUnique>;

    private: imageUnifierProperties: ImageUnifierProperties;

    private: result: BufferedImage;

    private: isImageFillIn: bool = true;

public constructor (ImageProcessorInput imageProcessorInput){

            super();
        this.initComponents();
    
this.setImageProcessorInput(imageProcessorInput);
    
}


    public init(){

        try {
            
    imageProcessorInput: ImageProcessorInput = this.getImageProcessorInput()!;;
    

    bufferedImageArray: std::vector<BufferedImage> = imageProcessorInput!.getBufferedImageArray()!;;
    
this.icon= new Array(bufferedImageArray!.length);
    

    defaultListModel: DefaultListModel = new DefaultListModel();;
    




                        for (
    index: int32_t = 0;index < bufferedImageArray!.length; index++)
        {

    width: double = bufferedImageArray[index]!.getWidth()!;;
    

    height: double = bufferedImageArray[index]!.getHeight()!;;
    

    newWidth: int32_t = 52;;
    

    oldRatio: double = width /height;;
    

    newHeight: int32_t = static_cast<int32_t>((newWidth /oldRatio));;
    

    iconBufferedImage: BufferedImage = ImageUtil.getInstance()!.createBufferedImage(bufferedImageArray[index]!, newWidth, newHeight, true)!;;
    
this.icon[index]= new ImageIconUnique(iconBufferedImage, index);
    
defaultListModel!.addElement(this.icon[index]!);
    
}

this.imageJList!.setModel(defaultListModel);
    
this.updateOnPropertiesChange();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.INIT, e);
    
}

}


    updateImage(){

        try {
            
    bufferedImageArray: std::vector<BufferedImage> = this.getImageProcessorInput()!.getBufferedImageArray()!;;
    

    tempBufferedImageArray: std::vector<BufferedImage> = new Array(bufferedImageArray!.length);;
    




                        for (
    index: int32_t = 0;index < bufferedImageArray!.length; index++)
        {

    indexedImageIcon: ImageIconUnique = this.imageJList!.getModel()!.getElementAt(index) as ImageIconUnique;;
    

    bufferedImage: BufferedImage = ImageUtil.getInstance()!.createBufferedImage(bufferedImageArray[indexedImageIcon!.getId()]!, this.imageUnifierProperties!.getImageUnifierCell()!.getWidth(), this.imageUnifierProperties!.getImageUnifierCell()!.getHeight(), false)!;;
    
tempBufferedImageArray[index]= bufferedImage;
    
}


    totalImages: int32_t = this.imageUnifierProperties!.getRows() *this.imageUnifierProperties!.getColumns();;
    

    averageRatio: double = this.imagesRatioUtil!.getAverage(tempBufferedImageArray, totalImages)!;;
    

    averageRatioString: string = new number(averageRatio).toString()!;;
    

                        if(averageRatioString!.length > 4)
                        
                                    {
                                    averageRatioString= averageRatioString!.substring(0, 4);
    

                                    }
                                
this.avgRatioJTextField!.setText(averageRatioString);
    
this.fudgeItJButton!.setEnabled(false);
    

                        if(!this.imagesRatioUtil!.isEqual(tempBufferedImageArray, totalImages))
                        
                                    {
                                    
                        if(this.isImageFillIn)
                        
                                    {
                                    this.fudgeItJButton!.setEnabled(true);
    

                                    }
                                

                                    }
                                
this.updateImage(tempBufferedImageArray);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "updateImage", e);
    
}

}


    updateImageWithFudgedImages(){

        try {
            
    bufferedImageArray: std::vector<BufferedImage> = this.getImageProcessorInput()!.getBufferedImageArray()!;;
    

    tempBufferedImageArray: std::vector<BufferedImage> = new Array(bufferedImageArray!.length);;
    




                        for (
    index: int32_t = 0;index < bufferedImageArray!.length; index++)
        {

    indexedImageIcon: ImageIconUnique = this.imageJList!.getModel()!.getElementAt(index) as ImageIconUnique;;
    

    bufferedImage: BufferedImage = ImageUtil.getInstance()!.createBufferedImage(bufferedImageArray[indexedImageIcon!.getId()]!, this.imageUnifierProperties!.getImageUnifierCell()!.getWidth(), this.imageUnifierProperties!.getImageUnifierCell()!.getHeight(), false)!;;
    
tempBufferedImageArray[index]= bufferedImage;
    
}


    totalImages: int32_t = this.imageUnifierProperties!.getRows() *this.imageUnifierProperties!.getColumns();;
    

    averageRatio: double = this.imagesRatioUtil!.getAverage(tempBufferedImageArray, totalImages)!;;
    

    fudgedBufferedImageArray: std::vector<BufferedImage> = imagesRatioUtil!.fudge(tempBufferedImageArray, totalImages, averageRatio)!;;
    
this.updateImage(fudgedBufferedImageArray);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "updateImageWithFudgedImages", e);
    
}

}


    updateImage(std::vector<BufferedImage> tempBufferedImageArray){
this.result= ImageUnifierUtil.getInstance()!.getImage(tempBufferedImageArray, this.imageUnifierProperties);
    

    image: Icon = new ImageIcon(this.result);;
    

    label: JLabel = new JLabel(image);;
    
this.jScrollPane2!.getViewport()!.add(label);
    
this.updateUI();
    
}


    updateOnPropertiesChange(){

                        if(this.rowsJTextField!.getText()!.length() > 0 && this.columnsJTextField!.getText()!.length() > 0 && this.cellWidthJTextField!.getText()!.length() > 0 && this.cellHeightJTextField!.getText()!.length() > 0)
                        
                                    {
                                    this.imageUnifierProperties= new ImageUnifierProperties();
    
this.imageUnifierProperties!.setRows(new Integer(this.rowsJTextField!.getText()));
    
this.imageUnifierProperties!.setColumns(new Integer(this.columnsJTextField!.getText()));
    

    imageUnifierCell: ImageUnifierCell = new ImageUnifierCell(new Integer(this.cellWidthJTextField!.getText()), new Integer(this.cellHeightJTextField!.getText()));;
    
this.imageUnifierProperties!.setImageUnifierCell(imageUnifierCell);
    

    cellRatio: double = (imageUnifierCell!.getWidth() /imageUnifierCell!.getHeight());;
    

    cellRatioString: string = new number(cellRatio).toString()!;;
    

                        if(cellRatioString!.length > 4)
                        
                                    {
                                    cellRatioString= cellRatioString!.substring(0, 4);
    

                                    }
                                
this.cellRatioJTextField!.setText(cellRatioString);
    
this.updateImage();
    

                                    }
                                
}


    initComponents(){

    commonPhoneStrings: CommonPhoneStrings = CommonPhoneStrings.getInstance()!;;
    
this.jScrollPane1= new javax.swing.JScrollPane();
    
this.imageJList= new javax.swing.JList();
    
this.jScrollPane2= new javax.swing.JScrollPane();
    
this.jPanel1= new javax.swing.JPanel();
    
this.jButton1= new javax.swing.JButton();
    
this.upJButton= new javax.swing.JButton();
    
this.downJButton= new javax.swing.JButton();
    
this.fudgeItJButton= new javax.swing.JButton();
    
this.jLabel2= new javax.swing.JLabel();
    
this.columnsJTextField= new javax.swing.JTextField();
    
this.jLabel1= new javax.swing.JLabel();
    
this.rowsJTextField= new javax.swing.JTextField();
    
this.jLabel3= new javax.swing.JLabel();
    
this.cellWidthJTextField= new javax.swing.JTextField();
    
this.jLabel4= new javax.swing.JLabel();
    
this.cellHeightJTextField= new javax.swing.JTextField();
    
this.jLabel5= new javax.swing.JLabel();
    
this.cellRatioJTextField= new javax.swing.JTextField();
    
this.jLabel6= new javax.swing.JLabel();
    
this.avgRatioJTextField= new javax.swing.JTextField();
    
this.jButton2= new javax.swing.JButton();
    
this.jButtonOrder= new javax.swing.JButton();
    
setMinimumSize(new java.awt.Dimension(500, 375));
    
setPreferredSize(new java.awt.Dimension(0, 0));
    
this.imageJList!.setMinimumSize(new java.awt.Dimension(50, 0));
    
this.jScrollPane1!.setViewportView(this.imageJList);
    
this.jButton1!.setText("Save");
    
this.jButton1!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
jButton1ActionPerformed(evt);
    
}

                                }
                            );
    
this.upJButton!.setText("Up");
    
this.upJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
upJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.downJButton!.setText("Down");
    
this.downJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
downJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.fudgeItJButton!.setText("Fudge It!");
    
this.fudgeItJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
fudgeItJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.jLabel2!.setText("Columns:");
    
this.columnsJTextField!.setText(commonPhoneStrings!.TWO);
    
this.columnsJTextField!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
columnsJTextFieldActionPerformed(evt);
    
}

                                }
                            );
    
this.columnsJTextField!.addPropertyChangeListener(new class extends java.beans.PropertyChangeListener
                                {
                                
    public propertyChange(java.beans.PropertyChangeEvent evt){
columnsJTextFieldPropertyChange(evt);
    
}

                                }
                            );
    
this.columnsJTextField!.addKeyListener(new class extends java.awt.event.KeyAdapter
                                {
                                
    public keyPressed(java.awt.event.KeyEvent evt){
columnsJTextFieldKeyPressed(evt);
    
}

    public keyTyped(java.awt.event.KeyEvent evt){
columnsJTextFieldKeyTyped(evt);
    
}

                                }
                            );
    
this.jLabel1!.setText("Rows:");
    
this.rowsJTextField!.setText(commonPhoneStrings!.TWO);
    
this.rowsJTextField!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
rowsJTextFieldActionPerformed(evt);
    
}

                                }
                            );
    
this.jLabel3!.setText("Cell Width:");
    
this.cellWidthJTextField!.setText("200");
    
this.cellWidthJTextField!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
cellWidthJTextFieldActionPerformed(evt);
    
}

                                }
                            );
    
this.jLabel4!.setText("Cell Height:");
    
this.cellHeightJTextField!.setText("150");
    
this.cellHeightJTextField!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
cellHeightJTextFieldActionPerformed(evt);
    
}

                                }
                            );
    
this.jLabel5!.setText("Cell Ratio:");
    
this.cellRatioJTextField!.setEditable(false);
    
this.jLabel6!.setText("Avg Image Ratio:");
    
this.avgRatioJTextField!.setEditable(false);
    
this.jButton2!.setText(this.commonStrings!.UPDATE);
    
this.jButton2!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
jButton2ActionPerformed(evt);
    
}

                                }
                            );
    
this.jButtonOrder!.setText("Order");
    
this.jButtonOrder!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
jButtonOrderActionPerformed(evt);
    
}

                                }
                            );
    

    jPanel1Layout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this.jPanel1);;
    
this.jPanel1!.setLayout(jPanel1Layout);
    
jPanel1Layout!.setHorizontalGroup(jPanel1Layout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout!.createSequentialGroup()!.addContainerGap()!.addGroup(jPanel1Layout!.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)!.addComponent(jButton1, javax.swing.GroupLayout.DEFAULT_SIZE, 151, Short.MAX_VALUE)!.addGroup(jPanel1Layout!.createSequentialGroup()!.addComponent(upJButton, javax.swing.GroupLayout.PREFERRED_SIZE, 71, javax.swing.GroupLayout.PREFERRED_SIZE)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 10, Short.MAX_VALUE)!.addComponent(downJButton, javax.swing.GroupLayout.PREFERRED_SIZE, 70, javax.swing.GroupLayout.PREFERRED_SIZE))!.addComponent(fudgeItJButton, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 151, Short.MAX_VALUE)!.addGroup(javax.swing.GroupLayout.Alignment.LEADING, jPanel1Layout!.createSequentialGroup()!.addComponent(jLabel3)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 99, javax.swing.GroupLayout.PREFERRED_SIZE))!.addGroup(javax.swing.GroupLayout.Alignment.LEADING, jPanel1Layout!.createSequentialGroup()!.addComponent(jLabel4)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 96, javax.swing.GroupLayout.PREFERRED_SIZE))!.addComponent(avgRatioJTextField, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 151, Short.MAX_VALUE)!.addComponent(jLabel6, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 151, Short.MAX_VALUE)!.addComponent(cellRatioJTextField, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 151, Short.MAX_VALUE)!.addComponent(jLabel5, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 151, Short.MAX_VALUE)!.addComponent(cellHeightJTextField, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 151, Short.MAX_VALUE)!.addComponent(cellWidthJTextField, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 151, Short.MAX_VALUE)!.addComponent(jButton2, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 151, Short.MAX_VALUE)!.addGroup(javax.swing.GroupLayout.Alignment.LEADING, jPanel1Layout!.createSequentialGroup()!.addGroup(jPanel1Layout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addComponent(jLabel2)!.addComponent(jLabel1))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(jPanel1Layout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addComponent(rowsJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 103, Short.MAX_VALUE)!.addGroup(jPanel1Layout!.createSequentialGroup()!.addComponent(columnsJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 102, Short.MAX_VALUE)!.addGap(1, 1, 1))))!.addComponent(jButtonOrder, javax.swing.GroupLayout.DEFAULT_SIZE, 151, Short.MAX_VALUE))!.addContainerGap()));
    
jPanel1Layout!.setVerticalGroup(jPanel1Layout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(jPanel1Layout!.createSequentialGroup()!.addContainerGap()!.addComponent(jButton1)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(jPanel1Layout!.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(upJButton)!.addComponent(downJButton))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(jButtonOrder)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(fudgeItJButton)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(jPanel1Layout!.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(jLabel2)!.addComponent(columnsJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(jPanel1Layout!.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(jLabel1)!.addComponent(rowsJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(jLabel3)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(cellWidthJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(jLabel4)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(cellHeightJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(jButton2)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(jLabel5)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)!.addComponent(cellRatioJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)!.addGap(7, 7, 7)!.addComponent(jLabel6)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(avgRatioJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)!.addGap(66, 66, 66)));
    

    layout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this);;
    
this.setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(layout.createSequentialGroup()!.addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 84, javax.swing.GroupLayout.PREFERRED_SIZE)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(jScrollPane2, javax.swing.GroupLayout.DEFAULT_SIZE, 527, Short.MAX_VALUE)));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()!.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)!.addComponent(jPanel1, javax.swing.GroupLayout.Alignment.LEADING, 0, 445, Short.MAX_VALUE)!.addComponent(jScrollPane2, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 445, Short.MAX_VALUE)!.addComponent(jScrollPane1, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 445, Short.MAX_VALUE))!.addContainerGap()));
    
}


    jButton2ActionPerformed(java.awt.event.ActionEvent evt){
this.updateOnPropertiesChange();
    
}


    columnsJTextFieldKeyPressed(java.awt.event.KeyEvent evt){
}


    columnsJTextFieldKeyTyped(java.awt.event.KeyEvent evt){
}


    columnsJTextFieldPropertyChange(java.beans.PropertyChangeEvent evt){
}


    fudgeItJButtonActionPerformed(java.awt.event.ActionEvent evt){
this.updateImageWithFudgedImages();
    
}


    cellHeightJTextFieldActionPerformed(java.awt.event.ActionEvent evt){
this.updateOnPropertiesChange();
    
}


    cellWidthJTextFieldActionPerformed(java.awt.event.ActionEvent evt){
this.updateOnPropertiesChange();
    
}


    columnsJTextFieldActionPerformed(java.awt.event.ActionEvent evt){
this.updateOnPropertiesChange();
    
}


    rowsJTextFieldActionPerformed(java.awt.event.ActionEvent evt){
this.updateOnPropertiesChange();
    
}


    jButton1ActionPerformed(java.awt.event.ActionEvent evt){

        try {
            
    fileArray: std::vector<File> = this.imageProcessorInput!.getFiles()!;;
    

    file: File = fileArray[0]!;;
    

    filePath: string = file.getAbsolutePath()!;;
    

    extensionIndex: int32_t = filePath!.indexOf(this.imageStrings!.PNG_EXTENSION)!;;
    
filePath= new StringMaker().append(filePath!.substring(0, extensionIndex))!.append(CommonSeps.getInstance()!.UNDERSCORE)!.appendint(this.imageUnifierProperties!.getColumns())!.append("_By_")!.appendint(this.imageUnifierProperties!.getRows())!.append("_Unified")!.append(this.imageStrings!.PNG_EXTENSION)!.toString();
    
this.logUtil!.putF("New File Path: " +filePath, this, StringUtil.getInstance()!.EMPTY_STRING);
    

    outputFile: File = new File(filePath);;
    
ImagePersistanceUtil.getInstance()!.saveWithBatik(FileWrapperUtil.wrapFile(outputFile), this.result);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "jButton1ActionPerformed", e);
    
}

}


    downJButtonActionPerformed(java.awt.event.ActionEvent evt){

    index: int32_t = this.imageJList!.getSelectedIndex()!;;
    

    defaultListModel: DefaultListModel = this.imageJList!.getModel() as DefaultListModel;;
    

                        if(index >= 0 && index +1 < defaultListModel!.size())
                        
                                    {
                                    
    indexedImageIcon: ImageIconUnique = defaultListModel!.remove(index) as ImageIconUnique;;
    
defaultListModel!.insertElementAt(indexedImageIcon, index +1);
    
this.imageJList!.setSelectedIndex(index +1);
    
this.updateImage();
    

                                    }
                                
}


    upJButtonActionPerformed(java.awt.event.ActionEvent evt){

    index: int32_t = this.imageJList!.getSelectedIndex()!;;
    

                        if(index > 0)
                        
                                    {
                                    
    defaultListModel: DefaultListModel = this.imageJList!.getModel() as DefaultListModel;;
    

    indexedImageIcon: ImageIconUnique = defaultListModel!.remove(index) as ImageIconUnique;;
    
defaultListModel!.insertElementAt(indexedImageIcon, index -1);
    
this.imageJList!.setSelectedIndex(index -1);
    
this.updateImage();
    

                                    }
                                
}


    jButtonOrderActionPerformed(java.awt.event.ActionEvent evt){

    defaultListModel: DefaultListModel = this.imageJList!.getModel() as DefaultListModel;;
    

    size: int32_t = defaultListModel!.size()!;;
    

    last: int32_t = size -1;;
    




                        for (
    index: int32_t = last;index >= 0; index--)
        {

    indexedImageIcon: ImageIconUnique = defaultListModel!.remove(last) as ImageIconUnique;;
    
defaultListModel!.insertElementAt(indexedImageIcon, last -index);
    
}


                        if(size > 0)
                        
                                    {
                                    this.imageJList!.setSelectedIndex(0);
    
this.updateImage();
    

                                    }
                                
}


    private: avgRatioJTextField: javax.swing.JTextField;

    private: cellHeightJTextField: javax.swing.JTextField;

    private: cellRatioJTextField: javax.swing.JTextField;

    private: cellWidthJTextField: javax.swing.JTextField;

    private: columnsJTextField: javax.swing.JTextField;

    private: downJButton: javax.swing.JButton;

    private: fudgeItJButton: javax.swing.JButton;

    private: imageJList: javax.swing.JList;

    private: jButton1: javax.swing.JButton;

    private: jButton2: javax.swing.JButton;

    private: jButtonOrder: javax.swing.JButton;

    private: jLabel1: javax.swing.JLabel;

    private: jLabel2: javax.swing.JLabel;

    private: jLabel3: javax.swing.JLabel;

    private: jLabel4: javax.swing.JLabel;

    private: jLabel5: javax.swing.JLabel;

    private: jLabel6: javax.swing.JLabel;

    private: jPanel1: javax.swing.JPanel;

    private: jScrollPane1: javax.swing.JScrollPane;

    private: jScrollPane2: javax.swing.JScrollPane;

    private: rowsJTextField: javax.swing.JTextField;

    private: upJButton: javax.swing.JButton;

    public ImageProcessorInput getImageProcessorInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.imageProcessorInput;
    
}


    public setImageProcessorInput(ImageProcessorInput imageProcessorInput){
this.imageProcessorInput= imageProcessorInput;
    
this.init();
    
}


};

            

