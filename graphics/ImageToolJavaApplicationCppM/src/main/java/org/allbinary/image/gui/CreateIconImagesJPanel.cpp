
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
        
            #include "../../../../java/lang/Thread.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/awt/image/Raster.h>

      
#include <java/io/File.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/image/ImagePersistanceUtil.h>

      
#include <org/allbinary/media/image/ImageProcessorInput.h>

      
#include <org/allbinary/media/image/ImageProcessorInputCompositeInterface.h>

      
#include <org/allbinary/media/image/ImageUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "JButton.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "GroupLayout.h"
#include "Short.h"

class CreateIconImagesJPanel: public javax::swing::JPanel, public ImageProcessorInputCompositeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: ImageProcessorInput imageProcessorInput;

public: CreateIconImagesJPanel(ImageProcessorInput imageProcessorInput){
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
    

    StringMaker stringMaker = StringMaker();;
    

    ImageProcessorInput imageProcessorInput = this->getImageProcessorInput();;
    

    std::vector<File> files = imageProcessorInput.getFiles();;
    

    BasicArrayList iconWidthList = BasicArrayListD();;
    

    BasicArrayList iconHeightList = BasicArrayListD();;
    
iconWidthList.add(864);
    
iconHeightList.add(864);
    

    std::string ANDROID = "android-icon-";;
    

    std::string IOS = "ios-icon-";;
    

    int32_t size = iconWidthList.size();;
    

    int32_t width = 0;;
    

    int32_t height = 0;;
    




                        for (
    int32_t index2 = 0;index2 < size; index2++)
        {
width= (get as Integer).intValue();
    
height= (get as Integer).intValue();
    

    std::vector<BufferedImage> generatedBufferedImageArray = imageUtil.createBufferedImage3(imageProcessorInput.getBufferedImageArray(), width, height, true);;
    

    ImagePersistanceUtil imagePersistanceUtil = ImagePersistanceUtil::getInstance();;
    




                        for (
    int32_t index = 0;index < generatedBufferedImageArray.size(); index++)
        {

    std::string filePath = files[index]!.getAbsolutePath();;
    

    int32_t endIndex = filePath.lastIndexOf('\\');;
    

    std::string path = filePath.substring(0, endIndex +1);;
    
stringMaker.delete(0, stringMaker.length());
    
stringMaker.append(path).append(ANDROID).appendint(width).append(CanvasStrings::getInstance()._PNG);
    

    std::string newFilePath = stringMaker.toString();;
    
imagePersistanceUtil.saveWithBatik(AbFile::createAbFile(newFilePath), generatedBufferedImageArray[index]!);
    
stringMaker.delete(0, stringMaker.length());
    
stringMaker.append(path).append(IOS).appendint(width).append(CanvasStrings::getInstance()._PNG);
    
newFilePath= stringMaker.toString();
    
imagePersistanceUtil.saveWithBatik(AbFile::createAbFile(newFilePath), generatedBufferedImageArray[index]!);
    
}

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
this->aboveJButton= javax::swing::JButton();
    
this->aboveJButton.setText("Process");
    
this->aboveJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
aboveJButtonActionPerformed(evt);
    
}

                                }
                            );
    

    javax::swing::GroupLayout layout = javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addComponent(aboveJButton).addGap(0, 335, Short::MAX_VALUE)));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addContainerGap().addComponent(aboveJButton).addContainerGap(286, Short::MAX_VALUE)));
    
}


    private: void aboveJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->process();
    
}


    private: javax::swing::JButton aboveJButton;

};

            

