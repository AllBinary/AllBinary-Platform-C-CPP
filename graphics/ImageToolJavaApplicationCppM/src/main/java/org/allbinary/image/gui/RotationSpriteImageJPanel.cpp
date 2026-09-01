
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
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
            #include "../../../../java/lang/Thread.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <java/awt/image/RenderedImage.h>

      
#include <java/io/File.h>

      
#include <javax/imageio/ImageIO.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/image/ImageJ2SERotationUtil.h>

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageProcessorInputCompositeInterface.h>

      
#include <org/allbinary/media/image/ImageStrings.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "Graphics.h"
#include "JComboBox.h"
#include "JLabel.h"
#include "JButton.h"
#include "JCheckBox.h"
#include "GroupLayout.h"
#include "Short.h"
#include "DefaultComboBoxModel.h"
#include "ActionListener.h"
#include "ActionEvent.h"

class RotationSpriteImageJPanel: public javax::swing::JPanel, public ImageProcessorInputCompositeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const ImageStrings imageStrings = ImageStrings::getInstance();

    private: ImageProcessorInput imageProcessorInput;

    private: BufferedImage result;

public: RotationSpriteImageJPanel(ImageProcessorInput imageProcessorInput){
            super();
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initComponents();
    
this->imageProcessorInput= imageProcessorInput;
    
}


    public: void process(){
class extends Thread
                                {
                                
    public: void run(){

    LogUtil logUtil = LogUtil::getInstance();;
    

        try {
            
    std::vector<BufferedImage> generatedBufferedImageArray;;
    

    ImageProcessorInput imageProcessorInput = this->getImageProcessorInput();;
    

    std::vector<BufferedImage> bufferedImageArray = imageProcessorInput.getBufferedImageArray();;
    




                        for (
    int32_t index = 0;index < bufferedImageArray.size(); index++)
        {

    Integer totalFrames = Integer::valueOf(this->totalFramesJComboBox.getSelectedItem() as string);;
    

    Integer totalAngle = Integer::valueOf(this->totalAngleJComboBox.getSelectedItem() as string);;
    
generatedBufferedImageArray= ImageJ2SERotationUtil::getInstance().getRotatedImages(bufferedImageArray[index]!, totalFrames, totalAngle);
    
this->result= ImageJ2SERotationUtil::getInstance().createSpriteImage(generatedBufferedImageArray);
    
this->getParent().repaint();
    

    File file = imageProcessorInput.getFiles()[index];;
    

                        if(!this->writeOverOriginalJCheckBox.isSelected())
                        
                                    {
                                    
    std::string filePath = file.getAbsolutePath();;
    

    int32_t extensionIndex = filePath.indexOf(imageStrings.PNG_EXTENSION);;
    
filePath= StringMaker().append(filePath.substring(0, extensionIndex)).append(CommonSeps::getInstance().UNDERSCORE).append("sprite").append(imageStrings.PNG_EXTENSION).toString();
    
logUtil.putF("New File Path: " +filePath, this, commonStrings.RUN);
    
file= File(filePath);
    

                                    }
                                

    bool isWritten = ImageIO::write(this->result as RenderedImage, imageStrings.PNG, file);;
    
logUtil.putF("File: " +file +" Wrote: " +isWritten, this, commonStrings.RUN);
    
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
    
this->jPanel2= javax::swing::JPanel();
    
this->totalFramesJComboBox= javax::swing::JComboBox();
    
this->jLabel1= javax::swing::JLabel();
    
this->generateJButton= javax::swing::JButton();
    
this->totalAngleJComboBox= javax::swing::JComboBox();
    
this->jLabel3= javax::swing::JLabel();
    
this->writeOverOriginalJCheckBox= javax::swing::JCheckBox();
    
this->jPanel3= javax::swing::JPanel();
    
this->jLabel2= javax::swing::JLabel();
    

    org::jdesktop::layout::GroupLayout jPanel1Layout = org::jdesktop::layout::GroupLayout(this->jPanel1);;
    
this->jPanel1.setLayout(jPanel1Layout);
    
jPanel1Layout.setHorizontalGroup(jPanel1Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING).add(0, 436, Short::MAX_VALUE));
    
jPanel1Layout.setVerticalGroup(jPanel1Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING).add(0, 227, Short::MAX_VALUE));
    
this->totalFramesJComboBox.setModel(javax::swing::DefaultComboBoxModel(
                                                {
                                                    CommonPhoneStrings::getInstance().FOUR,CommonPhoneStrings::getInstance().NINE,"18","20","36"
                                                }));
    
this->jLabel1.setText("Total Frames:");
    
this->generateJButton.setText("Generate");
    
this->generateJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
generateJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->totalAngleJComboBox.setModel(javax::swing::DefaultComboBoxModel(
                                                {
                                                    "360","90"
                                                }));
    
this->totalAngleJComboBox.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
totalAngleJComboBoxActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel3.setText("Total Angle:");
    
this->writeOverOriginalJCheckBox.setText("Write Over Original");
    

    org::jdesktop::layout::GroupLayout jPanel2Layout = org::jdesktop::layout::GroupLayout(this->jPanel2);;
    
this->jPanel2.setLayout(jPanel2Layout);
    
jPanel2Layout.setHorizontalGroup(jPanel2Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING).add(jPanel2Layout.createSequentialGroup().add(8, 8, 8).add(jLabel1).addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED).add(totalFramesJComboBox, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE).addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED).add(jLabel3).addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED).add(totalAngleJComboBox, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE).addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED).add(writeOverOriginalJCheckBox).addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED).add(generateJButton).addContainerGap(org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE)));
    
jPanel2Layout.setVerticalGroup(jPanel2Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING).add(jPanel2Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE).add(jLabel1).add(totalFramesJComboBox, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE).add(generateJButton).add(totalAngleJComboBox, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE).add(jLabel3).add(writeOverOriginalJCheckBox)));
    
this->jLabel2.setText("Results:");
    

    org::jdesktop::layout::GroupLayout jPanel3Layout = org::jdesktop::layout::GroupLayout(this->jPanel3);;
    
this->jPanel3.setLayout(jPanel3Layout);
    
jPanel3Layout.setHorizontalGroup(jPanel3Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING).add(jPanel3Layout.createSequentialGroup().add(jLabel2).addContainerGap(377, Short::MAX_VALUE)));
    
jPanel3Layout.setVerticalGroup(jPanel3Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING).add(jLabel2));
    

    org::jdesktop::layout::GroupLayout layout = org::jdesktop::layout::GroupLayout(this);;
    
this->setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING).add(org.jdesktop.layout.GroupLayout.TRAILING, jPanel2, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE).add(layout.createSequentialGroup().addContainerGap().add(jPanel3, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE).addContainerGap()).add(jPanel1, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE));
    
layout.setVerticalGroup(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING).add(layout.createSequentialGroup().add(jPanel2, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE).addPreferredGap(org.jdesktop.layout.LayoutStyle.UNRELATED).add(jPanel3, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE).addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED).add(jPanel1, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE)));
    
}


    private: void generateJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->process();
    
}


    private: void totalAngleJComboBoxActionPerformed(java::awt::event::ActionEvent evt){
}


    private: javax::swing::JButton generateJButton;

    private: javax::swing::JLabel jLabel1;

    private: javax::swing::JLabel jLabel2;

    private: javax::swing::JLabel jLabel3;

    private: javax::swing::JPanel jPanel1;

    private: javax::swing::JPanel jPanel2;

    private: javax::swing::JPanel jPanel3;

    private: javax::swing::JComboBox totalAngleJComboBox;

    private: javax::swing::JComboBox totalFramesJComboBox;

    private: javax::swing::JCheckBox writeOverOriginalJCheckBox;

    public: ImageProcessorInput getImageProcessorInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageProcessorInput;
    
}


    public: void setImageProcessorInput(ImageProcessorInput imageProcessorInput){
this->imageProcessorInput= imageProcessorInput;
    
}


};

            

