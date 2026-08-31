
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
        
            #include "../../../../java/lang/Thread.h"
        
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
        #include "JPanel.h"
#include "JLayeredPane.h"
#include "Graphics.h"
#include "JCheckBox.h"
#include "JButton.h"
#include "JLabel.h"
#include "GroupLayout.h"
#include "Short.h"
#include "ActionListener.h"
#include "ActionEvent.h"

class MirrorSpriteImageJPanel: public javax.swing.JPanel: public ImageProcessorInputCompositeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const imageStrings: ImageStrings = ImageStrings.getInstance()!;

    private: imageProcessorInput: ImageProcessorInput;

    private: result: BufferedImage;

public constructor (ImageProcessorInput imageProcessorInput){
            super();
                    

                            //For kotlin this is before the body of the constructor.
                    
this.logUtil!.putF("Starting", this, this.commonStrings!.CONSTRUCTOR);
    
this.initComponents();
    
this.imageProcessorInput= imageProcessorInput;
    
}


    public process(){
new class extends Thread
                                {
                                
    public run(){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

        try {
            
    generatedBufferedImageArray: std::vector<BufferedImage>;;
    

    imageProcessorInput: ImageProcessorInput = this::.getImageProcessorInput()!;;
    

    bufferedImageArray: std::vector<BufferedImage> = imageProcessorInput!.getBufferedImageArray()!;;
    




                        for (
    index: int32_t = 0;index < bufferedImageArray!.length; index++)
        {
generatedBufferedImageArray= MirrorImageUtil.getInstance()!.getImages(bufferedImageArray[index]!, this::.verticleJCheckBox!.isSelected(), this::.horizontalJCheckBox!.isSelected());
    
this::.result= BufferedImageUtil2.getInstance()!.createSpriteImage(generatedBufferedImageArray);
    
this::.getParent()!.repaint();
    

    file: File = imageProcessorInput!.getFiles()[index]!;;
    

                        if(!this::.writeOverOriginalJCheckBox!.isSelected())
                        
                                    {
                                    
    filePath: string = file.getAbsolutePath()!;;
    

    extensionIndex: int32_t = filePath!.indexOf(imageStrings!.PNG_EXTENSION)!;;
    
filePath= filePath!.substring(0, extensionIndex) +"_mirror" +imageStrings!.PNG_EXTENSION;
    
logUtil!.putF("Renamed File: " +filePath, this, commonStrings!.RUN);
    
file= new File(filePath);
    

                                    }
                                

    isWritten: bool = ImageIO.write(this::.result as RenderedImage, imageStrings!.PNG, file)!;;
    
logUtil!.putF("File: " +file +" Wrote: " +isWritten, this, commonStrings!.RUN);
    
}


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
jLayeredPane1= new javax.swing.JLayeredPane();
    
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
    
this.jPanel2= new javax.swing.JPanel();
    
this.imageHeightIsFrameSizeJCheckBox= new javax.swing.JCheckBox();
    
this.horizontalJCheckBox= new javax.swing.JCheckBox();
    
this.verticleJCheckBox= new javax.swing.JCheckBox();
    
this.writeOverOriginalJCheckBox= new javax.swing.JCheckBox();
    
this.generateJButton= new javax.swing.JButton();
    
this.jPanel3= new javax.swing.JPanel();
    
this.jLabel2= new javax.swing.JLabel();
    

    jPanel1Layout: org.jdesktop.layout.GroupLayout = new org.jdesktop.layout.GroupLayout(this.jPanel1);;
    
this.jPanel1!.setLayout(jPanel1Layout);
    
jPanel1Layout!.setHorizontalGroup(jPanel1Layout!.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)!.add(0, 507, Short.MAX_VALUE));
    
jPanel1Layout!.setVerticalGroup(jPanel1Layout!.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)!.add(0, 230, Short.MAX_VALUE));
    
this.imageHeightIsFrameSizeJCheckBox!.setSelected(true);
    
this.imageHeightIsFrameSizeJCheckBox!.setText("Image Height Is Frame Size");
    
this.imageHeightIsFrameSizeJCheckBox!.setEnabled(false);
    
this.imageHeightIsFrameSizeJCheckBox!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
imageHeightIsFrameSizeJCheckBoxActionPerformed(evt);
    
}

                                }
                            );
    
this.horizontalJCheckBox!.setSelected(true);
    
this.horizontalJCheckBox!.setText("Horizontal");
    
this.horizontalJCheckBox!.setEnabled(false);
    
this.verticleJCheckBox!.setText("Verticle");
    
this.verticleJCheckBox!.setEnabled(false);
    
this.writeOverOriginalJCheckBox!.setText("Write Over Original");
    
this.generateJButton!.setText("Generate");
    
this.generateJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
generateJButtonActionPerformed(evt);
    
}

                                }
                            );
    

    jPanel2Layout: org.jdesktop.layout.GroupLayout = new org.jdesktop.layout.GroupLayout(this.jPanel2);;
    
this.jPanel2!.setLayout(jPanel2Layout);
    
jPanel2Layout!.setHorizontalGroup(jPanel2Layout!.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)!.add(jPanel2Layout!.createSequentialGroup()!.addContainerGap(org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)!.add(verticleJCheckBox)!.addPreferredGap(org.jdesktop.layout.LayoutStyle.UNRELATED)!.add(horizontalJCheckBox)!.addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)!.add(imageHeightIsFrameSizeJCheckBox)!.addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)!.add(writeOverOriginalJCheckBox)!.addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)!.add(generateJButton)));
    
jPanel2Layout!.setVerticalGroup(jPanel2Layout!.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)!.add(jPanel2Layout!.createSequentialGroup()!.add(jPanel2Layout!.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)!.add(imageHeightIsFrameSizeJCheckBox, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)!.add(horizontalJCheckBox)!.add(verticleJCheckBox)!.add(writeOverOriginalJCheckBox)!.add(generateJButton, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 25, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE))!.addContainerGap()));
    
this.jLabel2!.setText("Results:");
    

    jPanel3Layout: org.jdesktop.layout.GroupLayout = new org.jdesktop.layout.GroupLayout(this.jPanel3);;
    
this.jPanel3!.setLayout(jPanel3Layout);
    
jPanel3Layout!.setHorizontalGroup(jPanel3Layout!.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)!.add(jPanel3Layout!.createSequentialGroup()!.add(jLabel2)!.addContainerGap(448, Short.MAX_VALUE)));
    
jPanel3Layout!.setVerticalGroup(jPanel3Layout!.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)!.add(jLabel2));
    

    layout: org.jdesktop.layout.GroupLayout = new org.jdesktop.layout.GroupLayout(this);;
    
this.setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)!.add(org.jdesktop.layout.GroupLayout.TRAILING, layout.createSequentialGroup()!.addContainerGap()!.add(jPanel3, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)!.addContainerGap())!.add(jPanel1, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)!.add(layout.createSequentialGroup()!.add(jPanel2, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)!.addContainerGap(org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)));
    
layout.setVerticalGroup(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)!.add(layout.createSequentialGroup()!.add(jPanel2, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 25, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)!.addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)!.add(jPanel3, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)!.addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)!.add(jPanel1, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)));
    
}


    generateJButtonActionPerformed(java.awt.event.ActionEvent evt){
this.process();
    
}


    imageHeightIsFrameSizeJCheckBoxActionPerformed(java.awt.event.ActionEvent evt){
}


    private: generateJButton: javax.swing.JButton;

    private: horizontalJCheckBox: javax.swing.JCheckBox;

    private: imageHeightIsFrameSizeJCheckBox: javax.swing.JCheckBox;

    private: jLabel2: javax.swing.JLabel;

    private: jLayeredPane1: javax.swing.JLayeredPane;

    private: jPanel1: javax.swing.JPanel;

    private: jPanel2: javax.swing.JPanel;

    private: jPanel3: javax.swing.JPanel;

    private: verticleJCheckBox: javax.swing.JCheckBox;

    private: writeOverOriginalJCheckBox: javax.swing.JCheckBox;

    public ImageProcessorInput getImageProcessorInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.imageProcessorInput;
    
}


    public setImageProcessorInput(ImageProcessorInput imageProcessorInput){
this.imageProcessorInput= imageProcessorInput;
    
}


};

            

