
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
        



            #include <vector>
        
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

class SpriteSplitterImageJPanel: public javax::swing::JPanel, public ImageProcessedVisitor {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const CommonSeps commonSeps = CommonSeps::getInstance();

    private: const ImageStrings imageStrings = ImageStrings::getInstance();

    private: ImageProcessorInput imageProcessorInput;

    private: BufferedImage result;

public: SpriteSplitterImageJPanel(ImageProcessorInput imageProcessorInput) : javax::swing::JPanel(){

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
            
    SpriteSplitterUtil spriteSplitterUtil = SpriteSplitterUtil::getInstance();;
    

    std::string spriteType = spriteTypeJComboBox.getSelectedItem();;
    

    Integer totalFrames = Integer::valueOf(totalFramesJComboBox.getSelectedItem());;
    

    Integer totalAnimations = Integer::valueOf(totalAnimationsJComboBox.getSelectedItem());;
    

    int32_t widthReduction = Integer::valueOf(widthReductionTextField.getText());;
    

    int32_t heightReduction = Integer::valueOf(heightReductionTextField.getText());;
    

    int32_t increaseWidth = Integer::valueOf(increaseWidthTextField.getText());;
    

    int32_t increaseHeight = Integer::valueOf(increaseHeightTextField.getText());;
    
spriteSplitterUtil.process(this->getImageProcessorInput(), totalFrames, totalAnimations, widthReduction, heightReduction, increaseWidth, increaseHeight, spriteType, this);
    

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
    
this->widthReductionTextField= javax::swing::JTextField();
    
this->jLabel5= javax::swing::JLabel();
    
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
    
this->jLabel4= javax::swing::JLabel();
    
this->jLabel6= javax::swing::JLabel();
    
this->heightReductionTextField= javax::swing::JTextField();
    
this->generateJButton= javax::swing::JButton();
    
this->jPanel2= javax::swing::JPanel();
    
this->jLabel1= javax::swing::JLabel();
    
this->totalFramesJComboBox= javax::swing::JComboBox<>();
    

    int32_t size = 70;;
    

    std::vector<std::string> animationStringArray2 = std::vector<std::string>(size -1);;
    




                        for (
    int32_t index = 1;index < size; index++)
        {
animationStringArray2[index -1]= std::to_string(index);
    
}

this->totalFramesJComboBox.setModel(javax::swing::DefaultComboBoxModel(animationStringArray2));
    
this->jLabel2= javax::swing::JLabel();
    
this->totalAnimationsJComboBox= javax::swing::JComboBox<>();
    

    std::vector<std::string> animationStringArray = std::vector<std::string>(size -1);;
    




                        for (
    int32_t index = 1;index < size; index++)
        {
animationStringArray[index -1]= std::to_string(index);
    
}

this->totalAnimationsJComboBox.setModel(javax::swing::DefaultComboBoxModel(animationStringArray));
    
this->jLabel3= javax::swing::JLabel();
    
this->spriteTypeJComboBox= javax::swing::JComboBox<>();
    
this->spriteTypeJComboBox.setModel(javax::swing::DefaultComboBoxModel(
                                                {
                                                    org.allbinary.media.image.SpriteSplitterUtil.getInstance().DIRECTIONAL_ANIMATIONS,org.allbinary.media.image.SpriteSplitterUtil.getInstance().HORIZONTAL_ANIMATIONS,org.allbinary.media.image.SpriteSplitterUtil.getInstance().HORIZONTAL_SPRITE
                                                }));
    
jLabel7= javax::swing::JLabel();
    
this->increaseWidthTextField= javax::swing::JTextField();
    
this->jLabel8= javax::swing::JLabel();
    
this->increaseHeightTextField= javax::swing::JTextField();
    
this->writeOverOriginalJCheckBox.setText("Write Over Original");
    
this->writeOverOriginalJCheckBox.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
writeOverOriginalJCheckBoxActionPerformed(evt);
    
}

                                }
                            );
    
this->widthReductionTextField.setText(CommonPhoneStrings::getInstance().ZERO);
    
this->widthReductionTextField.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
widthReductionTextFieldActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel5.setText("Less Width:");
    
this->jLabel4.setText("Results:");
    

    javax::swing::GroupLayout jPanel1Layout = javax::swing::GroupLayout(this->jPanel1);;
    
this->jPanel1.setLayout(jPanel1Layout);
    
jPanel1Layout.setHorizontalGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(jPanel1Layout.createSequentialGroup().addComponent(jLabel4).addGap(0, 0, Short::MAX_VALUE)));
    
jPanel1Layout.setVerticalGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(jPanel1Layout.createSequentialGroup().addComponent(jLabel4).addGap(0, 184, Short::MAX_VALUE)));
    
this->jLabel6.setText("Less Height:");
    
this->heightReductionTextField.setText(CommonPhoneStrings::getInstance().ZERO);
    
this->generateJButton.setText("Generate");
    
this->generateJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
generateJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel1.setText("Row Total:");
    
this->totalFramesJComboBox.setSelectedIndex(1);
    
this->totalFramesJComboBox.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
totalFramesJComboBoxActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel2.setText("Column Total :");
    
this->totalAnimationsJComboBox.setSelectedIndex(3);
    
this->totalAnimationsJComboBox.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
totalAnimationsJComboBoxActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel3.setText("Type:");
    
this->spriteTypeJComboBox.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
spriteTypeJComboBoxActionPerformed(evt);
    
}

                                }
                            );
    

    javax::swing::GroupLayout jPanel2Layout = javax::swing::GroupLayout(this->jPanel2);;
    
this->jPanel2.setLayout(jPanel2Layout);
    
jPanel2Layout.setHorizontalGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel2Layout.createSequentialGroup().addContainerGap().addComponent(jLabel1).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(totalFramesJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, 48, javax.swing.GroupLayout.PREFERRED_SIZE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jLabel2).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(totalAnimationsJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, 39, javax.swing.GroupLayout.PREFERRED_SIZE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jLabel3).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(spriteTypeJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, 172, javax.swing.GroupLayout.PREFERRED_SIZE).addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE)));
    
jPanel2Layout.setVerticalGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(jPanel2Layout.createSequentialGroup().addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE).addGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel1).addComponent(totalFramesJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(jLabel2).addComponent(totalAnimationsJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(jLabel3).addComponent(spriteTypeJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))));
    
this->jLabel7.setText("More Width:");
    
this->increaseWidthTextField.setText(CommonPhoneStrings::getInstance().ZERO);
    
this->increaseWidthTextField.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
increaseWidthTextFieldActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel8.setText("More Height:");
    
this->increaseHeightTextField.setText(CommonPhoneStrings::getInstance().ZERO);
    

    javax::swing::GroupLayout layout = javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addComponent(jPanel2, javax.swing.GroupLayout.PREFERRED_SIZE, 415, Short::MAX_VALUE).addGap(78, 78, 78)).addGroup(layout.createSequentialGroup().addContainerGap().addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE).addGroup(layout.createSequentialGroup().addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addComponent(writeOverOriginalJCheckBox).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(generateJButton)).addGroup(layout.createSequentialGroup().addComponent(jLabel5).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(widthReductionTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 41, javax.swing.GroupLayout.PREFERRED_SIZE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jLabel6).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(heightReductionTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 46, javax.swing.GroupLayout.PREFERRED_SIZE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jLabel7).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(increaseWidthTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 41, javax.swing.GroupLayout.PREFERRED_SIZE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jLabel8).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(increaseHeightTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 46, javax.swing.GroupLayout.PREFERRED_SIZE))).addGap(0, 0, Short::MAX_VALUE))).addContainerGap()));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addComponent(jPanel2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel7).addComponent(increaseWidthTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 22, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(jLabel8).addComponent(increaseHeightTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel5).addComponent(widthReductionTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 22, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(jLabel6).addComponent(heightReductionTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(writeOverOriginalJCheckBox).addComponent(generateJButton)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE)));
    
}


    private: void writeOverOriginalJCheckBoxActionPerformed(java::awt::event::ActionEvent evt){
}


    private: void generateJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->process();
    
}


    private: void spriteTypeJComboBoxActionPerformed(java::awt::event::ActionEvent evt){

    SpriteSplitterUtil spriteSplitterUtil = SpriteSplitterUtil::getInstance();;
    
this->jLabel1.setText(spriteSplitterUtil.ANIMATIONS_LABELS[this->spriteTypeJComboBox.getSelectedIndex()]);
    
this->jLabel2.setText(spriteSplitterUtil.ANIMATIONS_LABELS[this->spriteTypeJComboBox.getSelectedIndex() +1]);
    
}


    private: void totalAnimationsJComboBoxActionPerformed(java::awt::event::ActionEvent evt){
}


    private: void totalFramesJComboBoxActionPerformed(java::awt::event::ActionEvent evt){
}


    private: void widthReductionTextFieldActionPerformed(java::awt::event::ActionEvent evt){
}


    private: void increaseWidthTextFieldActionPerformed(java::awt::event::ActionEvent evt){
}


    private: javax::swing::JButton generateJButton;

    private: javax::swing::JTextField heightReductionTextField;

    private: javax::swing::JTextField increaseHeightTextField;

    private: javax::swing::JTextField increaseWidthTextField;

    private: javax::swing::JLabel jLabel1;

    private: javax::swing::JLabel jLabel2;

    private: javax::swing::JLabel jLabel3;

    private: javax::swing::JLabel jLabel4;

    private: javax::swing::JLabel jLabel5;

    private: javax::swing::JLabel jLabel6;

    private: javax::swing::JLabel jLabel7;

    private: javax::swing::JLabel jLabel8;

    private: javax::swing::JPanel jPanel1;

    private: javax::swing::JPanel jPanel2;

    private: javax::swing::JComboBox<std::string> spriteTypeJComboBox;

    private: javax::swing::JComboBox<std::string> totalAnimationsJComboBox;

    private: javax::swing::JComboBox<std::string> totalFramesJComboBox;

    private: javax::swing::JTextField widthReductionTextField;

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

            

