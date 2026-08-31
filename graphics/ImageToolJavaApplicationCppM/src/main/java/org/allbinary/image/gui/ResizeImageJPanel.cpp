
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
        



            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/System.h"
        
            #include "../../../../java/lang/Integer.h"
        
            #include "../../../../java/lang/Float.h"
        
            #include "../../../../java/lang/Thread.h"
        
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "DefaultComboBoxModel.h"
#include "JLabel.h"
#include "JComboBox.h"
#include "JButton.h"
#include "JTextField.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "Dimension.h"
#include "GroupLayout.h"
#include "Short.h"

class ResizeImageJPanel: public javax.swing.JPanel: public ImageProcessorInputCompositeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: imageProcessorInput: ImageProcessorInput;

public constructor (ImageProcessorInput imageProcessorInput){
            super();
                    

                            //For kotlin this is before the body of the constructor.
                    
initComponents();
    
this.imageProcessorInput= imageProcessorInput;
    

    numberStringArray: std::vector<string> = new Array(101);;
    
numberStringArray[0]= Integer.toString( -1);
    




                        for (
    index: int32_t = 1;index < 100; index++)
        {
numberStringArray[index]= index.toString();
    
}

this.jComboBox1!.setModel(new javax.swing.DefaultComboBoxModel(numberStringArray));
    

    araster: Raster = this.imageProcessorInput!.getBufferedImageArray()[0]!.getAlphaRaster()!;;
    

                        if(araster == 
                                    null
                                )
                        
                                    {
                                    console.log("there is no Alpha channel!!!!!!!!!");
    

                                    }
                                
                        else {
                            console.log("Alpha channel found !");
    

                        }
                            
}


    public process(){
new class extends Thread
                                {
                                
    public run(){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

        try {
            
    imageUtil: ImageUtil = ImageUtil.getInstance()!;;
    

    percent: Integer = Integer.valueOf(this::.jComboBox1!.getSelectedItem() as string)!;;
    

    percentAsFloat: number = Float.parseFloat(this::.floatPercentJTextField!.getText())!;;
    

    imageProcessorInput: ImageProcessorInput = this::.getImageProcessorInput()!;;
    

    files: std::vector<File> = imageProcessorInput!.getFiles()!;;
    

    generatedBufferedImageArray: std::vector<BufferedImage> = 
                null
            ;;
    

                        if(percentAsFloat!.intValue() !=  -1)
                        
                                    {
                                    generatedBufferedImageArray= imageUtil!.createBufferedImage2(imageProcessorInput!.getBufferedImageArray(), percentAsFloat, true);
    

                                    }
                                
                             else 
                        if(percent.intValue() !=  -1)
                        
                                    {
                                    generatedBufferedImageArray= imageUtil!.createBufferedImageForResize(imageProcessorInput!.getBufferedImageArray(), percent, true);
    

                                    }
                                
                        else {
                            
    width: Integer = Integer.valueOf(this::.jTextField1!.getText() as string)!;;
    

    height: Integer = Integer.valueOf(this::.jTextField2!.getText() as string)!;;
    
generatedBufferedImageArray= imageUtil!.createBufferedImage3(imageProcessorInput!.getBufferedImageArray(), width, height, true);
    

                        }
                            

    araster: Raster = generatedBufferedImageArray[0]!.getAlphaRaster()!;;
    

                        if(araster == 
                                    null
                                )
                        
                                    {
                                    console.log("No Alpha Channel In Result");
    

                                    }
                                
                        else {
                            console.log("Found Alpha Channel In Result");
    

                        }
                            

    imagePersistanceUtil: ImagePersistanceUtil = ImagePersistanceUtil.getInstance()!;;
    




                        for (
    index: int32_t = 0;index < generatedBufferedImageArray!.length; index++)
        {
imagePersistanceUtil!.saveWithBatik(FileWrapperUtil.wrapFile(files[index]!), generatedBufferedImageArray[index]!);
    
}

this::.getParent()!.repaint();
    

                //: 
} catch(e) 
            {
logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.RUN, e);
    
}

}

                                }
                            .start();
    
}


    public update(){
new class extends Thread
                                {
                                
    public run(){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

        try {
            
    imageProcessorInput: ImageProcessorInput = this::.getImageProcessorInput()!;;
    

    size: int32_t = imageProcessorInput!.getBufferedImageArray()!.length;;
    

    bufferedImageArray: std::vector<BufferedImage> = imageProcessorInput!.getBufferedImageArray()!;;
    

    bufferedImage: BufferedImage;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
bufferedImage= bufferedImageArray[0]!;
    
this::.jTextField1!.setText(bufferedImage!.getWidth().toString());
    
this::.jTextField2!.setText(bufferedImage!.getHeight().toString());
    
}

this::.getParent()!.repaint();
    

                //: 
} catch(e) 
            {
logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.RUN, e);
    
}

}

                                }
                            .start();
    
}


    public updateFor16Above(){
new class extends Thread
                                {
                                
    public run(){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

        try {
            
    imageProcessorInput: ImageProcessorInput = this::.getImageProcessorInput()!;;
    

    size: int32_t = imageProcessorInput!.getBufferedImageArray()!.length;;
    

    bufferedImageArray: std::vector<BufferedImage> = imageProcessorInput!.getBufferedImageArray()!;;
    

    bufferedImage: BufferedImage;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
bufferedImage= bufferedImageArray[0]!;
    
this::.jTextField1!.setText(bufferedImage!.getWidth() /16 *16.toString());
    
this::.jTextField2!.setText(bufferedImage!.getHeight() /16 *16.toString());
    
}

this::.getParent()!.repaint();
    

                //: 
} catch(e) 
            {
logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.RUN, e);
    
}

}

                                }
                            .start();
    
}


    public updateFor16Below(){
new class extends Thread
                                {
                                
    public run(){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

        try {
            
    imageProcessorInput: ImageProcessorInput = this::.getImageProcessorInput()!;;
    

    size: int32_t = imageProcessorInput!.getBufferedImageArray()!.length;;
    

    bufferedImageArray: std::vector<BufferedImage> = imageProcessorInput!.getBufferedImageArray()!;;
    

    bufferedImage: BufferedImage;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
bufferedImage= bufferedImageArray[0]!;
    
this::.jTextField1!.setText(((bufferedImage!.getWidth() /16) +1) *16.toString());
    
this::.jTextField2!.setText(((bufferedImage!.getHeight() /16) +1) *16.toString());
    
}

this::.getParent()!.repaint();
    

                //: 
} catch(e) 
            {
logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.RUN, e);
    
}

}

                                }
                            .start();
    
}


    public ImageProcessorInput getImageProcessorInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.imageProcessorInput;
    
}


    public setImageProcessorInput(ImageProcessorInput imageProcessorInput){
this.imageProcessorInput= imageProcessorInput;
    
}


    initComponents(){
this.jLabel1= new javax.swing.JLabel();
    
this.jComboBox1= new javax.swing.JComboBox<>();
    
this.aboveJButton= new javax.swing.JButton();
    
this.jTextField1= new javax.swing.JTextField();
    
this.jLabel2= new javax.swing.JLabel();
    
this.jLabel3= new javax.swing.JLabel();
    
this.jTextField2= new javax.swing.JTextField();
    
this.updateJButton= new javax.swing.JButton();
    
this.floatPercentJTextField= new javax.swing.JTextField();
    
this.adjustFor16AboveJButton= new javax.swing.JButton();
    
this.adjustFor16BelowJButton= new javax.swing.JButton();
    
this.jLabel1!.setText("Percent:");
    
this.jComboBox1!.setModel(new javax.swing.DefaultComboBoxModel<>(
                                                [
                                                    "Item 1","Item 2","Item 3","Item 4"
                                                ]));
    
this.aboveJButton!.setText("Process");
    
this.aboveJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
aboveJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.jLabel2!.setText("Width:");
    
this.jLabel3!.setText("Height:");
    
this.updateJButton!.setText("Update");
    
this.updateJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
updateJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.floatPercentJTextField!.setText("-1.000000");
    
this.floatPercentJTextField!.setMinimumSize(new java.awt.Dimension(120, 22));
    
this.adjustFor16AboveJButton!.setText("Adjust for 16 Above");
    
this.adjustFor16AboveJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
adjustFor16AboveJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.adjustFor16BelowJButton!.setText("Adjust for 16 Below");
    
this.adjustFor16BelowJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
adjustFor16BelowJButtonActionPerformed(evt);
    
}

                                }
                            );
    

    layout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this);;
    
this.setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(layout.createSequentialGroup()!.addContainerGap()!.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addComponent(jLabel1)!.addComponent(jLabel2)!.addComponent(jLabel3))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)!.addComponent(jComboBox1, 0, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)!.addComponent(jTextField1)!.addComponent(jTextField2))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)!.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addComponent(floatPercentJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)!.addComponent(adjustFor16AboveJButton)!.addComponent(adjustFor16BelowJButton))!.addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))!.addGroup(layout.createSequentialGroup()!.addComponent(updateJButton)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(aboveJButton)!.addGap(0, 250, Short.MAX_VALUE)));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(layout.createSequentialGroup()!.addContainerGap()!.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(jLabel1)!.addComponent(jComboBox1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)!.addComponent(floatPercentJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(jTextField1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)!.addComponent(jLabel2)!.addComponent(adjustFor16AboveJButton))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(jLabel3)!.addComponent(jTextField2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)!.addComponent(adjustFor16BelowJButton))!.addGap(18, 18, 18)!.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(aboveJButton)!.addComponent(updateJButton))!.addContainerGap(175, Short.MAX_VALUE)));
    
}


    aboveJButtonActionPerformed(java.awt.event.ActionEvent evt){
this.process();
    
}


    updateJButtonActionPerformed(java.awt.event.ActionEvent evt){
this.update();
    
}


    adjustFor16AboveJButtonActionPerformed(java.awt.event.ActionEvent evt){
this.updateFor16Above();
    
}


    adjustFor16BelowJButtonActionPerformed(java.awt.event.ActionEvent evt){
this.updateFor16Below();
    
}


    private: aboveJButton: javax.swing.JButton;

    private: adjustFor16AboveJButton: javax.swing.JButton;

    private: adjustFor16BelowJButton: javax.swing.JButton;

    private: floatPercentJTextField: javax.swing.JTextField;

    private: jComboBox1: javax.swing.JComboBox<string>;

    private: jLabel1: javax.swing.JLabel;

    private: jLabel2: javax.swing.JLabel;

    private: jLabel3: javax.swing.JLabel;

    private: jTextField1: javax.swing.JTextField;

    private: jTextField2: javax.swing.JTextField;

    private: updateJButton: javax.swing.JButton;

};

            

