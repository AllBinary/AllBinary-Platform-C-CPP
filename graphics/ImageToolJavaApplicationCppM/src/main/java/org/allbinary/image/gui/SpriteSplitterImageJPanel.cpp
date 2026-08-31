
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
        
            #include "../../../../java/lang/Integer.h"
        
            #include "../../../../java/lang/Thread.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <java/awt/image/RenderedImage.h>

      
#include <java/io/File.h>

      
#include <java/io/IOException.h>

      
#include <javax/imageio/ImageIO.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/image/ImageProcessedVisitor.h>

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageStrings.h>

      
#include <org/allbinary/media/image/SpriteSplitterUtil.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "JCheckBox.h"
#include "JTextField.h"
#include "JLabel.h"
#include "Graphics.h"
#include "JButton.h"
#include "JComboBox.h"
#include "DefaultComboBoxModel.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "GroupLayout.h"
#include "Short.h"

class SpriteSplitterImageJPanel: public javax.swing.JPanel: public ImageProcessedVisitor {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: const imageStrings: ImageStrings = ImageStrings.getInstance()!;

    private: imageProcessorInput: ImageProcessorInput;

    private: result: BufferedImage;

public constructor (ImageProcessorInput imageProcessorInput){
            super();
                    

                            //For kotlin this is before the body of the constructor.
                    
initComponents();
    
this.imageProcessorInput= imageProcessorInput;
    
}


    public process(){
new class extends Thread
                                {
                                
    public run(){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

        try {
            
    spriteSplitterUtil: SpriteSplitterUtil = SpriteSplitterUtil.getInstance()!;;
    

    spriteType: string = spriteTypeJComboBox!.getSelectedItem() as string;;
    

    totalFrames: Integer = Integer.valueOf(totalFramesJComboBox!.getSelectedItem() as string)!;;
    

    totalAnimations: Integer = Integer.valueOf(totalAnimationsJComboBox!.getSelectedItem() as string)!;;
    

    widthReduction: int32_t = Integer.valueOf(widthReductionTextField!.getText())!;;
    

    heightReduction: int32_t = Integer.valueOf(heightReductionTextField!.getText())!;;
    

    increaseWidth: int32_t = Integer.valueOf(increaseWidthTextField!.getText())!;;
    

    increaseHeight: int32_t = Integer.valueOf(increaseHeightTextField!.getText())!;;
    
spriteSplitterUtil!.process(this::.getImageProcessorInput(), totalFrames, totalAnimations, widthReduction, heightReduction, increaseWidth, increaseHeight, spriteType, this::);
    

                //: 
} catch(e) 
            {
logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.RUN, e);
    
}

}

                                }
                            .start();
    
}


    initComponents(){
this.writeOverOriginalJCheckBox= new javax.swing.JCheckBox();
    
this.widthReductionTextField= new javax.swing.JTextField();
    
this.jLabel5= new javax.swing.JLabel();
    
this.jPanel1= new class extends javax.swing.JPanel
                                {
                                
    public paint(Graphics graphics){

                        if(this::.result != 
                                    null
                                )
                        
                                    {
                                    graphics.drawImage(this::.result, 0, 0, this::.result.getWidth(
                            nullptr), this::.result.getHeight(
                            nullptr), 
                            nullptr);
    

                                    }
                                
}

                                }
                            ;
    
this.jLabel4= new javax.swing.JLabel();
    
this.jLabel6= new javax.swing.JLabel();
    
this.heightReductionTextField= new javax.swing.JTextField();
    
this.generateJButton= new javax.swing.JButton();
    
this.jPanel2= new javax.swing.JPanel();
    
this.jLabel1= new javax.swing.JLabel();
    
this.totalFramesJComboBox= new javax.swing.JComboBox<>();
    

    size: int32_t = 70;;
    

    animationStringArray2: std::vector<string> = new Array(size -1);;
    




                        for (
    index: int32_t = 1;index < size; index++)
        {
animationStringArray2[index -1]= index.toString();
    
}

this.totalFramesJComboBox!.setModel(new javax.swing.DefaultComboBoxModel(animationStringArray2));
    
this.jLabel2= new javax.swing.JLabel();
    
this.totalAnimationsJComboBox= new javax.swing.JComboBox<>();
    

    animationStringArray: std::vector<string> = new Array(size -1);;
    




                        for (
    index: int32_t = 1;index < size; index++)
        {
animationStringArray[index -1]= index.toString();
    
}

this.totalAnimationsJComboBox!.setModel(new javax.swing.DefaultComboBoxModel(animationStringArray));
    
this.jLabel3= new javax.swing.JLabel();
    
this.spriteTypeJComboBox= new javax.swing.JComboBox<>();
    
this.spriteTypeJComboBox!.setModel(new javax.swing.DefaultComboBoxModel(
                                                [
                                                    org.allbinary.media.image.SpriteSplitterUtil.getInstance()!.DIRECTIONAL_ANIMATIONS,org.allbinary.media.image.SpriteSplitterUtil.getInstance()!.HORIZONTAL_ANIMATIONS,org.allbinary.media.image.SpriteSplitterUtil.getInstance()!.HORIZONTAL_SPRITE
                                                ]));
    
jLabel7= new javax.swing.JLabel();
    
this.increaseWidthTextField= new javax.swing.JTextField();
    
this.jLabel8= new javax.swing.JLabel();
    
this.increaseHeightTextField= new javax.swing.JTextField();
    
this.writeOverOriginalJCheckBox!.setText("Write Over Original");
    
this.writeOverOriginalJCheckBox!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
writeOverOriginalJCheckBoxActionPerformed(evt);
    
}

                                }
                            );
    
this.widthReductionTextField!.setText(CommonPhoneStrings.getInstance()!.ZERO);
    
this.widthReductionTextField!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
widthReductionTextFieldActionPerformed(evt);
    
}

                                }
                            );
    
this.jLabel5!.setText("Less Width:");
    
this.jLabel4!.setText("Results:");
    

    jPanel1Layout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this.jPanel1);;
    
this.jPanel1!.setLayout(jPanel1Layout);
    
jPanel1Layout!.setHorizontalGroup(jPanel1Layout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(jPanel1Layout!.createSequentialGroup()!.addComponent(jLabel4)!.addGap(0, 0, Short.MAX_VALUE)));
    
jPanel1Layout!.setVerticalGroup(jPanel1Layout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(jPanel1Layout!.createSequentialGroup()!.addComponent(jLabel4)!.addGap(0, 184, Short.MAX_VALUE)));
    
this.jLabel6!.setText("Less Height:");
    
this.heightReductionTextField!.setText(CommonPhoneStrings.getInstance()!.ZERO);
    
this.generateJButton!.setText("Generate");
    
this.generateJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
generateJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.jLabel1!.setText("Row Total:");
    
this.totalFramesJComboBox!.setSelectedIndex(1);
    
this.totalFramesJComboBox!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
totalFramesJComboBoxActionPerformed(evt);
    
}

                                }
                            );
    
this.jLabel2!.setText("Column Total :");
    
this.totalAnimationsJComboBox!.setSelectedIndex(3);
    
this.totalAnimationsJComboBox!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
totalAnimationsJComboBoxActionPerformed(evt);
    
}

                                }
                            );
    
this.jLabel3!.setText("Type:");
    
this.spriteTypeJComboBox!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
spriteTypeJComboBoxActionPerformed(evt);
    
}

                                }
                            );
    

    jPanel2Layout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this.jPanel2);;
    
this.jPanel2!.setLayout(jPanel2Layout);
    
jPanel2Layout!.setHorizontalGroup(jPanel2Layout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel2Layout!.createSequentialGroup()!.addContainerGap()!.addComponent(jLabel1)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(totalFramesJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, 48, javax.swing.GroupLayout.PREFERRED_SIZE)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(jLabel2)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(totalAnimationsJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, 39, javax.swing.GroupLayout.PREFERRED_SIZE)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(jLabel3)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(spriteTypeJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, 172, javax.swing.GroupLayout.PREFERRED_SIZE)!.addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)));
    
jPanel2Layout!.setVerticalGroup(jPanel2Layout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(jPanel2Layout!.createSequentialGroup()!.addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)!.addGroup(jPanel2Layout!.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(jLabel1)!.addComponent(totalFramesJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)!.addComponent(jLabel2)!.addComponent(totalAnimationsJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)!.addComponent(jLabel3)!.addComponent(spriteTypeJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))));
    
this.jLabel7!.setText("More Width:");
    
this.increaseWidthTextField!.setText(CommonPhoneStrings.getInstance()!.ZERO);
    
this.increaseWidthTextField!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
increaseWidthTextFieldActionPerformed(evt);
    
}

                                }
                            );
    
this.jLabel8!.setText("More Height:");
    
this.increaseHeightTextField!.setText(CommonPhoneStrings.getInstance()!.ZERO);
    

    layout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this);;
    
this.setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(layout.createSequentialGroup()!.addComponent(jPanel2, javax.swing.GroupLayout.PREFERRED_SIZE, 415, Short.MAX_VALUE)!.addGap(78, 78, 78))!.addGroup(layout.createSequentialGroup()!.addContainerGap()!.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)!.addGroup(layout.createSequentialGroup()!.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(layout.createSequentialGroup()!.addComponent(writeOverOriginalJCheckBox)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(generateJButton))!.addGroup(layout.createSequentialGroup()!.addComponent(jLabel5)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(widthReductionTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 41, javax.swing.GroupLayout.PREFERRED_SIZE)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(jLabel6)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(heightReductionTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 46, javax.swing.GroupLayout.PREFERRED_SIZE)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(jLabel7)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(increaseWidthTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 41, javax.swing.GroupLayout.PREFERRED_SIZE)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(jLabel8)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(increaseHeightTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 46, javax.swing.GroupLayout.PREFERRED_SIZE)))!.addGap(0, 0, Short.MAX_VALUE)))!.addContainerGap()));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(layout.createSequentialGroup()!.addComponent(jPanel2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(jLabel7)!.addComponent(increaseWidthTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 22, javax.swing.GroupLayout.PREFERRED_SIZE)!.addComponent(jLabel8)!.addComponent(increaseHeightTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))!.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(jLabel5)!.addComponent(widthReductionTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 22, javax.swing.GroupLayout.PREFERRED_SIZE)!.addComponent(jLabel6)!.addComponent(heightReductionTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(writeOverOriginalJCheckBox)!.addComponent(generateJButton))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)));
    
}


    writeOverOriginalJCheckBoxActionPerformed(java.awt.event.ActionEvent evt){
}


    generateJButtonActionPerformed(java.awt.event.ActionEvent evt){
this.process();
    
}


    spriteTypeJComboBoxActionPerformed(java.awt.event.ActionEvent evt){

    spriteSplitterUtil: SpriteSplitterUtil = SpriteSplitterUtil.getInstance()!;;
    
this.jLabel1!.setText(spriteSplitterUtil!.ANIMATIONS_LABELS[this.spriteTypeJComboBox!.getSelectedIndex()]!);
    
this.jLabel2!.setText(spriteSplitterUtil!.ANIMATIONS_LABELS[this.spriteTypeJComboBox!.getSelectedIndex() +1]!);
    
}


    totalAnimationsJComboBoxActionPerformed(java.awt.event.ActionEvent evt){
}


    totalFramesJComboBoxActionPerformed(java.awt.event.ActionEvent evt){
}


    widthReductionTextFieldActionPerformed(java.awt.event.ActionEvent evt){
}


    increaseWidthTextFieldActionPerformed(java.awt.event.ActionEvent evt){
}


    private: generateJButton: javax.swing.JButton;

    private: heightReductionTextField: javax.swing.JTextField;

    private: increaseHeightTextField: javax.swing.JTextField;

    private: increaseWidthTextField: javax.swing.JTextField;

    private: jLabel1: javax.swing.JLabel;

    private: jLabel2: javax.swing.JLabel;

    private: jLabel3: javax.swing.JLabel;

    private: jLabel4: javax.swing.JLabel;

    private: jLabel5: javax.swing.JLabel;

    private: jLabel6: javax.swing.JLabel;

    private: jLabel7: javax.swing.JLabel;

    private: jLabel8: javax.swing.JLabel;

    private: jPanel1: javax.swing.JPanel;

    private: jPanel2: javax.swing.JPanel;

    private: spriteTypeJComboBox: javax.swing.JComboBox<string>;

    private: totalAnimationsJComboBox: javax.swing.JComboBox<string>;

    private: totalFramesJComboBox: javax.swing.JComboBox<string>;

    private: widthReductionTextField: javax.swing.JTextField;

    private: writeOverOriginalJCheckBox: javax.swing.JCheckBox;

    public ImageProcessorInput getImageProcessorInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.imageProcessorInput;
    
}


    public setImageProcessorInput(ImageProcessorInput imageProcessorInput){
this.imageProcessorInput= imageProcessorInput;
    
}


                //@Throws(IOException.constructor)
            
    public visit(BufferedImage generatedBufferedImage, string name, int32_t index){
this.logUtil!.putF(this.commonStrings!.VISIT, this, this.commonStrings!.VISIT);
    
this.result= generatedBufferedImage;
    
this.getParent()!.repaint();
    

    file: File = this.imageProcessorInput!.getFiles()[index]!;;
    

                        if(!this.writeOverOriginalJCheckBox!.isSelected())
                        
                                    {
                                    
    filePath: string = file.getAbsolutePath()!;;
    

    extensionIndex: int32_t = filePath!.indexOf(this.imageStrings!.PNG_EXTENSION)!;;
    
filePath= new StringMaker().append(filePath!.substring(0, extensionIndex))!.append(this.commonSeps!.UNDERSCORE)!.append(name)!.append(this.imageStrings!.PNG_EXTENSION)!.toString();
    
file= new File(filePath);
    

                                    }
                                

    isWritten: bool = ImageIO.write(this::.result as RenderedImage, imageStrings!.PNG, file)!;;
    
this.logUtil!.putF(new StringMaker().append("File: ")!.append(StringUtil.getInstance()!.toString(file))!.append(" Wrote: ")!.appendboolean(isWritten)!.toString(), this, this.commonStrings!.RUN);
    
}


};

            

