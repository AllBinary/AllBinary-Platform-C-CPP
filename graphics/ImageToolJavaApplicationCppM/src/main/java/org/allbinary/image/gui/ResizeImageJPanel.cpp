
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

class ResizeImageJPanel: public javax::swing::JPanel, public ImageProcessorInputCompositeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: ImageProcessorInput imageProcessorInput;

public: ResizeImageJPanel(ImageProcessorInput imageProcessorInput){
            super();
                    

                            //For kotlin this is before the body of the constructor.
                    
initComponents();
    
this->imageProcessorInput= imageProcessorInput;
    

    std::vector<std::string> numberStringArray = new Array(101);;
    
numberStringArray[0]= std::to_string();
    




                        for (
    int32_t index = 1;index < 100; index++)
        {
numberStringArray[index]= std::to_string(index);
    
}

this->jComboBox1.setModel(javax::swing::DefaultComboBoxModel(numberStringArray));
    

    Raster araster = this->imageProcessorInput.getBufferedImageArray()[0]!.getAlphaRaster();;
    

                        if(araster == 
                                    nullptr
                                )
                        
                                    {
                                    console.log("there is no Alpha channel!!!!!!!!!");
    

                                    }
                                
                        else {
                            console.log("Alpha channel found !");
    

                        }
                            
}


    public: void process(){
class extends Thread
                                {
                                
    public: void run(){

    LogUtil logUtil = LogUtil::getInstance();;
    

        try {
            
    ImageUtil imageUtil = ImageUtil::getInstance();;
    

    Integer percent = Integer::valueOf(this->jComboBox1.getSelectedItem() as string);;
    

    number percentAsFloat = Float::parseFloat(this->floatPercentJTextField.getText());;
    

    ImageProcessorInput imageProcessorInput = this->getImageProcessorInput();;
    

    std::vector<File> files = imageProcessorInput.getFiles();;
    

    std::vector<BufferedImage> generatedBufferedImageArray = 
                null
            ;;
    

                        if(percentAsFloat.intValue() !=  -1)
                        
                                    {
                                    generatedBufferedImageArray= imageUtil.createBufferedImage2(imageProcessorInput.getBufferedImageArray(), percentAsFloat, true);
    

                                    }
                                
                             else 
                        if(percent.intValue() !=  -1)
                        
                                    {
                                    generatedBufferedImageArray= imageUtil.createBufferedImageForResize(imageProcessorInput.getBufferedImageArray(), percent, true);
    

                                    }
                                
                        else {
                            
    Integer width = Integer::valueOf(this->jTextField1.getText() as string);;
    

    Integer height = Integer::valueOf(this->jTextField2.getText() as string);;
    
generatedBufferedImageArray= imageUtil.createBufferedImage3(imageProcessorInput.getBufferedImageArray(), width, height, true);
    

                        }
                            

    Raster araster = generatedBufferedImageArray[0]!.getAlphaRaster();;
    

                        if(araster == 
                                    nullptr
                                )
                        
                                    {
                                    console.log("No Alpha Channel In Result");
    

                                    }
                                
                        else {
                            console.log("Found Alpha Channel In Result");
    

                        }
                            

    ImagePersistanceUtil imagePersistanceUtil = ImagePersistanceUtil::getInstance();;
    




                        for (
    int32_t index = 0;index < generatedBufferedImageArray.size(); index++)
        {
imagePersistanceUtil.saveWithBatik(FileWrapperUtil::wrapFile(files[index]!), generatedBufferedImageArray[index]!);
    
}

this->getParent().repaint();
    

                //: 
} catch(e) 
            {
logUtil.put(commonStrings.EXCEPTION, this, commonStrings.RUN, e);
    
}

}

                                }
                            .start();
    
}


    public: void update(){
class extends Thread
                                {
                                
    public: void run(){

    LogUtil logUtil = LogUtil::getInstance();;
    

        try {
            
    ImageProcessorInput imageProcessorInput = this->getImageProcessorInput();;
    

    int32_t size = imageProcessorInput.getBufferedImageArray().length;;
    

    std::vector<BufferedImage> bufferedImageArray = imageProcessorInput.getBufferedImageArray();;
    

    BufferedImage bufferedImage;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
bufferedImage= bufferedImageArray[0]!;
    
this->jTextField1.setText(std::to_string(getWidth));
    
this->jTextField2.setText(std::to_string(getHeight));
    
}

this->getParent().repaint();
    

                //: 
} catch(e) 
            {
logUtil.put(commonStrings.EXCEPTION, this, commonStrings.RUN, e);
    
}

}

                                }
                            .start();
    
}


    public: void updateFor16Above(){
class extends Thread
                                {
                                
    public: void run(){

    LogUtil logUtil = LogUtil::getInstance();;
    

        try {
            
    ImageProcessorInput imageProcessorInput = this->getImageProcessorInput();;
    

    int32_t size = imageProcessorInput.getBufferedImageArray().length;;
    

    std::vector<BufferedImage> bufferedImageArray = imageProcessorInput.getBufferedImageArray();;
    

    BufferedImage bufferedImage;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
bufferedImage= bufferedImageArray[0]!;
    
this->jTextField1.setText(std::to_string());
    
this->jTextField2.setText(std::to_string());
    
}

this->getParent().repaint();
    

                //: 
} catch(e) 
            {
logUtil.put(commonStrings.EXCEPTION, this, commonStrings.RUN, e);
    
}

}

                                }
                            .start();
    
}


    public: void updateFor16Below(){
class extends Thread
                                {
                                
    public: void run(){

    LogUtil logUtil = LogUtil::getInstance();;
    

        try {
            
    ImageProcessorInput imageProcessorInput = this->getImageProcessorInput();;
    

    int32_t size = imageProcessorInput.getBufferedImageArray().length;;
    

    std::vector<BufferedImage> bufferedImageArray = imageProcessorInput.getBufferedImageArray();;
    

    BufferedImage bufferedImage;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
bufferedImage= bufferedImageArray[0]!;
    
this->jTextField1.setText(std::to_string());
    
this->jTextField2.setText(std::to_string());
    
}

this->getParent().repaint();
    

                //: 
} catch(e) 
            {
logUtil.put(commonStrings.EXCEPTION, this, commonStrings.RUN, e);
    
}

}

                                }
                            .start();
    
}


    public: ImageProcessorInput getImageProcessorInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageProcessorInput;
    
}


    public: void setImageProcessorInput(ImageProcessorInput imageProcessorInput){
this->imageProcessorInput= imageProcessorInput;
    
}


    private: void initComponents(){
this->jLabel1= javax::swing::JLabel();
    
this->jComboBox1= javax::swing::JComboBox<>();
    
this->aboveJButton= javax::swing::JButton();
    
this->jTextField1= javax::swing::JTextField();
    
this->jLabel2= javax::swing::JLabel();
    
this->jLabel3= javax::swing::JLabel();
    
this->jTextField2= javax::swing::JTextField();
    
this->updateJButton= javax::swing::JButton();
    
this->floatPercentJTextField= javax::swing::JTextField();
    
this->adjustFor16AboveJButton= javax::swing::JButton();
    
this->adjustFor16BelowJButton= javax::swing::JButton();
    
this->jLabel1.setText("Percent:");
    
this->jComboBox1.setModel(javax::swing::DefaultComboBoxModel<>(
                                                {
                                                    "Item 1","Item 2","Item 3","Item 4"
                                                }));
    
this->aboveJButton.setText("Process");
    
this->aboveJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
aboveJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel2.setText("Width:");
    
this->jLabel3.setText("Height:");
    
this->updateJButton.setText("Update");
    
this->updateJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
updateJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->floatPercentJTextField.setText("-1.000000");
    
this->floatPercentJTextField.setMinimumSize(java::awt::Dimension(120, 22));
    
this->adjustFor16AboveJButton.setText("Adjust for 16 Above");
    
this->adjustFor16AboveJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
adjustFor16AboveJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->adjustFor16BelowJButton.setText("Adjust for 16 Below");
    
this->adjustFor16BelowJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
adjustFor16BelowJButtonActionPerformed(evt);
    
}

                                }
                            );
    

    javax::swing::GroupLayout layout = javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addContainerGap().addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(jLabel1).addComponent(jLabel2).addComponent(jLabel3)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false).addComponent(jComboBox1, 0, javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE).addComponent(jTextField1).addComponent(jTextField2)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(floatPercentJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(adjustFor16AboveJButton).addComponent(adjustFor16BelowJButton)).addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE)).addGroup(layout.createSequentialGroup().addComponent(updateJButton).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(aboveJButton).addGap(0, 250, Short::MAX_VALUE)));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addContainerGap().addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel1).addComponent(jComboBox1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(floatPercentJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jTextField1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(jLabel2).addComponent(adjustFor16AboveJButton)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel3).addComponent(jTextField2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(adjustFor16BelowJButton)).addGap(18, 18, 18).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(aboveJButton).addComponent(updateJButton)).addContainerGap(175, Short::MAX_VALUE)));
    
}


    private: void aboveJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->process();
    
}


    private: void updateJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->update();
    
}


    private: void adjustFor16AboveJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->updateFor16Above();
    
}


    private: void adjustFor16BelowJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->updateFor16Below();
    
}


    private: javax::swing::JButton aboveJButton;

    private: javax::swing::JButton adjustFor16AboveJButton;

    private: javax::swing::JButton adjustFor16BelowJButton;

    private: javax::swing::JTextField floatPercentJTextField;

    private: javax::swing::JComboBox<string> jComboBox1;

    private: javax::swing::JLabel jLabel1;

    private: javax::swing::JLabel jLabel2;

    private: javax::swing::JLabel jLabel3;

    private: javax::swing::JTextField jTextField1;

    private: javax::swing::JTextField jTextField2;

    private: javax::swing::JButton updateJButton;

};

            

