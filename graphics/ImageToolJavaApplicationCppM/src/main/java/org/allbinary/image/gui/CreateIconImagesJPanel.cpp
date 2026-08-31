
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

class CreateIconImagesJPanel: public javax.swing.JPanel: public ImageProcessorInputCompositeInterface {
        

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
    

    stringMaker: StringMaker = new StringMaker();;
    

    imageProcessorInput: ImageProcessorInput = this::.getImageProcessorInput()!;;
    

    files: std::vector<File> = imageProcessorInput!.getFiles()!;;
    

    iconWidthList: BasicArrayList = new BasicArrayListD();;
    

    iconHeightList: BasicArrayList = new BasicArrayListD();;
    
iconWidthList!.add(864);
    
iconHeightList!.add(864);
    

    ANDROID: string = "android-icon-";;
    

    IOS: string = "ios-icon-";;
    

    size: int32_t = iconWidthList!.size()!;;
    

    width: int32_t = 0;;
    

    height: int32_t = 0;;
    




                        for (
    index2: int32_t = 0;index2 < size; index2++)
        {
width= (get as Integer).intValue();
    
height= (get as Integer).intValue();
    

    generatedBufferedImageArray: std::vector<BufferedImage> = imageUtil!.createBufferedImage3(imageProcessorInput!.getBufferedImageArray(), width, height, true)!;;
    

    imagePersistanceUtil: ImagePersistanceUtil = ImagePersistanceUtil.getInstance()!;;
    




                        for (
    index: int32_t = 0;index < generatedBufferedImageArray!.length; index++)
        {

    filePath: string = files[index]!.getAbsolutePath()!;;
    

    endIndex: int32_t = filePath!.lastIndexOf('\\')!;;
    

    path: string = filePath!.substring(0, endIndex +1)!;;
    
stringMaker!.delete(0, stringMaker!.length());
    
stringMaker!.append(path)!.append(ANDROID)!.appendint(width)!.append(CanvasStrings.getInstance()!._PNG);
    

    newFilePath: string = stringMaker!.toString()!;;
    
imagePersistanceUtil!.saveWithBatik(AbFile.createAbFile(newFilePath), generatedBufferedImageArray[index]!);
    
stringMaker!.delete(0, stringMaker!.length());
    
stringMaker!.append(path)!.append(IOS)!.appendint(width)!.append(CanvasStrings.getInstance()!._PNG);
    
newFilePath= stringMaker!.toString();
    
imagePersistanceUtil!.saveWithBatik(AbFile.createAbFile(newFilePath), generatedBufferedImageArray[index]!);
    
}

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
this.aboveJButton= new javax.swing.JButton();
    
this.aboveJButton!.setText("Process");
    
this.aboveJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
aboveJButtonActionPerformed(evt);
    
}

                                }
                            );
    

    layout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this);;
    
this.setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(layout.createSequentialGroup()!.addComponent(aboveJButton)!.addGap(0, 335, Short.MAX_VALUE)));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(layout.createSequentialGroup()!.addContainerGap()!.addComponent(aboveJButton)!.addContainerGap(286, Short.MAX_VALUE)));
    
}


    aboveJButtonActionPerformed(java.awt.event.ActionEvent evt){
this.process();
    
}


    private: aboveJButton: javax.swing.JButton;

};

            

