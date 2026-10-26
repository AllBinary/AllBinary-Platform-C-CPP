
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
        
            #include "java/lang/Thread.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <java/awt/image/RenderedImage.h>

      
#include <java/io/File.h>

      
#include <javax/imageio/ImageIO.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageProcessorInputCompositeInterface.h>

      
#include <org/allbinary/media/image/ImageStrings.h>

      
#include <org/allbinary/media/image/MirrorImageUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "JLayeredPane.h"
#include "ButtonGroup.h"
#include "Graphics.h"
#include "JCheckBox.h"
#include "JButton.h"
#include "JRadioButton.h"
#include "JLabel.h"
#include "GroupLayout.h"
#include "Short.h"
#include "ActionListener.h"
#include "ActionEvent.h"

class MirrorImageJPanel: public javax::swing::JPanel, public ImageProcessorInputCompositeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const ImageStrings imageStrings = ImageStrings::getInstance();

    private: ImageProcessorInput imageProcessorInput;

    private: BufferedImage result;

public: MirrorImageJPanel(ImageProcessorInput imageProcessorInput) : javax::swing::JPanel(){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil.putF("Starting", this, this->commonStrings.CONSTRUCTOR);
    
this->initComponents();
    
this->imageProcessorInput= imageProcessorInput;
    
}


    public: void process(){
class extends Thread
                                {
                                
    public: void run(){

    LogUtil logUtil = LogUtil::getInstance();;
    

        try {
            
    ImageProcessorInput imageProcessorInput = this->getImageProcessorInput();;
    

    std::vector<BufferedImage> bufferedImageArray = imageProcessorInput.getBufferedImageArray();;
    




                        for (
    int32_t index = 0;index < bufferedImageArray.size(); index++)
        {
this->result= MirrorImageUtil::getInstance().getImage(bufferedImageArray[index], this->verticleJCheckBox.isSelected(), this->horizontalJCheckBox.isSelected());
    

    File file = imageProcessorInput.getFiles()[index];;
    

                        if(this->writeOverOriginalJRadioButton.isSelected())
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(this->renameJRadioButton.isSelected())
                        
                                    {
                                    
    std::string filePath = file.getAbsolutePath();;
    

    int32_t extensionIndex = filePath.indexOf(imageStrings.PNG_EXTENSION);;
    
filePath= filePath.substring(0, extensionIndex) +"_mirror" +imageStrings.PNG_EXTENSION;
    
logUtil.putF("Renamed File: " +filePath, this, commonStrings.RUN);
    
file= File(filePath);
    

                                    }
                                

    bool isWritten = ImageIO::write(this->result, imageStrings.PNG, file);;
    
logUtil.putF("File: " +file +" Wrote: " +isWritten, this, commonStrings.RUN);
    
this->getParent().repaint();
    
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
jLayeredPane1= javax::swing::JLayeredPane();
    
this->buttonGroup= javax::swing::ButtonGroup();
    
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
    
this->horizontalJCheckBox= javax::swing::JCheckBox();
    
this->verticleJCheckBox= javax::swing::JCheckBox();
    
this->generateJButton= javax::swing::JButton();
    
this->renameJRadioButton= javax::swing::JRadioButton();
    
this->writeOverOriginalJRadioButton= javax::swing::JRadioButton();
    
this->jPanel3= javax::swing::JPanel();
    
this->jLabel2= javax::swing::JLabel();
    

    org::jdesktop::layout::GroupLayout jPanel1Layout = org::jdesktop::layout::GroupLayout(this->jPanel1);;
    
this->jPanel1.setLayout(jPanel1Layout);
    
jPanel1Layout.setHorizontalGroup(jPanel1Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING).add(0, 522, Short::MAX_VALUE));
    
jPanel1Layout.setVerticalGroup(jPanel1Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING).add(0, 230, Short::MAX_VALUE));
    
this->horizontalJCheckBox.setSelected(true);
    
this->horizontalJCheckBox.setText("Horizontal");
    
this->horizontalJCheckBox.setEnabled(false);
    
this->verticleJCheckBox.setText("Verticle");
    
this->verticleJCheckBox.setEnabled(false);
    
this->generateJButton.setText("Generate");
    
this->generateJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
generateJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->renameJRadioButton.setText("Save As filename_mirror");
    
this->renameJRadioButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
renameJRadioButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->writeOverOriginalJRadioButton.setText("Write Over Original");
    

    org::jdesktop::layout::GroupLayout jPanel2Layout = org::jdesktop::layout::GroupLayout(this->jPanel2);;
    
this->jPanel2.setLayout(jPanel2Layout);
    
jPanel2Layout.setHorizontalGroup(jPanel2Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING).add(jPanel2Layout.createSequentialGroup().addContainerGap(org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE).add(verticleJCheckBox).addPreferredGap(org.jdesktop.layout.LayoutStyle.UNRELATED).add(horizontalJCheckBox).addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED).add(writeOverOriginalJRadioButton).addPreferredGap(org.jdesktop.layout.LayoutStyle.UNRELATED).add(renameJRadioButton).addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED).add(generateJButton).add(37, 37, 37)));
    
jPanel2Layout.setVerticalGroup(jPanel2Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING).add(jPanel2Layout.createSequentialGroup().add(jPanel2Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE).add(horizontalJCheckBox).add(verticleJCheckBox).add(writeOverOriginalJRadioButton).add(renameJRadioButton).add(generateJButton)).addContainerGap()));
    
this->jLabel2.setText("Results:");
    

    org::jdesktop::layout::GroupLayout jPanel3Layout = org::jdesktop::layout::GroupLayout(this->jPanel3);;
    
this->jPanel3.setLayout(jPanel3Layout);
    
jPanel3Layout.setHorizontalGroup(jPanel3Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING).add(jPanel3Layout.createSequentialGroup().add(jLabel2).addContainerGap(433, Short::MAX_VALUE)));
    
jPanel3Layout.setVerticalGroup(jPanel3Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING).add(jLabel2));
    

    org::jdesktop::layout::GroupLayout layout = org::jdesktop::layout::GroupLayout(this);;
    
this->setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING).add(org.jdesktop.layout.GroupLayout.TRAILING, layout.createSequentialGroup().addContainerGap().add(jPanel3, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE).addContainerGap()).add(jPanel1, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE).add(layout.createSequentialGroup().add(jPanel2, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE).addContainerGap(org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE)));
    
layout.setVerticalGroup(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING).add(layout.createSequentialGroup().add(jPanel2, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 25, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE).addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED).add(jPanel3, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE).addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED).add(jPanel1, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE)));
    
}


    private: void generateJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->process();
    
}


    private: void renameJRadioButtonActionPerformed(java::awt::event::ActionEvent evt){
}


    private: javax::swing::ButtonGroup buttonGroup;

    private: javax::swing::JButton generateJButton;

    private: javax::swing::JCheckBox horizontalJCheckBox;

    private: javax::swing::JLabel jLabel2;

    private: javax::swing::JLayeredPane jLayeredPane1;

    private: javax::swing::JPanel jPanel1;

    private: javax::swing::JPanel jPanel2;

    private: javax::swing::JPanel jPanel3;

    private: javax::swing::JRadioButton renameJRadioButton;

    private: javax::swing::JCheckBox verticleJCheckBox;

    private: javax::swing::JRadioButton writeOverOriginalJRadioButton;

    public: ImageProcessorInput getImageProcessorInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageProcessorInput;
    
}


    public: void setImageProcessorInput(ImageProcessorInput imageProcessorInput){
this->imageProcessorInput= imageProcessorInput;
    
}


};

            

