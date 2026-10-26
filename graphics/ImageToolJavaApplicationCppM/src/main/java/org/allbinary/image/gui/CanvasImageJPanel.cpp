
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
        



            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Thread.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <java/awt/image/RenderedImage.h>

      
#include <java/io/File.h>

      
#include <java/io/IOException.h>

      
#include <javax/imageio/ImageIO.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/image/CanvasExpandUtil.h>

      
#include <org/allbinary/media/image/CanvasTrimUtil.h>

      
#include <org/allbinary/media/image/ImageProcessedVisitor.h>

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageStrings.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "JCheckBox.h"
#include "Graphics.h"
#include "JButton.h"
#include "JLabel.h"
#include "JTextField.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "GroupLayout.h"
#include "Short.h"

class CanvasImageJPanel: public javax::swing::JPanel, public ImageProcessedVisitor {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const CommonSeps commonSeps = CommonSeps::getInstance();

    private: const ImageStrings imageStrings = ImageStrings::getInstance();

    private: ImageProcessorInput imageProcessorInput;

    private: BufferedImage result;

public: CanvasImageJPanel(ImageProcessorInput imageProcessorInput) : javax::swing::JPanel(){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
initComponents();
    
this->imageProcessorInput= imageProcessorInput;
    
}


    public: void process(){
class extends Thread
                                {
                                
    public: void run(){

    LogUtil logUtil = LogUtil::getInstance();;
    

        try {
            
    CanvasTrimUtil canvasTrimUtil = CanvasTrimUtil::getInstance();;
    

    CanvasExpandUtil canvasExpandUtil = CanvasExpandUtil::getInstance();;
    

    int32_t leftReduction = Integer::valueOf(widthReductionTextField1.getText());;
    

    int32_t topReduction = Integer::valueOf(heightReductionTextField1.getText());;
    

    int32_t widthReduction = Integer::valueOf(widthReductionTextField.getText());;
    

    int32_t heightReduction = Integer::valueOf(heightReductionTextField.getText());;
    

                        if(leftReduction <= 0 || topReduction <= 0 || widthReduction <= 0 || heightReduction <= 0)
                        
                                    {
                                    canvasTrimUtil.process(this->getImageProcessorInput(),  -leftReduction,  -topReduction,  -widthReduction,  -heightReduction, this);
    

                                    }
                                
                        else {
                            canvasExpandUtil.process(this->getImageProcessorInput(), leftReduction, topReduction, this);
    

                        }
                            

                //: 
} catch(e) 
            {
logUtil.put(commonStrings.EXCEPTION, this, commonStrings.RUN, e);
    
}

}

                                }
                            .start();
    
}


    private: void initComponents(){
this->writeOverOriginalJCheckBox= javax::swing::JCheckBox();
    
this->jPanel1= class extends javax::swing::JPanel
                                {
                                
    public: void paint(Graphics graphics){

                        if(this->result != 
                                    nullptr
                                )
                        
                                    {
                                    graphics.drawImage(this->result, 0, 0, this->result.getWidth(
                            nullptr), this->result.getHeight(
                            nullptr), 
                            nullptr);
    

                                    }
                                
}

                                }
                            ;
    
this->generateJButton= javax::swing::JButton();
    
this->jLabel4= javax::swing::JLabel();
    
this->jPanel2= javax::swing::JPanel();
    
this->jLabel5= javax::swing::JLabel();
    
this->widthReductionTextField= javax::swing::JTextField();
    
this->jLabel6= javax::swing::JLabel();
    
this->heightReductionTextField= javax::swing::JTextField();
    
this->widthReductionTextField1= javax::swing::JTextField();
    
this->jLabel7= javax::swing::JLabel();
    
this->jLabel8= javax::swing::JLabel();
    
this->heightReductionTextField1= javax::swing::JTextField();
    
this->writeOverOriginalJCheckBox.setSelected(true);
    
this->writeOverOriginalJCheckBox.setText("Write Over Original");
    
this->writeOverOriginalJCheckBox.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
writeOverOriginalJCheckBoxActionPerformed(evt);
    
}

                                }
                            );
    

    javax::swing::GroupLayout jPanel1Layout = javax::swing::GroupLayout(this->jPanel1);;
    
this->jPanel1.setLayout(jPanel1Layout);
    
jPanel1Layout.setHorizontalGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGap(0, 0, Short::MAX_VALUE));
    
jPanel1Layout.setVerticalGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGap(0, 196, Short::MAX_VALUE));
    
this->generateJButton.setText("Generate");
    
this->generateJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
generateJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel4.setText("Results:");
    
this->jLabel5.setText("Right:");
    
this->widthReductionTextField.setText(CommonPhoneStrings::getInstance().ZERO);
    
this->widthReductionTextField.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
widthReductionTextFieldActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel6.setText("Bottom");
    
this->heightReductionTextField.setText(CommonPhoneStrings::getInstance().ZERO);
    
this->widthReductionTextField1.setText(CommonPhoneStrings::getInstance().ZERO);
    
this->widthReductionTextField1.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
widthReductionTextField1ActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel7.setText("Top");
    
this->jLabel8.setText("Left:");
    
this->heightReductionTextField1.setText(CommonPhoneStrings::getInstance().ZERO);
    

    javax::swing::GroupLayout jPanel2Layout = javax::swing::GroupLayout(this->jPanel2);;
    
this->jPanel2.setLayout(jPanel2Layout);
    
jPanel2Layout.setHorizontalGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(jPanel2Layout.createSequentialGroup().addContainerGap().addComponent(jLabel8).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(widthReductionTextField1, javax.swing.GroupLayout.PREFERRED_SIZE, 41, javax.swing.GroupLayout.PREFERRED_SIZE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jLabel5).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(widthReductionTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 41, javax.swing.GroupLayout.PREFERRED_SIZE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jLabel7).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(heightReductionTextField1, javax.swing.GroupLayout.PREFERRED_SIZE, 46, javax.swing.GroupLayout.PREFERRED_SIZE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jLabel6).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(heightReductionTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 46, javax.swing.GroupLayout.PREFERRED_SIZE).addContainerGap(140, Short::MAX_VALUE)));
    
jPanel2Layout.setVerticalGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel2Layout.createSequentialGroup().addGap(0, 16, Short::MAX_VALUE).addGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel6).addComponent(heightReductionTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel8).addComponent(widthReductionTextField1, javax.swing.GroupLayout.PREFERRED_SIZE, 22, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(jLabel7).addComponent(heightReductionTextField1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel5).addComponent(widthReductionTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 22, javax.swing.GroupLayout.PREFERRED_SIZE)))));
    

    javax::swing::GroupLayout layout = javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addComponent(jPanel2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE).addGap(78, 78, 78)).addGroup(layout.createSequentialGroup().addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addContainerGap().addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE)).addGroup(layout.createSequentialGroup().addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(jLabel4).addGroup(layout.createSequentialGroup().addComponent(writeOverOriginalJCheckBox).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(generateJButton))).addGap(0, 0, Short::MAX_VALUE))).addContainerGap()));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addComponent(jPanel2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(generateJButton).addComponent(writeOverOriginalJCheckBox)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jLabel4).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE)));
    
}


    private: void writeOverOriginalJCheckBoxActionPerformed(java::awt::event::ActionEvent evt){
}


    private: void generateJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->process();
    
}


    private: void widthReductionTextFieldActionPerformed(java::awt::event::ActionEvent evt){
}


    private: void widthReductionTextField1ActionPerformed(java::awt::event::ActionEvent evt){
}


    private: javax::swing::JButton generateJButton;

    private: javax::swing::JTextField heightReductionTextField;

    private: javax::swing::JTextField heightReductionTextField1;

    private: javax::swing::JLabel jLabel4;

    private: javax::swing::JLabel jLabel5;

    private: javax::swing::JLabel jLabel6;

    private: javax::swing::JLabel jLabel7;

    private: javax::swing::JLabel jLabel8;

    private: javax::swing::JPanel jPanel1;

    private: javax::swing::JPanel jPanel2;

    private: javax::swing::JTextField widthReductionTextField;

    private: javax::swing::JTextField widthReductionTextField1;

    private: javax::swing::JCheckBox writeOverOriginalJCheckBox;

    public: ImageProcessorInput getImageProcessorInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageProcessorInput;
    
}


    public: void setImageProcessorInput(ImageProcessorInput imageProcessorInput){
this->imageProcessorInput= imageProcessorInput;
    
}


                //@Throws(IOException.constructor)
            
    public: void visit(BufferedImage generatedBufferedImage, std::string name, int32_t index){
this->logUtil.putF(this->commonStrings.VISIT, this, this->commonStrings.VISIT);
    
this->result= generatedBufferedImage;
    
this->getParent().repaint();
    

    File file = this->imageProcessorInput.getFiles()[index];;
    

                        if(!this->writeOverOriginalJCheckBox.isSelected())
                        
                                    {
                                    
    std::string filePath = file.getAbsolutePath();;
    

    int32_t extensionIndex = filePath.indexOf(this->imageStrings.PNG_EXTENSION);;
    
filePath= StringMaker().append(filePath.substring(0, extensionIndex)).append(this->commonSeps.UNDERSCORE).append(name).append(this->imageStrings.PNG_EXTENSION).toString();
    
file= File(filePath);
    

                                    }
                                

    bool isWritten = ImageIO::write(this->result, imageStrings.PNG, file);;
    
this->logUtil.putF(StringMaker().append("File: ").append(StringUtil::getInstance().toString(file)).append(" Wrote: ").appendboolean(isWritten).toString(), this, this->commonStrings.RUN);
    
}


};

            

